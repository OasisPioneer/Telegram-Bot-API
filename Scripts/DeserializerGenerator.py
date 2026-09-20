from __future__ import annotations

from CppContext import CppContext
from Model import (
    TelegramModel,
    TelegramType,
    TypeKind,
    TypeRef,
    UnionDefinition,
    UnionResolutionKind,
)


TYPE_NAMESPACE = "::TelegramBotAPI::Type"
JSON_NAMESPACE = "TelegramBotAPI::JSON"


class DeserializerGenerator:
    """
    Generate C++ deserialization helpers from TelegramModel.

    Generated architecture:

        template<class T>
        struct Deserializer;

        template<class T>
        T FromJson(const boost::json::value& Value);

    Object types are generated as explicit Deserializer<T>
    specializations.

    Named unions are generated explicitly from UnionResolution
    instead of relying on Boost.JSON's generic std::variant
    selection.

    This is important because Telegram polymorphic unions have
    semantic discriminators such as:

        MessageOrigin       -> type
        ChatBoostSource     -> source

    and field-value resolution such as:

        MaybeInaccessibleMessage
            date == 0       -> InaccessibleMessage
            date > 0        -> Message
    """

    def __init__(
        self,
        model: TelegramModel,
        context: CppContext,
    ) -> None:
        self.model = model
        self.context = context

    def generate(self) -> str:
        includes = self._collect_includes()

        sections: list[str] = []

        sections.append(
            self._render_preamble(includes)
        )

        sections.append(
            self._render_primary_templates()
        )

        sections.append(
            self._render_forward_declarations()
        )

        sections.append(
            self._render_object_definitions()
        )

        sections.append(
            self._render_union_definitions()
        )

        sections.append(
            self._render_public_api()
        )

        sections.append(
            self._render_epilogue()
        )

        return "\n".join(
            section
            for section in sections
            if section
        )

    # ------------------------------------------------------------------
    # Includes
    # ------------------------------------------------------------------

    def _collect_includes(self) -> list[str]:
        includes: set[str] = {
            "<boost/json.hpp>",
            "<exception>",
            "<memory>",
            "<optional>",
            "<stdexcept>",
            "<string>",
            "<variant>",
            "<vector>",
        }

        # Object / enum / other named type headers.
        for item in self.model.types:
            includes.add(
                f'"TelegramBotAPI/Types/{item.name}.HPP"'
            )

        # Named union aliases themselves MUST be included.
        #
        # A named union is emitted by TypeGenerator as:
        #
        #     using MessageOrigin = std::variant<...>;
        #
        # The alias declaration is therefore required before
        # Deserializer<MessageOrigin> is declared.
        for union in self.model.unions:
            includes.add(
                f'"TelegramBotAPI/Types/{union.name}.HPP"'
            )

            includes.update(
                self._collect_union_includes(union)
            )

        return sorted(includes)

    def _collect_union_includes(
        self,
        union: UnionDefinition,
    ) -> set[str]:
        result: set[str] = set()

        for alternative in union.alternatives:
            result.update(
                self._collect_typeref_includes(
                    alternative
                )
            )

        return result

    def _collect_typeref_includes(
        self,
        type_ref: TypeRef,
    ) -> set[str]:
        result: set[str] = set()

        if type_ref.is_object():
            if type_ref.name == "InputFile":
                return result

            if type_ref.name:
                result.add(
                    f'"TelegramBotAPI/Types/{type_ref.name}.HPP"'
                )

            return result

        if type_ref.is_array():
            if type_ref.element is not None:
                result.update(
                    self._collect_typeref_includes(
                        type_ref.element
                    )
                )

            return result

        if type_ref.is_union():
            if (
                type_ref.union_info is not None
                and type_ref.union_info.name
            ):
                result.add(
                    f'"TelegramBotAPI/Types/'
                    f'{type_ref.union_info.name}.HPP"'
                )

            for alternative in type_ref.alternatives:
                result.update(
                    self._collect_typeref_includes(
                        alternative
                    )
                )

            return result

        return result

    # ------------------------------------------------------------------
    # Preamble
    # ------------------------------------------------------------------

    def _render_preamble(
        self,
        includes: list[str],
    ) -> str:
        lines = [
            "#ifndef TELEGRAMBOTAPI_JSON_DESERIALIZER_HPP",
            "#define TELEGRAMBOTAPI_JSON_DESERIALIZER_HPP",
            "",
        ]

        for include in includes:
            lines.append(
                f"#include {include}"
            )

        lines.extend(
            [
                "",
                f"namespace {JSON_NAMESPACE} {{",
                "",
            ]
        )

        return "\n".join(lines)

    # ------------------------------------------------------------------
    # Primary templates
    # ------------------------------------------------------------------

    def _render_primary_templates(self) -> str:
        return """\
template <typename T>
struct Deserializer;

template <typename T>
T FromJson(
    const boost::json::value &Value
) {
    return Deserializer<T>::Deserialize(Value);
}

template <typename T>
T FromJson(
    const boost::json::value *Value
) {
    if (Value == nullptr) {
        throw std::invalid_argument(
            "Cannot deserialize from null JSON value pointer"
        );
    }

    return FromJson<T>(*Value);
}

template <>
struct Deserializer<bool> {
    static bool Deserialize(const boost::json::value &Value) {
        return boost::json::value_to<bool>(Value);
    }
};

template <>
struct Deserializer<long long> {
    static long long Deserialize(const boost::json::value &Value) {
        return boost::json::value_to<long long>(Value);
    }
};

template <>
struct Deserializer<double> {
    static double Deserialize(const boost::json::value &Value) {
        return boost::json::value_to<double>(Value);
    }
};

template <>
struct Deserializer<std::string> {
    static std::string Deserialize(const boost::json::value &Value) {
        return boost::json::value_to<std::string>(Value);
    }
};

template <typename T>
struct Deserializer<std::optional<T>> {
    static std::optional<T> Deserialize(
        const boost::json::value &Value
    ) {
        if (Value.is_null()) {
            return std::nullopt;
        }

        return FromJson<T>(Value);
    }
};

template <typename T>
struct Deserializer<std::vector<T>> {
    static std::vector<T> Deserialize(
        const boost::json::value &Value
    ) {
        const auto &Array = Value.as_array();
        std::vector<T> Result;
        Result.reserve(Array.size());

        for (const auto &Element : Array) {
            Result.push_back(FromJson<T>(Element));
        }

        return Result;
    }
};

template <typename... Types>
struct Deserializer<std::variant<Types...>> {
    static std::variant<Types...> Deserialize(
        const boost::json::value &Value
    ) {
        return TryDeserialize<Types...>(Value);
    }

private:
    template <typename First>
    static std::variant<Types...> TryDeserialize(
        const boost::json::value &Value
    ) {
        return FromJson<First>(Value);
    }

    template <typename First, typename Second, typename... Rest>
    static std::variant<Types...> TryDeserialize(
        const boost::json::value &Value
    ) {
        try {
            return FromJson<First>(Value);
        } catch (...) {
            return TryDeserialize<Second, Rest...>(Value);
        }
    }
};

template <typename T>
struct Deserializer<std::shared_ptr<T>> {
    static std::shared_ptr<T> Deserialize(
        const boost::json::value &Value
    ) {
        return std::make_shared<T>(FromJson<T>(Value));
    }
};
"""

    # ------------------------------------------------------------------
    # Explicit specialization declarations
    # ------------------------------------------------------------------

    def _render_forward_declarations(self) -> str:
        lines: list[str] = []

        lines.append(
            "/* Deserializer specializations */"
        )
        lines.append("")

        for item in self.model.types:
            if item.kind != TypeKind.OBJECT or item.name == "InputFile":
                continue

            qualified = (
                f"{TYPE_NAMESPACE}::{item.name}"
            )

            lines.append("template <>")
            lines.append(
                f"struct Deserializer<{qualified}> {{"
            )
            lines.append(
                f"    static {qualified} Deserialize("
            )
            lines.append(
                "        const boost::json::value &Value"
            )
            lines.append("    );")
            lines.append("};")
            lines.append("")

        for union in self.model.unions:
            qualified = (
                f"{TYPE_NAMESPACE}::{union.name}"
            )

            lines.append("template <>")
            lines.append(
                f"struct Deserializer<{qualified}> {{"
            )
            lines.append(
                f"    static {qualified} Deserialize("
            )
            lines.append(
                "        const boost::json::value &Value"
            )
            lines.append("    );")
            lines.append("};")
            lines.append("")

        return "\n".join(lines)

    # ------------------------------------------------------------------
    # Object deserializers
    # ------------------------------------------------------------------

    def _render_object_definitions(self) -> str:
        sections: list[str] = [
            "/* Object deserializers */"
        ]

        for item in self.model.types:
            if item.kind != TypeKind.OBJECT or item.name == "InputFile":
                continue

            sections.append(
                self._render_object_definition(item)
            )

        return "\n\n".join(sections)

    def _render_object_definition(
        self,
        item: TelegramType,
    ) -> str:
        qualified = (
            f"{TYPE_NAMESPACE}::{item.name}"
        )

        lines: list[str] = []

        lines.append(
            f"inline {qualified} "
            f"Deserializer<{qualified}>::Deserialize("
        )
        lines.append(
            "    const boost::json::value &Value"
        )
        lines.append(") {")

        lines.append(
            "    const auto &ObjectValue = Value.as_object();"
        )
        lines.append("")

        lines.append(
            f"    {qualified} Result{{}};"
        )
        lines.append("")

        for field in item.fields:
            lines.extend(
                self._render_field_assignment(
                    field,
                    owner=item.name,
                )
            )

        lines.append("")
        lines.append("    return Result;")
        lines.append("}")

        return "\n".join(lines)

    def _render_field_assignment(
        self,
        field,
        owner: str,
    ) -> list[str]:
        json_name = field.name
        cpp_name = field.cpp_name

        lines: list[str] = []

        if field.required:
            expression = (
                self._deserialize_expression(
                    field.type,
                    f'ObjectValue.at("{json_name}")',
                    owner=owner,
                )
            )

            lines.append(
                f"    Result.{cpp_name} = {expression};"
            )

            return lines

        lines.append(
            f'    if (ObjectValue.if_contains("{json_name}")) {{'
        )

        expression = (
            self._deserialize_expression(
                field.type,
                f'ObjectValue.at("{json_name}")',
                owner=owner,
            )
        )

        lines.append(
            f"        Result.{cpp_name} = {expression};"
        )

        lines.append("    }")

        return lines

    # ------------------------------------------------------------------
    # Generic deserialization expressions
    # ------------------------------------------------------------------

    def _deserialize_expression(
        self,
        type_ref: TypeRef,
        expression: str,
        owner: str | None = None,
    ) -> str:
        if type_ref.is_integer():
            return (
                "boost::json::value_to<long long>"
                f"({expression})"
            )

        if type_ref.is_string():
            return (
                "boost::json::value_to<std::string>"
                f"({expression})"
            )

        if type_ref.is_boolean():
            return (
                "boost::json::value_to<bool>"
                f"({expression})"
            )

        if type_ref.is_float():
            return (
                "boost::json::value_to<double>"
                f"({expression})"
            )

        if type_ref.is_unknown():
            return expression

        if type_ref.is_object():
            return self._deserialize_object_expression(
                type_ref,
                expression,
                owner,
            )

        if type_ref.is_array():
            return self._deserialize_array_expression(
                type_ref,
                expression,
                owner,
            )

        if type_ref.is_union():
            return self._deserialize_union_expression(
                type_ref,
                expression,
                owner,
            )

        return expression

    # ------------------------------------------------------------------
    # Object deserialization
    # ------------------------------------------------------------------

    def _deserialize_object_expression(
        self,
        type_ref: TypeRef,
        expression: str,
        owner: str | None,
    ) -> str:
        if not type_ref.name:
            return expression

        if type_ref.name == "InputFile":
            raise ValueError(
                "InputFile is an input-only transport type and "
                "cannot be deserialized from Telegram API JSON"
            )

        cpp_type = self.context.type_to_cpp(
            type_ref,
            owner=owner,
        ).type

        return (
            f"FromJson<{cpp_type}>"
            f"({expression})"
        )

    # ------------------------------------------------------------------
    # Array deserialization
    # ------------------------------------------------------------------

    def _deserialize_array_expression(
        self,
        type_ref: TypeRef,
        expression: str,
        owner: str | None,
    ) -> str:
        if type_ref.element is None:
            return (
                "boost::json::value_to"
                "<std::vector<boost::json::value>>"
                f"({expression})"
            )

        element = type_ref.element

        if (
            element.is_integer()
            or element.is_string()
            or element.is_boolean()
            or element.is_float()
        ):
            element_cpp = (
                self.context.type_to_cpp(
                    element,
                    owner=owner,
                ).type
            )

            return (
                f"boost::json::value_to"
                f"<std::vector<{element_cpp}>>"
                f"({expression})"
            )

        return self._manual_vector_expression(
            element,
            expression,
            owner,
        )

    def _manual_vector_expression(
        self,
        element: TypeRef,
        expression: str,
        owner: str | None,
    ) -> str:
        element_cpp = (
            self.context.type_to_cpp(
                element,
                owner=owner,
            ).type
        )

        element_expression = (
            self._deserialize_expression(
                element,
                "Item",
                owner,
            )
        )

        return (
            "([&]() { "
            f"std::vector<{element_cpp}> Result; "
            f"for (const auto &Item : "
            f"{expression}.as_array()) "
            "{ "
            f"Result.push_back({element_expression}); "
            "} "
            "return Result; "
            "})()"
        )

    # ------------------------------------------------------------------
    # Union deserialization
    # ------------------------------------------------------------------

    def _deserialize_union_expression(
        self,
        type_ref: TypeRef,
        expression: str,
        owner: str | None,
    ) -> str:
        if (
            type_ref.union_info is not None
            and type_ref.union_info.name
        ):
            union_name = (
                type_ref.union_info.name
            )

            qualified = (
                f"{TYPE_NAMESPACE}::{union_name}"
            )

            return (
                f"FromJson<{qualified}>"
                f"({expression})"
            )

        if not type_ref.alternatives:
            return expression

        return self._manual_inline_union_expression(
            type_ref,
            expression,
            owner,
        )

    def _manual_inline_union_expression(
        self,
        type_ref: TypeRef,
        expression: str,
        owner: str | None,
    ) -> str:
        alternatives = [
            alternative
            for alternative in type_ref.alternatives
            if alternative is not None
        ]

        if not alternatives:
            return expression

        return self._render_try_union(
            alternatives,
            expression,
            owner,
        )

    def _render_try_union(
        self,
        alternatives,
        expression: str,
        owner: str | None,
    ) -> str:
        first = alternatives[0]

        first_expression = (
            self._deserialize_expression(
                first,
                expression,
                owner,
            )
        )

        if len(alternatives) == 1:
            return first_expression

        variant_type = self._variant_cpp_type(
            alternatives,
            owner,
        )

        attempts = self._render_union_attempts(
            alternatives[1:],
            expression,
            owner,
        )

        return (
            "([&]() -> "
            f"{variant_type} "
            "{ "
            "std::exception_ptr LastError; "
            f"try {{ return {first_expression}; }} "
            "catch (...) { "
            "LastError = std::current_exception(); "
            "} "
            f"{attempts} "
            "if (LastError) { "
            "std::rethrow_exception(LastError); "
            "} "
            'throw std::invalid_argument('
            '"Unable to deserialize inline union"'
            "); "
            "})()"
        )

    def _render_union_attempts(
        self,
        alternatives,
        expression: str,
        owner: str | None,
    ) -> str:
        if not alternatives:
            return ""

        alternative = alternatives[0]

        alternative_expression = (
            self._deserialize_expression(
                alternative,
                expression,
                owner,
            )
        )

        remaining = self._render_union_attempts(
            alternatives[1:],
            expression,
            owner,
        )

        return (
            f"try {{ return {alternative_expression}; }} "
            "catch (...) { "
            f"{remaining}"
            "} "
        )

    def _variant_cpp_type(
        self,
        alternatives,
        owner: str | None,
    ) -> str:
        cpp_types: list[str] = []

        for alternative in alternatives:
            cpp_type = (
                self.context.type_to_cpp(
                    alternative,
                    owner=owner,
                ).type
            )

            if cpp_type not in cpp_types:
                cpp_types.append(cpp_type)

        if len(cpp_types) == 1:
            return cpp_types[0]

        return (
            "std::variant<"
            + ", ".join(cpp_types)
            + ">"
        )

    # ------------------------------------------------------------------
    # Named union definitions
    # ------------------------------------------------------------------

    def _render_union_definitions(self) -> str:
        sections: list[str] = [
            "/* Named union deserializers */"
        ]

        for union in self.model.unions:
            sections.append(
                self._render_union_definition(union)
            )

        return "\n\n".join(sections)

    def _render_union_definition(
        self,
        union: UnionDefinition,
    ) -> str:
        resolution = union.resolution

        if resolution is None:
            raise ValueError(
                f"Union {union.name!r} has no resolution"
            )

        if (
            resolution.kind
            == UnionResolutionKind.DISCRIMINATOR
        ):
            return self._render_discriminator_union(
                union,
                resolution.field,
                resolution.mapping,
            )

        if (
            resolution.kind
            == UnionResolutionKind.DISCRIMINATOR_PRESENCE
        ):
            return self._render_discriminator_presence_union(
                union,
                resolution.field,
                resolution.mapping,
                resolution.presence_mapping,
            )

        if (
            resolution.kind
            == UnionResolutionKind.PRESENCE
        ):
            return self._render_presence_union(
                union,
                resolution.presence_requirements,
            )

        if (
            resolution.kind
            == UnionResolutionKind.FIELD_VALUE
        ):
            return self._render_field_value_union(
                union,
                resolution.field,
                resolution.mapping,
            )

        raise ValueError(
            "Cannot generate deserializer for "
            f"unresolved union {union.name!r}"
        )

    # ------------------------------------------------------------------
    # Discriminator unions
    # ------------------------------------------------------------------

    def _render_discriminator_union(
        self,
        union,
        field,
        mapping,
    ):
        if not field:
            raise ValueError(
                f"Discriminator union {union.name!r} "
                "has no discriminator field"
            )

        qualified_union = (
            f"{TYPE_NAMESPACE}::{union.name}"
        )

        lines: list[str] = []

        lines.append(
            f"inline {qualified_union} "
            f"Deserializer<{qualified_union}>::Deserialize("
        )
        lines.append(
            "    const boost::json::value &Value"
        )
        lines.append(") {")

        lines.append(
            "    const auto &ObjectValue = "
            "Value.as_object();"
        )
        lines.append("")

        lines.append(
            f'    const auto &Discriminator = '
            f'ObjectValue.at("{field}");'
        )

        lines.append(
            "    const std::string "
            "DiscriminatorValue = "
            "boost::json::value_to<std::string>"
            "(Discriminator);"
        )

        lines.append("")

        for index, (
            value,
            alternative_name,
        ) in enumerate(
            sorted(mapping.items())
        ):
            keyword = (
                "if"
                if index == 0
                else "else if"
            )

            qualified_alternative = (
                f"{TYPE_NAMESPACE}::{alternative_name}"
            )

            lines.append(
                f'    {keyword} '
                f'(DiscriminatorValue == "{value}") {{'
            )

            lines.append(
                f"        return "
                f"FromJson<{qualified_alternative}>"
                "(Value);"
            )

            lines.append("    }")

        lines.append("")

        lines.append(
            "    throw std::invalid_argument("
        )

        lines.append(
            f'        "Unknown discriminator value '
            f'for {union.name}: " '
            '+ DiscriminatorValue'
        )

        lines.append("    );")
        lines.append("}")

        return "\n".join(lines)

    # ------------------------------------------------------------------
    # Discriminator + presence unions
    # ------------------------------------------------------------------

    def _render_discriminator_presence_union(
        self,
        union,
        field,
        mapping,
        presence_mapping,
    ):
        """
        Render a union whose primary discriminator may have duplicate
        values, with required-field presence resolving the duplicates.

        Example::

            type == "audio"
                audio_file_id present -> CachedAudio
                audio_url present      -> Audio
        """
        if not field:
            raise ValueError(
                f"Discriminator-presence union {union.name!r} "
                "has no discriminator field"
            )

        qualified_union = (
            f"{TYPE_NAMESPACE}::{union.name}"
        )

        lines: list[str] = []

        lines.append(
            f"inline {qualified_union} "
            f"Deserializer<{qualified_union}>::Deserialize("
        )
        lines.append(
            "    const boost::json::value &Value"
        )
        lines.append(") {")

        lines.append(
            "    const auto &ObjectValue = "
            "Value.as_object();"
        )
        lines.append("")

        lines.append(
            f'    const auto &Discriminator = '
            f'ObjectValue.at("{field}");'
        )

        lines.append(
            "    const std::string "
            "DiscriminatorValue = "
            "boost::json::value_to<std::string>"
            "(Discriminator);"
        )

        lines.append("")

        first = True

        for value, alternative_name in sorted(
            mapping.items()
        ):
            keyword = "if" if first else "else if"
            first = False

            qualified_alternative = (
                f"{TYPE_NAMESPACE}::{alternative_name}"
            )

            lines.append(
                f'    {keyword} '
                f'(DiscriminatorValue == "{value}") {{'
            )

            lines.append(
                f"        return "
                f"FromJson<{qualified_alternative}>"
                "(Value);"
            )

            lines.append("    }")

        for value, field_mapping in sorted(
            presence_mapping.items()
        ):
            keyword = "if" if first else "else if"
            first = False

            lines.append(
                f'    {keyword} '
                f'(DiscriminatorValue == "{value}") {{'
            )

            for index, (
                presence_field,
                alternative_name,
            ) in enumerate(
                sorted(field_mapping.items())
            ):
                nested_keyword = (
                    "if"
                    if index == 0
                    else "else if"
                )

                qualified_alternative = (
                    f"{TYPE_NAMESPACE}::{alternative_name}"
                )

                lines.append(
                    f'        {nested_keyword} '
                    f'(ObjectValue.if_contains("{presence_field}")) {{'
                )

                lines.append(
                    f"            return "
                    f"FromJson<{qualified_alternative}>"
                    "(Value);"
                )

                lines.append("        }")

            lines.append("")
            lines.append(
                "        throw std::invalid_argument("
            )
            lines.append(
                f'            "Unable to resolve '
                f'{union.name} for discriminator value '
                f'{value}"'
            )
            lines.append("        );")
            lines.append("    }")

        lines.append("")
        lines.append(
            "    throw std::invalid_argument("
        )
        lines.append(
            f'        "Unknown discriminator value '
            f'for {union.name}: " '
            '+ DiscriminatorValue'
        )
        lines.append("    );")
        lines.append("}")

        return "\n".join(lines)

    # ------------------------------------------------------------------
    # Presence-only unions
    # ------------------------------------------------------------------

    def _render_presence_union(
        self,
        union,
        presence_requirements,
    ):
        """
        Render a polymorphic union with no common discriminator field.

        Each alternative is described by its complete set of required JSON
        fields.  More specific signatures are tested first, so an object
        satisfying both a base-like alternative and a more specific
        alternative resolves to the more specific alternative.
        """
        qualified_union = (
            f"{TYPE_NAMESPACE}::{union.name}"
        )

        lines: list[str] = []

        lines.append(
            f"inline {qualified_union} "
            f"Deserializer<{qualified_union}>::Deserialize("
        )
        lines.append(
            "    const boost::json::value &Value"
        )
        lines.append(") {")

        lines.append(
            "    const auto &ObjectValue = "
            "Value.as_object();"
        )
        lines.append("")

        # Test the most specific required-field signatures first.
        ordered = sorted(
            presence_requirements.items(),
            key=lambda item: (
                -len(item[1]),
                item[0],
            ),
        )

        for index, (
            alternative_name,
            required_fields,
        ) in enumerate(ordered):
            keyword = "if" if index == 0 else "else if"

            condition = " && ".join(
                f'ObjectValue.if_contains("{field}")'
                for field in required_fields
            )

            qualified_alternative = (
                f"{TYPE_NAMESPACE}::{alternative_name}"
            )

            lines.append(
                f"    {keyword} ({condition}) {{"
            )

            lines.append(
                f"        return "
                f"FromJson<{qualified_alternative}>"
                "(Value);"
            )

            lines.append("    }")

        lines.append("")
        lines.append(
            "    throw std::invalid_argument("
        )
        lines.append(
            f'        "Unable to resolve presence union '
            f'{union.name}"'
        )
        lines.append("    );")
        lines.append("}")

        return "\n".join(lines)

    # ------------------------------------------------------------------
    # Field-value unions
    # ------------------------------------------------------------------

    def _render_field_value_union(
        self,
        union,
        field,
        mapping,
    ):
        if not field:
            raise ValueError(
                f"Field-value union {union.name!r} "
                "has no resolution field"
            )

        qualified_union = (
            f"{TYPE_NAMESPACE}::{union.name}"
        )

        lines: list[str] = []

        lines.append(
            f"inline {qualified_union} "
            f"Deserializer<{qualified_union}>::Deserialize("
        )

        lines.append(
            "    const boost::json::value &Value"
        )

        lines.append(") {")

        lines.append(
            "    const auto &ObjectValue = "
            "Value.as_object();"
        )

        lines.append("")

        lines.append(
            f'    const auto &ResolutionValue = '
            f'ObjectValue.at("{field}");'
        )

        lines.append("")

        if "0" in mapping:
            alternative_name = mapping["0"]

            alternative_cpp_type = (
                self._named_union_alternative_cpp_type(
                    union.name,
                    alternative_name,
                )
            )

            lines.append(
                "    if ("
                "boost::json::value_to<long long>"
                "(ResolutionValue) == 0"
                ") {"
            )

            lines.append(
                f"        return "
                f"FromJson<{alternative_cpp_type}>"
                "(Value);"
            )

            lines.append("    }")

        if "positive" in mapping:
            alternative_name = mapping["positive"]

            alternative_cpp_type = (
                self._named_union_alternative_cpp_type(
                    union.name,
                    alternative_name,
                )
            )

            lines.append(
                "    if ("
                "boost::json::value_to<long long>"
                "(ResolutionValue) > 0"
                ") {"
            )

            lines.append(
                f"        return "
                f"FromJson<{alternative_cpp_type}>"
                "(Value);"
            )

            lines.append("    }")

        lines.append("")

        lines.append(
            "    throw std::invalid_argument("
        )

        lines.append(
            f'        "Invalid field-value '
            f'discriminator for {union.name}"'
        )

        lines.append("    );")
        lines.append("}")

        return "\n".join(lines)

    def _named_union_alternative_cpp_type(
        self,
        union_name: str,
        alternative_name: str,
    ) -> str:
        """
        Return the exact C++ alternative type used by the
        generated named-union alias.

        Recursive alternatives must use std::shared_ptr<T>
        because the named union itself uses shared_ptr for
        recursive alternatives.
        """

        recursive_alternatives = (
            self.context.graph
            .recursive_union_alternatives_global(
                union_name
            )
        )

        qualified = (
            f"{TYPE_NAMESPACE}::{alternative_name}"
        )

        if alternative_name in recursive_alternatives:
            return (
                f"std::shared_ptr<{qualified}>"
            )

        return qualified

    # ------------------------------------------------------------------
    # Public API
    # ------------------------------------------------------------------

    def _render_public_api(self):
        return """\
template <typename T>
T Deserialize(
    const boost::json::value &Value
) {
    return FromJson<T>(Value);
}
"""

    # ------------------------------------------------------------------
    # Epilogue
    # ------------------------------------------------------------------

    def _render_epilogue(self):
        return """\
}

#endif // TELEGRAMBOTAPI_JSON_DESERIALIZER_HPP
"""
