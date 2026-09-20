#ifndef TELEGRAMBOTAPI_METHOD_FORWARDMESSAGES_HPP
#define TELEGRAMBOTAPI_METHOD_FORWARDMESSAGES_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/MessageId.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to forward multiple messages of any kind. If some of the specified messages can't be found or forwarded, they are skipped. Service messages and messages with protected content can't be forwarded. Album grouping is kept for forwarded messages. On success, an Array of MessageId of the sent messages is returned.

class forwardMessages {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Identifier of the direct messages topic to which the messages will be forwarded; required if the messages are forwarded to a direct messages chat
            std::optional<long long> DirectMessagesTopicID{};

            // Sends the messages silently. Users will receive a notification with no sound.
            std::optional<bool> DisableNotification{};

            // Unique identifier for the chat where the original messages were sent (or username of the target bot, supergroup or channel in the format @username)
            std::variant<long long, std::string> FromChatID;

            // A JSON-serialized list of 1-100 identifiers of messages in the chat from_chat_id to forward. The identifiers must be specified in a strictly increasing order.
            std::vector<long long> MessageIDs;

            // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
            std::optional<long long> MessageThreadID{};

            // Protects the contents of the forwarded messages from forwarding and saving
            std::optional<bool> ProtectContent{};

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const std::variant<long long, std::string> &FromChatIDValue, const std::vector<long long> &MessageIDsValue)
                : ChatID(ChatIDValue), FromChatID(FromChatIDValue), MessageIDs(MessageIDsValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                if (DirectMessagesTopicID.has_value()) {
                    Object["direct_messages_topic_id"] = JSON::ToJson(DirectMessagesTopicID.value());
                }

                if (DisableNotification.has_value()) {
                    Object["disable_notification"] = JSON::ToJson(DisableNotification.value());
                }

                Object["from_chat_id"] = JSON::ToJson(FromChatID);

                Object["message_ids"] = JSON::ToJson(MessageIDs);

                if (MessageThreadID.has_value()) {
                    Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
                }

                if (ProtectContent.has_value()) {
                    Object["protect_content"] = JSON::ToJson(ProtectContent.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || (DirectMessagesTopicID.has_value() && JSON::RequiresMultipart(DirectMessagesTopicID.value())) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || JSON::RequiresMultipart(FromChatID) || JSON::RequiresMultipart(MessageIDs) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                if (DirectMessagesTopicID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "direct_messages_topic_id",
                        DirectMessagesTopicID.value());
                }

                if (DisableNotification.has_value()) {
                    JSON::AddMultipartField(
                        Form, "disable_notification",
                        DisableNotification.value());
                }

                JSON::AddMultipartField(
                    Form, "from_chat_id",
                    FromChatID);

                JSON::AddMultipartField(
                    Form, "message_ids",
                    MessageIDs);

                if (MessageThreadID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "message_thread_id",
                        MessageThreadID.value());
                }

                if (ProtectContent.has_value()) {
                    JSON::AddMultipartField(
                        Form, "protect_content",
                        ProtectContent.value());
                }

                return Form;
            }

        };

        explicit forwardMessages(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::vector<::TelegramBotAPI::Type::MessageId> ForwardMessages(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::vector<::TelegramBotAPI::Type::MessageId>>("forwardMessages",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::vector<::TelegramBotAPI::Type::MessageId>>("forwardMessages",
                                      ParametersValue.ToJson());
        }

        std::vector<::TelegramBotAPI::Type::MessageId> ForwardMessages(std::variant<long long, std::string> ChatID, std::variant<long long, std::string> FromChatID, std::vector<long long> MessageIDs) {
            Parameters ParametersValue(
                ChatID,
                FromChatID,
                MessageIDs
            );

            return ForwardMessages(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_FORWARDMESSAGES_HPP
