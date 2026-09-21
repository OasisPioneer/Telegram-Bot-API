#!/usr/bin/env python3

from __future__ import annotations

import re
import sys
from pathlib import Path


PROJECT_ROOT = Path(__file__).resolve().parents[2]

INCLUDE_ROOT = PROJECT_ROOT / "Include" / "TelegramBotAPI"
TYPE_ROOT = INCLUDE_ROOT / "Types"
JSON_ROOT = INCLUDE_ROOT / "JSON"


def read_required(path: Path) -> str:
    if not path.is_file():
        raise AssertionError(f"Generated file does not exist: {path}")

    return path.read_text(encoding="utf-8")


def assert_contains(text: str, pattern: str, description: str) -> None:
    if pattern not in text:
        raise AssertionError(
            f"Missing generated-code invariant: {description}\n"
            f"Expected fragment:\n{pattern}"
        )


def assert_not_contains(text: str, pattern: str, description: str) -> None:
    if pattern in text:
        raise AssertionError(
            f"Forbidden generated-code pattern: {description}\n"
            f"Forbidden fragment:\n{pattern}"
        )


def main() -> int:
    print("=== Generated Code Regression Test ===")
    print(f"Project : {PROJECT_ROOT}")

    message_header = TYPE_ROOT / "Message.HPP"
    deserializer_header = JSON_ROOT / "Deserializer.HPP"
    serializer_header = JSON_ROOT / "Serializer.HPP"

    message = read_required(message_header)
    deserializer = read_required(deserializer_header)
    serializer = read_required(serializer_header)

    # ------------------------------------------------------------------
    # 1. Message.HPP — recursive object field
    # ------------------------------------------------------------------

    assert_contains(
        message,
        "std::shared_ptr<::TelegramBotAPI::Type::Message>",
        "Message recursive fields use std::shared_ptr<Message>",
    )

    assert_contains(
        message,
        "ReplyToMessage",
        "Message contains ReplyToMessage",
    )

    # ------------------------------------------------------------------
    # 2. Message.HPP — recursive union alternative
    # ------------------------------------------------------------------

    assert_contains(
        message,
        "std::optional<std::variant<"
        "std::shared_ptr<::TelegramBotAPI::Type::Message>, "
        "::TelegramBotAPI::Type::InaccessibleMessage"
        ">>",
        "PinnedMessage uses optional<variant<shared_ptr<Message>, InaccessibleMessage>>",
    )

    assert_contains(
        message,
        "PinnedMessage",
        "Message contains PinnedMessage",
    )

    # ------------------------------------------------------------------
    # 3. Message.HPP — forbid recursive value members
    # ------------------------------------------------------------------

    assert_not_contains(
        message,
        "Message ReplyToMessage",
        "ReplyToMessage must not be a recursive value member",
    )

    assert_not_contains(
        message,
        "Message PinnedMessage",
        "PinnedMessage must not be a recursive value member",
    )

    # ------------------------------------------------------------------
    # 4. Deserializer.HPP — recursive object allocation
    # ------------------------------------------------------------------

    assert_contains(
        deserializer,
        "std::make_shared<::TelegramBotAPI::Type::Message>(",
        "recursive Message deserialization allocates std::shared_ptr<Message>",
    )

    assert_contains(
        deserializer,
        "FromJson<::TelegramBotAPI::Type::Message>",
        "recursive Message deserialization calls FromJson<Message>",
    )

    # The dangerous form is assigning a value directly to shared_ptr.
    #
    # We do not simply reject every FromJson<Message>(...) occurrence,
    # because the correct code necessarily contains one inside
    # std::make_shared<Message>(...).
    #
    # Instead, inspect the generated source around each recursive
    # FromJson<Message> occurrence.
    recursive_pattern = re.compile(
        r"std::make_shared<\s*"
        r"::TelegramBotAPI::Type::Message\s*>\s*\("
        r"\s*FromJson<\s*"
        r"::TelegramBotAPI::Type::Message\s*>\s*\("
    )

    if not recursive_pattern.search(deserializer):
        raise AssertionError(
            "Recursive Message deserialization is not wrapped as "
            "std::make_shared<Message>(FromJson<Message>(...))"
        )

    # ------------------------------------------------------------------
    # 5. Serializer.HPP — recursive Message support
    # ------------------------------------------------------------------

    assert_contains(
        serializer,
        "ReplyToMessage",
        "Serializer contains recursive ReplyToMessage handling",
    )

    assert_contains(
        serializer,
        "PinnedMessage",
        "Serializer contains PinnedMessage handling",
    )

    print("Message.HPP                  : PASS")
    print("Recursive shared_ptr         : PASS")
    print("Recursive optional/variant   : PASS")
    print("Deserializer shared_ptr     : PASS")
    print("Serializer recursive fields : PASS")
    print()
    print("Generated code regression test: PASS")

    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except AssertionError as error:
        print(f"\nFAIL: {error}", file=sys.stderr)
        raise SystemExit(1)
