#ifndef TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGEMEDIA_HPP
#define TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGEMEDIA_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InputMediaAnimation.HPP"
#include "TelegramBotAPI/Types/InputMediaAudio.HPP"
#include "TelegramBotAPI/Types/InputMediaDocument.HPP"
#include "TelegramBotAPI/Types/InputMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaVideo.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to edit the media of an ephemeral message. Note that it is not guaranteed that the user will receive the message edit event, especially if they are offline. On success, True is returned.

struct editEphemeralMessageMediaParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // Identifier of the ephemeral message to edit
    long long EphemeralMessageID;

    // A JSON-serialized object for the new media content of the message
    std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> Media;

    // Identifier of the user who received the message
    long long ReceiverUserID;

    // A JSON-serialized object for an inline keyboard
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

    editEphemeralMessageMediaParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &EphemeralMessageIDValue, const std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> &MediaValue, const long long &ReceiverUserIDValue)
        : ChatID(ChatIDValue), EphemeralMessageID(EphemeralMessageIDValue), Media(MediaValue), ReceiverUserID(ReceiverUserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["ephemeral_message_id"] = JSON::ToJson(EphemeralMessageID);

        Object["media"] = JSON::ToJson(Media);

        Object["receiver_user_id"] = JSON::ToJson(ReceiverUserID);

        if (ReplyMarkup.has_value()) {
            Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(EphemeralMessageID) || JSON::RequiresMultipart(Media) || JSON::RequiresMultipart(ReceiverUserID) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value()));
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
            Form, "media",
            Media);

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

class editEphemeralMessageMedia {
public:
    using Parameters = editEphemeralMessageMediaParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "editEphemeralMessageMedia";
    }

    explicit editEphemeralMessageMedia(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool EditEphemeralMessageMedia(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "editEphemeralMessageMedia",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "editEphemeralMessageMedia",
            ParametersValue.ToJson()
        );
    }

    bool EditEphemeralMessageMedia(std::variant<long long, std::string> ChatID, long long EphemeralMessageID, std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> Media, long long ReceiverUserID) {
        Parameters ParametersValue(
        ChatID,
        EphemeralMessageID,
        Media,
        ReceiverUserID
        );

        return EditEphemeralMessageMedia(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGEMEDIA_HPP
