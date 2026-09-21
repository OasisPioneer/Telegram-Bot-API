#ifndef TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGEREPLYMARKUP_HPP
#define TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGEREPLYMARKUP_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to edit only the reply markup of an ephemeral message. Note that it is not guaranteed that the user will receive the message edit event, especially if they are offline. On success, True is returned.

struct editEphemeralMessageReplyMarkupParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // Identifier of the ephemeral message to edit
    long long EphemeralMessageID;

    // Identifier of the user who received the message
    long long ReceiverUserID;

    // A JSON-serialized object for an inline keyboard
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

    editEphemeralMessageReplyMarkupParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &EphemeralMessageIDValue, const long long &ReceiverUserIDValue)
        : ChatID(ChatIDValue), EphemeralMessageID(EphemeralMessageIDValue), ReceiverUserID(ReceiverUserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["ephemeral_message_id"] = JSON::ToJson(EphemeralMessageID);

        Object["receiver_user_id"] = JSON::ToJson(ReceiverUserID);

        if (ReplyMarkup.has_value()) {
            Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(EphemeralMessageID) || JSON::RequiresMultipart(ReceiverUserID) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        JSON::AddMultipartField(
            Form, "ephemeral_message_id",
            EphemeralMessageID);

        JSON::AddMultipartField(
            Form, "receiver_user_id",
            ReceiverUserID);

        if (ReplyMarkup.has_value()) {
            JSON::AddMultipartField(
                Form, "reply_markup",
                ReplyMarkup.value());
        }

        return Form;
    }

};

class editEphemeralMessageReplyMarkup {
public:
    using Parameters = editEphemeralMessageReplyMarkupParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "editEphemeralMessageReplyMarkup";
    }

    explicit editEphemeralMessageReplyMarkup(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool EditEphemeralMessageReplyMarkup(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "editEphemeralMessageReplyMarkup",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "editEphemeralMessageReplyMarkup",
            ParametersValue.ToJson()
        );
    }

    bool EditEphemeralMessageReplyMarkup(std::variant<long long, std::string> ChatID, long long EphemeralMessageID, long long ReceiverUserID) {
        Parameters ParametersValue(
        ChatID,
        EphemeralMessageID,
        ReceiverUserID
        );

        return EditEphemeralMessageReplyMarkup(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGEREPLYMARKUP_HPP
