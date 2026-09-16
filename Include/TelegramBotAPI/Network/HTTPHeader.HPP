#ifndef TELEGRAMBOTAPI_HTTPHEADER_HPP
#define TELEGRAMBOTAPI_HTTPHEADER_HPP

#include <string>

namespace TelegramBotAPI::Network {
    class HTTPHeader {
        public:
            std::string Name{};
            std::string Value{};
    };
}

#endif // TELEGRAMBOTAPI_HTTPHEADER_HPP