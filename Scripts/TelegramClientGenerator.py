from __future__ import annotations

from CppContext import CppContext
from Model import TelegramModel


class TelegramClientGenerator:
    """
    Generate the public TelegramClient API.

    TelegramClient.HPP contains:
      - generated Telegram type includes
      - Method forward declarations
      - Method friend declarations
      - constructors
      - one Parameters overload for every Bot API method
      - one required-argument convenience overload where applicable
      - private transport/runtime API

    TelegramClientMethods.TPP contains:
      - generated Method includes
      - implementations of the public TelegramClient forwarding methods

    Method parameter structures are forward-declared here. Complete method
    headers are included by TelegramClientMethods.TPP, keeping the dependency
    direction acyclic without a separate parameter-header tree.
    """

    def __init__(
        self,
        model: TelegramModel,
        context: CppContext,
    ) -> None:
        self.model = model
        self.context = context

    # ------------------------------------------------------------------
    # TelegramClient.HPP
    # ------------------------------------------------------------------

    def generate_header(self) -> str:
        lines = [
            "#ifndef TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP",
            "#define TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP",
            "",
            "#include <chrono>",
            "#include <string>",
            "",
            '#include "TelegramBotAPI/JSON/Json.HPP"',
            '#include "TelegramBotAPI/Network/HTTPClient.HPP"',
            '#include "TelegramBotAPI/Network/HTTPResponse.HPP"',
            '#include "TelegramBotAPI/Network/IHTTPClient.HPP"',
            '#include "TelegramBotAPI/Network/Multipart/MultipartForm.HPP"',
            '#include "TelegramBotAPI/TelegramAPIException.HPP"',
        ]

        for telegram_type in self.model.types:
            lines.append(
                f'#include "TelegramBotAPI/Types/{telegram_type.name}.HPP"'
            )

        lines.extend(
            [
                "",
                "namespace TelegramBotAPI::Methods {",
            ]
        )

        for method in self.model.methods:
            lines.append(
                f"    struct {method.name}Parameters;"
            )
            lines.append(
                f"    class {method.name};"
            )

        lines.extend(
            [
                "} // namespace TelegramBotAPI::Methods",
                "",
                "namespace TelegramBotAPI {",
                "    class TelegramClient {",
            ]
        )

        for method in self.model.methods:
            lines.append(
                f"        friend class Methods::{method.name};"
            )

        lines.extend(
            [
                "",
                "    public:",
                "        explicit TelegramClient(const std::string &BotToken);",
                "",
                "        TelegramClient(const std::string &BotToken,",
                "                       const std::string &APIURL);",
                "",
                "        TelegramClient(const std::string   &BotToken,",
                "                       std::chrono::seconds Timeout);",
                "",
                "        TelegramClient(const std::string   &BotToken,",
                "                       const std::string   &APIURL,",
                "                       std::chrono::seconds Timeout);",
                "",
                "        TelegramClient(const std::string    &BotToken,",
                "                       Network::IHTTPClient &HTTPClient);",
                "",
                "        TelegramClient(const std::string    &BotToken,",
                "                       const std::string    &APIURL,",
                "                       Network::IHTTPClient &HTTPClient);",
                "",
            ]
        )

        for method in self.model.methods:
            lines.extend(
                self._render_public_method_declaration(method)
            )

        lines.extend(
            [
                "    private:",
                "        std::string BotToken;",
                "        std::string APIURL;",
                "",
                "        Network::HTTPClient   DefaultHTTPClient;",
                "        Network::IHTTPClient *HTTPClient;",
                "",
                "        Network::HTTPResponse",
                "        PerformRequest(const std::string  &Method,",
                "                       const JSON::Object &Parameters);",
                "",
                "        Network::HTTPResponse PerformMultipartRequest(",
                "            const std::string                       &Method,",
                "            const Network::Multipart::MultipartForm &Form);",
                "",
                "        template <typename ReturnType>",
                "        ReturnType ParseResponse(",
                "            const Network::HTTPResponse &Response);",
                "",
                "        template <typename ReturnType>",
                "        ReturnType Call(const std::string &Method);",
                "",
                "        template <typename ReturnType>",
                "        ReturnType Call(",
                "            const std::string  &Method,",
                "            const JSON::Object &Parameters);",
                "",
                "        template <typename ReturnType>",
                "        ReturnType CallMultipart(",
                "            const std::string                       &Method,",
                "            const Network::Multipart::MultipartForm &Form);",
                "    };",
                "} // namespace TelegramBotAPI",
                "",
                '#include "TelegramBotAPI/TelegramClient.TPP"',
                "",
                "#endif",
                "",
            ]
        )

        return "\n".join(lines)

    # ------------------------------------------------------------------
    # TelegramClientMethods.TPP
    # ------------------------------------------------------------------

    def generate_methods_tpp(self) -> str:
        lines = [
            "#ifndef TELEGRAMBOTAPI_TELEGRAMCLIENT_METHODS_TPP",
            "#define TELEGRAMBOTAPI_TELEGRAMCLIENT_METHODS_TPP",
            "",
        ]

        for method in self.model.methods:
            lines.append(
                f'#include "TelegramBotAPI/Methods/{method.name}.HPP"'
            )

        lines.extend(
            [
                "",
                "namespace TelegramBotAPI {",
                "",
            ]
        )

        for method in self.model.methods:
            lines.extend(
                self._render_public_method_definition(method)
            )

        lines.extend(
            [
                "} // namespace TelegramBotAPI",
                "",
                "#endif",
                "",
            ]
        )

        return "\n".join(lines)

    # ------------------------------------------------------------------
    # Public method declaration
    # ------------------------------------------------------------------

    def _render_public_method_declaration(
        self,
        method,
    ) -> list[str]:
        result = self.context.type_to_cpp(
            method.return_type,
            owner=method.name,
        ).type

        parameter_name = f"{method.name}Parameters"
        required = [
            parameter
            for parameter in method.parameters
            if parameter.required
        ]

        public_name = self._public_method_name(method.name)

        lines = [
            f"        {result} {public_name}(",
            f"            const Methods::{parameter_name} &Parameters);",
            "",
        ]

        if not required:
            lines.extend(
                [
                    f"        {result} {public_name}();",
                    "",
                ]
            )
            return lines

        signature = ",\n".join(
            self._render_parameter_signature(
                parameter,
                method.name,
                indent="            ",
            )
            for parameter in required
        )

        lines.extend(
            [
                f"        {result} {public_name}(",
                f"{signature});",
                "",
            ]
        )

        return lines

    # ------------------------------------------------------------------
    # Public method definition
    # ------------------------------------------------------------------

    def _render_public_method_definition(
        self,
        method,
    ) -> list[str]:
        result = self.context.type_to_cpp(
            method.return_type,
            owner=method.name,
        ).type

        parameter_name = f"{method.name}Parameters"
        required = [
            parameter
            for parameter in method.parameters
            if parameter.required
        ]

        public_name = self._public_method_name(method.name)

        lines = [
            f"{result} TelegramClient::{public_name}(",
            f"    const Methods::{parameter_name} &Parameters",
            ") {",
            f"    Methods::{method.name} Method(*this);",
            f"    return Method.{public_name}(Parameters);",
            "}",
            "",
        ]

        if not required:
            lines.extend(
                [
                    f"{result} TelegramClient::{public_name}() {{",
                    f"    Methods::{parameter_name} ParametersValue;",
                    "",
                    f"    return {public_name}(ParametersValue);",
                    "}",
                    "",
                ]
            )
            return lines

        signature = ",\n".join(
            self._render_parameter_signature(
                parameter,
                method.name,
                indent="    ",
            )
            for parameter in required
        )

        arguments = ",\n".join(
            f"        {parameter.cpp_name}"
            for parameter in required
        )

        lines.extend(
            [
                f"{result} TelegramClient::{public_name}(",
                f"{signature}) {{",
                f"    Methods::{method.name}Parameters ParametersValue(",
                arguments,
                "    );",
                "",
                f"    return {public_name}(ParametersValue);",
                "}",
                "",
            ]
        )

        return lines

    # ------------------------------------------------------------------
    # Parameter rendering
    # ------------------------------------------------------------------

    def _render_parameter_signature(
        self,
        parameter,
        owner: str,
        indent: str,
    ) -> str:
        cpp_type = self.context.field_type_to_cpp(
            parameter.type,
            True,
            owner=owner,
        ).type

        return (
            f"{indent}const {cpp_type} "
            f"&{parameter.cpp_name}"
        )

    # ------------------------------------------------------------------
    # Naming
    # ------------------------------------------------------------------

    @staticmethod
    def _public_method_name(name: str) -> str:
        if not name:
            raise ValueError("Method name cannot be empty")

        return name[0].upper() + name[1:]
