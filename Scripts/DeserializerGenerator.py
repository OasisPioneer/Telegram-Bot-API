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

    Runtime error model:

        Detail::DeserializationMismatch
            The JSON value does not match the current candidate.

        std::invalid_argument
            The JSON matched structurally but is invalid or ambiguous.

    Only DeserializationMismatch is consumed by anonymous-union
    candidate probing.
    """

    def __init__(
        self,
        model: TelegramModel,
        context: CppContext,
    ) -> None:
        self.model = model
        self.context = context

    # ==================================================================
    # Public
    # ==================================================================

    def generate(self) -> str:
        sections = [
            self._render_preamble(
                self._collect_includes()
            ),
            self._render_primary_templates(),
            self._render_forward_declarations(),
            self._render_object_definitions(),
            self._render_union_definitions(),
            self._render_public_api(),
            self._render_epilogue(),
        ]

        return "\n".join(
            section
            for section in sections
            if section
        )

    # ==================================================================
    # Includes
    # ==================================================================

    def _collect_includes(self) -> list[str]:
        includes: set[str] = {
            "<boost/json.hpp>",
            "<boost/system/system_error.hpp>",
            "<memory>",
            "<optional>",
            "<stdexcept>",
            "<string>",
            "<variant>",
            "<vector>",
        }

        for item in self.model.types:
            includes.add(
                f'"TelegramBotAPI/Types/{item.name}.HPP"'
            )

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
                    f'"TelegramBotAPI/Types/'
                    f'{type_ref.name}.HPP"'
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

    # ==================================================================
    # Preamble
    # ==================================================================

    def _render_preamble(
        self,
        includes: list[str],
    ) -> str:
        lines = [
            "#ifndef TELEGRAMBOTAPI_JSON_DESERIALIZER_HPP",
            "#define TELEGRAMBOTAPI_JSON_DESERIALIZER_HPP",
            "",
        ]

        lines.extend(
            f"#include {include}"
            for include in includes
        )

        lines.extend(
            [
                "",
                f"namespace {JSON_NAMESPACE} {{",
                "",
            ]
        )

        return "\n".join(lines)

    # ==================================================================
    # Primary templates
    # ==================================================================

    def _render_primary_templates(self) -> str:
        lines = [
            "namespace Detail {",
            "",
            "class DeserializationMismatch : public std::runtime_error",
            "{",
            "public:",
            "    using std::runtime_error::runtime_error;",
            "};",
            "",
            "template <typename T>",
            "T ConvertValue(const boost::json::value& Value)",
            "{",
            "    try",
            "    {",
            "        return boost::json::value_to<T>(Value);",
            "    }",
            "    catch (const boost::system::system_error& Error)",
            "    {",
            "        throw DeserializationMismatch(Error.what());",
            "    }",
            "}",
            "",
            "inline void RequireObject(",
            "    const boost::json::value& Value)",
            "{",
            "    if (!Value.is_object())",
            "    {",
            '        throw DeserializationMismatch("Expected JSON object");',
            "    }",
            "}",
            "",
            "inline void RequireArray(",
            "    const boost::json::value& Value)",
            "{",
            "    if (!Value.is_array())",
            "    {",
            '        throw DeserializationMismatch("Expected JSON array");',
            "    }",
            "}",
            "",
            "} // namespace Detail",
            "",
            "template <typename T>",
            "struct Deserializer;",
            "",
            "template <typename T>",
            "T FromJson(const boost::json::value& Value)",
            "{",
            "    return Deserializer<T>::Deserialize(Value);",
            "}",
            "",
        ]

        lines.extend(
            self._render_primitive_deserializers()
        )

        lines.extend(
            self._render_container_deserializers()
        )

        return "\n".join(lines)

    def _render_primitive_deserializers(self) -> list[str]:
        return [
            "template <>",
            "struct Deserializer<long long>",
            "{",
            "    static long long Deserialize(",
            "        const boost::json::value& Value)",
            "    {",
            "        if (!Value.is_int64() && !Value.is_uint64())",
            "        {",
            '            throw Detail::DeserializationMismatch(',
            '                "Expected integer"',
            "            );",
            "        }",
            "",
            "        return Detail::ConvertValue<long long>(Value);",
            "    }",
            "};",
            "",
            "template <>",
            "struct Deserializer<double>",
            "{",
            "    static double Deserialize(",
            "        const boost::json::value& Value)",
            "    {",
            "        if (!Value.is_number())",
            "        {",
            '            throw Detail::DeserializationMismatch(',
            '                "Expected number"',
            "            );",
            "        }",
            "",
            "        return Detail::ConvertValue<double>(Value);",
            "    }",
            "};",
            "",
            "template <>",
            "struct Deserializer<bool>",
            "{",
            "    static bool Deserialize(",
            "        const boost::json::value& Value)",
            "    {",
            "        if (!Value.is_bool())",
            "        {",
            '            throw Detail::DeserializationMismatch(',
            '                "Expected boolean"',
            "            );",
            "        }",
            "",
            "        return Detail::ConvertValue<bool>(Value);",
            "    }",
            "};",
            "",
            "template <>",
            "struct Deserializer<std::string>",
            "{",
            "    static std::string Deserialize(",
            "        const boost::json::value& Value)",
            "    {",
            "        if (!Value.is_string())",
            "        {",
            '            throw Detail::DeserializationMismatch(',
            '                "Expected string"',
            "            );",
            "        }",
            "",
            "        return Detail::ConvertValue<std::string>(Value);",
            "    }",
            "};",
            "",
        ]

    def _render_container_deserializers(self) -> list[str]:
        return [
            "template <typename T>",
            "struct Deserializer<std::optional<T>>",
            "{",
            "    static std::optional<T> Deserialize(",
            "        const boost::json::value& Value)",
            "    {",
            "        if (Value.is_null())",
            "        {",
            "            return std::nullopt;",
            "        }",
            "",
            "        return FromJson<T>(Value);",
            "    }",
            "};",
            "",
            "template <typename T>",
            "struct Deserializer<std::shared_ptr<T>>",
            "{",
            "    static std::shared_ptr<T> Deserialize(",
            "        const boost::json::value& Value)",
            "    {",
            "        if (Value.is_null())",
            "        {",
            "            return nullptr;",
            "        }",
            "",
            "        return std::make_shared<T>(",
            "            FromJson<T>(Value)",
            "        );",
            "    }",
            "};",
            "",
            "template <typename T>",
            "struct Deserializer<std::vector<T>>",
            "{",
            "    static std::vector<T> Deserialize(",
            "        const boost::json::value& Value)",
            "    {",
            "        Detail::RequireArray(Value);",
            "",
            "        const auto& Array = Value.as_array();",
            "",
            "        std::vector<T> Result;",
            "        Result.reserve(Array.size());",
            "",
            "        for (const auto& Element : Array)",
            "        {",
            "            Result.emplace_back(",
            "                FromJson<T>(Element)",
            "            );",
            "        }",
            "",
            "        return Result;",
            "    }",
            "};",
            "",
            "template <typename... Types>",
            "struct Deserializer<std::variant<Types...>>",
            "{",
            "    static std::variant<Types...> Deserialize(",
            "        const boost::json::value& Value)",
            "    {",
            "        return TryAlternatives<Types...>(Value);",
            "    }",
            "",
            "private:",
            "    template <typename T>",
            "    static std::variant<Types...> TryAlternative(",
            "        const boost::json::value& Value)",
            "    {",
            "        return std::variant<Types...>(",
            "            std::in_place_type<T>,",
            "            FromJson<T>(Value)",
            "        );",
            "    }",
            "",
            "    template <typename First>",
            "    static std::variant<Types...> TryAlternatives(",
            "        const boost::json::value& Value)",
            "    {",
            "        return TryAlternative<First>(Value);",
            "    }",
            "",
            "    template <typename First, typename Second, typename... Rest>",
            "    static std::variant<Types...> TryAlternatives(",
            "        const boost::json::value& Value)",
            "    {",
            "        try",
            "        {",
            "            return TryAlternative<First>(Value);",
            "        }",
            "        catch (const Detail::DeserializationMismatch&)",
            "        {",
            "            return TryAlternatives<Second, Rest...>(Value);",
            "        }",
            "    }",
            "};",
            "",
        ]

    # ==================================================================
    # Forward declarations
    # ==================================================================

    def _render_forward_declarations(self) -> str:
        lines: list[str] = []

        for item in self.model.types:
            if item.kind != TypeKind.OBJECT:
                continue

            lines.extend(
                [
                    "template <>",
                    f"struct Deserializer<{self._qualified(item.name)}>;",
                    "",
                ]
            )

        for union in self.model.unions:
            lines.extend(
                [
                    "template <>",
                    (
                        f"struct Deserializer<"
                        f"{self._qualified(union.name)}>;"
                    ),
                    "",
                ]
            )

        return "\n".join(lines)

    # ==================================================================
    # Objects
    # ==================================================================

    def _render_object_definitions(self) -> str:
        sections: list[str] = []

        for item in self.model.types:
            if item.kind != TypeKind.OBJECT:
                continue

            if item.name == "InputFile":
                continue

            sections.append(
                self._render_object_definition(item)
            )

        return "\n\n".join(sections)

    def _render_object_definition(
        self,
        item: TelegramType,
    ) -> str:
        cpp_type = self._qualified(item.name)

        lines = [
            "template <>",
            f"struct Deserializer<{cpp_type}>",
            "{",
            f"    static {cpp_type} Deserialize(",
            "        const boost::json::value& Value)",
            "    {",
            "        Detail::RequireObject(Value);",
            "",
            "        const auto& ObjectValue = Value.as_object();",
            "",
            f"        {cpp_type} Result{{}};",
            "",
        ]

        for field in item.fields:
            lines.extend(
                self._render_object_field(
                    field,
                    item.name,
                )
            )

        lines.extend(
            [
                "",
                "        return Result;",
                "    }",
                "};",
            ]
        )

        return "\n".join(lines)

    def _render_object_field(
        self,
        field,
        owner: str,
    ) -> list[str]:
        field_name = field.name
        cpp_field_name = field.cpp_name

        expression = self._deserialize_expression(
            field.type,
            "*FieldValue",
            owner,
        )

        lines = [
            (
                f'        if (const auto* FieldValue = '
                f'ObjectValue.if_contains("{field_name}"))'
            ),
            "        {",
            f"            Result.{cpp_field_name} =",
            f"                {expression};",
            "        }",
        ]

        if field.required:
            lines.extend(
                [
                    "        else",
                    "        {",
                    "            throw "
                    "Detail::DeserializationMismatch(",
                    f'                "Missing required field: '
                    f'{field_name}"',
                    "            );",
                    "        }",
                ]
            )

        return lines

    # ==================================================================
    # Expressions
    # ==================================================================

    def _deserialize_expression(
        self,
        type_ref: TypeRef,
        expression: str,
        owner: str | None = None,
    ) -> str:
        if type_ref.is_integer():
            return (
                f"FromJson<long long>({expression})"
            )

        if type_ref.is_float():
            return (
                f"FromJson<double>({expression})"
            )

        if type_ref.is_boolean():
            return (
                f"FromJson<bool>({expression})"
            )

        if type_ref.is_string():
            return (
                f"FromJson<std::string>({expression})"
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

        raise ValueError(
            f"Unsupported TypeRef: {type_ref!r}"
        )

    def _deserialize_object_expression(
        self,
        type_ref: TypeRef,
        expression: str,
        owner: str | None,
    ) -> str:
        if type_ref.name == "InputFile":
            raise ValueError(
                "InputFile cannot be deserialized from JSON"
            )

        cpp_type = self.context.type_to_cpp(
            type_ref,
            owner=owner,
        ).type

        if (
            type_ref.name
            and owner is not None
            and self.context.graph.requires_shared_ptr(
                owner,
                type_ref.name,
            )
        ):
            qualified_type = self._qualified(
                type_ref.name
            )

            return (
                f"std::make_shared<{qualified_type}>("
                f"FromJson<{qualified_type}>({expression})"
                ")"
            )

        return (
            f"FromJson<{cpp_type}>({expression})"
        )

    def _deserialize_array_expression(
        self,
        type_ref: TypeRef,
        expression: str,
        owner: str | None,
    ) -> str:
        if type_ref.element is None:
            raise ValueError(
                "Array TypeRef has no element type"
            )

        element_cpp = self.context.type_to_cpp(
            type_ref.element,
            owner=owner,
        ).type

        return (
            f"FromJson<std::vector<{element_cpp}>>"
            f"({expression})"
        )

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
            union_cpp = self._qualified(
                type_ref.union_info.name
            )

            return (
                f"FromJson<{union_cpp}>({expression})"
            )

        return self._render_inline_union_expression(
            type_ref,
            expression,
            owner,
        )

    # ==================================================================
    # Inline union
    # ==================================================================

    def _render_inline_union_expression(
        self,
        type_ref: TypeRef,
        expression: str,
        owner: str | None,
    ) -> str:
        alternatives = type_ref.alternatives

        if not alternatives:
            raise ValueError(
                "Inline union contains no alternatives"
            )

        if len(alternatives) == 1:
            return self._deserialize_expression(
                alternatives[0],
                expression,
                owner,
            )

        variant_type = self._variant_cpp_type(
            alternatives,
            owner,
        )

        branches = self._render_inline_union_branches(
            alternatives,
            variant_type,
            expression,
            owner,
        )

        return (
            "([&]() -> "
            f"{variant_type}"
            "\n"
            "        {\n"
            f"{branches}\n"
            "        })()"
        )

    def _render_inline_union_branches(
        self,
        alternatives: list[TypeRef],
        variant_type: str,
        expression: str,
        owner: str | None,
    ) -> str:
        lines: list[str] = []

        for alternative in alternatives:
            alternative_cpp = self.context.type_to_cpp(
                alternative,
                owner=owner,
            ).type

            deserialize_expression = (
                self._deserialize_expression(
                    alternative,
                    expression,
                    owner,
                )
            )

            lines.extend(
                [
                    "            try",
                    "            {",
                    f"                return {variant_type}(",
                    (
                        "                    "
                        f"std::in_place_type<{alternative_cpp}>,"
                    ),
                    (
                        "                    "
                        f"{deserialize_expression}"
                    ),
                    "                );",
                    "            }",
                    (
                        "            catch "
                        "(const Detail::DeserializationMismatch&)"
                    ),
                    "            {",
                    "            }",
                    "",
                ]
            )

        lines.extend(
            [
                "            throw "
                "Detail::DeserializationMismatch(",
                '                "No inline union alternative matched"',
                "            );",
            ]
        )

        return "\n".join(lines)

    # ==================================================================
    # Named unions
    # ==================================================================

    def _render_union_definitions(self) -> str:
        sections: list[str] = []

        for union in self.model.unions:
            sections.append(
                self._render_named_union_definition(union)
            )

        return "\n\n".join(sections)

    def _render_named_union_definition(
        self,
        union: UnionDefinition,
    ) -> str:
        resolution = union.resolution

        if resolution is None:
            raise ValueError(
                f"Union '{union.name}' has no resolution"
            )

        union_cpp = self._union_cpp_type(union)

        lines = [
            "template <>",
            (
                f"struct Deserializer<"
                f"{self._qualified(union.name)}>"
            ),
            "{",
            f"    static {union_cpp} Deserialize(",
            "        const boost::json::value& Value)",
            "    {",
            "        Detail::RequireObject(Value);",
            "",
            "        const auto& ObjectValue = Value.as_object();",
            "",
        ]

        renderer = {
            UnionResolutionKind.DISCRIMINATOR:
                self._render_discriminator_union,

            UnionResolutionKind.DISCRIMINATOR_PRESENCE:
                self._render_discriminator_presence_union,

            UnionResolutionKind.PRESENCE:
                self._render_presence_union,

            UnionResolutionKind.FIELD_VALUE:
                self._render_field_value_union,
        }.get(resolution.kind)

        if renderer is None:
            lines.extend(
                [
                    "        throw "
                    "Detail::DeserializationMismatch(",
                    (
                        f'            "Unsupported resolution strategy '
                        f'for union {union.name}"'
                    ),
                    "        );",
                ]
            )
        else:
            lines.extend(
                renderer(
                    union,
                    indent="        ",
                )
            )

        lines.extend(
            [
                "    }",
                "};",
            ]
        )

        return "\n".join(lines)

    # ==================================================================
    # Discriminator
    # ==================================================================

    def _render_discriminator_union(
        self,
        union: UnionDefinition,
        indent: str,
    ) -> list[str]:
        resolution = union.resolution

        if resolution is None or not resolution.field:
            raise ValueError(
                f"Discriminator union '{union.name}' "
                "has no discriminator field"
            )

        field = resolution.field

        lines = [
            (
                f'{indent}const auto* DiscriminatorValue = '
                f'ObjectValue.if_contains("{field}");'
            ),
            f"{indent}if (DiscriminatorValue == nullptr)",
            f"{indent}{{",
            (
                f"{indent}    throw "
                f"Detail::DeserializationMismatch("
            ),
            (
                f'{indent}        "Missing discriminator field: '
                f'{field}"'
            ),
            f"{indent}    );",
            f"{indent}}}",
            "",
            (
                f"{indent}const auto Discriminator = "
                f"FromJson<std::string>(*DiscriminatorValue);"
            ),
            "",
        ]

        for value, alternative_name in (
            resolution.mapping.items()
        ):
            alternative = self._find_union_alternative(
                union,
                alternative_name,
            )

            cpp_type = (
                self._named_union_alternative_cpp_type(
                    union,
                    alternative,
                )
            )

            lines.extend(
                [
                    (
                        f'{indent}if '
                        f'(Discriminator == "{value}")'
                    ),
                    f"{indent}{{",
                    (
                        f"{indent}    return "
                        f"FromJson<{cpp_type}>(Value);"
                    ),
                    f"{indent}}}",
                    "",
                ]
            )

        lines.extend(
            [
                (
                    f"{indent}throw "
                    f"Detail::DeserializationMismatch("
                ),
                (
                    f'{indent}    "Unknown discriminator value for '
                    f'union {union.name}"'
                ),
                f"{indent});",
            ]
        )

        return lines

    # ==================================================================
    # Discriminator + presence
    # ==================================================================

    def _render_discriminator_presence_union(
        self,
        union: UnionDefinition,
        indent: str,
    ) -> list[str]:
        resolution = union.resolution

        if resolution is None or not resolution.field:
            raise ValueError(
                f"Discriminator-presence union '{union.name}' "
                "has no discriminator field"
            )

        field = resolution.field

        lines = [
            (
                f'{indent}const auto* DiscriminatorValue = '
                f'ObjectValue.if_contains("{field}");'
            ),
            f"{indent}if (DiscriminatorValue == nullptr)",
            f"{indent}{{",
            (
                f"{indent}    throw "
                f"Detail::DeserializationMismatch("
            ),
            (
                f'{indent}        "Missing discriminator field: '
                f'{field}"'
            ),
            f"{indent}    );",
            f"{indent}}}",
            "",
            (
                f"{indent}const auto Discriminator = "
                f"FromJson<std::string>(*DiscriminatorValue);"
            ),
            "",
        ]

        for value, alternative_name in (
            resolution.mapping.items()
        ):
            alternative = self._find_union_alternative(
                union,
                alternative_name,
            )

            cpp_type = (
                self._named_union_alternative_cpp_type(
                    union,
                    alternative,
                )
            )

            lines.extend(
                [
                    (
                        f'{indent}if '
                        f'(Discriminator == "{value}")'
                    ),
                    f"{indent}{{",
                    (
                        f"{indent}    return "
                        f"FromJson<{cpp_type}>(Value);"
                    ),
                    f"{indent}}}",
                    "",
                ]
            )

        for discriminator_value, mapping in (
            resolution.presence_mapping.items()
        ):
            lines.extend(
                [
                    (
                        f'{indent}if '
                        f'(Discriminator == "{discriminator_value}")'
                    ),
                    f"{indent}{{",
                    f"{indent}    int MatchCount = 0;",
                    f"{indent}    int MatchIndex = -1;",
                    "",
                ]
            )

            candidates: list[
                tuple[TypeRef, str]
            ] = []

            for presence_field, alternative_name in (
                mapping.items()
            ):
                alternative = self._find_union_alternative(
                    union,
                    alternative_name,
                )

                candidates.append(
                    (
                        alternative,
                        presence_field,
                    )
                )

            for index, (_, presence_field) in enumerate(
                candidates
            ):
                lines.extend(
                    [
                        (
                            f'{indent}    if '
                            f'(ObjectValue.if_contains('
                            f'"{presence_field}"'
                            f') != nullptr)'
                        ),
                        f"{indent}    {{",
                        f"{indent}        ++MatchCount;",
                        f"{indent}        MatchIndex = {index};",
                        f"{indent}    }}",
                        "",
                    ]
                )

            lines.extend(
                [
                    f"{indent}    if (MatchCount == 1)",
                    f"{indent}    {{",
                    f"{indent}        switch (MatchIndex)",
                    f"{indent}        {{",
                ]
            )

            for index, (alternative, _) in enumerate(
                candidates
            ):
                cpp_type = (
                    self._named_union_alternative_cpp_type(
                        union,
                        alternative,
                    )
                )

                lines.extend(
                    [
                        f"{indent}            case {index}:",
                        (
                            f"{indent}                return "
                            f"FromJson<{cpp_type}>(Value);"
                        ),
                    ]
                )

            lines.extend(
                [
                    f"{indent}        }}",
                    f"{indent}    }}",
                    "",
                    f"{indent}    if (MatchCount > 1)",
                    f"{indent}    {{",
                    (
                        f"{indent}        throw "
                        f"std::invalid_argument("
                    ),
                    (
                        f'{indent}            "Ambiguous discriminator '
                        f'presence union: {union.name}"'
                    ),
                    f"{indent}        );",
                    f"{indent}    }}",
                    "",
                    (
                        f"{indent}    throw "
                        f"Detail::DeserializationMismatch("
                    ),
                    (
                        f'{indent}        "No presence alternative '
                        f'matched for union {union.name}"'
                    ),
                    f"{indent}    );",
                    f"{indent}}}",
                    "",
                ]
            )

        lines.extend(
            [
                (
                    f"{indent}throw "
                    f"Detail::DeserializationMismatch("
                ),
                (
                    f'{indent}    "Unknown discriminator value for '
                    f'union {union.name}"'
                ),
                f"{indent});",
            ]
        )

        return lines

    # ==================================================================
    # Presence
    # ==================================================================

    def _render_presence_union(
        self,
        union: UnionDefinition,
        indent: str,
    ) -> list[str]:
        resolution = union.resolution

        if resolution is None:
            raise ValueError(
                f"Presence union '{union.name}' has no resolution"
            )

        candidates: list[
            tuple[TypeRef, list[str]]
        ] = []

        for alternative in union.alternatives:
            alternative_name = self._alternative_name(
                alternative
            )

            required_fields = (
                resolution.presence_requirements.get(
                    alternative_name,
                    [],
                )
            )

            if not required_fields:
                raise ValueError(
                    f"Presence union '{union.name}' "
                    f"alternative '{alternative_name}' "
                    "has no required-field signature"
                )

            candidates.append(
                (
                    alternative,
                    required_fields,
                )
            )

        lines = [
            f"{indent}int MatchCount = 0;",
            f"{indent}int MatchIndex = -1;",
            "",
        ]

        for index, (_, required_fields) in enumerate(
            candidates
        ):
            condition = " && ".join(
                (
                    f'ObjectValue.if_contains("{field}")'
                    f" != nullptr"
                )
                for field in required_fields
            )

            lines.extend(
                [
                    f"{indent}if ({condition})",
                    f"{indent}{{",
                    f"{indent}    ++MatchCount;",
                    f"{indent}    MatchIndex = {index};",
                    f"{indent}}}",
                    "",
                ]
            )

        lines.extend(
            [
                f"{indent}if (MatchCount == 1)",
                f"{indent}{{",
                f"{indent}    switch (MatchIndex)",
                f"{indent}    {{",
            ]
        )

        for index, (alternative, _) in enumerate(
            candidates
        ):
            cpp_type = (
                self._named_union_alternative_cpp_type(
                    union,
                    alternative,
                )
            )

            lines.extend(
                [
                    f"{indent}        case {index}:",
                    (
                        f"{indent}            return "
                        f"FromJson<{cpp_type}>(Value);"
                    ),
                ]
            )

        lines.extend(
            [
                f"{indent}    }}",
                f"{indent}}}",
                "",
                f"{indent}if (MatchCount > 1)",
                f"{indent}{{",
                (
                    f"{indent}    throw "
                    f"std::invalid_argument("
                ),
                (
                    f'{indent}        "Ambiguous presence union: '
                    f'{union.name}"'
                ),
                f"{indent}    );",
                f"{indent}}}",
                "",
                (
                    f"{indent}throw "
                    f"Detail::DeserializationMismatch("
                ),
                (
                    f'{indent}    "No presence alternative matched '
                    f'for union {union.name}"'
                ),
                f"{indent});",
            ]
        )

        return lines

    # ==================================================================
    # Field-value
    # ==================================================================

    def _render_field_value_union(
        self,
        union: UnionDefinition,
        indent: str,
    ) -> list[str]:
        resolution = union.resolution

        if resolution is None or not resolution.field:
            raise ValueError(
                f"Field-value union '{union.name}' "
                "has no field"
            )

        field = resolution.field

        lines = [
            (
                f'{indent}const auto* FieldValue = '
                f'ObjectValue.if_contains("{field}");'
            ),
            f"{indent}if (FieldValue == nullptr)",
            f"{indent}{{",
            (
                f"{indent}    throw "
                f"Detail::DeserializationMismatch("
            ),
            (
                f'{indent}        "Missing field-value discriminator: '
                f'{field}"'
            ),
            f"{indent}    );",
            f"{indent}}}",
            "",
            (
                f"{indent}const auto NumericValue = "
                f"FromJson<long long>(*FieldValue);"
            ),
            "",
        ]

        for key, alternative_name in (
            resolution.mapping.items()
        ):
            alternative = self._find_union_alternative(
                union,
                alternative_name,
            )

            cpp_type = (
                self._named_union_alternative_cpp_type(
                    union,
                    alternative,
                )
            )

            condition = self._field_value_condition(
                key,
                "NumericValue",
            )

            lines.extend(
                [
                    f"{indent}if ({condition})",
                    f"{indent}{{",
                    (
                        f"{indent}    return "
                        f"FromJson<{cpp_type}>(Value);"
                    ),
                    f"{indent}}}",
                    "",
                ]
            )

        lines.extend(
            [
                (
                    f"{indent}throw "
                    f"Detail::DeserializationMismatch("
                ),
                (
                    f'{indent}    "Invalid field-value discriminator '
                    f'for union {union.name}"'
                ),
                f"{indent});",
            ]
        )

        return lines

    def _field_value_condition(
        self,
        key: str,
        expression: str,
    ) -> str:
        if key == "0":
            return f"{expression} == 0"

        if key == "positive":
            return f"{expression} > 0"

        raise ValueError(
            f"Unsupported field-value resolution key: {key!r}"
        )

    # ==================================================================
    # Type helpers
    # ==================================================================

    def _qualified(
        self,
        name: str,
    ) -> str:
        return f"{TYPE_NAMESPACE}::{name}"

    def _union_cpp_type(
        self,
        union: UnionDefinition,
    ) -> str:
        types: list[str] = []

        for alternative in union.alternatives:
            cpp_type = self._named_union_alternative_cpp_type(
                union,
                alternative,
            )

            if cpp_type not in types:
                types.append(cpp_type)

        if not types:
            raise ValueError(
                "Cannot generate empty std::variant"
            )

        return (
            "std::variant<"
            + ", ".join(types)
            + ">"
        )

    def _variant_cpp_type(
        self,
        alternatives: list[TypeRef],
        owner: str | None,
    ) -> str:
        types: list[str] = []

        for alternative in alternatives:
            cpp_type = self.context.type_to_cpp(
                alternative,
                owner=owner,
            ).type

            if cpp_type not in types:
                types.append(cpp_type)

        if not types:
            raise ValueError(
                "Cannot generate empty std::variant"
            )

        if len(types) == 1:
            return types[0]

        return (
            "std::variant<"
            + ", ".join(types)
            + ">"
        )

    def _named_union_alternative_cpp_type(
        self,
        union: UnionDefinition,
        alternative: TypeRef,
    ) -> str:
        alternative_name = self._alternative_name(
            alternative
        )

        recursive_alternatives = (
            self.context.graph
            .recursive_union_alternatives_global(
                union.name
            )
        )

        if (
            alternative.is_object()
            and alternative_name in recursive_alternatives
        ):
            return (
                f"std::shared_ptr<"
                f"{TYPE_NAMESPACE}::{alternative_name}"
                f">"
            )

        return self.context.type_to_cpp(
            alternative,
            owner=union.name,
        ).type

    def _alternative_name(
        self,
        alternative: TypeRef,
    ) -> str:
        if alternative.name:
            return alternative.name

        if (
            alternative.union_info is not None
            and alternative.union_info.name
        ):
            return alternative.union_info.name

        raise ValueError(
            f"Union alternative has no name: {alternative!r}"
        )

    def _find_union_alternative(
        self,
        union: UnionDefinition,
        alternative_name: str,
    ) -> TypeRef:
        matches = [
            alternative
            for alternative in union.alternatives
            if self._alternative_name(alternative)
            == alternative_name
        ]

        if len(matches) != 1:
            raise ValueError(
                f"Union '{union.name}' alternative "
                f"'{alternative_name}' resolves to "
                f"{len(matches)} alternatives"
            )

        return matches[0]

    # ==================================================================
    # Public API
    # ==================================================================

    def _render_public_api(self) -> str:
        return "\n".join(
            [
                "template <typename T>",
                "T Deserialize(const boost::json::value& Value)",
                "{",
                "    return FromJson<T>(Value);",
                "}",
                "",
            ]
        )

    # ==================================================================
    # Epilogue
    # ==================================================================

    def _render_epilogue(self) -> str:
        return (
            f"}} // namespace {JSON_NAMESPACE}\n"
            "\n"
            "#endif // TELEGRAMBOTAPI_JSON_DESERIALIZER_HPP"
        )
