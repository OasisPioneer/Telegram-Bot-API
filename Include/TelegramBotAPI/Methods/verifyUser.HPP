#ifndef TELEGRAMBOTAPI_METHOD_VERIFYUSER_HPP
#define TELEGRAMBOTAPI_METHOD_VERIFYUSER_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Verifies a user on behalf of the organization which is represented by the bot. Returns True on success.

class verifyUser {
    public:
        struct Parameters {
            // Custom description for the verification; 0-70 characters. Must be empty if the organization isn't allowed to provide a custom verification description.
            std::optional<std::string> CustomDescription{};

            // Unique identifier of the target user
            long long UserID;

            Parameters(const long long &UserIDValue)
                : UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (CustomDescription.has_value()) {
                    Object["custom_description"] = JSON::ToJson(CustomDescription.value());
                }

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return (CustomDescription.has_value() && JSON::RequiresMultipart(CustomDescription.value())) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (CustomDescription.has_value()) {
                    JSON::AddMultipartField(
                        Form, "custom_description",
                        CustomDescription.value());
                }

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit verifyUser(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool VerifyUser(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("verifyUser",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("verifyUser",
                                      ParametersValue.ToJson());
        }

        bool VerifyUser(long long UserID) {
            Parameters ParametersValue(
                UserID
            );

            return VerifyUser(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_VERIFYUSER_HPP
