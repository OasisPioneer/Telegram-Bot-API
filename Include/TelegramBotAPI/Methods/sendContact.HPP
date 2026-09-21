#ifndef TELEGRAMBOTAPI_METHOD_SENDCONTACT_HPP
#define TELEGRAMBOTAPI_METHOD_SENDCONTACT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/EphemeralMessageParameters.HPP"
#include "TelegramBotAPI/Types/ForceReply.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardRemove.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include "TelegramBotAPI/Types/SuggestedPostParameters.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to send phone contacts. On success, the sent Message is returned.

struct sendContactParameters {
    // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance.
    std::optional<bool> AllowPaidBroadcast{};

    // Unique identifier of the business connection on behalf of which the message will be sent
    std::optional<std::string> BusinessConnectionID{};

    // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Identifier of the direct messages topic to which the message will be sent; required if the message is sent to a direct messages chat
    std::optional<long long> DirectMessagesTopicID{};

    // Sends the message silently. Users will receive a notification with no sound.
    std::optional<bool> DisableNotification{};

    // A JSON-serialized object containing the parameters of the ephemeral message to send
    std::optional<::TelegramBotAPI::Type::EphemeralMessageParameters> EphemeralMessageParameters{};

    // Contact's first name
    std::string FirstName;

    // Contact's last name
    std::optional<std::string> LastName{};

    // Unique identifier of the message effect to be added to the message; for private chats only
    std::optional<std::string> MessageEffectID{};

    // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
    std::optional<long long> MessageThreadID{};

    // Contact's phone number
    std::string PhoneNumber;

    // Protects the contents of the sent message from forwarding and saving
    std::optional<bool> ProtectContent{};

    // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user.
    std::optional<std::variant<::TelegramBotAPI::Type::InlineKeyboardMarkup, ::TelegramBotAPI::Type::ReplyKeyboardMarkup, ::TelegramBotAPI::Type::ReplyKeyboardRemove, ::TelegramBotAPI::Type::ForceReply>> ReplyMarkup{};

    // Description of the message to reply to
    std::optional<::TelegramBotAPI::Type::ReplyParameters> ReplyParameters{};

    // A JSON-serialized object containing the parameters of the suggested post to send; for direct messages chats only. If the message is sent as a reply to another suggested post, then that suggested post is automatically declined.
    std::optional<::TelegramBotAPI::Type::SuggestedPostParameters> SuggestedPostParameters{};

    // Additional data about the contact in the form of a vCard, 0-2048 bytes
    std::optional<std::string> Vcard{};

    sendContactParameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &FirstNameValue, const std::string &PhoneNumberValue)
        : ChatID(ChatIDValue), FirstName(FirstNameValue), PhoneNumber(PhoneNumberValue) {}

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

        if (EphemeralMessageParameters.has_value()) {
            Object["ephemeral_message_parameters"] = JSON::ToJson(EphemeralMessageParameters.value());
        }

        Object["first_name"] = JSON::ToJson(FirstName);

        if (LastName.has_value()) {
            Object["last_name"] = JSON::ToJson(LastName.value());
        }

        if (MessageEffectID.has_value()) {
            Object["message_effect_id"] = JSON::ToJson(MessageEffectID.value());
        }

        if (MessageThreadID.has_value()) {
            Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
        }

        Object["phone_number"] = JSON::ToJson(PhoneNumber);

        if (ProtectContent.has_value()) {
            Object["protect_content"] = JSON::ToJson(ProtectContent.value());
        }

        if (ReplyMarkup.has_value()) {
            Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
        }

        if (ReplyParameters.has_value()) {
            Object["reply_parameters"] = JSON::ToJson(ReplyParameters.value());
        }

        if (SuggestedPostParameters.has_value()) {
            Object["suggested_post_parameters"] = JSON::ToJson(SuggestedPostParameters.value());
        }

        if (Vcard.has_value()) {
            Object["vcard"] = JSON::ToJson(Vcard.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (AllowPaidBroadcast.has_value() && JSON::RequiresMultipart(AllowPaidBroadcast.value())) || (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || JSON::RequiresMultipart(ChatID) || (DirectMessagesTopicID.has_value() && JSON::RequiresMultipart(DirectMessagesTopicID.value())) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || (EphemeralMessageParameters.has_value() && JSON::RequiresMultipart(EphemeralMessageParameters.value())) || JSON::RequiresMultipart(FirstName) || (LastName.has_value() && JSON::RequiresMultipart(LastName.value())) || (MessageEffectID.has_value() && JSON::RequiresMultipart(MessageEffectID.value())) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || JSON::RequiresMultipart(PhoneNumber) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (ReplyParameters.has_value() && JSON::RequiresMultipart(ReplyParameters.value())) || (SuggestedPostParameters.has_value() && JSON::RequiresMultipart(SuggestedPostParameters.value())) || (Vcard.has_value() && JSON::RequiresMultipart(Vcard.value()));
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

        if (EphemeralMessageParameters.has_value()) {
            JSON::AddMultipartField(
                Form, "ephemeral_message_parameters",
                EphemeralMessageParameters.value());
        }

        JSON::AddMultipartField(
            Form, "first_name",
            FirstName);

        if (LastName.has_value()) {
            JSON::AddMultipartField(
                Form, "last_name",
                LastName.value());
        }

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

        JSON::AddMultipartField(
            Form, "phone_number",
            PhoneNumber);

        if (ProtectContent.has_value()) {
            JSON::AddMultipartField(
                Form, "protect_content",
                ProtectContent.value());
        }

        if (ReplyMarkup.has_value()) {
            JSON::AddMultipartField(
                Form, "reply_markup",
                ReplyMarkup.value());
        }

        if (ReplyParameters.has_value()) {
            JSON::AddMultipartField(
                Form, "reply_parameters",
                ReplyParameters.value());
        }

        if (SuggestedPostParameters.has_value()) {
            JSON::AddMultipartField(
                Form, "suggested_post_parameters",
                SuggestedPostParameters.value());
        }

        if (Vcard.has_value()) {
            JSON::AddMultipartField(
                Form, "vcard",
                Vcard.value());
        }

        return Form;
    }

};

class sendContact {
public:
    using Parameters = sendContactParameters;
    using ReturnType = ::TelegramBotAPI::Type::Message;

    static constexpr const char *Name() noexcept {
        return "sendContact";
    }

    explicit sendContact(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::Message SendContact(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::Message>(
                "sendContact",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::Message>(
            "sendContact",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::Message SendContact(std::variant<long long, std::string> ChatID, std::string FirstName, std::string PhoneNumber) {
        Parameters ParametersValue(
        ChatID,
        FirstName,
        PhoneNumber
        );

        return SendContact(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDCONTACT_HPP
