#ifndef TELEGRAMBOTAPI_METHOD_ANSWERWEBAPPQUERY_HPP
#define TELEGRAMBOTAPI_METHOD_ANSWERWEBAPPQUERY_HPP

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
#include "TelegramBotAPI/Types/SentWebAppMessage.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to set the result of an interaction with a Web App and send a corresponding message on behalf of the user to the chat from which the query originated. On success, a SentWebAppMessage object is returned.

struct answerWebAppQueryParameters {
    // A JSON-serialized object describing the message to be sent
    std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> Result;

    // Unique identifier for the query to be answered
    std::string WebAppQueryID;

    answerWebAppQueryParameters(const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &ResultValue, const std::string &WebAppQueryIDValue)
        : Result(ResultValue), WebAppQueryID(WebAppQueryIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["result"] = JSON::ToJson(Result);

        Object["web_app_query_id"] = JSON::ToJson(WebAppQueryID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Result) || JSON::RequiresMultipart(WebAppQueryID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "result",
            Result);

        JSON::AddMultipartField(
            Form, "web_app_query_id",
            WebAppQueryID);

        return Form;
    }

};

class answerWebAppQuery {
public:
    using Parameters = answerWebAppQueryParameters;
    using ReturnType = ::TelegramBotAPI::Type::SentWebAppMessage;

    static constexpr const char *Name() noexcept {
        return "answerWebAppQuery";
    }

    explicit answerWebAppQuery(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::SentWebAppMessage AnswerWebAppQuery(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::SentWebAppMessage>(
                "answerWebAppQuery",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::SentWebAppMessage>(
            "answerWebAppQuery",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::SentWebAppMessage AnswerWebAppQuery(std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> Result, std::string WebAppQueryID) {
        Parameters ParametersValue(
        Result,
        WebAppQueryID
        );

        return AnswerWebAppQuery(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_ANSWERWEBAPPQUERY_HPP
