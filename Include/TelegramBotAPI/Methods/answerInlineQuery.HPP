#ifndef TELEGRAMBOTAPI_METHOD_ANSWERINLINEQUERY_HPP
#define TELEGRAMBOTAPI_METHOD_ANSWERINLINEQUERY_HPP

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
#include "TelegramBotAPI/Types/InlineQueryResultsButton.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to send answers to an inline query. On success, True is returned.No more than 50 results per query are allowed.

struct answerInlineQueryParameters {
    // A JSON-serialized object describing a button to be shown above inline query results
    std::optional<::TelegramBotAPI::Type::InlineQueryResultsButton> Button{};

    // The maximum amount of time in seconds that the result of the inline query may be cached on the server. Defaults to 300.
    std::optional<long long> CacheTime{};

    // Unique identifier for the answered query
    std::string InlineQueryID;

    // Pass True if results may be cached on the server side only for the user that sent the query. By default, results may be returned to any user who sends the same query.
    std::optional<bool> IsPersonal{};

    // Pass the offset that a client should send in the next query with the same text to receive more results. Pass an empty string if there are no more results or if you don't support pagination. Offset length can't exceed 64 bytes.
    std::optional<std::string> NextOffset{};

    // A JSON-serialized Array of results for the inline query
    std::vector<std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice>> Results;

    answerInlineQueryParameters(const std::string &InlineQueryIDValue, const std::vector<std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice>> &ResultsValue)
        : InlineQueryID(InlineQueryIDValue), Results(ResultsValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (Button.has_value()) {
            Object["button"] = JSON::ToJson(Button.value());
        }

        if (CacheTime.has_value()) {
            Object["cache_time"] = JSON::ToJson(CacheTime.value());
        }

        Object["inline_query_id"] = JSON::ToJson(InlineQueryID);

        if (IsPersonal.has_value()) {
            Object["is_personal"] = JSON::ToJson(IsPersonal.value());
        }

        if (NextOffset.has_value()) {
            Object["next_offset"] = JSON::ToJson(NextOffset.value());
        }

        Object["results"] = JSON::ToJson(Results);

        return Object;
    }

    bool RequiresMultipart() const {
        return (Button.has_value() && JSON::RequiresMultipart(Button.value())) || (CacheTime.has_value() && JSON::RequiresMultipart(CacheTime.value())) || JSON::RequiresMultipart(InlineQueryID) || (IsPersonal.has_value() && JSON::RequiresMultipart(IsPersonal.value())) || (NextOffset.has_value() && JSON::RequiresMultipart(NextOffset.value())) || JSON::RequiresMultipart(Results);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (Button.has_value()) {
            JSON::AddMultipartField(
                Form, "button",
                Button.value());
        }

        if (CacheTime.has_value()) {
            JSON::AddMultipartField(
                Form, "cache_time",
                CacheTime.value());
        }

        JSON::AddMultipartField(
            Form, "inline_query_id",
            InlineQueryID);

        if (IsPersonal.has_value()) {
            JSON::AddMultipartField(
                Form, "is_personal",
                IsPersonal.value());
        }

        if (NextOffset.has_value()) {
            JSON::AddMultipartField(
                Form, "next_offset",
                NextOffset.value());
        }

        JSON::AddMultipartField(
            Form, "results",
            Results);

        return Form;
    }

};

class answerInlineQuery {
public:
    using Parameters = answerInlineQueryParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "answerInlineQuery";
    }

    explicit answerInlineQuery(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool AnswerInlineQuery(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "answerInlineQuery",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "answerInlineQuery",
            ParametersValue.ToJson()
        );
    }

    bool AnswerInlineQuery(std::string InlineQueryID, std::vector<std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice>> Results) {
        Parameters ParametersValue(
        InlineQueryID,
        Results
        );

        return AnswerInlineQuery(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_ANSWERINLINEQUERY_HPP
