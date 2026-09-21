#ifndef TELEGRAMBOTAPI_TELEGRAMBOTAPI_HPP
#define TELEGRAMBOTAPI_TELEGRAMBOTAPI_HPP

#include <atomic>
#include <functional>
#include <string>
#include <vector>

#include "TelegramBotAPI/Network/IHTTPClient.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/CallbackQuery.HPP"
#include "TelegramBotAPI/Types/InputFile.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

namespace TelegramBotAPI {
    class TelegramBotAPI {
        public:
            using MessageHandler =
                std::function<void(const Type::Message &Message)>;

            using CallbackQueryHandler =
                std::function<void(const Type::CallbackQuery &CallbackQuery)>;

            explicit TelegramBotAPI(const std::string &BotToken);

            TelegramBotAPI(const std::string &BotToken,
                           const std::string &APIURL);

            TelegramBotAPI(const std::string    &BotToken,
                           Network::IHTTPClient &HTTPClient);

            TelegramBotAPI(const std::string    &BotToken,
                           const std::string    &APIURL,
                           Network::IHTTPClient &HTTPClient);

            TelegramClient &API() noexcept;
            const TelegramClient &API() const noexcept;

            void OnMessage(MessageHandler Handler);

            void OnCallbackQuery(CallbackQueryHandler Handler);

            bool AnswerCallbackQuery(const std::string &CallbackQueryID);

            Type::Message SendMessage(long long          ChatID,
                                      const std::string &Text);

            Type::Message SendPhoto(long long              ChatID,
                                    const Type::InputFile &Photo);

            Type::Message SendPhoto(long long              ChatID,
                                    const Type::InputFile &Photo,
                                    const std::string     &Caption);

            Type::Message SendPhoto(long long              ChatID,
                                    const Type::InputFile &Photo,
                                    const std::string     &Caption,
                                    const std::string     &ParseMode);

            Type::Message
            SendPhoto(long long ChatID, const Type::InputFile &Photo,
                      const std::string                      &Caption,
                      const std::vector<Type::MessageEntity> &CaptionEntities);

            void Run();

            void Stop();

        private:
            TelegramClient Client;

            std::atomic<bool> Running{false};

            long long Offset{0};

            MessageHandler MessageHandlerFunction;

            CallbackQueryHandler CallbackQueryHandlerFunction;

            void ProcessUpdates(const std::vector<Type::Update> &Updates);

            void ProcessUpdate(const Type::Update &Update);
    };
} // namespace TelegramBotAPI

#endif // TELEGRAMBOTAPI_TELEGRAMBOTAPI_HPP