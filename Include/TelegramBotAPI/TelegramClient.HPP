#ifndef TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP
#define TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP

#include <chrono>
#include <optional>
#include <string>
#include <vector>

#include "TelegramBotAPI/JSON/Json.HPP"
#include "TelegramBotAPI/Network/HTTPClient.HPP"
#include "TelegramBotAPI/Network/HTTPResponse.HPP"
#include "TelegramBotAPI/TelegramAPIException.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/Update.HPP"
#include "TelegramBotAPI/Types/User.HPP"

namespace TelegramBotAPI {
    class TelegramClient {
        public:
            explicit TelegramClient(const std::string &BotToken);

            TelegramClient(const std::string   &BotToken,
                           std::chrono::seconds Timeout);

            Type::User GetMe();
            Type::Chat GetChat(long long ChatID);

            std::vector<Type::Update>
            GetUpdates(std::optional<long long> Offset  = std::nullopt,
                       std::optional<long long> Limit   = std::nullopt,
                       std::optional<long long> Timeout = std::nullopt);

            Type::Message SendMessage(long long          ChatID,
                                      const std::string &Text);

        private:
            std::string         BotToken;
            Network::HTTPClient HTTPClient;

            Network::HTTPResponse
            PerformRequest(const std::string  &Method,
                           const JSON::Object &Parameters);

            template <typename ReturnType>
            ReturnType Call(const std::string &Method);

            template <typename ReturnType>
            ReturnType Call(const std::string  &Method,
                            const JSON::Object &Parameters);
    };
} // namespace TelegramBotAPI

#include "TelegramBotAPI/TelegramClient.TPP"

#endif // TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP