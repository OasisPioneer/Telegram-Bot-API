#ifndef TELEGRAMBOTAPI_METHOD_UNPINCHATMESSAGE_HPP
#define TELEGRAMBOTAPI_METHOD_UNPINCHATMESSAGE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to remove a message from the list of pinned messages in a chat. In private chats and channel direct messages chats, all messages can be unpinned. Conversely, the bot must be an administrator with the 'can_pin_messages' right or the 'can_edit_messages' right to unpin messages in groups and channels respectively. Returns True on success.

class unpinChatMessage {
    public:
        struct Parameters {
            // Unique identifier of the business connection on behalf of which the message will be unpinned
            std::optional<std::string> BusinessConnectionID{};

            // Unique identifier for the target chat or username of the target channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Identifier of the message to unpin. Required if business_connection_id is specified. If not specified, the most recent pinned message (by sending date) will be unpinned.
            std::optional<long long> MessageID{};

            Parameters(const std::variant<long long, std::string> &ChatIDValue)
                : ChatID(ChatIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (BusinessConnectionID.has_value()) {
                    Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
                }

                Object["chat_id"] = JSON::ToJson(ChatID);

                if (MessageID.has_value()) {
                    Object["message_id"] = JSON::ToJson(MessageID.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || JSON::RequiresMultipart(ChatID) || (MessageID.has_value() && JSON::RequiresMultipart(MessageID.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (BusinessConnectionID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "business_connection_id",
                        BusinessConnectionID.value());
                }

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                if (MessageID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "message_id",
                        MessageID.value());
                }

                return Form;
            }

        };

        explicit unpinChatMessage(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool UnpinChatMessage(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("unpinChatMessage",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("unpinChatMessage",
                                      ParametersValue.ToJson());
        }

        bool UnpinChatMessage(std::variant<long long, std::string> ChatID) {
            Parameters ParametersValue(
                ChatID
            );

            return UnpinChatMessage(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_UNPINCHATMESSAGE_HPP
