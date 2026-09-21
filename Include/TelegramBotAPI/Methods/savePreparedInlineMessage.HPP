#ifndef TELEGRAMBOTAPI_METHOD_SAVEPREPAREDINLINEMESSAGE_HPP
#define TELEGRAMBOTAPI_METHOD_SAVEPREPAREDINLINEMESSAGE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultArticle.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultAudio.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedAudio.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedDocument.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedGif.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedMpeg4Gif.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedPhoto.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedSticker.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedVideo.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedVoice.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultContact.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultDocument.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultGame.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultGif.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultLocation.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultMpeg4Gif.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultPhoto.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultVenue.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultVideo.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultVoice.HPP"
#include "TelegramBotAPI/Types/PreparedInlineMessage.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Stores a message that can be sent by a user of a Mini App. Returns a PreparedInlineMessage object.

struct savePreparedInlineMessageParameters {
    // Pass True if the message can be sent to private chats with bots
    std::optional<bool> AllowBotChats{};

    // Pass True if the message can be sent to channel chats
    std::optional<bool> AllowChannelChats{};

    // Pass True if the message can be sent to group and supergroup chats
    std::optional<bool> AllowGroupChats{};

    // Pass True if the message can be sent to private chats with users
    std::optional<bool> AllowUserChats{};

    // A JSON-serialized object describing the message to be sent
    std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> Result;

    // Unique identifier of the target user that can use the prepared message
    long long UserID;

    savePreparedInlineMessageParameters(const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &ResultValue, const long long &UserIDValue)
        : Result(ResultValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (AllowBotChats.has_value()) {
            Object["allow_bot_chats"] = JSON::ToJson(AllowBotChats.value());
        }

        if (AllowChannelChats.has_value()) {
            Object["allow_channel_chats"] = JSON::ToJson(AllowChannelChats.value());
        }

        if (AllowGroupChats.has_value()) {
            Object["allow_group_chats"] = JSON::ToJson(AllowGroupChats.value());
        }

        if (AllowUserChats.has_value()) {
            Object["allow_user_chats"] = JSON::ToJson(AllowUserChats.value());
        }

        Object["result"] = JSON::ToJson(Result);

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return (AllowBotChats.has_value() && JSON::RequiresMultipart(AllowBotChats.value())) || (AllowChannelChats.has_value() && JSON::RequiresMultipart(AllowChannelChats.value())) || (AllowGroupChats.has_value() && JSON::RequiresMultipart(AllowGroupChats.value())) || (AllowUserChats.has_value() && JSON::RequiresMultipart(AllowUserChats.value())) || JSON::RequiresMultipart(Result) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (AllowBotChats.has_value()) {
            JSON::AddMultipartField(
                Form, "allow_bot_chats",
                AllowBotChats.value());
        }

        if (AllowChannelChats.has_value()) {
            JSON::AddMultipartField(
                Form, "allow_channel_chats",
                AllowChannelChats.value());
        }

        if (AllowGroupChats.has_value()) {
            JSON::AddMultipartField(
                Form, "allow_group_chats",
                AllowGroupChats.value());
        }

        if (AllowUserChats.has_value()) {
            JSON::AddMultipartField(
                Form, "allow_user_chats",
                AllowUserChats.value());
        }

        JSON::AddMultipartField(
            Form, "result",
            Result);

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class savePreparedInlineMessage {
public:
    using Parameters = savePreparedInlineMessageParameters;
    using ReturnType = ::TelegramBotAPI::Type::PreparedInlineMessage;

    static constexpr const char *Name() noexcept {
        return "savePreparedInlineMessage";
    }

    explicit savePreparedInlineMessage(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::PreparedInlineMessage SavePreparedInlineMessage(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::PreparedInlineMessage>(
                "savePreparedInlineMessage",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::PreparedInlineMessage>(
            "savePreparedInlineMessage",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::PreparedInlineMessage SavePreparedInlineMessage(std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> Result, long long UserID) {
        Parameters ParametersValue(
        Result,
        UserID
        );

        return SavePreparedInlineMessage(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SAVEPREPAREDINLINEMESSAGE_HPP
