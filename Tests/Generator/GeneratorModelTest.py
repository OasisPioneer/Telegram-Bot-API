#!/usr/bin/env python3

from __future__ import annotations

import sys
from pathlib import Path


# ============================================================
# Project paths
# ============================================================

PROJECT_ROOT = Path(__file__).resolve().parents[2]
SCRIPTS_DIR = PROJECT_ROOT / "Scripts"

sys.path.insert(0, str(SCRIPTS_DIR))


# ============================================================
# Generator imports
# ============================================================

from CppContext import CppContext
from Generate import load_model, validate_model
from TypeGraph import TypeGraph


# ============================================================
# Helpers
# ============================================================


def find_field(telegram_type, cpp_name: str):
    for field in telegram_type.fields:
        if field.cpp_name == cpp_name:
            return field

    raise AssertionError(
        f"{telegram_type.name} has no field "
        f"{cpp_name!r}"
    )


def assert_equal(actual, expected, message: str):
    if actual != expected:
        raise AssertionError(
            f"{message}\n"
            f"  expected: {expected!r}\n"
            f"  actual:   {actual!r}"
        )


def assert_true(value, message: str):
    if not value:
        raise AssertionError(message)


# ============================================================
# Load semantic model
# ============================================================

SCHEMA_PATH = (
    SCRIPTS_DIR
    / "schema"
    / "telegram-bot-api.yaml"
)

print("=== Generator Model Regression Test ===")
print(f"Project : {PROJECT_ROOT}")
print(f"Schema  : {SCHEMA_PATH}")

model = load_model(SCHEMA_PATH)

validate_model(model)

print(f"Version : {model.version}")
print(f"Types   : {len(model.types)}")
print(f"Unions  : {len(model.unions)}")
print(f"Methods : {len(model.methods)}")


# ============================================================
# Basic model invariants
# ============================================================

type_names = {
    item.name
    for item in model.types
}

union_names = {
    item.name
    for item in model.unions
}

method_names = {
    item.name
    for item in model.methods
}


assert_equal(
    len(type_names),
    len(model.types),
    "Duplicate Telegram type names detected.",
)

assert_equal(
    len(union_names),
    len(model.unions),
    "Duplicate Telegram union names detected.",
)

assert_equal(
    len(method_names),
    len(model.methods),
    "Duplicate Telegram method names detected.",
)

assert_true(
    type_names.isdisjoint(union_names),
    "A type and a union share the same C++ name.",
)


# ============================================================
# Required known Telegram types
# ============================================================

assert_true(
    "Message" in type_names,
    "Message type is missing from the semantic model.",
)

assert_true(
    "Chat" in type_names,
    "Chat type is missing from the semantic model.",
)

assert_true(
    "InaccessibleMessage" in type_names,
    "InaccessibleMessage type is missing.",
)


# ============================================================
# TypeGraph
# ============================================================

graph = TypeGraph(
    model.types,
    model.unions,
)

recursive_types = set(
    graph.recursive_types()
)

recursive_unions = {
    union.name
    for union in model.unions
    if graph.is_recursive_union(
        union.name
    )
}

print()
print(
    "Recursive types:",
    sorted(recursive_types),
)

print(
    "Recursive unions:",
    sorted(recursive_unions),
)


# ============================================================
# Recursive Message invariant
# ============================================================

assert_true(
    "Message" in recursive_types,
    "Message must be detected as recursive.",
)

assert_true(
    graph.requires_shared_ptr(
        "Message",
        "Message",
    ),
    "Message -> Message must require shared_ptr.",
)


# ============================================================
# CppContext
# ============================================================

context = CppContext(
    model,
    graph,
)


# ============================================================
# Message.ReplyToMessage
#
# Expected:
#
#     std::shared_ptr<Message>
# ============================================================

message = context.find_type("Message")

assert_true(
    message is not None,
    "Message could not be found in CppContext.",
)

reply_field = find_field(
    message,
    "ReplyToMessage",
)

reply_cpp = context.field_type_to_cpp(
    reply_field.type,
    reply_field.required,
    owner="Message",
)

print()
print(
    "Message.ReplyToMessage:",
    reply_cpp.type,
)

assert_equal(
    reply_cpp.type,
    "std::shared_ptr<::TelegramBotAPI::Type::Message>",
    "Recursive Message field must use shared_ptr.",
)

assert_true(
    "<memory>" in reply_cpp.includes,
    "Recursive Message field must include <memory>.",
)


# ============================================================
# Message.PinnedMessage
#
# Expected:
#
# optional<
#     variant<
#         shared_ptr<Message>,
#         InaccessibleMessage
#     >
# >
# ============================================================

pinned_field = find_field(
    message,
    "PinnedMessage",
)

pinned_cpp = context.field_type_to_cpp(
    pinned_field.type,
    pinned_field.required,
    owner="Message",
)

print(
    "Message.PinnedMessage:",
    pinned_cpp.type,
)

expected_pinned = (
    "std::optional<"
    "std::variant<"
    "std::shared_ptr<::TelegramBotAPI::Type::Message>, "
    "::TelegramBotAPI::Type::InaccessibleMessage"
    ">"
    ">"
)

assert_equal(
    pinned_cpp.type,
    expected_pinned,
    "PinnedMessage C++ type is incorrect.",
)

assert_true(
    "<optional>" in pinned_cpp.includes,
    "PinnedMessage must include <optional>.",
)

assert_true(
    "<variant>" in pinned_cpp.includes,
    "PinnedMessage must include <variant>.",
)

assert_true(
    "<memory>" in pinned_cpp.includes,
    "PinnedMessage must include <memory>.",
)


# ============================================================
# InaccessibleMessage.Chat
#
# Expected:
#
#     Chat
# ============================================================

inaccessible = context.find_type(
    "InaccessibleMessage"
)

assert_true(
    inaccessible is not None,
    "InaccessibleMessage could not be found.",
)

chat_field = find_field(
    inaccessible,
    "Chat",
)

chat_cpp = context.field_type_to_cpp(
    chat_field.type,
    chat_field.required,
    owner="InaccessibleMessage",
)

print(
    "InaccessibleMessage.Chat:",
    chat_cpp.type,
)

assert_equal(
    chat_cpp.type,
    "::TelegramBotAPI::Type::Chat",
    "InaccessibleMessage.Chat must resolve to Chat.",
)


# ============================================================
# Recursive union sanity
# ============================================================

assert_equal(
    len(recursive_unions),
    1,
    "Expected exactly one recursive named union.",
)


# ============================================================
# Success
# ============================================================

print()
print("Generator model regression test: PASS")
