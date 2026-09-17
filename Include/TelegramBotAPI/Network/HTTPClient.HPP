#ifndef TELEGRAMBOTAPI_HTTPCLIENT_HPP
#define TELEGRAMBOTAPI_HTTPCLIENT_HPP

#include <chrono>

#include "HTTPRequest.HPP"
#include "HTTPResponse.HPP"
#include "IHTTPClient.HPP"

namespace TelegramBotAPI::Network {
    class HTTPClient : public IHTTPClient {
        public:
            HTTPClient();

            explicit HTTPClient(std::chrono::seconds Timeout);

            HTTPResponse PerformHTTPS(const HTTPRequest &Request) override;

        private:
            std::chrono::seconds Timeout;
    };
} // namespace TelegramBotAPI::Network

#endif // TELEGRAMBOTAPI_HTTPCLIENT_HPP