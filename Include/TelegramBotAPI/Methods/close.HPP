#ifndef TELEGRAMBOTAPI_METHOD_CLOSE_HPP
#define TELEGRAMBOTAPI_METHOD_CLOSE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to close the bot instance before moving it from one local server to another. You need to delete the webhook before calling this method to ensure that the bot isn't launched again after server restart. The method will return error 429 in the first 10 minutes after the bot is launched. Returns True on success. Requires no parameters.

class close {
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

        explicit close(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool Close(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("close",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("close",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_CLOSE_HPP
