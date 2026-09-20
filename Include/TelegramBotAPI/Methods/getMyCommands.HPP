#ifndef TELEGRAMBOTAPI_METHOD_GETMYCOMMANDS_HPP
#define TELEGRAMBOTAPI_METHOD_GETMYCOMMANDS_HPP

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

        // Use this method to get the current list of the bot's commands for the given scope and user language. Returns an Array of BotCommand objects. If commands aren't set, an empty list is returned.

class getMyCommands {
    public:
        struct Parameters {
            // A two-letter ISO 639-1 language code or an empty string
            std::optional<std::string> LanguageCode{};

            // A JSON-serialized object, describing scope of users. Defaults to BotCommandScopeDefault.
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

        explicit getMyCommands(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::vector<::TelegramBotAPI::Type::BotCommand> GetMyCommands(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::vector<::TelegramBotAPI::Type::BotCommand>>("getMyCommands",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::vector<::TelegramBotAPI::Type::BotCommand>>("getMyCommands",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETMYCOMMANDS_HPP
