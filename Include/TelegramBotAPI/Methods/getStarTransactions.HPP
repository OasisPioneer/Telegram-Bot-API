#ifndef TELEGRAMBOTAPI_METHOD_GETSTARTRANSACTIONS_HPP
#define TELEGRAMBOTAPI_METHOD_GETSTARTRANSACTIONS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/StarTransactions.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Returns the bot's Telegram Star transactions in chronological order. On success, returns a StarTransactions object.

class getStarTransactions {
    public:
        struct Parameters {
            // The maximum number of transactions to be retrieved. Values between 1-100 are accepted. Defaults to 100.
            std::optional<long long> Limit{};

            // Number of transactions to skip in the response
            std::optional<long long> Offset{};

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (Limit.has_value()) {
                    Object["limit"] = JSON::ToJson(Limit.value());
                }

                if (Offset.has_value()) {
                    Object["offset"] = JSON::ToJson(Offset.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (Limit.has_value() && JSON::RequiresMultipart(Limit.value())) || (Offset.has_value() && JSON::RequiresMultipart(Offset.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (Limit.has_value()) {
                    JSON::AddMultipartField(
                        Form, "limit",
                        Limit.value());
                }

                if (Offset.has_value()) {
                    JSON::AddMultipartField(
                        Form, "offset",
                        Offset.value());
                }

                return Form;
            }

        };

        explicit getStarTransactions(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::StarTransactions GetStarTransactions(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::StarTransactions>("getStarTransactions",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::StarTransactions>("getStarTransactions",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETSTARTRANSACTIONS_HPP
