#ifndef TELEGRAMBOTAPI_METHOD_DELETEMYCOMMANDS_HPP
#define TELEGRAMBOTAPI_METHOD_DELETEMYCOMMANDS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
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

namespace TelegramBotAPI::Methods {

        // Use this method to delete the list of the bot's commands for the given scope and user language. After deletion, higher level commands will be shown to affected users. Returns True on success.

class deleteMyCommands {
    public:
        struct Parameters {
            // A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands.
            std::optional<std::string> LanguageCode{};

            // A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
            std::optional<std::variant<::TelegramBotAPI::Type::BotCommandScopeDefault, ::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats, ::TelegramBotAPI::Type::BotCommandScopeAllGroupChats, ::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators, ::TelegramBotAPI::Type::BotCommandScopeChat, ::TelegramBotAPI::Type::BotCommandScopeChatAdministrators, ::TelegramBotAPI::Type::BotCommandScopeChatMember>> Scope{};

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (LanguageCode.has_value()) {
                    Object["language_code"] = JSON::ToJson(LanguageCode.value());
                }

                if (Scope.has_value()) {
                    Object["scope"] = JSON::ToJson(Scope.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (LanguageCode.has_value() && JSON::RequiresMultipart(LanguageCode.value())) || (Scope.has_value() && JSON::RequiresMultipart(Scope.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

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

        explicit deleteMyCommands(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool DeleteMyCommands(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("deleteMyCommands",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("deleteMyCommands",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETEMYCOMMANDS_HPP
