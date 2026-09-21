#ifndef TELEGRAMBOTAPI_METHOD_FORWARDMESSAGE_HPP
#define TELEGRAMBOTAPI_METHOD_FORWARDMESSAGE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/SuggestedPostParameters.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to forward messages of any kind. Service messages and messages with protected content can't be forwarded. On success, the sent Message is returned.

struct forwardMessageParameters {
    // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Identifier of the direct messages topic to which the message will be forwarded; required if the message is forwarded to a direct messages chat
    std::optional<long long> DirectMessagesTopicID{};

    // Sends the message silently. Users will receive a notification with no sound.
    std::optional<bool> DisableNotification{};

    // Unique identifier for the chat where the original message was sent (or username of the target bot, supergroup or channel in the format @username)
    std::variant<long long, std::string> FromChatID;

    // Unique identifier of the message effect to be added to the message; only available when forwarding to private chats
    std::optional<std::string> MessageEffectID{};

    // Message identifier in the chat specified in from_chat_id
    long long MessageID;

    // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
    std::optional<long long> MessageThreadID{};

    // Protects the contents of the forwarded message from forwarding and saving
    std::optional<bool> ProtectContent{};

    // A JSON-serialized object containing the parameters of the suggested post to send; for direct messages chats only
    std::optional<::TelegramBotAPI::Type::SuggestedPostParameters> SuggestedPostParameters{};

    // New start timestamp for the forwarded video in the message
    std::optional<long long> VideoStartTimestamp{};

    forwardMessageParameters(const std::variant<long long, std::string> &ChatIDValue, const std::variant<long long, std::string> &FromChatIDValue, const long long &MessageIDValue)
        : ChatID(ChatIDValue), FromChatID(FromChatIDValue), MessageID(MessageIDValue) {}

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

        if (MessageEffectID.has_value()) {
            Object["message_effect_id"] = JSON::ToJson(MessageEffectID.value());
        }

        Object["message_id"] = JSON::ToJson(MessageID);

        if (MessageThreadID.has_value()) {
            Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
        }

        if (ProtectContent.has_value()) {
            Object["protect_content"] = JSON::ToJson(ProtectContent.value());
        }

        if (SuggestedPostParameters.has_value()) {
            Object["suggested_post_parameters"] = JSON::ToJson(SuggestedPostParameters.value());
        }

        if (VideoStartTimestamp.has_value()) {
            Object["video_start_timestamp"] = JSON::ToJson(VideoStartTimestamp.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || (DirectMessagesTopicID.has_value() && JSON::RequiresMultipart(DirectMessagesTopicID.value())) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || JSON::RequiresMultipart(FromChatID) || (MessageEffectID.has_value() && JSON::RequiresMultipart(MessageEffectID.value())) || JSON::RequiresMultipart(MessageID) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || (SuggestedPostParameters.has_value() && JSON::RequiresMultipart(SuggestedPostParameters.value())) || (VideoStartTimestamp.has_value() && JSON::RequiresMultipart(VideoStartTimestamp.value()));
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

        if (MessageEffectID.has_value()) {
            JSON::AddMultipartField(
                Form, "message_effect_id",
                MessageEffectID.value());
        }

        JSON::AddMultipartField(
            Form, "message_id",
            MessageID);

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

        if (SuggestedPostParameters.has_value()) {
            JSON::AddMultipartField(
                Form, "suggested_post_parameters",
                SuggestedPostParameters.value());
        }

        if (VideoStartTimestamp.has_value()) {
            JSON::AddMultipartField(
                Form, "video_start_timestamp",
                VideoStartTimestamp.value());
        }

        return Form;
    }

};

class forwardMessage {
public:
    using Parameters = forwardMessageParameters;
    using ReturnType = ::TelegramBotAPI::Type::Message;

    static constexpr const char *Name() noexcept {
        return "forwardMessage";
    }

    explicit forwardMessage(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::Message ForwardMessage(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::Message>(
                "forwardMessage",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::Message>(
            "forwardMessage",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::Message ForwardMessage(std::variant<long long, std::string> ChatID, std::variant<long long, std::string> FromChatID, long long MessageID) {
        Parameters ParametersValue(
        ChatID,
        FromChatID,
        MessageID
        );

        return ForwardMessage(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_FORWARDMESSAGE_HPP
