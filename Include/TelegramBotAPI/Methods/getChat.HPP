#ifndef TELEGRAMBOTAPI_GETCHAT_HPP
#define TELEGRAMBOTAPI_GETCHAT_HPP

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"

namespace TelegramBotAPI::Methods {
    class getChat {
        public:
            struct Parameters {
                    long long ChatID = 0;

                    JSON::Object ToJson() const {
                        JSON::Object ParametersObject;

                        ParametersObject["chat_id"] = ChatID;

                        return ParametersObject;
                    }
            };

            explicit getChat(TelegramClient &ClientValue)
                : Client(ClientValue) {}

            Type::Chat Get(const Parameters &ParametersValue) {
                return Client.Call<Type::Chat>("getChat",
                                               ParametersValue.ToJson());
            }

            Type::Chat GetChat(long long ChatID) {
                Parameters ParametersValue;

                ParametersValue.ChatID = ChatID;

                return Get(ParametersValue);
            }

        private:
            TelegramClient &Client;
    };
} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_GETCHAT_HPP