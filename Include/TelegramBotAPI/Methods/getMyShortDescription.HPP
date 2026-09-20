#ifndef TELEGRAMBOTAPI_METHOD_GETMYSHORTDESCRIPTION_HPP
#define TELEGRAMBOTAPI_METHOD_GETMYSHORTDESCRIPTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/BotShortDescription.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to get the current bot short description for the given user language. Returns BotShortDescription on success.

class getMyShortDescription {
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

        explicit getMyShortDescription(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::BotShortDescription GetMyShortDescription(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::BotShortDescription>("getMyShortDescription",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::BotShortDescription>("getMyShortDescription",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETMYSHORTDESCRIPTION_HPP
