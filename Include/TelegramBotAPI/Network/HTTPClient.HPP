#ifndef TELEGRAMBOTAPI_HTTPCLIENT_HPP
#define TELEGRAMBOTAPI_HTTPCLIENT_HPP

#include <chrono>

#include "HTTPRequest.HPP"
#include "HTTPResponse.HPP"

namespace TelegramBotAPI::Network {
    class HTTPClient {
        public:
            HTTPClient();

            explicit HTTPClient(std::chrono::seconds Timeout);

            HTTPResponse PerformHTTPS(const HTTPRequest &Request);

        private:
            std::chrono::seconds Timeout;
    };
} // namespace TelegramBotAPI::Network

#endif // TELEGRAMBOTAPI_HTTPCLIENT_HPP