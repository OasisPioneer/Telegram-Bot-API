#ifndef TELEGRAMBOTAPI_METHOD_GETUSERPROFILEPHOTOS_HPP
#define TELEGRAMBOTAPI_METHOD_GETUSERPROFILEPHOTOS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/UserProfilePhotos.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to get a list of profile pictures for a user. Returns a UserProfilePhotos object.

class getUserProfilePhotos {
    public:
        struct Parameters {
            // Limits the number of photos to be retrieved. Values between 1-100 are accepted. Defaults to 100.
            std::optional<long long> Limit{};

            // Sequential number of the first photo to be returned. By default, all photos are returned.
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

        explicit getUserProfilePhotos(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::UserProfilePhotos GetUserProfilePhotos(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::UserProfilePhotos>("getUserProfilePhotos",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::UserProfilePhotos>("getUserProfilePhotos",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::UserProfilePhotos GetUserProfilePhotos(long long UserID) {
            Parameters ParametersValue(
                UserID
            );

            return GetUserProfilePhotos(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETUSERPROFILEPHOTOS_HPP
