from __future__ import annotations

import re


# ---------------------------------------------------------------------------
# C++ naming rules used by the existing TelegramBotAPI codebase.
#
# Examples:
#
#   id                   -> ID
#   message_id           -> MessageID
#   chat_id              -> ChatID
#   file_id              -> FileID
#   file_unique_id       -> FileUniqueID
#   first_name           -> FirstName
#   user_name            -> UserName
#   url                  -> URL
#   web_app_url          -> WebAppURL
#   api_id               -> APIID
#   http_url              -> HTTPURL
#
# The JSON / Telegram name is NEVER modified.
# This module only produces the C++ identifier.
# ---------------------------------------------------------------------------


# Acronyms that are already established by the current C++ API.
#
# The important distinction is that ID / URL / API etc. are not treated as
# ordinary PascalCase words.
ACRONYMS: dict[str, str] = {
    "api": "API",
    "apis": "APIs",
    "app": "App",
    "apps": "Apps",
    "cpu": "CPU",
    "cpp": "CPP",
    "dns": "DNS",
    "ftp": "FTP",
    "gif": "GIF",
    "hls": "HLS",
    "html": "HTML",
    "http": "HTTP",
    "https": "HTTPS",
    "id": "ID",
    "ids": "IDs",
    "ip": "IP",
    "ipv4": "IPv4",
    "ipv6": "IPv6",
    "json": "JSON",
    "rpc": "RPC",
    "rtmp": "RTMP",
    "tcp": "TCP",
    "tls": "TLS",
    "udp": "UDP",
    "ui": "UI",
    "uid": "UID",
    "uri": "URI",
    "url": "URL",
    "urls": "URLs",
    "uuid": "UUID",
    "xml": "XML",
}


# Words whose normal title-casing would produce a different public API name.
#
# This table is deliberately small.  The default rule remains:
#
#     snake_case -> PascalCase
#
# The table only exists for established terminology where the project's
# spelling is known to be special.
SPECIAL_WORDS: dict[str, str] = {
    "username": "UserName",
}


_CPP_IDENTIFIER_RE = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")


def is_valid_cpp_identifier(name: str) -> bool:
    """
    Return True when `name` is a valid C++ identifier.
    """
    return bool(_CPP_IDENTIFIER_RE.fullmatch(name))


def _split_words(name: str) -> list[str]:
    """
    Split a Telegram/OpenAPI snake_case identifier into logical words.

    The Bot API normally uses snake_case, but this function also handles
    already-camel/Pascal names defensively.
    """
    if not name:
        return []

    normalized = name.strip()

    if not normalized:
        return []

    # Convert separators to underscores first.
    normalized = re.sub(r"[-\s]+", "_", normalized)

    # Split acronym-to-word boundaries:
    #
    # HTTPServer -> HTTP_Server
    # userID     -> user_ID
    # MessageID  -> Message_ID
    normalized = re.sub(
        r"([A-Z]+)([A-Z][a-z])",
        r"\1_\2",
        normalized,
    )

    normalized = re.sub(
        r"([a-z0-9])([A-Z])",
        r"\1_\2",
        normalized,
    )

    return [
        item
        for item in normalized.split("_")
        if item
    ]


def word_to_cpp(word: str) -> str:
    """
    Convert one logical word to the project's C++ spelling.
    """
    if not word:
        return ""

    lower = word.lower()

    if lower in ACRONYMS:
        return ACRONYMS[lower]

    if lower in SPECIAL_WORDS:
        return SPECIAL_WORDS[lower]

    return lower[0].upper() + lower[1:]


def snake_to_cpp_name(name: str) -> str:
    """
    Convert a Telegram JSON/OpenAPI field name to the C++ member name used by
    this project.

    Examples:

        id                    -> ID
        message_id            -> MessageID
        first_name            -> FirstName
        last_name             -> LastName
        username              -> UserName
        is_bot                -> IsBot
        file_unique_id        -> FileUniqueID
        migrate_to_chat_id    -> MigrateToChatID
        migrate_from_chat_id  -> MigrateFromChatID
        url                   -> URL
    """
    words = _split_words(name)

    if not words:
        raise ValueError(
            f"Cannot create C++ identifier from empty name: {name!r}"
        )

    result = "".join(word_to_cpp(word) for word in words)

    if not is_valid_cpp_identifier(result):
        raise ValueError(
            f"Generated invalid C++ identifier: "
            f"{name!r} -> {result!r}"
        )

    return result


def type_name_to_cpp(name: str) -> str:
    """
    Convert a schema type name to the C++ type name.

    Telegram type names are already PascalCase in the current schema, so this
    function intentionally preserves established names while still providing
    validation.
    """
    if not name:
        raise ValueError("Type name cannot be empty")

    if not is_valid_cpp_identifier(name):
        raise ValueError(
            f"Invalid C++ type name: {name!r}"
        )

    return name


def method_name_to_cpp(name: str) -> str:
    """
    Telegram Bot API method names intentionally preserve their API spelling.

    Examples:

        sendMessage        -> sendMessage
        sendPhoto          -> sendPhoto
        getMe              -> getMe
        answerCallbackQuery -> answerCallbackQuery
    """
    if not name:
        raise ValueError("Method name cannot be empty")

    if not is_valid_cpp_identifier(name):
        raise ValueError(
            f"Invalid C++ method name: {name!r}"
        )

    return name


def enum_value_to_cpp(name: str) -> str:
    """
    Convert a protocol enum value to the project's PascalCase C++ style.

    This is intentionally separate from field naming because enum values may
    contain characters such as '-' that are not valid C++ identifier
    characters.
    """
    if not name:
        raise ValueError("Enum value cannot be empty")

    return snake_to_cpp_name(name)


def validate_naming_examples() -> None:
    """
    Internal self-test for the naming rules.
    """
    expected = {
        "id": "ID",
        "message_id": "MessageID",
        "chat_id": "ChatID",
        "user_id": "UserID",
        "file_id": "FileID",
        "file_unique_id": "FileUniqueID",
        "first_name": "FirstName",
        "last_name": "LastName",
        "username": "UserName",
        "is_bot": "IsBot",
        "type": "Type",
        "offset": "Offset",
        "length": "Length",
        "url": "URL",
        "date": "Date",
        "text": "Text",
        "photo": "Photo",
        "caption": "Caption",
        "caption_entities": "CaptionEntities",
        "retry_after": "RetryAfter",
        "migrate_to_chat_id": "MigrateToChatID",
        "migrate_from_chat_id": "MigrateFromChatID",
        "web_app_url": "WebAppURL",
        "api_id": "APIID",
    }

    for source, expected_value in expected.items():
        actual = snake_to_cpp_name(source)

        if actual != expected_value:
            raise AssertionError(
                f"Naming mismatch: "
                f"{source!r} -> {actual!r}, "
                f"expected {expected_value!r}"
            )


if __name__ == "__main__":
    validate_naming_examples()
    print("CppNaming validation: PASSED")
