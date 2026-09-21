from __future__ import annotations

import re

from Model import (
    TelegramModel,
    TelegramType,
    UnionDefinition,
    UnionResolution,
    UnionResolutionKind,
)


# ---------------------------------------------------------------------------
# Fixed-value extraction
# ---------------------------------------------------------------------------

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


# ---------------------------------------------------------------------------
# General helpers
# ---------------------------------------------------------------------------

_DISCRIMINATOR_FIELDS = (
    "type",
    "source",
    "kind",
    "status",
)


def _extract_fixed_value(
    description: str,
) -> str | None:
    """
    Extract a fixed discriminator value from a field description.

    Telegram commonly describes fixed fields using forms such as:

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


def _find_field(
    alternative: TelegramType,
    field_name: str,
):
    """
    Find a field by name in an object type.
    """
    return next(
        (
            field
            for field in alternative.fields
            if field.name == field_name
        ),
        None,
    )


def _find_common_field(
    alternatives: list[TelegramType],
    preferred_names: tuple[str, ...],
) -> str | None:
    """
    Find a common field among all alternatives.

    Preferred names are considered in order. This helper is intentionally
    conservative: it only returns a field that physically exists on every
    alternative.
    """
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
    """
    Resolve all union alternative references to object types.

    Polymorphic resolution currently operates on object alternatives only.
    Value unions and non-object alternatives are intentionally rejected
    here and handled elsewhere in the generator pipeline.
    """
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


def _alternative_name(
    alternative: TelegramType,
) -> str | None:
    """
    Return an alternative's stable object name.
    """
    return alternative.name


# ---------------------------------------------------------------------------
# Required-field helpers
# ---------------------------------------------------------------------------

def _get_required_field_names(
    alternative: TelegramType,
    excluded_field: str,
) -> set[str]:
    """
    Return required field names excluding a discriminator field.
    """
    return {
        field.name
        for field in alternative.fields
        if field.required
        and field.name != excluded_field
    }


def _get_required_field_list(
    alternative: TelegramType,
    excluded_field: str | None = None,
) -> list[str]:
    """
    Return required fields in deterministic order.
    """
    return sorted(
        field.name
        for field in alternative.fields
        if field.required
        and (
            excluded_field is None
            or field.name != excluded_field
        )
    )


def _presence_field_sort_key(
    field_name: str,
) -> tuple[int, int, str]:
    """
    Prefer fields that are conventionally strong type discriminators.

    Telegram's cached/non-cached pairs normally differ by:

        *_file_id
        *_url

    Required fields such as ``title`` or ``mime_type`` may also be unique
    to one alternative, but are weaker discriminators.

    The ordering is deterministic.
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


# ---------------------------------------------------------------------------
# Presence resolution
# ---------------------------------------------------------------------------

def _build_presence_mapping(
    alternatives: list[TelegramType],
    discriminator: str,
) -> dict[str, str] | None:
    """
    Build a second-level discriminator based on required field presence.

    A field is considered a candidate presence discriminator only when it
    is required by exactly one alternative in the discriminator group.

    Optional fields are deliberately ignored because their absence/presence
    cannot safely identify an alternative.

    One deterministic field is selected for each alternative.

    Important:
        This function does NOT claim that the resulting mapping proves
        runtime uniqueness. The deserializer must still detect the cases
        where an input object satisfies multiple presence requirements.
    """
    required_fields: dict[str, set[str]] = {}

    for alternative in alternatives:
        alternative_name = _alternative_name(
            alternative
        )

        if alternative_name is None:
            return None

        required_fields[alternative_name] = (
            _get_required_field_names(
                alternative,
                discriminator,
            )
        )

    if not required_fields:
        return None

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

        if len(owners) != 1:
            continue

        unique_fields_by_alternative[
            owners[0]
        ].append(field_name)

    mapping: dict[str, str] = {}

    for alternative_name in sorted(
        unique_fields_by_alternative
    ):
        fields = unique_fields_by_alternative[
            alternative_name
        ]

        if not fields:
            return None

        selected_field = min(
            fields,
            key=_presence_field_sort_key,
        )

        if selected_field in mapping:
            return None

        mapping[selected_field] = alternative_name

    return mapping


def _build_presence_requirements(
    alternatives: list[TelegramType],
) -> dict[str, list[str]] | None:
    """
    Build complete required-field signatures.

    These signatures are intentionally retained even when one signature
    is a subset of another. A subset is not itself an error because the
    runtime deserializer is responsible for detecting multiple matches.

    Example:

        A -> {x}
        B -> {x, y}

    For JSON containing x+y, both alternatives match. That must be
    detected at deserialization time rather than hidden by generator-side
    ordering.
    """
    requirements: dict[str, list[str]] = {}

    for alternative in alternatives:
        alternative_name = _alternative_name(
            alternative
        )

        if alternative_name is None:
            return None

        fields = _get_required_field_list(
            alternative
        )

        if not fields:
            return None

        if alternative_name in requirements:
            return None

        requirements[alternative_name] = fields

    return requirements or None


def _validate_presence_requirements(
    requirements: dict[str, list[str]],
) -> bool:
    """
    Validate structural integrity of presence requirements.

    This validation deliberately does not reject subset relationships.

    Presence requirements describe candidate matches. Runtime uniqueness
    must be checked by the deserializer.
    """
    seen_signatures: dict[frozenset[str], str] = {}

    for alternative_name, fields in requirements.items():
        if not alternative_name:
            return False

        if not fields:
            return False

        normalized = frozenset(fields)

        previous = seen_signatures.get(
            normalized
        )

        if previous is not None:
            return False

        seen_signatures[normalized] = alternative_name

    return True


def _build_presence_resolution(
    model: TelegramModel,
    union: UnionDefinition,
) -> UnionResolution | None:
    """
    Resolve a polymorphic union without a common discriminator field.

    Each alternative contributes its complete required-field signature.

    The generated deserializer should evaluate these signatures and must
    distinguish:

        0 matches  -> invalid union
        1 match    -> valid alternative
        >1 matches -> ambiguous union

    This function therefore describes candidate resolution rules; it does
    not attempt to prove runtime uniqueness from required-field sets alone.
    """
    alternatives = _resolve_alternatives(
        model,
        union,
    )

    if alternatives is None:
        return None

    requirements = _build_presence_requirements(
        alternatives
    )

    if requirements is None:
        return None

    if not _validate_presence_requirements(
        requirements
    ):
        return None

    return UnionResolution(
        kind=UnionResolutionKind.PRESENCE,
        presence_requirements=requirements,
    )


# ---------------------------------------------------------------------------
# Discriminator resolution
# ---------------------------------------------------------------------------

def _group_by_discriminator_value(
    alternatives: list[TelegramType],
    discriminator: str,
) -> dict[str, list[TelegramType]] | None:
    """
    Group alternatives by their fixed discriminator value.

    Duplicate discriminator values are intentionally allowed.

    Telegram's InlineQueryResult family, for example, contains cached and
    non-cached alternatives that may share the same ``type`` value and
    require a second-level presence discriminator.
    """
    groups: dict[str, list[TelegramType]] = {}

    for alternative in alternatives:
        field = _find_field(
            alternative,
            discriminator,
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

        groups.setdefault(
            value,
            [],
        ).append(alternative)

    return groups


def _build_discriminator_resolution(
    model: TelegramModel,
    union: UnionDefinition,
) -> UnionResolution | None:
    """
    Resolve a polymorphic union using a common discriminator field.

    Candidate discriminator fields are intentionally conservative.

    Resolution forms:

        DISCRIMINATOR
            every discriminator value is unique.

        DISCRIMINATOR_PRESENCE
            one or more discriminator values map to multiple alternatives,
            and those groups can be separated using required field presence.
    """
    alternatives = _resolve_alternatives(
        model,
        union,
    )

    if alternatives is None:
        return None

    for discriminator in _DISCRIMINATOR_FIELDS:
        if not all(
            _find_field(
                alternative,
                discriminator,
            )
            is not None
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

        for value, group in sorted(
            groups.items()
        ):
            if len(group) == 1:
                alternative = group[0]

                alternative_name = _alternative_name(
                    alternative
                )

                if alternative_name is None:
                    failed = True
                    break

                if value in mapping:
                    failed = True
                    break

                mapping[value] = alternative_name
                continue

            nested_mapping = _build_presence_mapping(
                group,
                discriminator,
            )

            if nested_mapping is None:
                failed = True
                break

            if value in presence_mapping:
                failed = True
                break

            presence_mapping[value] = (
                nested_mapping
            )

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


# ---------------------------------------------------------------------------
# Telegram-specific field-value resolution
# ---------------------------------------------------------------------------

def _build_maybe_inaccessible_message_resolution(
    model: TelegramModel,
    union: UnionDefinition,
) -> UnionResolution | None:
    """
    Resolve Telegram's MaybeInaccessibleMessage union.

    The discriminator is the semantic value of ``date``:

        date == 0       -> InaccessibleMessage
        date > 0        -> Message

    This is intentionally a named Telegram-specific rule rather than a
    generic field-value inference system.
    """
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

    message_date = _find_field(
        message,
        "date",
    )

    inaccessible_date = _find_field(
        inaccessible,
        "date",
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


# ---------------------------------------------------------------------------
# Public resolution API
# ---------------------------------------------------------------------------

def resolve_union(
    model: TelegramModel,
    union: UnionDefinition,
) -> UnionResolution:
    """
    Resolve a polymorphic union.

    Resolution order:

        1. Telegram-specific semantic cases
        2. common discriminator field
        3. required-field presence
        4. unresolved

    A normal discriminator resolution is used when every discriminator
    value is unique.

    A discriminator-presence resolution is used when multiple alternatives
    share the same discriminator value but can be separated by required
    field presence.

    A normal presence resolution stores complete required-field signatures.
    The generated deserializer must still detect ambiguous runtime matches.
    """
    if not union.is_polymorphic():
        return UnionResolution()

    # Telegram-specific semantic rule.
    special = (
        _build_maybe_inaccessible_message_resolution(
            model,
            union,
        )
    )

    if special is not None:
        return special

    # Common discriminator resolution.
    discriminator = (
        _build_discriminator_resolution(
            model,
            union,
        )
    )

    if discriminator is not None:
        return discriminator

    # Structural required-field resolution.
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
    metadata directly to their UnionDefinition objects.
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


# ---------------------------------------------------------------------------
# Resolution validation
# ---------------------------------------------------------------------------

def _collect_mapped_alternative_names(
    resolution: UnionResolution,
) -> list[str]:
    """
    Collect every alternative name referenced by a resolution.
    """
    names: list[str] = []

    names.extend(
        resolution.mapping.values()
    )

    for nested_mapping in (
        resolution.presence_mapping.values()
    ):
        names.extend(
            nested_mapping.values()
        )

    names.extend(
        resolution.presence_requirements
    )

    return names


def _validate_resolution_coverage(
    union: UnionDefinition,
    resolution: UnionResolution,
) -> None:
    """
    Ensure resolution metadata covers every object alternative exactly once.
    """
    alternative_names = {
        item.name
        for item in union.alternatives
        if item.is_object()
        and item.name
    }

    mapped_names = set(
        _collect_mapped_alternative_names(
            resolution
        )
    )

    if alternative_names != mapped_names:
        raise AssertionError(
            f"Union {union.name!r} "
            "resolution does not cover exactly "
            "all alternatives"
        )

    all_mapped_names = (
        _collect_mapped_alternative_names(
            resolution
        )
    )

    if len(all_mapped_names) != len(
        set(all_mapped_names)
    ):
        raise AssertionError(
            f"Union {union.name!r} "
            "maps one alternative more than once"
        )


def _validate_discriminator_resolution(
    union: UnionDefinition,
    resolution: UnionResolution,
) -> None:
    """
    Validate discriminator-based resolution metadata.
    """
    if resolution.field is None:
        raise AssertionError(
            f"Union {union.name!r} "
            "discriminator resolution has no field"
        )

    if resolution.is_discriminator_presence():
        if not resolution.presence_mapping:
            raise AssertionError(
                f"Union {union.name!r} is "
                "DISCRIMINATOR_PRESENCE but has no "
                "presence mapping"
            )

        mapped_discriminator_values = (
            set(resolution.mapping)
            | set(resolution.presence_mapping)
        )

        if not mapped_discriminator_values:
            raise AssertionError(
                f"Union {union.name!r} "
                "has no discriminator values"
            )


def _validate_presence_resolution(
    union: UnionDefinition,
    resolution: UnionResolution,
) -> None:
    """
    Validate normal presence-resolution metadata.
    """
    if not resolution.presence_requirements:
        raise AssertionError(
            f"Union {union.name!r} is PRESENCE but has no "
            "presence requirements"
        )

    if not _validate_presence_requirements(
        resolution.presence_requirements
    ):
        raise AssertionError(
            f"Union {union.name!r} has invalid "
            "presence requirements"
        )

    for (
        alternative_name,
        required_fields,
    ) in resolution.presence_requirements.items():
        if not alternative_name:
            raise AssertionError(
                f"Union {union.name!r} has an empty "
                "presence alternative name"
            )

        if not required_fields:
            raise AssertionError(
                f"Union {union.name!r} has an empty "
                f"presence signature for "
                f"{alternative_name!r}"
            )

        if len(required_fields) != len(
            set(required_fields)
        ):
            raise AssertionError(
                f"Union {union.name!r} has duplicate "
                f"required fields for "
                f"{alternative_name!r}"
            )


def _validate_discriminator_presence_mapping(
    union: UnionDefinition,
    resolution: UnionResolution,
) -> None:
    """
    Validate second-level presence mappings.

    Each nested mapping must:

        - contain at least one field;
        - map each field to one alternative;
        - not map an alternative twice;
        - not contain duplicate discriminator groups.

    Runtime ambiguity is intentionally handled by the generated
    deserializer.
    """
    for (
        discriminator_value,
        nested_mapping,
    ) in resolution.presence_mapping.items():
        if not discriminator_value:
            raise AssertionError(
                f"Union {union.name!r} has an empty "
                "nested discriminator value"
            )

        if not nested_mapping:
            raise AssertionError(
                f"Union {union.name!r} has an empty "
                f"presence mapping for "
                f"{discriminator_value!r}"
            )

        nested_names = list(
            nested_mapping.values()
        )

        if len(nested_names) != len(
            set(nested_names)
        ):
            raise AssertionError(
                f"Union {union.name!r} has duplicate "
                "alternatives in discriminator presence "
                f"group {discriminator_value!r}"
            )

        nested_fields = list(
            nested_mapping
        )

        if len(nested_fields) != len(
            set(nested_fields)
        ):
            raise AssertionError(
                f"Union {union.name!r} has duplicate "
                "presence fields in discriminator group "
                f"{discriminator_value!r}"
            )


def validate_union_resolutions(
    model: TelegramModel,
) -> None:
    """
    Validate that every polymorphic union has complete resolution metadata.

    Value unions do not require discriminator resolution.

    Important:
        This function validates the integrity of the generated resolution
        metadata. It does not attempt to prove that arbitrary JSON can
        match exactly one presence alternative. That is a runtime
        deserializer responsibility.
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

        # FIELD_VALUE is allowed to use a semantic field rather than a
        # normal discriminator mapping.
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

        _validate_resolution_coverage(
            union,
            resolution,
        )

        if resolution.is_discriminator():
            _validate_discriminator_resolution(
                union,
                resolution,
            )

        elif resolution.is_discriminator_presence():
            _validate_discriminator_resolution(
                union,
                resolution,
            )

            _validate_discriminator_presence_mapping(
                union,
                resolution,
            )

        elif resolution.is_presence():
            _validate_presence_resolution(
                union,
                resolution,
            )

        elif resolution.is_field_value():
            if resolution.field is None:
                raise AssertionError(
                    f"Union {union.name!r} "
                    "FIELD_VALUE resolution has no field"
                )

            if not resolution.mapping:
                raise AssertionError(
                    f"Union {union.name!r} "
                    "FIELD_VALUE resolution has no mapping"
                )
