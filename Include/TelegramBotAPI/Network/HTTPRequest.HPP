#ifndef TELEGRAMBOTAPI_HTTPREQUEST_HPP
#define TELEGRAMBOTAPI_HTTPREQUEST_HPP

#include <string>
#include <vector>

#include "HTTPHeader.HPP"

namespace TelegramBotAPI::Network {
    class HTTPRequest {
        public:
            std::string Method{"GET"};
            std::string Target{"/"};
            std::string Host{};
            std::string Body{};

            std::vector<HTTPHeader> Headers{};

            bool HasBody() const noexcept
            {
                return !Body.empty();
            }
    };
}

#endif // TELEGRAMBOTAPI_HTTPREQUEST_HPP