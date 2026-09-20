#ifndef TELEGRAMBOTAPI_METHOD_REMOVEMYPROFILEPHOTO_HPP
#define TELEGRAMBOTAPI_METHOD_REMOVEMYPROFILEPHOTO_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Removes the profile photo of the bot. Requires no parameters. Returns True on success.

class removeMyProfilePhoto {
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

        explicit removeMyProfilePhoto(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool RemoveMyProfilePhoto(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("removeMyProfilePhoto",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("removeMyProfilePhoto",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_REMOVEMYPROFILEPHOTO_HPP
