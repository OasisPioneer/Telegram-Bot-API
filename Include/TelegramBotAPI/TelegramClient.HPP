#ifndef TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP
#define TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP

#include <chrono>
#include <string>

#include "TelegramBotAPI/JSON/Json.HPP"
#include "TelegramBotAPI/Network/HTTPClient.HPP"
#include "TelegramBotAPI/Network/HTTPResponse.HPP"
#include "TelegramBotAPI/Network/IHTTPClient.HPP"
#include "TelegramBotAPI/TelegramAPIException.HPP"

namespace TelegramBotAPI::Methods {
    class getMe;
    class getChat;
    class getUpdates;
    class sendMessage;
    class answerCallbackQuery;
} // namespace TelegramBotAPI::Methods

namespace TelegramBotAPI {
    class TelegramClient {
            friend class Methods::getMe;
            friend class Methods::getChat;
            friend class Methods::getUpdates;
            friend class Methods::sendMessage;
            friend class Methods::answerCallbackQuery;

        public:
            explicit TelegramClient(const std::string &BotToken);

            TelegramClient(const std::string &BotToken,
                           const std::string &APIURL);

            TelegramClient(const std::string   &BotToken,
                           std::chrono::seconds Timeout);

            TelegramClient(const std::string   &BotToken,
                           const std::string   &APIURL,
                           std::chrono::seconds Timeout);

            TelegramClient(const std::string    &BotToken,
                           Network::IHTTPClient &HTTPClient);

            TelegramClient(const std::string    &BotToken,
                           const std::string    &APIURL,
                           Network::IHTTPClient &HTTPClient);

        private:
            std::string BotToken;
            std::string APIURL;

            Network::HTTPClient DefaultHTTPClient;

            Network::IHTTPClient *HTTPClient;

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

#endif