#ifndef TELEGRAMBOTAPI_METHOD_GETMYSTARBALANCE_HPP
#define TELEGRAMBOTAPI_METHOD_GETMYSTARBALANCE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/StarAmount.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // A method to get the current Telegram Stars balance of the bot. Requires no parameters. On success, returns a StarAmount object.

class getMyStarBalance {
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

        explicit getMyStarBalance(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::StarAmount GetMyStarBalance(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::StarAmount>("getMyStarBalance",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::StarAmount>("getMyStarBalance",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETMYSTARBALANCE_HPP
