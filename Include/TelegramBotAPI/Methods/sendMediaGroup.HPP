#ifndef TELEGRAMBOTAPI_METHOD_SENDMEDIAGROUP_HPP
#define TELEGRAMBOTAPI_METHOD_SENDMEDIAGROUP_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InputMediaAudio.HPP"
#include "TelegramBotAPI/Types/InputMediaDocument.HPP"
#include "TelegramBotAPI/Types/InputMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaVideo.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to send a group of photos, live photos, videos, documents or audios as an album. Documents and audio files can be only grouped in an album with messages of the same type. On success, an Array of Message objects that were sent is returned.

struct sendMediaGroupParameters {
    // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance.
    std::optional<bool> AllowPaidBroadcast{};

    // Unique identifier of the business connection on behalf of which the message will be sent
    std::optional<std::string> BusinessConnectionID{};

    // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Identifier of the direct messages topic to which the messages will be sent; required if the messages are sent to a direct messages chat
    std::optional<long long> DirectMessagesTopicID{};

    // Sends messages silently. Users will receive a notification with no sound.
    std::optional<bool> DisableNotification{};

    // A JSON-serialized Array describing messages to be sent, must include 2-10 items
    std::vector<std::variant<::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo>> Media;

    // Unique identifier of the message effect to be added to the message; for private chats only
    std::optional<std::string> MessageEffectID{};

    // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
    std::optional<long long> MessageThreadID{};

    // Protects the contents of the sent messages from forwarding and saving
    std::optional<bool> ProtectContent{};

    // Description of the message to reply to
    std::optional<::TelegramBotAPI::Type::ReplyParameters> ReplyParameters{};

    sendMediaGroupParameters(const std::variant<long long, std::string> &ChatIDValue, const std::vector<std::variant<::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo>> &MediaValue)
        : ChatID(ChatIDValue), Media(MediaValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (AllowPaidBroadcast.has_value()) {
            Object["allow_paid_broadcast"] = JSON::ToJson(AllowPaidBroadcast.value());
        }

        if (BusinessConnectionID.has_value()) {
            Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
        }

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (DirectMessagesTopicID.has_value()) {
            Object["direct_messages_topic_id"] = JSON::ToJson(DirectMessagesTopicID.value());
        }

        if (DisableNotification.has_value()) {
            Object["disable_notification"] = JSON::ToJson(DisableNotification.value());
        }

        Object["media"] = JSON::ToJson(Media);

        if (MessageEffectID.has_value()) {
            Object["message_effect_id"] = JSON::ToJson(MessageEffectID.value());
        }

        if (MessageThreadID.has_value()) {
            Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
        }

        if (ProtectContent.has_value()) {
            Object["protect_content"] = JSON::ToJson(ProtectContent.value());
        }

        if (ReplyParameters.has_value()) {
            Object["reply_parameters"] = JSON::ToJson(ReplyParameters.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (AllowPaidBroadcast.has_value() && JSON::RequiresMultipart(AllowPaidBroadcast.value())) || (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || JSON::RequiresMultipart(ChatID) || (DirectMessagesTopicID.has_value() && JSON::RequiresMultipart(DirectMessagesTopicID.value())) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || JSON::RequiresMultipart(Media) || (MessageEffectID.has_value() && JSON::RequiresMultipart(MessageEffectID.value())) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || (ReplyParameters.has_value() && JSON::RequiresMultipart(ReplyParameters.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (AllowPaidBroadcast.has_value()) {
            JSON::AddMultipartField(
                Form, "allow_paid_broadcast",
                AllowPaidBroadcast.value());
        }

        if (BusinessConnectionID.has_value()) {
            JSON::AddMultipartField(
                Form, "business_connection_id",
                BusinessConnectionID.value());
        }

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
            Form, "media",
            Media);

        if (MessageEffectID.has_value()) {
            JSON::AddMultipartField(
                Form, "message_effect_id",
                MessageEffectID.value());
        }

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

        if (ReplyParameters.has_value()) {
            JSON::AddMultipartField(
                Form, "reply_parameters",
                ReplyParameters.value());
        }

        return Form;
    }

};

class sendMediaGroup {
public:
    using Parameters = sendMediaGroupParameters;
    using ReturnType = std::vector<::TelegramBotAPI::Type::Message>;

    static constexpr const char *Name() noexcept {
        return "sendMediaGroup";
    }

    explicit sendMediaGroup(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::vector<::TelegramBotAPI::Type::Message> SendMediaGroup(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::vector<::TelegramBotAPI::Type::Message>>(
                "sendMediaGroup",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::vector<::TelegramBotAPI::Type::Message>>(
            "sendMediaGroup",
            ParametersValue.ToJson()
        );
    }

    std::vector<::TelegramBotAPI::Type::Message> SendMediaGroup(std::variant<long long, std::string> ChatID, std::vector<std::variant<::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo>> Media) {
        Parameters ParametersValue(
        ChatID,
        Media
        );

        return SendMediaGroup(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDMEDIAGROUP_HPP
