#ifndef TELEGRAMBOTAPI_MESSAGEENTITY_HPP
#define TELEGRAMBOTAPI_MESSAGEENTITY_HPP

#include <string>

namespace TelegramBotAPI::Type {
    struct MessageEntity {
        std::string Type{};
        long long Offset{};
        long long Length{};
        std::string URL{};
    };
}

#endif // TELEGRAMBOTAPI_MESSAGEENTITY_HPP