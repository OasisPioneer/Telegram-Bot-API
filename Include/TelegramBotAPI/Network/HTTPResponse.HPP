#ifndef TELEGRAMBOTAPI_HTTPRESPONSE_HPP
#define TELEGRAMBOTAPI_HTTPRESPONSE_HPP

#include <string>
#include <vector>

#include "HTTPHeader.HPP"

namespace TelegramBotAPI::Network {
    class HTTPResponse {
        public:
            unsigned int            StatusCode{0};
            std::string             Reason{};
            std::string             ReasonPhrase{};
            std::vector<HTTPHeader> Headers{};
            std::string             Body{};
    };
} // namespace TelegramBotAPI::Network

#endif // TELEGRAMBOTAPI_HTTPRESPONSE_HPP