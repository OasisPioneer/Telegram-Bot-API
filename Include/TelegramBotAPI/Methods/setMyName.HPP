#ifndef TELEGRAMBOTAPI_METHOD_SETMYNAME_HPP
#define TELEGRAMBOTAPI_METHOD_SETMYNAME_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to change the bot's name. Returns True on success.

class setMyName {
    public:
        struct Parameters {
            // A two-letter ISO 639-1 language code. If empty, the name will be shown to all users for whose language there is no dedicated name.
            std::optional<std::string> LanguageCode{};

            // New bot name; 0-64 characters. Pass an empty string to remove the dedicated name for the given language.
            std::optional<std::string> Name{};

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (LanguageCode.has_value()) {
                    Object["language_code"] = JSON::ToJson(LanguageCode.value());
                }

                if (Name.has_value()) {
                    Object["name"] = JSON::ToJson(Name.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (LanguageCode.has_value() && JSON::RequiresMultipart(LanguageCode.value())) || (Name.has_value() && JSON::RequiresMultipart(Name.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (LanguageCode.has_value()) {
                    JSON::AddMultipartField(
                        Form, "language_code",
                        LanguageCode.value());
                }

                if (Name.has_value()) {
                    JSON::AddMultipartField(
                        Form, "name",
                        Name.value());
                }

                return Form;
            }

        };

        explicit setMyName(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetMyName(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setMyName",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setMyName",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETMYNAME_HPP
