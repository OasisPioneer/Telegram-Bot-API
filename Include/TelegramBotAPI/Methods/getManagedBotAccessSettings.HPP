#ifndef TELEGRAMBOTAPI_METHOD_GETMANAGEDBOTACCESSSETTINGS_HPP
#define TELEGRAMBOTAPI_METHOD_GETMANAGEDBOTACCESSSETTINGS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/BotAccessSettings.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to get the access settings of a managed bot. Returns a BotAccessSettings object on success.

class getManagedBotAccessSettings {
    public:
        struct Parameters {
            // User identifier of the managed bot whose access settings will be returned
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

        explicit getManagedBotAccessSettings(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::BotAccessSettings GetManagedBotAccessSettings(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::BotAccessSettings>("getManagedBotAccessSettings",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::BotAccessSettings>("getManagedBotAccessSettings",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::BotAccessSettings GetManagedBotAccessSettings(long long UserID) {
            Parameters ParametersValue(
                UserID
            );

            return GetManagedBotAccessSettings(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETMANAGEDBOTACCESSSETTINGS_HPP
