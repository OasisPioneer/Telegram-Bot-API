#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import shutil
import subprocess
import sys
from pathlib import Path

import yaml

from CppContext import CppContext
from DeserializerGenerator import DeserializerGenerator
from MethodGenerator import MethodGenerator
from OpenAPIParser import parse_openapi
from SchemaToModel import convert_schema
from SerializerGenerator import SerializerGenerator
from TelegramSchemaNormalizer import normalize_and_validate
from TypeGenerator import TypeGenerator
from TypeGraph import TypeGraph
from UnionResolution import resolve_model_unions, validate_union_resolutions


GENERATOR_DIR = Path(__file__).resolve().parent
SCHEMA_FILE = GENERATOR_DIR / "schema" / "telegram-bot-api.yaml"
MANIFEST_NAME = ".telegram_codegen_manifest.json"


def project_root_from_default() -> Path:
    candidates = [
        GENERATOR_DIR.parent,
        Path.home() / "CLionProjects" / "Telegram Bot API",
        Path.home() / "CLionProjects" / "Telegram-Bot-API",
    ]
    for candidate in candidates:
        if (candidate / "CMakeLists.txt").exists() and (
            candidate / "Include" / "TelegramBotAPI"
        ).exists():
            return candidate
    return GENERATOR_DIR.parent


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Generate the Telegram Bot API C++17 library."
    )
    parser.add_argument(
        "--project",
        type=Path,
        default=None,
        help="Telegram Bot API project root. Defaults to auto-detection.",
    )
    parser.add_argument(
        "--schema",
        type=Path,
        default=SCHEMA_FILE,
        help="OpenAPI YAML schema.",
    )
    parser.add_argument(
        "--build",
        action="store_true",
        help="Run the project's CMake build after generation.",
    )
    parser.add_argument(
        "--build-dir",
        type=Path,
        default=None,
        help="CMake build directory used with --build.",
    )
    return parser.parse_args()


def load_model(schema_path: Path):
    with schema_path.open("r", encoding="utf-8") as handle:
        document = yaml.safe_load(handle)

    if not isinstance(document, dict):
        raise RuntimeError("Schema root must be a mapping.")

    normalized = normalize_and_validate(document)
    schema = parse_openapi(normalized)
    model = convert_schema(schema)

    resolve_model_unions(model)
    validate_union_resolutions(model)

    return model


def clean_previous_generated_files(project_root: Path) -> None:
    manifest_path = project_root / MANIFEST_NAME
    if not manifest_path.exists():
        return

    data = json.loads(manifest_path.read_text(encoding="utf-8"))
    for relative in data.get("files", []):
        path = project_root / relative
        if path.is_file():
            path.unlink()

    manifest_path.unlink()


def write_text(path: Path, content: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(content, encoding="utf-8")


def render_runtime_request_header() -> str:
    template = GENERATOR_DIR / "Request.HPP.template"
    return template.read_text(encoding="utf-8")


def validate_model(model) -> None:
    type_names = [item.name for item in model.types]
    union_names = [item.name for item in model.unions]
    method_names = [item.name for item in model.methods]

    if len(type_names) != len(set(type_names)):
        raise RuntimeError("Duplicate type names in semantic model.")
    if len(union_names) != len(set(union_names)):
        raise RuntimeError("Duplicate union names in semantic model.")
    if len(method_names) != len(set(method_names)):
        raise RuntimeError("Duplicate method names in semantic model.")

    names = set(type_names) | set(union_names)
    if len(names) != len(type_names) + len(union_names):
        raise RuntimeError("A type and a union share the same C++ name.")


def generate(project_root: Path, schema_path: Path) -> dict:
    include_root = project_root / "Include" / "TelegramBotAPI"
    types_dir = include_root / "Types"
    methods_dir = include_root / "Methods"
    json_dir = include_root / "JSON"

    if not include_root.exists():
        raise RuntimeError(
            "TelegramBotAPI include directory does not exist:\n"
            f"  {include_root}"
        )

    if not (types_dir / "InputFile.HPP").exists():
        raise RuntimeError(
            "The handwritten transport type InputFile.HPP is required:\n"
            f"  {types_dir / 'InputFile.HPP'}"
        )

    model = load_model(schema_path)
    validate_model(model)

    graph = TypeGraph(model.types, model.unions)
    context = CppContext(model, graph)
    type_generator = TypeGenerator(model, context)
    method_generator = MethodGenerator(model, context)

    clean_previous_generated_files(project_root)

    generated: list[str] = []

    # Types
    for item in model.types:
        if item.name == "InputFile":
            continue
        path = types_dir / f"{item.name}.HPP"
        write_text(path, type_generator.generate(item))
        generated.append(path.relative_to(project_root).as_posix())

    for item in model.unions:
        path = types_dir / f"{item.name}.HPP"
        write_text(path, type_generator.generate(item))
        generated.append(path.relative_to(project_root).as_posix())

    # JSON runtime generated from the schema.
    serializer_path = json_dir / "Serializer.HPP"
    deserializer_path = json_dir / "Deserializer.HPP"
    request_path = json_dir / "Request.HPP"

    write_text(
        serializer_path,
        SerializerGenerator(model, context).generate(),
    )
    write_text(
        deserializer_path,
        DeserializerGenerator(model, context).generate(),
    )
    write_text(request_path, render_runtime_request_header())

    generated.extend(
        [
            serializer_path.relative_to(project_root).as_posix(),
            deserializer_path.relative_to(project_root).as_posix(),
            request_path.relative_to(project_root).as_posix(),
        ]
    )

    # Methods.
    for method in model.methods:
        path = methods_dir / f"{method.name}.HPP"
        write_text(path, method_generator.generate(method))
        generated.append(path.relative_to(project_root).as_posix())

    manifest = {
        "generator": "TelegramBotAPIGenerator",
        "schema": str(schema_path.resolve()),
        "schema_version": model.version,
        "files": sorted(generated),
    }
    (project_root / MANIFEST_NAME).write_text(
        json.dumps(manifest, indent=2) + "\n",
        encoding="utf-8",
    )

    recursive_types = sorted(graph.recursive_types())
    recursive_unions = sorted(
        union.name for union in model.unions if graph.is_recursive_union(union.name)
    )

    return {
        "version": model.version,
        "types": len(model.types),
        "unions": len(model.unions),
        "methods": len(model.methods),
        "headers": len(generated),
        "recursive_types": recursive_types,
        "recursive_unions": recursive_unions,
        "project": str(project_root),
    }


def run_cmake(project_root: Path, build_dir: Path | None) -> None:
    if build_dir is None:
        build_dir = project_root / "Build" / "GeneratorCheck"

    configure = [
        "cmake",
        "-S",
        str(project_root),
        "-B",
        str(build_dir),
    ]
    build = [
        "cmake",
        "--build",
        str(build_dir),
        "--parallel",
    ]

    subprocess.run(configure, check=True)
    subprocess.run(build, check=True)


def main() -> int:
    args = parse_args()
    project_root = (
        args.project.expanduser().resolve()
        if args.project
        else project_root_from_default().resolve()
    )
    schema_path = args.schema.expanduser().resolve()

    print("=" * 72)
    print("TELEGRAM BOT API — FINAL CODE GENERATOR")
    print("=" * 72)
    print(f"Project : {project_root}")
    print(f"Schema  : {schema_path}")

    summary = generate(project_root, schema_path)

    print()
    print(f"Schema version : {summary['version']}")
    print(f"Types          : {summary['types']}")
    print(f"Unions         : {summary['unions']}")
    print(f"Methods        : {summary['methods']}")
    print(f"Recursive types: {len(summary['recursive_types'])}")
    print(f"Recursive unions: {len(summary['recursive_unions'])}")
    print(f"Headers written: {summary['headers']}")

    if args.build:
        print()
        print("=== CMAKE BUILD ===")
        run_cmake(project_root, args.build_dir)
        print("CMake build     : PASS")

    print()
    print("=" * 72)
    print("GENERATION SUCCESS")
    print("=" * 72)
    return 0


if __name__ == "__main__":
    sys.exit(main())
