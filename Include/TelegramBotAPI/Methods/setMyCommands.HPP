#ifndef TELEGRAMBOTAPI_METHOD_SETMYCOMMANDS_HPP
#define TELEGRAMBOTAPI_METHOD_SETMYCOMMANDS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/BotCommand.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeAllChatAdministrators.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeAllGroupChats.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeAllPrivateChats.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeChat.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeChatAdministrators.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeChatMember.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeDefault.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to change the list of the bot's commands. See this manual for more details about bot commands. Returns True on success.

struct setMyCommandsParameters {
    // A JSON-serialized list of bot commands to be set as the list of the bot's commands. At most 100 commands can be specified.
    std::vector<::TelegramBotAPI::Type::BotCommand> Commands;

    // A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands.
    std::optional<std::string> LanguageCode{};

    // A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
    std::optional<std::variant<::TelegramBotAPI::Type::BotCommandScopeDefault, ::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats, ::TelegramBotAPI::Type::BotCommandScopeAllGroupChats, ::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators, ::TelegramBotAPI::Type::BotCommandScopeChat, ::TelegramBotAPI::Type::BotCommandScopeChatAdministrators, ::TelegramBotAPI::Type::BotCommandScopeChatMember>> Scope{};

    setMyCommandsParameters(const std::vector<::TelegramBotAPI::Type::BotCommand> &CommandsValue)
        : Commands(CommandsValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["commands"] = JSON::ToJson(Commands);

        if (LanguageCode.has_value()) {
            Object["language_code"] = JSON::ToJson(LanguageCode.value());
        }

        if (Scope.has_value()) {
            Object["scope"] = JSON::ToJson(Scope.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Commands) || (LanguageCode.has_value() && JSON::RequiresMultipart(LanguageCode.value())) || (Scope.has_value() && JSON::RequiresMultipart(Scope.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "commands",
            Commands);

        if (LanguageCode.has_value()) {
            JSON::AddMultipartField(
                Form, "language_code",
                LanguageCode.value());
        }

        if (Scope.has_value()) {
            JSON::AddMultipartField(
                Form, "scope",
                Scope.value());
        }

        return Form;
    }

};

class setMyCommands {
public:
    using Parameters = setMyCommandsParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setMyCommands";
    }

    explicit setMyCommands(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetMyCommands(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setMyCommands",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setMyCommands",
            ParametersValue.ToJson()
        );
    }

    bool SetMyCommands(std::vector<::TelegramBotAPI::Type::BotCommand> Commands) {
        Parameters ParametersValue(
        Commands
        );

        return SetMyCommands(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETMYCOMMANDS_HPP
