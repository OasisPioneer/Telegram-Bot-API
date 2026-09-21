#ifndef TELEGRAMBOTAPI_METHOD_COPYMESSAGES_HPP
#define TELEGRAMBOTAPI_METHOD_COPYMESSAGES_HPP

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

    // Use this method to copy messages of any kind. If some of the specified messages can't be found or copied, they are skipped. Service messages, paid media messages, giveaway messages, giveaway winners messages, and invoice messages can't be copied. A quiz poll can be copied only if the value of the field correct_option_ids is known to the bot. The method is analogous to the method forwardMessages, but the copied messages don't have a link to the original message. Album grouping is kept for copied messages. On success, an Array of MessageId of the sent messages is returned.

struct copyMessagesParameters {
    // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Identifier of the direct messages topic to which the messages will be sent; required if the messages are sent to a direct messages chat
    std::optional<long long> DirectMessagesTopicID{};

    // Sends the messages silently. Users will receive a notification with no sound.
    std::optional<bool> DisableNotification{};

    // Unique identifier for the chat where the original messages were sent (or username of the target bot, supergroup or channel in the format @username)
    std::variant<long long, std::string> FromChatID;

    // A JSON-serialized list of 1-100 identifiers of messages in the chat from_chat_id to copy. The identifiers must be specified in a strictly increasing order.
    std::vector<long long> MessageIDs;

    // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
    std::optional<long long> MessageThreadID{};

    // Protects the contents of the sent messages from forwarding and saving
    std::optional<bool> ProtectContent{};

    // Pass True to copy the messages without their captions
    std::optional<bool> RemoveCaption{};

    copyMessagesParameters(const std::variant<long long, std::string> &ChatIDValue, const std::variant<long long, std::string> &FromChatIDValue, const std::vector<long long> &MessageIDsValue)
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

        if (RemoveCaption.has_value()) {
            Object["remove_caption"] = JSON::ToJson(RemoveCaption.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || (DirectMessagesTopicID.has_value() && JSON::RequiresMultipart(DirectMessagesTopicID.value())) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || JSON::RequiresMultipart(FromChatID) || JSON::RequiresMultipart(MessageIDs) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || (RemoveCaption.has_value() && JSON::RequiresMultipart(RemoveCaption.value()));
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

        if (RemoveCaption.has_value()) {
            JSON::AddMultipartField(
                Form, "remove_caption",
                RemoveCaption.value());
        }

        return Form;
    }

};

class copyMessages {
public:
    using Parameters = copyMessagesParameters;
    using ReturnType = std::vector<::TelegramBotAPI::Type::MessageId>;

    static constexpr const char *Name() noexcept {
        return "copyMessages";
    }

    explicit copyMessages(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::vector<::TelegramBotAPI::Type::MessageId> CopyMessages(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::vector<::TelegramBotAPI::Type::MessageId>>(
                "copyMessages",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::vector<::TelegramBotAPI::Type::MessageId>>(
            "copyMessages",
            ParametersValue.ToJson()
        );
    }

    std::vector<::TelegramBotAPI::Type::MessageId> CopyMessages(std::variant<long long, std::string> ChatID, std::variant<long long, std::string> FromChatID, std::vector<long long> MessageIDs) {
        Parameters ParametersValue(
        ChatID,
        FromChatID,
        MessageIDs
        );

        return CopyMessages(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_COPYMESSAGES_HPP
