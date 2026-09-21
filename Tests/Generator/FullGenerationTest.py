from __future__ import annotations

import json
import subprocess
import sys
from pathlib import Path


PROJECT_ROOT = Path(__file__).resolve().parents[2]
GENERATOR = PROJECT_ROOT / "Scripts" / "Generate.py"
MANIFEST = PROJECT_ROOT / ".telegram_codegen_manifest.json"


def run(command: list[str]) -> None:
    print("$", " ".join(command))
    subprocess.run(
        command,
        cwd=PROJECT_ROOT,
        check=True,
    )


def main() -> int:
    print("=== Full Generation Regression Test ===")
    print("Project :", PROJECT_ROOT)

    # 1. Remove the generator manifest so generation starts from
    #    the generator's own discovery/output path.
    if MANIFEST.exists():
        MANIFEST.unlink()

    # 2. Run the real generator through uv.
    run([
        "uv",
        "run",
        "python",
        str(GENERATOR),
        "--project",
        ".",
    ])

    # 3. Manifest must have been recreated.
    if not MANIFEST.exists():
        raise RuntimeError("Generator did not recreate manifest")

    manifest = json.loads(MANIFEST.read_text())

    files = manifest.get("files", [])
    if not files:
        raise RuntimeError("Generator manifest contains no generated files")

    missing = [
        path
        for path in files
        if not (PROJECT_ROOT / path).exists()
    ]

    if missing:
        print("Missing generated files:")
        for path in missing:
            print("  ", path)
        raise RuntimeError(
            f"{len(missing)} generated files are missing"
        )

    # 4. Basic expected generated structure.
    type_dir = PROJECT_ROOT / "Include" / "TelegramBotAPI" / "Types"
    method_dir = PROJECT_ROOT / "Include" / "TelegramBotAPI" / "Methods"

    type_count = len(list(type_dir.glob("*.HPP")))
    method_count = len(list(method_dir.glob("*.HPP")))

    print("Generated type headers  :", type_count)
    print("Generated method headers:", method_count)
    print("Manifest entries        :", len(files))

    if type_count < 300:
        raise RuntimeError(
            f"Unexpectedly low type header count: {type_count}"
        )

    if method_count < 100:
        raise RuntimeError(
            f"Unexpectedly low method header count: {method_count}"
        )

    print("Full generation regression test: PASS")
    return 0


if __name__ == "__main__":
    sys.exit(main())
