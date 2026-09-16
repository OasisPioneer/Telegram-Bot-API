#ifndef TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP
#define TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP

#include <chrono>
#include <string>

#include "TelegramBotAPI/JSON/Json.HPP"
#include "TelegramBotAPI/Network/HTTPClient.HPP"
#include "TelegramBotAPI/Network/HTTPResponse.HPP"
#include "TelegramBotAPI/TelegramAPIException.HPP"

namespace TelegramBotAPI::Methods
{
    class getMe;
    class getChat;
    class getUpdates;
    class sendMessage;
}

namespace TelegramBotAPI
{
    class TelegramClient
    {
        friend class Methods::getMe;
        friend class Methods::getChat;
        friend class Methods::getUpdates;
        friend class Methods::sendMessage;

        public:
            explicit TelegramClient(
                const std::string& BotToken
            );

            TelegramClient(
                const std::string& BotToken,
                std::chrono::seconds Timeout
            );

        private:
            std::string BotToken;

            Network::HTTPClient HTTPClient;

            Network::HTTPResponse PerformRequest(
                const std::string& Method,
                const JSON::Object& Parameters
            );

            template <typename ReturnType>
            ReturnType Call(
                const std::string& Method
            );

            template <typename ReturnType>
            ReturnType Call(
                const std::string& Method,
                const JSON::Object& Parameters
            );
    };
}

#include "TelegramBotAPI/TelegramClient.TPP"

#endif