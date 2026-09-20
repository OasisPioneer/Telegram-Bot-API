#ifndef TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTUSERNAME_HPP
#define TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTUSERNAME_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Changes the username of a managed business account. Requires the can_change_username business bot right. Returns True on success.

class setBusinessAccountUsername {
    public:
        struct Parameters {
            // Unique identifier of the business connection
            std::string BusinessConnectionID;

            // The new value of the username for the business account; 0-32 characters
            std::optional<std::string> UserName{};

            Parameters(const std::string &BusinessConnectionIDValue)
                : BusinessConnectionID(BusinessConnectionIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

                if (UserName.has_value()) {
                    Object["username"] = JSON::ToJson(UserName.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(BusinessConnectionID) || (UserName.has_value() && JSON::RequiresMultipart(UserName.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "business_connection_id",
                    BusinessConnectionID);

                if (UserName.has_value()) {
                    JSON::AddMultipartField(
                        Form, "username",
                        UserName.value());
                }

                return Form;
            }

        };

        explicit setBusinessAccountUsername(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetBusinessAccountUsername(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setBusinessAccountUsername",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setBusinessAccountUsername",
                                      ParametersValue.ToJson());
        }

        bool SetBusinessAccountUsername(std::string BusinessConnectionID) {
            Parameters ParametersValue(
                BusinessConnectionID
            );

            return SetBusinessAccountUsername(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTUSERNAME_HPP
