#ifndef TELEGRAMBOTAPI_METHOD_ANSWERPRECHECKOUTQUERY_HPP
#define TELEGRAMBOTAPI_METHOD_ANSWERPRECHECKOUTQUERY_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Once the user has confirmed their payment and shipping details, the Bot API sends the final confirmation in the form of an Update with the field pre_checkout_query. Use this method to respond to such pre-checkout queries. On success, True is returned. Note: The Bot API must receive an answer within 10 seconds after the pre-checkout query was sent.

struct answerPreCheckoutQueryParameters {
    // Required if ok is False. Error message in human readable form that explains the reason for failure to proceed with the checkout (e.g. "Sorry, somebody just bought the last of our amazing black T-shirts while you were busy filling out your payment details. Please choose a different color or garment!"). Telegram will display this message to the user.
    std::optional<std::string> ErrorMessage{};

    // Specify True if everything is alright (goods are available, etc.) and the bot is ready to proceed with the order. Use False if there are any problems.
    bool Ok;

    // Unique identifier for the query to be answered
    std::string PreCheckoutQueryID;

    answerPreCheckoutQueryParameters(const bool &OkValue, const std::string &PreCheckoutQueryIDValue)
        : Ok(OkValue), PreCheckoutQueryID(PreCheckoutQueryIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (ErrorMessage.has_value()) {
            Object["error_message"] = JSON::ToJson(ErrorMessage.value());
        }

        Object["ok"] = JSON::ToJson(Ok);

        Object["pre_checkout_query_id"] = JSON::ToJson(PreCheckoutQueryID);

        return Object;
    }

    bool RequiresMultipart() const {
        return (ErrorMessage.has_value() && JSON::RequiresMultipart(ErrorMessage.value())) || JSON::RequiresMultipart(Ok) || JSON::RequiresMultipart(PreCheckoutQueryID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (ErrorMessage.has_value()) {
            JSON::AddMultipartField(
                Form, "error_message",
                ErrorMessage.value());
        }

        JSON::AddMultipartField(
            Form, "ok",
            Ok);

        JSON::AddMultipartField(
            Form, "pre_checkout_query_id",
            PreCheckoutQueryID);

        return Form;
    }

};

class answerPreCheckoutQuery {
public:
    using Parameters = answerPreCheckoutQueryParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "answerPreCheckoutQuery";
    }

    explicit answerPreCheckoutQuery(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool AnswerPreCheckoutQuery(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "answerPreCheckoutQuery",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "answerPreCheckoutQuery",
            ParametersValue.ToJson()
        );
    }

    bool AnswerPreCheckoutQuery(bool Ok, std::string PreCheckoutQueryID) {
        Parameters ParametersValue(
        Ok,
        PreCheckoutQueryID
        );

        return AnswerPreCheckoutQuery(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_ANSWERPRECHECKOUTQUERY_HPP
