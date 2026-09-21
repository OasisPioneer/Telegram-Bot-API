from __future__ import annotations

from CppContext import CppContext
from Model import Parameter, TelegramMethod, TelegramModel, TypeRef


METHOD_NAMESPACE = "TelegramBotAPI::Methods"


def public_method_name(name: str) -> str:
    if not name:
        raise ValueError("Method name cannot be empty")
    return name[0].upper() + name[1:]


def contains_input_file(type_ref: TypeRef) -> bool:
    if type_ref.is_object():
        return type_ref.name == "InputFile"

    if type_ref.is_array():
        return (
            type_ref.element is not None
            and contains_input_file(type_ref.element)
        )

    if type_ref.is_union():
        return any(
            contains_input_file(item)
            for item in type_ref.alternatives
        )

    return False


class MethodGenerator:
    """
    Generate self-contained method headers.

    Each Methods/<method>.HPP contains both the request parameter structure
    and the method façade. TelegramClient.HPP only forward-declares the
    generated parameter structures and method classes, while
    TelegramClientMethods.TPP includes the complete method headers.
    """

    def __init__(
        self,
        model: TelegramModel,
        context: CppContext,
    ) -> None:
        self.model = model
        self.context = context

    def generate(self, method: TelegramMethod) -> str:
        includes = self._collect_includes(method)
        return self._render_header(method, includes)

    # ------------------------------------------------------------------
    # Includes
    # ------------------------------------------------------------------

    def _collect_includes(
        self,
        method: TelegramMethod,
    ) -> set[str]:
        includes = {
            '"TelegramBotAPI/JSON/Request.HPP"',
            '"TelegramBotAPI/JSON/Serializer.HPP"',
            '"TelegramBotAPI/TelegramClient.HPP"',
            "<boost/json.hpp>",
            "<optional>",
            "<string>",
        }

        result = self.context.type_to_cpp(
            method.return_type,
            owner=method.name,
        )
        includes.update(result.includes)

        for parameter in method.parameters:
            cpp_type = self.context.field_type_to_cpp(
                parameter.type,
                parameter.required,
                owner=method.name,
            )
            includes.update(cpp_type.includes)

        return includes

    # ------------------------------------------------------------------
    # Method header
    # ------------------------------------------------------------------

    def _render_header(
        self,
        method: TelegramMethod,
        includes: set[str],
    ) -> str:
        guard = f"TELEGRAMBOTAPI_METHOD_{method.name.upper()}_HPP"
        parameter_name = f"{method.name}Parameters"

        lines = [
            f"#ifndef {guard}",
            f"#define {guard}",
            "",
        ]

        lines.extend(
            f"#include {item}"
            for item in sorted(includes)
        )
        lines.append("")

        lines.extend(
            [
                f"namespace {METHOD_NAMESPACE} {{",
                "",
            ]
        )

        description = self._render_description(method.description)
        if description:
            lines.append(description)
            lines.append("")

        lines.extend(
            self._render_parameters_struct(
                method,
                parameter_name,
            )
        )
        lines.append("")
        lines.extend(self._render_class(method))

        lines.extend(
            [
                "",
                f"}} // namespace {METHOD_NAMESPACE}",
                "",
                f"#endif // {guard}",
                "",
            ]
        )

        return "\n".join(lines)

    def _render_parameters_struct(
        self,
        method: TelegramMethod,
        parameter_name: str,
    ) -> list[str]:
        lines = [
            f"struct {parameter_name} {{",
        ]

        for parameter in method.parameters:
            lines.extend(
                self._render_parameter(
                    parameter,
                    method.name,
                )
            )

        required = [
            parameter
            for parameter in method.parameters
            if parameter.required
        ]

        if required:
            lines.extend(
                self._render_parameters_constructor(
                    method,
                    required,
                )
            )

        lines.extend(self._render_to_json(method))
        lines.extend(self._render_requires_multipart(method))
        lines.extend(self._render_to_multipart(method))

        lines.append("};")
        return lines

    # ------------------------------------------------------------------
    # Method façade
    # ------------------------------------------------------------------

    def _render_class(
        self,
        method: TelegramMethod,
    ) -> list[str]:
        result = self.context.type_to_cpp(
            method.return_type,
            owner=method.name,
        ).type
        public_name = public_method_name(method.name)
        parameter_name = f"{method.name}Parameters"

        lines = [
            f"class {method.name} {{",
            "public:",
            f"    using Parameters = {parameter_name};",
            f"    using ReturnType = {result};",
            "",
            "    static constexpr const char *Name() noexcept {",
            f'        return "{method.name}";',
            "    }",
            "",
            f"    explicit {method.name}(",
            "        TelegramClient &ClientValue",
            "    )",
            "        : Client(ClientValue) {}",
            "",
            f"    {result} {public_name}(",
            "        const Parameters &ParametersValue",
            "    ) {",
            "        if (ParametersValue.RequiresMultipart()) {",
            f"            return Client.CallMultipart<{result}>(",
            f'                "{method.name}",',
            "                ParametersValue.ToMultipart()",
            "            );",
            "        }",
            "",
            f"        return Client.Call<{result}>(",
            f'            "{method.name}",',
            "            ParametersValue.ToJson()",
            "        );",
            "    }",
            "",
        ]

        required = [
            parameter
            for parameter in method.parameters
            if parameter.required
        ]

        if required:
            lines.extend(
                self._render_convenience_overload(
                    method,
                    required,
                    result,
                    public_name,
                )
            )

        lines.extend(
            [
                "private:",
                "    TelegramClient &Client;",
                "};",
            ]
        )

        return lines

    # ------------------------------------------------------------------
    # Parameter fields
    # ------------------------------------------------------------------

    def _render_parameter(
        self,
        parameter: Parameter,
        owner: str,
    ) -> list[str]:
        cpp_type = self.context.field_type_to_cpp(
            parameter.type,
            parameter.required,
            owner=owner,
        )

        lines: list[str] = []

        description = self._render_description(
            parameter.description,
            indent="    ",
        )
        if description:
            lines.append(description)

        initializer = "" if parameter.required else "{}"
        lines.append(
            f"    {cpp_type.type} "
            f"{parameter.cpp_name}{initializer};"
        )
        lines.append("")

        return lines

    def _render_parameters_constructor(
        self,
        method: TelegramMethod,
        required: list[Parameter],
    ) -> list[str]:
        arguments: list[str] = []
        initializers: list[str] = []

        for parameter in required:
            cpp_type = self.context.field_type_to_cpp(
                parameter.type,
                True,
                owner=method.name,
            ).type

            arguments.append(
                f"const {cpp_type} &"
                f"{parameter.cpp_name}Value"
            )
            initializers.append(
                f"{parameter.cpp_name}"
                f"({parameter.cpp_name}Value)"
            )

        return [
            f"    {method.name}Parameters({', '.join(arguments)})",
            f"        : {', '.join(initializers)} {{}}",
            "",
        ]

    # ------------------------------------------------------------------
    # JSON serialization
    # ------------------------------------------------------------------

    def _render_to_json(
        self,
        method: TelegramMethod,
    ) -> list[str]:
        lines = [
            "    JSON::Object ToJson() const {",
            "        JSON::Object Object;",
            "",
        ]

        for parameter in method.parameters:
            if parameter.required:
                expression = self._request_expression(parameter)
                lines.extend(
                    [
                        (
                            f'        Object["{parameter.name}"] = '
                            f"{expression};"
                        ),
                        "",
                    ]
                )
                continue

            expression = self._request_expression(
                parameter,
                f"{parameter.cpp_name}.value()",
            )

            lines.extend(
                [
                    (
                        f"        if "
                        f"({parameter.cpp_name}.has_value()) {{"
                    ),
                    (
                        f'            Object["{parameter.name}"] = '
                        f"{expression};"
                    ),
                    "        }",
                    "",
                ]
            )

        lines.extend(
            [
                "        return Object;",
                "    }",
                "",
            ]
        )

        return lines

    def _request_expression(
        self,
        parameter: Parameter,
        value_expression: str | None = None,
    ) -> str:
        value = value_expression or parameter.cpp_name

        if contains_input_file(parameter.type):
            return (
                f'JSON::EncodeRequestValue('
                f'{value}, "{parameter.name}")'
            )

        return f"JSON::ToJson({value})"

    # ------------------------------------------------------------------
    # Multipart
    # ------------------------------------------------------------------

    def _render_requires_multipart(
        self,
        method: TelegramMethod,
    ) -> list[str]:
        expressions: list[str] = []

        for parameter in method.parameters:
            if parameter.required:
                expressions.append(
                    f"JSON::RequiresMultipart("
                    f"{parameter.cpp_name})"
                )
            else:
                expressions.append(
                    f"({parameter.cpp_name}.has_value() && "
                    f"JSON::RequiresMultipart("
                    f"{parameter.cpp_name}.value()))"
                )

        expression = (
            " || ".join(expressions)
            if expressions
            else "false"
        )

        return [
            "    bool RequiresMultipart() const {",
            f"        return {expression};",
            "    }",
            "",
        ]

    def _render_to_multipart(
        self,
        method: TelegramMethod,
    ) -> list[str]:
        lines = [
            "    ::TelegramBotAPI::Network::Multipart::MultipartForm",
            "    ToMultipart() const {",
            "        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;",
            "",
        ]

        for parameter in method.parameters:
            if parameter.required:
                lines.extend(
                    [
                        "        JSON::AddMultipartField(",
                        f'            Form, "{parameter.name}",',
                        f"            {parameter.cpp_name});",
                        "",
                    ]
                )
            else:
                lines.extend(
                    [
                        (
                            f"        if "
                            f"({parameter.cpp_name}.has_value()) {{"
                        ),
                        "            JSON::AddMultipartField(",
                        f'                Form, "{parameter.name}",',
                        (
                            f"                "
                            f"{parameter.cpp_name}.value());"
                        ),
                        "        }",
                        "",
                    ]
                )

        lines.extend(
            [
                "        return Form;",
                "    }",
                "",
            ]
        )

        return lines

    # ------------------------------------------------------------------
    # Required-parameter convenience overload
    # ------------------------------------------------------------------

    def _render_convenience_overload(
        self,
        method: TelegramMethod,
        required: list[Parameter],
        result: str,
        public_name: str,
    ) -> list[str]:
        parameter_types: list[str] = []

        for parameter in required:
            cpp_type = self.context.field_type_to_cpp(
                parameter.type,
                True,
                owner=method.name,
            ).type

            parameter_types.append(
                f"{cpp_type} {parameter.cpp_name}"
            )

        signature = ", ".join(parameter_types)

        arguments = ",\n".join(
            f"        {parameter.cpp_name}"
            for parameter in required
        )

        return [
            f"    {result} {public_name}({signature}) {{",
            "        Parameters ParametersValue(",
            arguments,
            "        );",
            "",
            f"        return {public_name}(ParametersValue);",
            "    }",
            "",
        ]

    @staticmethod
    def _render_description(
        description: str,
        indent: str = "    ",
    ) -> str:
        if not description:
            return ""

        return "\n".join(
            (
                f"{indent}// {line.strip()}"
                if line.strip()
                else f"{indent}//"
            )
            for line in description.splitlines()
        )


def generate_method_header(
    model: TelegramModel,
    context: CppContext,
    method: TelegramMethod,
) -> str:
    return MethodGenerator(model, context).generate(method)
