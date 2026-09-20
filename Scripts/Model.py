from __future__ import annotations

from dataclasses import dataclass, field as dataclass_field
from enum import Enum
from typing import Optional


class TypeKind(Enum):
    OBJECT = "object"
    ENUM = "enum"
    UNION = "union"


class ValueKind(Enum):
    INTEGER = "integer"
    STRING = "string"
    BOOLEAN = "boolean"
    FLOAT = "float"
    OBJECT = "object"
    ARRAY = "array"
    UNION = "union"
    UNKNOWN = "unknown"


class UnionKind(Enum):
    VALUE = "value"
    INPUT_FILE = "input_file"
    POLYMORPHIC = "polymorphic"
    UNKNOWN = "unknown"


class UnionResolutionKind(Enum):
    """
    Describes how a polymorphic union can be resolved from JSON.
    """

    NONE = "none"

    # Example:
    #
    # {
    #   "type": "user"
    # }
    #
    # -> MessageOriginUser
    DISCRIMINATOR = "discriminator"

    # First resolve by a discriminator field (for example ``type``),
    # then resolve duplicate discriminator values by checking the
    # presence of a required distinguishing field.
    #
    # Example:
    #
    #   {"type": "audio", "audio_file_id": "..."}
    #       -> InlineQueryResultCachedAudio
    #
    #   {"type": "audio", "audio_url": "https://..."}
    #       -> InlineQueryResultAudio
    DISCRIMINATOR_PRESENCE = "discriminator_presence"

    # The union has no common discriminator field.  Alternatives are
    # resolved directly by the presence of required distinguishing fields.
    PRESENCE = "presence"

    # Example:
    #
    # {
    #   "date": 0
    # }
    #
    # -> InaccessibleMessage
    FIELD_VALUE = "field_value"


@dataclass
class UnionResolution:
    """
    Schema-derived runtime resolution metadata for a polymorphic union.

    Examples
    --------
    MessageOrigin:

        kind = DISCRIMINATOR
        field = "type"
        mapping = {
            "user": "MessageOriginUser",
            "hidden_user": "MessageOriginHiddenUser",
            "chat": "MessageOriginChat",
            "channel": "MessageOriginChannel",
        }

    ChatBoostSource:

        kind = DISCRIMINATOR
        field = "source"
        mapping = {
            "premium": "ChatBoostSourcePremium",
            "gift_code": "ChatBoostSourceGiftCode",
            "giveaway": "ChatBoostSourceGiveaway",
        }

    MaybeInaccessibleMessage:

        kind = FIELD_VALUE
        field = "date"
        mapping = {
            "0": "InaccessibleMessage",
            "positive": "Message",
        }
    """

    kind: UnionResolutionKind = (
        UnionResolutionKind.NONE
    )

    field: Optional[str] = None

    mapping: dict[str, str] = dataclass_field(
        default_factory=dict
    )

    # For DISCRIMINATOR_PRESENCE resolutions this maps the primary
    # discriminator value to a second-level presence discriminator:
    #
    #   {
    #       "audio": {
    #           "audio_file_id": "InlineQueryResultCachedAudio",
    #           "audio_url": "InlineQueryResultAudio",
    #       }
    #   }
    presence_mapping: dict[str, dict[str, str]] = dataclass_field(
        default_factory=dict
    )

    # For PRESENCE resolutions this stores the complete required-field
    # signature for each alternative.  Alternatives are tested from the
    # most specific signature to the least specific signature.
    presence_requirements: dict[str, list[str]] = dataclass_field(
        default_factory=dict
    )

    def is_none(self) -> bool:
        return (
            self.kind
            == UnionResolutionKind.NONE
        )

    def is_discriminator(self) -> bool:
        return (
            self.kind
            == UnionResolutionKind.DISCRIMINATOR
        )

    def is_discriminator_presence(self) -> bool:
        return (
            self.kind
            == UnionResolutionKind.DISCRIMINATOR_PRESENCE
        )

    def is_presence(self) -> bool:
        return (
            self.kind
            == UnionResolutionKind.PRESENCE
        )

    def is_field_value(self) -> bool:
        return (
            self.kind
            == UnionResolutionKind.FIELD_VALUE
        )


@dataclass
class UnionInfo:
    kind: UnionKind = UnionKind.UNKNOWN

    alternatives: list["TypeRef"] = dataclass_field(
        default_factory=list
    )

    discriminator: Optional[str] = None

    name: Optional[str] = None

    description: str = ""

    resolution: Optional[UnionResolution] = None

    def is_value(self):
        return self.kind == UnionKind.VALUE

    def is_input_file(self):
        return self.kind == UnionKind.INPUT_FILE

    def is_polymorphic(self):
        return self.kind == UnionKind.POLYMORPHIC

    def is_unknown(self):
        return self.kind == UnionKind.UNKNOWN


@dataclass
class UnionDefinition:
    name: str

    kind: UnionKind = UnionKind.UNKNOWN

    alternatives: list["TypeRef"] = dataclass_field(
        default_factory=list
    )

    discriminator: Optional[str] = None

    description: str = ""

    resolution: Optional[UnionResolution] = None

    def is_value(self):
        return self.kind == UnionKind.VALUE

    def is_input_file(self):
        return self.kind == UnionKind.INPUT_FILE

    def is_polymorphic(self):
        return self.kind == UnionKind.POLYMORPHIC

    def is_unknown(self):
        return self.kind == UnionKind.UNKNOWN


@dataclass
class TypeRef:
    kind: ValueKind

    name: Optional[str] = None

    element: Optional["TypeRef"] = None

    alternatives: list["TypeRef"] = dataclass_field(
        default_factory=list
    )

    source: str = ""

    union_info: Optional[UnionInfo] = None

    def is_integer(self):
        return self.kind == ValueKind.INTEGER

    def is_string(self):
        return self.kind == ValueKind.STRING

    def is_boolean(self):
        return self.kind == ValueKind.BOOLEAN

    def is_float(self):
        return self.kind == ValueKind.FLOAT

    def is_object(self):
        return self.kind == ValueKind.OBJECT

    def is_array(self):
        return self.kind == ValueKind.ARRAY

    def is_union(self):
        return self.kind == ValueKind.UNION

    def is_unknown(self):
        return self.kind == ValueKind.UNKNOWN

    def is_value_union(self):
        return (
            self.kind == ValueKind.UNION
            and self.union_info is not None
            and self.union_info.is_value()
        )

    def is_input_file_union(self):
        return (
            self.kind == ValueKind.UNION
            and self.union_info is not None
            and self.union_info.is_input_file()
        )

    def is_polymorphic_union(self):
        return (
            self.kind == ValueKind.UNION
            and self.union_info is not None
            and self.union_info.is_polymorphic()
        )

    def is_named_union(self):
        return (
            self.kind == ValueKind.UNION
            and self.union_info is not None
            and self.union_info.name is not None
        )

    def __str__(self):
        if self.kind == ValueKind.INTEGER:
            return "Integer"

        if self.kind == ValueKind.STRING:
            return "String"

        if self.kind == ValueKind.BOOLEAN:
            return "Boolean"

        if self.kind == ValueKind.FLOAT:
            return "Float"

        if self.kind == ValueKind.UNKNOWN:
            return "Unknown"

        if self.kind == ValueKind.OBJECT:
            return self.name or "Unknown"

        if self.kind == ValueKind.ARRAY:
            if self.element is None:
                return "Array<Unknown>"

            return f"Array<{self.element}>"

        if self.kind == ValueKind.UNION:
            if not self.alternatives:
                return "Union<>"

            return " or ".join(
                str(item)
                for item in self.alternatives
            )

        return "Unknown"


@dataclass
class Field:
    name: str

    cpp_name: str

    type: TypeRef

    required: bool = False

    description: str = ""


@dataclass
class TelegramType:
    name: str

    description: str = ""

    fields: list[Field] = dataclass_field(
        default_factory=list
    )

    kind: TypeKind = TypeKind.OBJECT


@dataclass
class Parameter:
    name: str

    cpp_name: str

    type: TypeRef

    required: bool = False

    description: str = ""


@dataclass
class TelegramMethod:
    name: str

    description: str = ""

    parameters: list[Parameter] = dataclass_field(
        default_factory=list
    )

    return_type: TypeRef = dataclass_field(
        default_factory=lambda: TypeRef(
            kind=ValueKind.UNKNOWN,
            source="Unknown",
        )
    )


@dataclass
class TelegramModel:
    version: str = ""

    types: list[TelegramType] = dataclass_field(
        default_factory=list
    )

    unions: list[UnionDefinition] = dataclass_field(
        default_factory=list
    )

    methods: list[TelegramMethod] = dataclass_field(
        default_factory=list
    )

    def type_map(self):
        return {
            item.name: item
            for item in self.types
        }

    def union_map(self):
        return {
            item.name: item
            for item in self.unions
        }

    def find_type(self, name):
        for item in self.types:
            if item.name == name:
                return item

        return None

    def find_union(self, name):
        for item in self.unions:
            if item.name == name:
                return item
