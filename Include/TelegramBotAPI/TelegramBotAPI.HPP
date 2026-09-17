#ifndef TELEGRAMBOTAPI_TELEGRAMBOTAPI_HPP
#define TELEGRAMBOTAPI_TELEGRAMBOTAPI_HPP

#include <atomic>
#include <string>

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

namespace TelegramBotAPI {
    class TelegramBotAPI {
        public:
            explicit TelegramBotAPI(const std::string &BotToken);

            TelegramBotAPI(const std::string &BotToken,
                           const std::string &APIURL);

            void Run();

            void Stop();

        private:
            TelegramClient Client;

            std::atomic<bool> Running{false};

            long long Offset{0};

            void ProcessUpdate(const Type::Update &Update);
    };
} // namespace TelegramBotAPI

#endif // TELEGRAMBOTAPI_TELEGRAMBOTAPI_HPP