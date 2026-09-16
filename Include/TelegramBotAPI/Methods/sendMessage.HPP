#ifndef TELEGRAMBOTAPI_SENDMESSAGE_HPP
#define TELEGRAMBOTAPI_SENDMESSAGE_HPP

#include <string>

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Message.HPP"

namespace TelegramBotAPI::Methods {
    class sendMessage {
        public:
            explicit sendMessage(TelegramClient &ClientValue)
                : Client(ClientValue) {}
            Type::Message SendMessage(long long          ChatID,
                                      const std::string &Text) {
                JSON::Object Parameters;

                Parameters["chat_id"] = ChatID;
                Parameters["text"]    = Text;

                return Client.Call<Type::Message>("sendMessage", Parameters);
            }

        private:
            TelegramClient &Client;
    };
} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_SENDMESSAGE_HPP