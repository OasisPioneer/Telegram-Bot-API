#ifndef TELEGRAMBOTAPI_METHOD_SETMYSHORTDESCRIPTION_HPP
#define TELEGRAMBOTAPI_METHOD_SETMYSHORTDESCRIPTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to change the bot's short description, which is shown on the bot's profile page and is sent together with the link when users share the bot. Returns True on success.

class setMyShortDescription {
    public:
        struct Parameters {
            // A two-letter ISO 639-1 language code. If empty, the short description will be applied to all users for whose language there is no dedicated short description.
            std::optional<std::string> LanguageCode{};

            // New short description for the bot; 0-120 characters. Pass an empty string to remove the dedicated short description for the given language.
            std::optional<std::string> ShortDescription{};

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (LanguageCode.has_value()) {
                    Object["language_code"] = JSON::ToJson(LanguageCode.value());
                }

                if (ShortDescription.has_value()) {
                    Object["short_description"] = JSON::ToJson(ShortDescription.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (LanguageCode.has_value() && JSON::RequiresMultipart(LanguageCode.value())) || (ShortDescription.has_value() && JSON::RequiresMultipart(ShortDescription.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (LanguageCode.has_value()) {
                    JSON::AddMultipartField(
                        Form, "language_code",
                        LanguageCode.value());
                }

                if (ShortDescription.has_value()) {
                    JSON::AddMultipartField(
                        Form, "short_description",
                        ShortDescription.value());
                }

                return Form;
            }

        };

        explicit setMyShortDescription(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetMyShortDescription(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setMyShortDescription",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setMyShortDescription",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETMYSHORTDESCRIPTION_HPP
