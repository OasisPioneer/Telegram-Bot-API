from __future__ import annotations

import hashlib
import json
import subprocess
import sys
from pathlib import Path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
GENERATOR = PROJECT_ROOT / "Scripts" / "Generate.py"
MANIFEST = PROJECT_ROOT / ".telegram_codegen_manifest.json"
INCLUDE_ROOT = PROJECT_ROOT / "Include" / "TelegramBotAPI"


def run_generator() -> None:
    subprocess.run(
        [
            "uv",
            "run",
            "python",
            str(GENERATOR),
            "--project",
            ".",
        ],
        cwd=PROJECT_ROOT,
        check=True,
    )


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()

    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(chunk)

    return digest.hexdigest()


def generated_files() -> list[Path]:
    return sorted(
        path
        for path in INCLUDE_ROOT.rglob("*")
        if path.is_file()
    )


def snapshot() -> tuple[str, dict[str, str]]:
    manifest = MANIFEST.read_text(encoding="utf-8")

    files = {
        str(path.relative_to(PROJECT_ROOT)): sha256_file(path)
        for path in generated_files()
    }

    return manifest, files


def main() -> int:
    print("=== Generation Idempotency Test ===")
    print("Project :", PROJECT_ROOT)

    run_generator()

    if not MANIFEST.exists():
        raise RuntimeError("Generator did not create manifest")

    manifest_1, files_1 = snapshot()

    run_generator()

    if not MANIFEST.exists():
        raise RuntimeError("Generator removed manifest")

    manifest_2, files_2 = snapshot()

    if manifest_1 != manifest_2:
        raise RuntimeError("Manifest changed between identical generations")

    if files_1 != files_2:
        changed = sorted(
            set(files_1) | set(files_2)
        )

        differences = [
            path
            for path in changed
            if files_1.get(path) != files_2.get(path)
        ]

        print("Changed generated files:")
        for path in differences:
            print("  ", path)

        raise RuntimeError(
            f"{len(differences)} generated files changed"
        )

    print("Manifest             : IDENTICAL")
    print("Generated files      :", len(files_1))
    print("Generated contents   : IDENTICAL")
    print("Generation idempotency test: PASS")

    return 0


if __name__ == "__main__":
    sys.exit(main())
