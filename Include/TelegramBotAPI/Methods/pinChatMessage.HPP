#ifndef TELEGRAMBOTAPI_METHOD_PINCHATMESSAGE_HPP
#define TELEGRAMBOTAPI_METHOD_PINCHATMESSAGE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to add a message to the list of pinned messages in a chat. In private chats and channel direct messages chats, all non-service messages can be pinned. Conversely, the bot must be an administrator with the 'can_pin_messages' right or the 'can_edit_messages' right to pin messages in groups and channels respectively. Returns True on success.

struct pinChatMessageParameters {
    // Unique identifier of the business connection on behalf of which the message will be pinned
    std::optional<std::string> BusinessConnectionID{};

    // Unique identifier for the target chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Pass True if it is not necessary to send a notification to all chat members about the new pinned message. Notifications are always disabled in channels and private chats.
    std::optional<bool> DisableNotification{};

    // Identifier of a message to pin
    long long MessageID;

    pinChatMessageParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &MessageIDValue)
        : ChatID(ChatIDValue), MessageID(MessageIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (BusinessConnectionID.has_value()) {
            Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
        }

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (DisableNotification.has_value()) {
            Object["disable_notification"] = JSON::ToJson(DisableNotification.value());
        }

        Object["message_id"] = JSON::ToJson(MessageID);

        return Object;
    }

    bool RequiresMultipart() const {
        return (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || JSON::RequiresMultipart(ChatID) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || JSON::RequiresMultipart(MessageID);
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

        if (DisableNotification.has_value()) {
            JSON::AddMultipartField(
                Form, "disable_notification",
                DisableNotification.value());
        }

        JSON::AddMultipartField(
            Form, "message_id",
            MessageID);

        return Form;
    }

};

class pinChatMessage {
public:
    using Parameters = pinChatMessageParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "pinChatMessage";
    }

    explicit pinChatMessage(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool PinChatMessage(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "pinChatMessage",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "pinChatMessage",
            ParametersValue.ToJson()
        );
    }

    bool PinChatMessage(std::variant<long long, std::string> ChatID, long long MessageID) {
        Parameters ParametersValue(
        ChatID,
        MessageID
        );

        return PinChatMessage(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_PINCHATMESSAGE_HPP
