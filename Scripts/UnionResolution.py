from __future__ import annotations

import re

from Model import (
    TelegramModel,
    TelegramType,
    UnionDefinition,
    UnionResolution,
    UnionResolutionKind,
)


_ALWAYS_VALUE_RE = re.compile(
    r"""
    \balways\s+
    (?:
        [“"](?P<quoted>[^”"]+)[”"]
        |
        '(?P<single>[^']+)'
        |
        (?P<bare>[A-Za-z0-9_]+)
    )
    """,
    re.IGNORECASE | re.VERBOSE,
)


_MUST_BE_VALUE_RE = re.compile(
    r"""
    \bmust\s+be\s+
    (?:
        [“"](?P<quoted>[^”"]+)[”"]
        |
        '(?P<single>[^']+)'
        |
        (?P<bare>[A-Za-z0-9_]+)
    )
    """,
    re.IGNORECASE | re.VERBOSE,
)


def _extract_fixed_value(
    description: str,
) -> str | None:
    """
    Extract a fixed discriminator value from a field description.

    Telegram commonly describes fixed fields using forms such as::

        always “premium”
        always “creator”
        must be default
        must be chat_member

    The returned value is the literal discriminator value without
    surrounding quotes.
    """
    if not description:
        return None

    for pattern in (
        _ALWAYS_VALUE_RE,
        _MUST_BE_VALUE_RE,
    ):
        match = pattern.search(description)

        if match is None:
            continue

        value = (
            match.group("quoted")
            or match.group("single")
            or match.group("bare")
        )

        if value is None:
            continue

        value = value.strip()

        if value:
            return value

    return None


def _extract_always_value(
    description: str,
) -> str | None:
    """
    Backward-compatible helper for older callers.
    """
    return _extract_fixed_value(description)


def _find_common_field(
    alternatives: list[TelegramType],
    preferred_names: tuple[str, ...],
) -> str | None:
    if not alternatives:
        return None

    field_sets = [
        {
            field.name
            for field in alternative.fields
        }
        for alternative in alternatives
    ]

    common = set.intersection(*field_sets)

    for preferred in preferred_names:
        if preferred in common:
            return preferred

    return None


def _resolve_alternatives(
    model: TelegramModel,
    union: UnionDefinition,
) -> list[TelegramType] | None:
    """Resolve all union alternative references to object types."""
    alternatives: list[TelegramType] = []

    for alternative in union.alternatives:
        if (
            not alternative.is_object()
            or alternative.name is None
        ):
            return None

        type_item = model.find_type(
            alternative.name
        )

        if type_item is None:
            return None

        alternatives.append(type_item)

    return alternatives or None


def _get_required_field_names(
    alternative: TelegramType,
    excluded_field: str,
) -> set[str]:
    """Return required field names excluding the discriminator field."""
    return {
        field.name
        for field in alternative.fields
        if field.required
        and field.name != excluded_field
    }


def _presence_field_sort_key(field_name: str) -> tuple[int, int, str]:
    """
    Prefer fields that are conventionally strong type discriminators.

    Telegram's cached/non-cached pairs normally differ by ``*_file_id``
    versus ``*_url``.  Required fields such as ``title`` or ``mime_type``
    may also be unique to one alternative, but are weaker discriminators.
    """
    if field_name.endswith("_file_id"):
        priority = 0
    elif field_name.endswith("_url"):
        priority = 1
    else:
        priority = 2

    return (
        priority,
        len(field_name),
        field_name,
    )


def _build_presence_mapping(
    alternatives: list[TelegramType],
    discriminator: str,
) -> dict[str, str] | None:
    """
    Build a second-level discriminator based on required field presence.

    A field is safe as a presence discriminator only when it is required
    by exactly one alternative in the discriminator group.  Optional
    fields are deliberately ignored because an optional field cannot
    reliably identify an alternative.

    Exactly one field is selected for each alternative.  If an alternative
    has several unique required fields, the strongest conventional field
    is selected deterministically, preferring ``*_file_id`` and ``*_url``.
    """
    required_fields: dict[str, set[str]] = {}

    for alternative in alternatives:
        if alternative.name is None:
            return None

        required_fields[alternative.name] = (
            _get_required_field_names(
                alternative,
                discriminator,
            )
        )

    all_fields: set[str] = set()

    for fields in required_fields.values():
        all_fields.update(fields)

    unique_fields_by_alternative: dict[str, list[str]] = {
        alternative_name: []
        for alternative_name in required_fields
    }

    for field_name in sorted(all_fields):
        owners = [
            alternative_name
            for alternative_name, fields
            in required_fields.items()
            if field_name in fields
        ]

        if len(owners) == 1:
            unique_fields_by_alternative[owners[0]].append(
                field_name
            )

    mapping: dict[str, str] = {}

    for alternative_name, fields in sorted(
        unique_fields_by_alternative.items()
    ):
        if not fields:
            return None

        selected_field = min(
            fields,
            key=_presence_field_sort_key,
        )

        mapping[selected_field] = alternative_name

    return mapping


def _group_by_discriminator_value(
    alternatives: list[TelegramType],
    discriminator: str,
) -> dict[str, list[TelegramType]] | None:
    """
    Group alternatives by their fixed discriminator value.

    Unlike the old implementation, duplicate discriminator values are not
    treated as an error.  Telegram's InlineQueryResult intentionally uses
    duplicate ``type`` values for cached/non-cached pairs.
    """
    groups: dict[str, list[TelegramType]] = {}

    for alternative in alternatives:
        field = next(
            (
                item
                for item in alternative.fields
                if item.name == discriminator
            ),
            None,
        )

        if field is None:
            return None

        if not field.required:
            return None

        value = _extract_fixed_value(
            field.description
        )

        if value is None:
            return None

        groups.setdefault(value, []).append(
            alternative
        )

    return groups


def _build_discriminator_resolution(
    model: TelegramModel,
    union: UnionDefinition,
) -> UnionResolution | None:
    alternatives = _resolve_alternatives(
        model,
        union,
    )

    if alternatives is None:
        return None

    candidate_fields = (
        "type",
        "source",
        "kind",
        "status",
    )

    for discriminator in candidate_fields:
        if not all(
            any(
                field.name == discriminator
                for field in alternative.fields
            )
            for alternative in alternatives
        ):
            continue

        groups = _group_by_discriminator_value(
            alternatives,
            discriminator,
        )

        if groups is None:
            continue

        mapping: dict[str, str] = {}
        presence_mapping: dict[str, dict[str, str]] = {}
        failed = False

        for value, group in sorted(groups.items()):
            if len(group) == 1:
                alternative = group[0]

                if alternative.name is None:
                    failed = True
                    break

                mapping[value] = alternative.name
                continue

            nested_mapping = _build_presence_mapping(
                group,
                discriminator,
            )

            if nested_mapping is None:
                failed = True
                break

            presence_mapping[value] = nested_mapping

        if failed:
            continue

        if not presence_mapping:
            return UnionResolution(
                kind=UnionResolutionKind.DISCRIMINATOR,
                field=discriminator,
                mapping=mapping,
            )

        return UnionResolution(
            kind=UnionResolutionKind.DISCRIMINATOR_PRESENCE,
            field=discriminator,
            mapping=mapping,
            presence_mapping=presence_mapping,
        )

    return None


def _build_presence_resolution(
    model: TelegramModel,
    union: UnionDefinition,
) -> UnionResolution | None:
    """
    Resolve a polymorphic union without a common discriminator field.

    Each alternative contributes its complete required-field signature.
    The generated deserializer tests the most specific signatures first.

    This handles unions such as InputMessageContent where Location and
    Venue share latitude/longitude, but Venue additionally requires title
    and address.
    """
    alternatives = _resolve_alternatives(
        model,
        union,
    )

    if alternatives is None:
        return None

    requirements: dict[str, list[str]] = {}

    for alternative in alternatives:
        if alternative.name is None:
            return None

        fields = sorted(
            field.name
            for field in alternative.fields
            if field.required
        )

        if not fields:
            return None

        requirements[alternative.name] = fields

    signatures = list(requirements.items())

    for index, (name_a, fields_a) in enumerate(signatures):
        set_a = set(fields_a)

        for name_b, fields_b in signatures[index + 1:]:
            if set_a == set(fields_b):
                return None

    return UnionResolution(
        kind=UnionResolutionKind.PRESENCE,
        presence_requirements=requirements,
    )


def _build_maybe_inaccessible_message_resolution(
    model: TelegramModel,
    union: UnionDefinition,
) -> UnionResolution | None:
    if union.name != "MaybeInaccessibleMessage":
        return None

    alternative_names = {
        item.name
        for item in union.alternatives
        if item.is_object()
        and item.name
    }

    expected = {
        "Message",
        "InaccessibleMessage",
    }

    if alternative_names != expected:
        return None

    message = model.find_type(
        "Message"
    )

    inaccessible = model.find_type(
        "InaccessibleMessage"
    )

    if (
        message is None
        or inaccessible is None
    ):
        return None

    message_date = next(
        (
            field
            for field in message.fields
            if field.name == "date"
        ),
        None,
    )

    inaccessible_date = next(
        (
            field
            for field in inaccessible.fields
            if field.name == "date"
        ),
        None,
    )

    if (
        message_date is None
        or inaccessible_date is None
    ):
        return None

    inaccessible_description = (
        inaccessible_date.description
        or ""
    ).lower()

    message_description = (
        message_date.description
        or ""
    ).lower()

    if "always 0" not in inaccessible_description:
        return None

    if (
        "always a positive number"
        not in message_description
    ):
        return None

    return UnionResolution(
        kind=UnionResolutionKind.FIELD_VALUE,
        field="date",
        mapping={
            "0": "InaccessibleMessage",
            "positive": "Message",
        },
    )


def resolve_union(
    model: TelegramModel,
    union: UnionDefinition,
) -> UnionResolution:
    """
    Resolve a polymorphic union.

    Resolution order:

        1. special structural cases
        2. discriminator field
        3. unresolved

    A normal discriminator resolution is used when every discriminator
    value is unique.

    A discriminator-presence resolution is used when multiple alternatives
    share the same discriminator value but can be distinguished by required
    field presence.  This covers Telegram's cached/non-cached
    InlineQueryResult pairs without hard-coding their names.
    """
    if not union.is_polymorphic():
        return UnionResolution()

    special = (
        _build_maybe_inaccessible_message_resolution(
            model,
            union,
        )
    )

    if special is not None:
        return special

    discriminator = (
        _build_discriminator_resolution(
            model,
            union,
        )
    )

    if discriminator is not None:
        return discriminator

    presence = _build_presence_resolution(
        model,
        union,
    )

    if presence is not None:
        return presence

    return UnionResolution()


def resolve_model_unions(
    model: TelegramModel,
) -> TelegramModel:
    """
    Resolve all polymorphic unions in the model and attach the resulting
    metadata directly to the UnionDefinition objects.
    """
    for union in model.unions:
        resolution = resolve_union(
            model,
            union,
        )

        union.resolution = resolution

        if (
            resolution.is_discriminator()
            or resolution.is_discriminator_presence()
        ):
            union.discriminator = (
                resolution.field
            )
        else:
            union.discriminator = None

    return model


def validate_union_resolutions(
    model: TelegramModel,
) -> None:
    """
    Validate that every polymorphic union has complete resolution metadata.

    Value unions do not require discriminator resolution.
    """
    for union in model.unions:
        if not union.is_polymorphic():
            continue

        resolution = union.resolution

        if resolution is None:
            raise AssertionError(
                f"Union {union.name!r} "
                "has no resolution metadata"
            )

        if resolution.is_none():
            raise AssertionError(
                f"Polymorphic union "
                f"{union.name!r} could not be resolved"
            )

        if (
            resolution.field is None
            and not resolution.is_presence()
        ):
            raise AssertionError(
                f"Union {union.name!r} "
                "resolution has no field"
            )

        if (
            not resolution.mapping
            and not resolution.presence_mapping
            and not resolution.presence_requirements
        ):
            raise AssertionError(
                f"Union {union.name!r} "
                "resolution has no mapping"
            )

        alternative_names = {
            item.name
            for item in union.alternatives
            if item.is_object()
            and item.name
        }

        mapped_names = set(
            resolution.mapping.values()
        )

        for nested_mapping in (
            resolution.presence_mapping.values()
        ):
            mapped_names.update(
                nested_mapping.values()
            )

        mapped_names.update(
            resolution.presence_requirements
        )

        if alternative_names != mapped_names:
            raise AssertionError(
                f"Union {union.name!r} "
                "resolution does not cover exactly "
                "all alternatives"
            )

        all_mapped_names = list(
            resolution.mapping.values()
        )

        for nested_mapping in (
            resolution.presence_mapping.values()
        ):
            all_mapped_names.extend(
                nested_mapping.values()
            )

        all_mapped_names.extend(
            resolution.presence_requirements
        )

        if len(all_mapped_names) != len(
            set(all_mapped_names)
        ):
            raise AssertionError(
                f"Union {union.name!r} "
                "maps one alternative more than once"
            )

        if resolution.is_discriminator_presence():
            if not resolution.presence_mapping:
                raise AssertionError(
                    f"Union {union.name!r} is "
                    "DISCRIMINATOR_PRESENCE but has no "
                    "presence mapping"
                )

            mapped_discriminator_values = set(
                resolution.mapping
            ) | set(resolution.presence_mapping)

            if not mapped_discriminator_values:
                raise AssertionError(
                    f"Union {union.name!r} "
                    "has no discriminator values"
                )

        if resolution.is_presence():
            if not resolution.presence_requirements:
                raise AssertionError(
                    f"Union {union.name!r} is PRESENCE but has no "
                    "presence requirements"
                )

            for alternative_name, required_fields in (
                resolution.presence_requirements.items()
            ):
                if not alternative_name:
                    raise AssertionError(
                        f"Union {union.name!r} has an empty "
                        "presence alternative name"
                    )

                if not required_fields:
                    raise AssertionError(
                        f"Union {union.name!r} has an empty "
                        f"presence signature for {alternative_name!r}"
                    )
