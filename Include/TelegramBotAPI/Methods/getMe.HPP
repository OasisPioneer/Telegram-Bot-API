#ifndef TELEGRAMBOTAPI_GETME_HPP
#define TELEGRAMBOTAPI_GETME_HPP

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/User.HPP"

namespace TelegramBotAPI::Methods {
    class getMe {
        public:
            explicit getMe(TelegramClient &ClientValue) : Client(ClientValue) {}
            Type::User GetMe() { return Client.Call<Type::User>("getMe"); }

        private:
            TelegramClient &Client;
    };
} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_GETME_HPP