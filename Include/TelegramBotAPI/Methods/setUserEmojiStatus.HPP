#ifndef TELEGRAMBOTAPI_METHOD_SETUSEREMOJISTATUS_HPP
#define TELEGRAMBOTAPI_METHOD_SETUSEREMOJISTATUS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Changes the emoji status for a given user that previously allowed the bot to manage their emoji status via the Mini App method requestEmojiStatusAccess. Returns True on success.

class setUserEmojiStatus {
    public:
        struct Parameters {
            // Custom emoji identifier of the emoji status to set. Pass an empty string to remove the status.
            std::optional<std::string> EmojiStatusCustomEmojiID{};

            // Expiration date of the emoji status, if any
            std::optional<long long> EmojiStatusExpirationDate{};

            // Unique identifier of the target user
            long long UserID;

            Parameters(const long long &UserIDValue)
                : UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (EmojiStatusCustomEmojiID.has_value()) {
                    Object["emoji_status_custom_emoji_id"] = JSON::ToJson(EmojiStatusCustomEmojiID.value());
                }

                if (EmojiStatusExpirationDate.has_value()) {
                    Object["emoji_status_expiration_date"] = JSON::ToJson(EmojiStatusExpirationDate.value());
                }

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return (EmojiStatusCustomEmojiID.has_value() && JSON::RequiresMultipart(EmojiStatusCustomEmojiID.value())) || (EmojiStatusExpirationDate.has_value() && JSON::RequiresMultipart(EmojiStatusExpirationDate.value())) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (EmojiStatusCustomEmojiID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "emoji_status_custom_emoji_id",
                        EmojiStatusCustomEmojiID.value());
                }

                if (EmojiStatusExpirationDate.has_value()) {
                    JSON::AddMultipartField(
                        Form, "emoji_status_expiration_date",
                        EmojiStatusExpirationDate.value());
                }

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit setUserEmojiStatus(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetUserEmojiStatus(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setUserEmojiStatus",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setUserEmojiStatus",
                                      ParametersValue.ToJson());
        }

        bool SetUserEmojiStatus(long long UserID) {
            Parameters ParametersValue(
                UserID
            );

            return SetUserEmojiStatus(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETUSEREMOJISTATUS_HPP
