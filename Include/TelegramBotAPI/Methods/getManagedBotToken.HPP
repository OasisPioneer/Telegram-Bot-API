#ifndef TELEGRAMBOTAPI_METHOD_GETMANAGEDBOTTOKEN_HPP
#define TELEGRAMBOTAPI_METHOD_GETMANAGEDBOTTOKEN_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to get the token of a managed bot. Returns the token as String on success.

class getManagedBotToken {
    public:
        struct Parameters {
            // User identifier of the managed bot whose token will be returned
            long long UserID;

            Parameters(const long long &UserIDValue)
                : UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit getManagedBotToken(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::string GetManagedBotToken(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::string>("getManagedBotToken",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::string>("getManagedBotToken",
                                      ParametersValue.ToJson());
        }

        std::string GetManagedBotToken(long long UserID) {
            Parameters ParametersValue(
                UserID
            );

            return GetManagedBotToken(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETMANAGEDBOTTOKEN_HPP
