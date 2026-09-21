#ifndef TELEGRAMBOTAPI_METHOD_ANSWERCALLBACKQUERY_HPP
#define TELEGRAMBOTAPI_METHOD_ANSWERCALLBACKQUERY_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to send answers to callback queries sent from inline keyboards. The answer will be displayed to the user as a notification at the top of the chat screen or as an alert. On success, True is returned.

struct answerCallbackQueryParameters {
    // The maximum amount of time in seconds that the result of the callback query may be cached client-side. Defaults to 0.
    std::optional<long long> CacheTime{};

    // Unique identifier for the query to be answered
    std::string CallbackQueryID;

    // If True, an alert will be shown by the client instead of a notification at the top of the chat screen. Defaults to False.
    std::optional<bool> ShowAlert{};

    // Text of the notification. If not specified, nothing will be shown to the user, 0-200 characters.
    std::optional<std::string> Text{};

    // URL that will be opened by the user's client. If you have created a Game and accepted the conditions via @BotFather, specify the URL that opens your game - note that this will only work if the query comes from a callback_game button.Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.
    std::optional<std::string> URL{};

    answerCallbackQueryParameters(const std::string &CallbackQueryIDValue)
        : CallbackQueryID(CallbackQueryIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (CacheTime.has_value()) {
            Object["cache_time"] = JSON::ToJson(CacheTime.value());
        }

        Object["callback_query_id"] = JSON::ToJson(CallbackQueryID);

        if (ShowAlert.has_value()) {
            Object["show_alert"] = JSON::ToJson(ShowAlert.value());
        }

        if (Text.has_value()) {
            Object["text"] = JSON::ToJson(Text.value());
        }

        if (URL.has_value()) {
            Object["url"] = JSON::ToJson(URL.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (CacheTime.has_value() && JSON::RequiresMultipart(CacheTime.value())) || JSON::RequiresMultipart(CallbackQueryID) || (ShowAlert.has_value() && JSON::RequiresMultipart(ShowAlert.value())) || (Text.has_value() && JSON::RequiresMultipart(Text.value())) || (URL.has_value() && JSON::RequiresMultipart(URL.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (CacheTime.has_value()) {
            JSON::AddMultipartField(
                Form, "cache_time",
                CacheTime.value());
        }

        JSON::AddMultipartField(
            Form, "callback_query_id",
            CallbackQueryID);

        if (ShowAlert.has_value()) {
            JSON::AddMultipartField(
                Form, "show_alert",
                ShowAlert.value());
        }

        if (Text.has_value()) {
            JSON::AddMultipartField(
                Form, "text",
                Text.value());
        }

        if (URL.has_value()) {
            JSON::AddMultipartField(
                Form, "url",
                URL.value());
        }

        return Form;
    }

};

class answerCallbackQuery {
public:
    using Parameters = answerCallbackQueryParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "answerCallbackQuery";
    }

    explicit answerCallbackQuery(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool AnswerCallbackQuery(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "answerCallbackQuery",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "answerCallbackQuery",
            ParametersValue.ToJson()
        );
    }

    bool AnswerCallbackQuery(std::string CallbackQueryID) {
        Parameters ParametersValue(
        CallbackQueryID
        );

        return AnswerCallbackQuery(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_ANSWERCALLBACKQUERY_HPP
