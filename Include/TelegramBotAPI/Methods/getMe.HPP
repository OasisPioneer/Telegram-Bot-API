#ifndef TELEGRAMBOTAPI_GETME_HPP
#define TELEGRAMBOTAPI_GETME_HPP

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/User.HPP"

namespace TelegramBotAPI::Methods {
    class getMe {
        public:
            struct Parameters {
                    JSON::Object ToJson() const { return JSON::Object{}; }
            };

            explicit getMe(TelegramClient &ClientValue) : Client(ClientValue) {}

            Type::User Get(const Parameters &ParametersValue) {
                return Client.Call<Type::User>("getMe",
                                               ParametersValue.ToJson());
            }

            Type::User GetMe() {
                Parameters ParametersValue;

                return Get(ParametersValue);
            }

        private:
            TelegramClient &Client;
    };
} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_GETME_HPP