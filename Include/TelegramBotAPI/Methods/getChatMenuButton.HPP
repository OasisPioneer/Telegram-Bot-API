#ifndef TELEGRAMBOTAPI_METHOD_GETCHATMENUBUTTON_HPP
#define TELEGRAMBOTAPI_METHOD_GETCHATMENUBUTTON_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/MenuButtonCommands.HPP"
#include "TelegramBotAPI/Types/MenuButtonDefault.HPP"
#include "TelegramBotAPI/Types/MenuButtonWebApp.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to get the current value of the bot's menu button in a private chat, or the default menu button. Returns MenuButton on success.

class getChatMenuButton {
    public:
        struct Parameters {
            // Unique identifier for the target private chat. If not specified, the bot's default menu button will be returned.
            std::optional<long long> ChatID{};

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (ChatID.has_value()) {
                    Object["chat_id"] = JSON::ToJson(ChatID.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (ChatID.has_value() && JSON::RequiresMultipart(ChatID.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (ChatID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "chat_id",
                        ChatID.value());
                }

                return Form;
            }

        };

        explicit getChatMenuButton(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault> GetChatMenuButton(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault>>("getChatMenuButton",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault>>("getChatMenuButton",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETCHATMENUBUTTON_HPP
