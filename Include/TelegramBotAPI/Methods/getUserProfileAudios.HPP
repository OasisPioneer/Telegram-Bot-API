#ifndef TELEGRAMBOTAPI_METHOD_GETUSERPROFILEAUDIOS_HPP
#define TELEGRAMBOTAPI_METHOD_GETUSERPROFILEAUDIOS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/UserProfileAudios.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to get a list of profile audios for a user. Returns a UserProfileAudios object.

class getUserProfileAudios {
    public:
        struct Parameters {
            // Limits the number of audios to be retrieved. Values between 1-100 are accepted. Defaults to 100.
            std::optional<long long> Limit{};

            // Sequential number of the first audio to be returned. By default, all audios are returned.
            std::optional<long long> Offset{};

            // Unique identifier of the target user
            long long UserID;

            Parameters(const long long &UserIDValue)
                : UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (Limit.has_value()) {
                    Object["limit"] = JSON::ToJson(Limit.value());
                }

                if (Offset.has_value()) {
                    Object["offset"] = JSON::ToJson(Offset.value());
                }

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return (Limit.has_value() && JSON::RequiresMultipart(Limit.value())) || (Offset.has_value() && JSON::RequiresMultipart(Offset.value())) || JSON::RequiresMultipart(UserID);
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

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit getUserProfileAudios(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::UserProfileAudios GetUserProfileAudios(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::UserProfileAudios>("getUserProfileAudios",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::UserProfileAudios>("getUserProfileAudios",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::UserProfileAudios GetUserProfileAudios(long long UserID) {
            Parameters ParametersValue(
                UserID
            );

            return GetUserProfileAudios(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETUSERPROFILEAUDIOS_HPP
