#ifndef TELEGRAMBOTAPI_TELEGRAM_CLIENT_TPP
#define TELEGRAMBOTAPI_TELEGRAM_CLIENT_TPP

#include <string>

#include <boost/json.hpp>

#include "TelegramBotAPI/JSON/Deserializer.HPP"

namespace TelegramBotAPI {
    template <typename ReturnType>
    ReturnType TelegramClient::Call(const std::string &Method) {
        JSON::Object Parameters;

        return Call<ReturnType>(Method, Parameters);
    }

    template <typename ReturnType>
    ReturnType TelegramClient::Call(const std::string  &Method,
                                    const JSON::Object &Parameters) {
        Network::HTTPResponse Response = PerformRequest(Method, Parameters);

        if (Response.StatusCode < 200 || Response.StatusCode >= 300) {
            throw TelegramAPIException(static_cast<int>(Response.StatusCode),
                                       "Telegram API returned HTTP status " +
                                           std::to_string(Response.StatusCode));
        }

        boost::json::value JsonValue;

        try {
            JsonValue = boost::json::parse(Response.Body);
        } catch (const boost::system::system_error &Exception) {
            throw TelegramAPIException(0,
                                       "Failed to parse Telegram API JSON: " +
                                           std::string(Exception.what()));
        }

        if (!JsonValue.is_object()) {
            throw TelegramAPIException(
                0, "Telegram API response is not a JSON object");
        }

        const boost::json::object &JsonObject = JsonValue.as_object();

        const boost::json::object::const_iterator OkIterator =
            JsonObject.find("ok");

        if (OkIterator == JsonObject.end()) {
            throw TelegramAPIException(
                0, "Telegram API response is missing field: ok");
        }

        if (!OkIterator->value().is_bool()) {
            throw TelegramAPIException(
                0, "Telegram API field 'ok' is not a boolean");
        }

        if (!OkIterator->value().as_bool()) {
            int         ErrorCode = 0;
            std::string Description;

            std::optional<Type::ResponseParameters> Parameters;

            const boost::json::object::const_iterator ErrorCodeIterator =
                JsonObject.find("error_code");

            if (ErrorCodeIterator != JsonObject.end() &&
                ErrorCodeIterator->value().is_int64()) {
                ErrorCode =
                    static_cast<int>(ErrorCodeIterator->value().as_int64());
            }

            const boost::json::object::const_iterator DescriptionIterator =
                JsonObject.find("description");

            if (DescriptionIterator != JsonObject.end() &&
                DescriptionIterator->value().is_string()) {
                Description =
                    std::string(DescriptionIterator->value().as_string());
            }

            const boost::json::object::const_iterator ParametersIterator =
                JsonObject.find("parameters");

            if (ParametersIterator != JsonObject.end() &&
                ParametersIterator->value().is_object()) {
                Type::ResponseParameters ResponseParameters;

                const boost::json::object &ParametersObject =
                    ParametersIterator->value().as_object();

                const boost::json::object::const_iterator RetryAfterIterator =
                    ParametersObject.find("retry_after");

                if (RetryAfterIterator != ParametersObject.end() &&
                    RetryAfterIterator->value().is_int64()) {
                    ResponseParameters.RetryAfter =
                        RetryAfterIterator->value().as_int64();
                }

                const boost::json::object::const_iterator MigrateIterator =
                    ParametersObject.find("migrate_to_chat_id");

                if (MigrateIterator != ParametersObject.end() &&
                    MigrateIterator->value().is_int64()) {
                    ResponseParameters.MigrateToChatID =
                        MigrateIterator->value().as_int64();
                }

                if (ResponseParameters.RetryAfter.has_value() ||
                    ResponseParameters.MigrateToChatID.has_value()) {
                    Parameters = ResponseParameters;
                }
            }

            if (Description.empty()) {
                Description = "Telegram API request failed";
            }

            throw TelegramAPIException(ErrorCode, Description, Parameters);
        }

        const boost::json::object::const_iterator ResultIterator =
            JsonObject.find("result");

        if (ResultIterator == JsonObject.end()) {
            throw TelegramAPIException(
                0, "Telegram API response is missing field: result");
        }

        try {
            return JSON::FromJson<ReturnType>(ResultIterator->value());
        } catch (const JSON::JsonException &Exception) {
            throw TelegramAPIException(
                0, "Failed to deserialize Telegram API result: " +
                       std::string(Exception.what()));
        }
    }
} // namespace TelegramBotAPI

#endif // TELEGRAMBOTAPI_TELEGRAM_CLIENT_TPP