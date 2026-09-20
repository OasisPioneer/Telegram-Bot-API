from __future__ import annotations

from copy import deepcopy
from typing import Any


INPUT_FILE_SCHEMA_NAME = "InputFile"


# Telegram Bot API fields whose multipart binary representation is
# semantically InputFile-only, even though tgbotspec emits them as
# plain `string` + `binary`.
#
# These are explicit Telegram semantic overrides. They must not be
# generalized to every binary schema because some Telegram binary
# fields are actually InputFile | String and some are ordinary String
# fields such as thumbnails represented by attach:// references.
INPUT_FILE_ONLY_FIELDS = {
    ("/uploadStickerFile", "sticker"),
}


def normalize_telegram_openapi(
    document: dict[str, Any],
) -> dict[str, Any]:
    """
    Normalize Telegram-specific semantic information that is lost by
    tgbotspec when producing the OpenAPI document.

    The normalizer operates on the raw OpenAPI document so that the
    generic OpenAPI parser remains Telegram-agnostic.

    Current repairs
    ---------------
    1. Restore Integer or String identifiers when Telegram's description
       explicitly indicates that a username is accepted.

    2. Restore InputFile or String for multipart file parameters whose
       description explicitly describes file_id / HTTP URL / multipart
       upload semantics.

    3. Restore InputFile-only parameters for multipart binary fields whose
       description indicates that the parameter is an uploaded file.

    4. Restore explicitly known Telegram InputFile-only fields whose
       OpenAPI binary representation does not contain enough semantic
       information in its description.

    5. Add a synthetic OpenAPI InputFile schema so that references created
       by this normalizer are valid OpenAPI references.

    The returned document is a deep copy. The caller's original document
    is never modified.
    """

    normalized = deepcopy(document)

    _ensure_components(normalized)
    _ensure_input_file_schema(normalized)

    paths = normalized.get("paths", {})

    if not isinstance(paths, dict):
        return normalized

    for operation_path, path_item in paths.items():
        if not isinstance(path_item, dict):
            continue

        for method_name, operation in path_item.items():
            if not isinstance(operation, dict):
                continue

            if method_name.lower() not in {
                "get",
                "post",
                "put",
                "patch",
                "delete",
                "options",
                "head",
                "trace",
            }:
                continue

            _normalize_parameters(operation)
            _normalize_request_body(
                operation_path,
                operation,
            )

    return normalized


def _ensure_components(
    document: dict[str, Any],
) -> dict[str, Any]:
    components = document.setdefault(
        "components",
        {},
    )

    if not isinstance(components, dict):
        raise TypeError(
            "OpenAPI components must be a mapping"
        )

    schemas = components.setdefault(
        "schemas",
        {},
    )

    if not isinstance(schemas, dict):
        raise TypeError(
            "OpenAPI components.schemas must be a mapping"
        )

    return schemas


def _ensure_input_file_schema(
    document: dict[str, Any],
) -> None:
    schemas = _ensure_components(
        document
    )

    if INPUT_FILE_SCHEMA_NAME in schemas:
        return

    schemas[INPUT_FILE_SCHEMA_NAME] = {
        "type": "object",
        "description": (
            "Telegram Bot API transport-layer input file. "
            "This synthetic schema represents the client-side "
            "InputFile abstraction used for multipart uploads."
        ),
    }


def _normalize_parameters(
    operation: dict[str, Any],
) -> None:
    parameters = operation.get(
        "parameters",
        [],
    )

    if not isinstance(parameters, list):
        return

    for parameter in parameters:
        if not isinstance(parameter, dict):
            continue

        schema = parameter.get(
            "schema"
        )

        if not isinstance(schema, dict):
            continue

        _normalize_identifier_schema(
            schema
        )


def _normalize_request_body(
    operation_path: str,
    operation: dict[str, Any],
) -> None:
    request_body = operation.get(
        "requestBody"
    )

    if not isinstance(request_body, dict):
        return

    content = request_body.get(
        "content",
        {},
    )

    if not isinstance(content, dict):
        return

    for content_type, media in content.items():
        if not isinstance(media, dict):
            continue

        schema = media.get(
            "schema"
        )

        if not isinstance(schema, dict):
            continue

        if content_type == "multipart/form-data":
            _normalize_multipart_schema(
                operation_path,
                schema,
            )
        else:
            _normalize_schema_tree(
                schema
            )


def _normalize_multipart_schema(
    operation_path: str,
    schema: dict[str, Any],
) -> None:
    properties = schema.get(
        "properties",
        {},
    )

    if not isinstance(properties, dict):
        return

    for property_name, property_schema in properties.items():
        if not isinstance(property_schema, dict):
            continue

        _normalize_identifier_schema(
            property_schema
        )

        if not _is_binary_schema(
            property_schema
        ):
            continue

        if _is_explicit_input_file_only_field(
            operation_path,
            property_name,
        ):
            _replace_with_input_file(
                property_schema
            )
            continue

        _normalize_binary_schema(
            property_schema
        )


def _normalize_schema_tree(
    schema: dict[str, Any],
) -> None:
    """
    Recursively normalize inline OpenAPI schemas.

    This is intentionally conservative. Only schemas that satisfy the
    Telegram-specific semantic predicates are changed.
    """

    _normalize_identifier_schema(
        schema
    )

    one_of = schema.get(
        "oneOf"
    )

    if isinstance(one_of, list):
        for alternative in one_of:
            if isinstance(alternative, dict):
                _normalize_schema_tree(
                    alternative
                )

    any_of = schema.get(
        "anyOf"
    )

    if isinstance(any_of, list):
        for alternative in any_of:
            if isinstance(alternative, dict):
                _normalize_schema_tree(
                    alternative
                )

    all_of = schema.get(
        "allOf"
    )

    if isinstance(all_of, list):
        for alternative in all_of:
            if isinstance(alternative, dict):
                _normalize_schema_tree(
                    alternative
                )

    items = schema.get(
        "items"
    )

    if isinstance(items, dict):
        _normalize_schema_tree(
            items
        )

    properties = schema.get(
        "properties"
    )

    if isinstance(properties, dict):
        for property_schema in properties.values():
            if isinstance(property_schema, dict):
                _normalize_schema_tree(
                    property_schema
                )


def _normalize_identifier_schema(
    schema: dict[str, Any],
) -> None:
    """
    Restore Telegram Integer-or-String identifiers.

    tgbotspec currently emits these as integer schemas, but Telegram's
    descriptions explicitly mention an accepted username such as
    @username.

    We deliberately inspect the description instead of the field name.
    """

    if schema.get("type") != "integer":
        return

    description = _description(
        schema
    )

    if "username" not in description.lower():
        return

    _replace_with_integer_or_string(
        schema
    )


def _normalize_binary_schema(
    schema: dict[str, Any],
) -> None:
    """
    Restore Telegram InputFile semantics from multipart binary schemas.

    A binary field whose description explicitly describes file_id and/or
    HTTP URL alternatives is InputFile or String.

    A binary field without those alternatives is treated as InputFile-only
    only when the description explicitly indicates that the field is an
    uploaded file.

    Known Telegram fields with insufficient descriptions are handled by
    explicit method/field overrides in _normalize_multipart_schema().
    """

    description = _description(
        schema
    ).lower()

    if not description:
        return

    if (
        "file_id" in description
        or "http url" in description
        or "url as a string" in description
    ):
        _replace_with_input_file_or_string(
            schema
        )
        return

    if (
        "uploaded using multipart/form-data" in description
        or "upload a new" in description
        or "upload your" in description
    ):
        _replace_with_input_file(
            schema
        )


def _is_explicit_input_file_only_field(
    operation_path: str,
    property_name: str,
) -> bool:
    return (
        operation_path,
        property_name,
    ) in INPUT_FILE_ONLY_FIELDS


def _replace_with_integer_or_string(
    schema: dict[str, Any],
) -> None:
    description = schema.get(
        "description"
    )

    schema.clear()

    schema["oneOf"] = [
        {
            "type": "integer",
            "format": "int64",
        },
        {
            "type": "string",
        },
    ]

    if description:
        schema["description"] = description


def _replace_with_input_file_or_string(
    schema: dict[str, Any],
) -> None:
    description = schema.get(
        "description"
    )

    schema.clear()

    schema["oneOf"] = [
        {
            "$ref": (
                "#/components/schemas/"
                f"{INPUT_FILE_SCHEMA_NAME}"
            )
        },
        {
            "type": "string",
        },
    ]

    if description:
        schema["description"] = description


def _replace_with_input_file(
    schema: dict[str, Any],
) -> None:
    description = schema.get(
        "description"
    )

    schema.clear()

    schema["$ref"] = (
        "#/components/schemas/"
        f"{INPUT_FILE_SCHEMA_NAME}"
    )

    if description:
        schema["description"] = description


def _is_binary_schema(
    schema: dict[str, Any],
) -> bool:
    return (
        schema.get("type") == "string"
        and schema.get("format") == "binary"
    )


def _description(
    schema: dict[str, Any],
) -> str:
    description = schema.get(
        "description",
        "",
    )

    if not isinstance(description, str):
        return ""

    return description


def normalize_and_validate(
    document: dict[str, Any],
) -> dict[str, Any]:
    """
    Normalize and run focused invariants for the currently supported
    Telegram semantic repairs.
    """

    normalized = normalize_telegram_openapi(
        document
    )

    _validate_expected_schema(
        normalized
    )

    return normalized


def _validate_expected_schema(
    document: dict[str, Any],
) -> None:
    """
    Validate representative Bot API 10.3 cases.

    These are intentionally semantic checks rather than generated C++
    checks. C++ generation is tested later by the generator pipeline.
    """

    paths = document.get(
        "paths",
        {}
    )

    send_message = _get_post_operation(
        paths,
        "/sendMessage",
    )

    chat_id = _find_request_parameter(
        send_message,
        "chat_id",
    )

    assert _is_integer_string_union(
        chat_id
    ), (
        "sendMessage.chat_id was not "
        "normalized to Integer | String"
    )

    send_photo = _get_post_operation(
        paths,
        "/sendPhoto",
    )

    photo = _find_multipart_property(
        send_photo,
        "photo",
    )

    assert _is_input_file_or_string_union(
        photo
    ), (
        "sendPhoto.photo was not "
        "normalized to InputFile | String"
    )

    send_video = _get_post_operation(
        paths,
        "/sendVideo",
    )

    video = _find_multipart_property(
        send_video,
        "video",
    )

    assert _is_input_file_or_string_union(
        video
    ), (
        "sendVideo.video was not "
        "normalized to InputFile | String"
    )

    send_audio = _get_post_operation(
        paths,
        "/sendAudio",
    )

    audio = _find_multipart_property(
        send_audio,
        "audio",
    )

    assert _is_input_file_or_string_union(
        audio
    ), (
        "sendAudio.audio was not "
        "normalized to InputFile | String"
    )

    send_document = _get_post_operation(
        paths,
        "/sendDocument",
    )

    document = _find_multipart_property(
        send_document,
        "document",
    )

    assert _is_input_file_or_string_union(
        document
    ), (
        "sendDocument.document was not "
        "normalized to InputFile | String"
    )

    send_animation = _get_post_operation(
        paths,
        "/sendAnimation",
    )

    animation = _find_multipart_property(
        send_animation,
        "animation",
    )

    assert _is_input_file_or_string_union(
        animation
    ), (
        "sendAnimation.animation was not "
        "normalized to InputFile | String"
    )

    send_voice = _get_post_operation(
        paths,
        "/sendVoice",
    )

    voice = _find_multipart_property(
        send_voice,
        "voice",
    )

    assert _is_input_file_or_string_union(
        voice
    ), (
        "sendVoice.voice was not "
        "normalized to InputFile | String"
    )

    send_sticker = _get_post_operation(
        paths,
        "/sendSticker",
    )

    sticker = _find_multipart_property(
        send_sticker,
        "sticker",
    )

    assert _is_input_file_or_string_union(
        sticker
    ), (
        "sendSticker.sticker was not "
        "normalized to InputFile | String"
    )

    set_sticker_set_thumbnail = _get_post_operation(
        paths,
        "/setStickerSetThumbnail",
    )

    thumbnail = _find_multipart_property(
        set_sticker_set_thumbnail,
        "thumbnail",
    )

    assert _is_input_file_or_string_union(
        thumbnail
    ), (
        "setStickerSetThumbnail.thumbnail was not "
        "normalized to InputFile | String"
    )

    upload_sticker_file = _get_post_operation(
        paths,
        "/uploadStickerFile",
    )

    upload_sticker = _find_multipart_property(
        upload_sticker_file,
        "sticker",
    )

    assert _is_input_file_ref(
        upload_sticker
    ), (
        "uploadStickerFile.sticker was not "
        "normalized to InputFile"
    )

    set_webhook = _get_post_operation(
        paths,
        "/setWebhook",
    )

    certificate = _find_multipart_property(
        set_webhook,
        "certificate",
    )

    assert _is_input_file_ref(
        certificate
    ), (
        "setWebhook.certificate was not "
        "normalized to InputFile"
    )

    send_message_draft = _get_post_operation(
        paths,
        "/sendMessageDraft",
    )

    draft_chat_id = _find_request_parameter(
        send_message_draft,
        "chat_id",
    )

    assert _is_integer_schema(
        draft_chat_id
    ), (
        "sendMessageDraft.chat_id was incorrectly "
        "normalized away from Integer"
    )


def _get_post_operation(
    paths: Any,
    path: str,
) -> dict[str, Any]:
    operation = paths.get(
        path
    )

    if not isinstance(operation, dict):
        raise AssertionError(
            f"Missing OpenAPI path: {path}"
        )

    post = operation.get(
        "post"
    )

    if not isinstance(post, dict):
        raise AssertionError(
            f"Missing POST operation: {path}"
        )

    return post


def _find_request_parameter(
    operation: dict[str, Any],
    name: str,
) -> dict[str, Any]:
    parameters = operation.get(
        "parameters",
        [],
    )

    if not isinstance(parameters, list):
        raise AssertionError(
            "Operation parameters are not a list"
        )

    for parameter in parameters:
        if not isinstance(parameter, dict):
            continue

        if parameter.get("name") != name:
            continue

        schema = parameter.get(
            "schema"
        )

        if isinstance(schema, dict):
            return schema

    request_body = operation.get(
        "requestBody",
        {}
    )

    if isinstance(request_body, dict):
        content = request_body.get(
            "content",
            {}
        )

        if isinstance(content, dict):
            for media in content.values():
                if not isinstance(media, dict):
                    continue

                schema = media.get(
                    "schema",
                    {}
                )

                if not isinstance(schema, dict):
                    continue

                properties = schema.get(
                    "properties",
                    {}
                )

                if isinstance(properties, dict):
                    result = properties.get(
                        name
                    )

                    if isinstance(result, dict):
                        return result

    raise AssertionError(
        f"Parameter not found: {name}"
    )


def _find_multipart_property(
    operation: dict[str, Any],
    name: str,
) -> dict[str, Any]:
    request_body = operation.get(
        "requestBody",
        {}
    )

    if not isinstance(request_body, dict):
        raise AssertionError(
            "Operation requestBody is not a mapping"
        )

    content = request_body.get(
        "content",
        {}
    )

    if not isinstance(content, dict):
        raise AssertionError(
            "Operation content is not a mapping"
        )

    multipart = content.get(
        "multipart/form-data"
    )

    if not isinstance(multipart, dict):
        raise AssertionError(
            "Operation has no multipart/form-data content"
        )

    schema = multipart.get(
        "schema",
        {}
    )

    if not isinstance(schema, dict):
        raise AssertionError(
            "Multipart schema is not a mapping"
        )

    properties = schema.get(
        "properties",
        {}
    )

    if not isinstance(properties, dict):
        raise AssertionError(
            "Multipart properties are not a mapping"
        )

    result = properties.get(
        name
    )

    if not isinstance(result, dict):
        raise AssertionError(
            f"Multipart property not found: {name}"
        )

    return result


def _is_integer_schema(
    schema: dict[str, Any],
) -> bool:
    return (
        schema.get("type") == "integer"
        and "oneOf" not in schema
        and "$ref" not in schema
    )


def _is_integer_string_union(
    schema: dict[str, Any],
) -> bool:
    one_of = schema.get(
        "oneOf"
    )

    if not isinstance(one_of, list):
        return False

    has_integer = any(
        isinstance(item, dict)
        and item.get("type") == "integer"
        for item in one_of
    )

    has_string = any(
        isinstance(item, dict)
        and item.get("type") == "string"
        for item in one_of
    )

    return has_integer and has_string


def _is_input_file_ref(
    schema: dict[str, Any],
) -> bool:
    return schema.get(
        "$ref"
    ) == (
        "#/components/schemas/"
        f"{INPUT_FILE_SCHEMA_NAME}"
    )


def _is_input_file_or_string_union(
    schema: dict[str, Any],
) -> bool:
    one_of = schema.get(
        "oneOf"
    )

    if not isinstance(one_of, list):
        return False

    has_input_file = any(
        isinstance(item, dict)
        and item.get("$ref")
        == (
            "#/components/schemas/"
            f"{INPUT_FILE_SCHEMA_NAME}"
        )
        for item in one_of
    )

    has_string = any(
        isinstance(item, dict)
        and item.get("type") == "string"
        for item in one_of
    )

    return has_input_file and has_string


if __name__ == "__main__":
    from pathlib import Path

    import yaml

    schema_file = (
        Path(__file__).resolve().parent
        / "schema"
        / "telegram-bot-api.yaml"
    )

    document = yaml.safe_load(
        schema_file.read_text(
            encoding="utf-8"
        )
    )

    normalize_and_validate(
        document
    )

    print(
        "TelegramSchemaNormalizer validation: PASSED"
    )
