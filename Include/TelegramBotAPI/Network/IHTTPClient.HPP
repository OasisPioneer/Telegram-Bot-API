#ifndef TELEGRAMBOTAPI_IHTTPCLIENT_HPP
#define TELEGRAMBOTAPI_IHTTPCLIENT_HPP

#include "TelegramBotAPI/Network/HTTPRequest.HPP"
#include "TelegramBotAPI/Network/HTTPResponse.HPP"

namespace TelegramBotAPI::Network {
    class IHTTPClient {
        public:
            virtual ~IHTTPClient() = default;

            virtual HTTPResponse PerformHTTPS(
                const HTTPRequest &Request
            ) = 0;
    };
}

#endif // TELEGRAMBOTAPI_IHTTPCLIENT_HPP