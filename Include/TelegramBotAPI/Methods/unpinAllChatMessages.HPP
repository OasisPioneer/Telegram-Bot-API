#ifndef TELEGRAMBOTAPI_METHOD_UNPINALLCHATMESSAGES_HPP
#define TELEGRAMBOTAPI_METHOD_UNPINALLCHATMESSAGES_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to clear the list of pinned messages in a chat. In private chats and channel direct messages chats, no additional rights are required to unpin all pinned messages. Conversely, the bot must be an administrator with the 'can_pin_messages' right or the 'can_edit_messages' right to unpin all pinned messages in groups and channels respectively. Returns True on success.

class unpinAllChatMessages {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target channel in the format @username
            std::variant<long long, std::string> ChatID;

            Parameters(const std::variant<long long, std::string> &ChatIDValue)
                : ChatID(ChatIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                return Form;
            }

        };

        explicit unpinAllChatMessages(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool UnpinAllChatMessages(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("unpinAllChatMessages",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("unpinAllChatMessages",
                                      ParametersValue.ToJson());
        }

        bool UnpinAllChatMessages(std::variant<long long, std::string> ChatID) {
            Parameters ParametersValue(
                ChatID
            );

            return UnpinAllChatMessages(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_UNPINALLCHATMESSAGES_HPP
