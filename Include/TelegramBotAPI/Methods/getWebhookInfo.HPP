#ifndef TELEGRAMBOTAPI_METHOD_GETWEBHOOKINFO_HPP
#define TELEGRAMBOTAPI_METHOD_GETWEBHOOKINFO_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/WebhookInfo.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to get current webhook status. Requires no parameters. On success, returns a WebhookInfo object. If the bot is using getUpdates, will return an object with the url field empty.

class getWebhookInfo {
    public:
        struct Parameters {
            JSON::Object ToJson() const {
                JSON::Object Object;

                return Object;
            }

            bool RequiresMultipart() const {
                return false;
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                return Form;
            }

        };

        explicit getWebhookInfo(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::WebhookInfo GetWebhookInfo(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::WebhookInfo>("getWebhookInfo",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::WebhookInfo>("getWebhookInfo",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETWEBHOOKINFO_HPP
