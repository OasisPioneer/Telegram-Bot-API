#ifndef TELEGRAMBOTAPI_METHOD_ANSWERSHIPPINGQUERY_HPP
#define TELEGRAMBOTAPI_METHOD_ANSWERSHIPPINGQUERY_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ShippingOption.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

    // If you sent an invoice requesting a shipping address and the parameter is_flexible was specified, the Bot API will send an Update with a shipping_query field to the bot. Use this method to reply to shipping queries. On success, True is returned.

struct answerShippingQueryParameters {
    // Required if ok is False. Error message in human readable form that explains why it is impossible to complete the order (e.g. “Sorry, delivery to your desired address is unavailable”). Telegram will display this message to the user.
    std::optional<std::string> ErrorMessage{};

    // Pass True if delivery to the specified address is possible and False if there are any problems (for example, if delivery to the specified address is not possible)
    bool Ok;

    // Required if ok is True. A JSON-serialized Array of available shipping options.
    std::optional<std::vector<::TelegramBotAPI::Type::ShippingOption>> ShippingOptions{};

    // Unique identifier for the query to be answered
    std::string ShippingQueryID;

    answerShippingQueryParameters(const bool &OkValue, const std::string &ShippingQueryIDValue)
        : Ok(OkValue), ShippingQueryID(ShippingQueryIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (ErrorMessage.has_value()) {
            Object["error_message"] = JSON::ToJson(ErrorMessage.value());
        }

        Object["ok"] = JSON::ToJson(Ok);

        if (ShippingOptions.has_value()) {
            Object["shipping_options"] = JSON::ToJson(ShippingOptions.value());
        }

        Object["shipping_query_id"] = JSON::ToJson(ShippingQueryID);

        return Object;
    }

    bool RequiresMultipart() const {
        return (ErrorMessage.has_value() && JSON::RequiresMultipart(ErrorMessage.value())) || JSON::RequiresMultipart(Ok) || (ShippingOptions.has_value() && JSON::RequiresMultipart(ShippingOptions.value())) || JSON::RequiresMultipart(ShippingQueryID);
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

        if (ShippingOptions.has_value()) {
            JSON::AddMultipartField(
                Form, "shipping_options",
                ShippingOptions.value());
        }

        JSON::AddMultipartField(
            Form, "shipping_query_id",
            ShippingQueryID);

        return Form;
    }

};

class answerShippingQuery {
public:
    using Parameters = answerShippingQueryParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "answerShippingQuery";
    }

    explicit answerShippingQuery(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool AnswerShippingQuery(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "answerShippingQuery",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "answerShippingQuery",
            ParametersValue.ToJson()
        );
    }

    bool AnswerShippingQuery(bool Ok, std::string ShippingQueryID) {
        Parameters ParametersValue(
        Ok,
        ShippingQueryID
        );

        return AnswerShippingQuery(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_ANSWERSHIPPINGQUERY_HPP
