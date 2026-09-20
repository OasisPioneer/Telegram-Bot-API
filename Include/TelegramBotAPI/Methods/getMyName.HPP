#ifndef TELEGRAMBOTAPI_METHOD_GETMYNAME_HPP
#define TELEGRAMBOTAPI_METHOD_GETMYNAME_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/BotName.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to get the current bot name for the given user language. Returns BotName on success.

class getMyName {
    public:
        struct Parameters {
            // A two-letter ISO 639-1 language code or an empty string
            std::optional<std::string> LanguageCode{};

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (LanguageCode.has_value()) {
                    Object["language_code"] = JSON::ToJson(LanguageCode.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (LanguageCode.has_value() && JSON::RequiresMultipart(LanguageCode.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (LanguageCode.has_value()) {
                    JSON::AddMultipartField(
                        Form, "language_code",
                        LanguageCode.value());
                }

                return Form;
            }

        };

        explicit getMyName(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::BotName GetMyName(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::BotName>("getMyName",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::BotName>("getMyName",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETMYNAME_HPP
