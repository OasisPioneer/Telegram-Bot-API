#ifndef TELEGRAMBOTAPI_GETCHAT_HPP
#define TELEGRAMBOTAPI_GETCHAT_HPP

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"

namespace TelegramBotAPI::Methods {
    class getChat {
        public:
            explicit getChat(TelegramClient &ClientValue)
                : Client(ClientValue) {}
            Type::Chat GetChat(long long ChatID) {
                JSON::Object Parameters;

                Parameters["chat_id"] = ChatID;

                return Client.Call<Type::Chat>("getChat", Parameters);
            }

        private:
            TelegramClient &Client;
    };
} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_GETCHAT_HPP