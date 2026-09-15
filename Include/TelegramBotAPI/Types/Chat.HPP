#ifndef TELEGRAMBOTAPI_CHAT_HPP
#define TELEGRAMBOTAPI_CHAT_HPP

#include <string>

namespace TelegramBotAPI::Type {
    struct Chat {
        long long ID{};
        std::string Type{};
        std::string Title{};
        std::string Username{};
        std::string FirstName{};
        std::string LastName{};
    };
}

#endif // TELEGRAMBOTAPI_CHAT_HPP