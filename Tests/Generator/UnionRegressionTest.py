#!/usr/bin/env python3

from __future__ import annotations

import sys
from pathlib import Path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
SCRIPTS_ROOT = PROJECT_ROOT / "Scripts"
INCLUDE_ROOT = PROJECT_ROOT / "Include" / "TelegramBotAPI"
TYPE_ROOT = INCLUDE_ROOT / "Types"


if str(SCRIPTS_ROOT) not in sys.path:
    sys.path.insert(0, str(SCRIPTS_ROOT))


from CppContext import CppContext
from Generate import load_model, validate_model
from TypeGraph import TypeGraph


SCHEMA_FILE = SCRIPTS_ROOT / "schema" / "telegram-bot-api.yaml"


def fail(message: str) -> None:
    raise AssertionError(message)


def assert_true(condition: bool, message: str) -> None:
    if not condition:
        fail(message)


def read_required(path: Path) -> str:
    if not path.is_file():
        fail(f"Generated file does not exist: {path}")

    return path.read_text(encoding="utf-8")


def find_union(model, name: str):
    for union in model.unions:
        if union.name == name:
            return union

    fail(f"Union not found: {name}")


def cpp_type_for_union(context: CppContext, union):
    return context.named_union_to_cpp(union.name)


def main() -> int:
    print("=== Union Regression Test ===")
    print(f"Project : {PROJECT_ROOT}")
    print(f"Schema  : {SCHEMA_FILE}")

    model = load_model(SCHEMA_FILE)
    validate_model(model)

    graph = TypeGraph(model.types, model.unions)
    context = CppContext(model, graph)

    print()
    print(f"Types   : {len(model.types)}")
    print(f"Unions  : {len(model.unions)}")

    assert_true(
        len(model.unions) == 23,
        f"Expected 23 unions, got {len(model.unions)}",
    )

    # ---------------------------------------------------------------
    # 1. Every union must have a unique name and at least one
    #    alternative.
    # ---------------------------------------------------------------

    union_names = [union.name for union in model.unions]

    assert_true(
        len(union_names) == len(set(union_names)),
        "Union names are not unique",
    )

    for union in model.unions:
        assert_true(
            len(union.alternatives) > 0,
            f"Union {union.name} has no alternatives",
        )

    # ---------------------------------------------------------------
    # 2. Every named union must be representable by CppContext.
    # ---------------------------------------------------------------

    print()
    print("Union C++ type matrix:")

    for union in model.unions:
        cpp_type = cpp_type_for_union(context, union)

        assert_true(
            cpp_type.type,
            f"Union {union.name} produced an empty C++ type",
        )

        print(
            f"  {union.name:<32} -> {cpp_type.type}"
        )

    # ---------------------------------------------------------------
    # 3. Recursive union regression.
    # ---------------------------------------------------------------

    recursive_unions = [
        union.name
        for union in model.unions
        if graph.is_recursive_union(union.name)
    ]

    print()
    print(f"Recursive unions: {recursive_unions}")

    assert_true(
        recursive_unions == ["MaybeInaccessibleMessage"],
        (
            "Unexpected recursive union set: "
            f"{recursive_unions}"
        ),
    )

    maybe_inaccessible = find_union(
        model,
        "MaybeInaccessibleMessage",
    )

    maybe_cpp = cpp_type_for_union(
        context,
        maybe_inaccessible,
    ).type

    assert_true(
        "std::shared_ptr<::TelegramBotAPI::Type::Message>"
        in maybe_cpp,
        (
            "MaybeInaccessibleMessage must contain "
            "shared_ptr<Message>"
        ),
    )

    assert_true(
        "::TelegramBotAPI::Type::InaccessibleMessage"
        in maybe_cpp,
        (
            "MaybeInaccessibleMessage must contain "
            "InaccessibleMessage"
        ),
    )

    # ---------------------------------------------------------------
    # 4. Every recursive union alternative must agree with TypeGraph.
    # ---------------------------------------------------------------

    for union in model.unions:
        if not graph.is_recursive_union(union.name):
            continue

        for alternative in union.alternatives:
            if not alternative.is_object():
                continue

            target = alternative.name

            if graph.requires_shared_ptr(union.name, target):
                assert_true(
                    f"std::shared_ptr<"
                    f"::TelegramBotAPI::Type::{target}>"
                    in cpp_type_for_union(context, union).type,
                    (
                        f"{union.name}: recursive object "
                        f"{target} must use shared_ptr"
                    ),
                )

    # ---------------------------------------------------------------
    # 5. Generated union headers must exist and contain their
    #    declared C++ type.
    #
    #    The generator writes named unions into Types/.
    # ---------------------------------------------------------------

    generated_headers = []

    for union in model.unions:
        header = TYPE_ROOT / f"{union.name}.HPP"

        if not header.is_file():
            fail(
                f"Missing generated union header: {header}"
            )

        text = read_required(header)
        generated_headers.append(header)

        cpp_type = cpp_type_for_union(
            context,
            union,
        ).type

        # The full type can be split over lines in generated C++,
        # so normalize whitespace before checking.
        normalized_header = " ".join(text.split())
        normalized_type = " ".join(cpp_type.split())

        assert_true(
            normalized_type in normalized_header,
            (
                f"Generated header {header.name} does not "
                f"contain the expected union C++ type:\n"
                f"{cpp_type}"
            ),
        )

    # ---------------------------------------------------------------
    # 6. Specific regression for MaybeInaccessibleMessage.
    # ---------------------------------------------------------------

    maybe_header = TYPE_ROOT / "MaybeInaccessibleMessage.HPP"
    maybe_text = read_required(maybe_header)
    maybe_normalized = " ".join(maybe_text.split())

    assert_true(
        "std::shared_ptr<::TelegramBotAPI::Type::Message>"
        in maybe_normalized,
        (
            "Generated MaybeInaccessibleMessage.HPP lost "
            "shared_ptr<Message>"
        ),
    )

    assert_true(
        "::TelegramBotAPI::Type::InaccessibleMessage"
        in maybe_normalized,
        (
            "Generated MaybeInaccessibleMessage.HPP lost "
            "InaccessibleMessage"
        ),
    )

    print()
    print(f"All {len(model.unions)} unions validated        : PASS")
    print("Union C++ type generation                    : PASS")
    print("Recursive union detection                   : PASS")
    print("Recursive shared_ptr alternative            : PASS")
    print("Generated union headers                     : PASS")
    print("MaybeInaccessibleMessage regression         : PASS")
    print()
    print("Union regression test: PASS")

    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except AssertionError as error:
        print(f"\nFAIL: {error}", file=sys.stderr)
        raise SystemExit(1)
