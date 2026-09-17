#ifndef TELEGRAMBOTAPI_HTTPREQUEST_HPP
#define TELEGRAMBOTAPI_HTTPREQUEST_HPP

#include <string>
#include <vector>

#include "HTTPHeader.HPP"

namespace TelegramBotAPI::Network {
    class HTTPRequest {
        public:
            std::string Scheme = "https";
            std::string Host{};
            std::string Port = "443";
            std::string Target{"/"};
            std::string Method{"GET"};

            std::vector<HTTPHeader> Headers{};

            std::string Body{};
    };
} // namespace TelegramBotAPI::Network

#endif // TELEGRAMBOTAPI_HTTPREQUEST_HPP