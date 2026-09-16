#ifndef TELEGRAMBOTAPI_USER_HPP
#define TELEGRAMBOTAPI_USER_HPP

#include <string>
#include <optional>

namespace TelegramBotAPI::Type {
    class User {
        public:
            long long ID{};
            std::string FirstName{};
            std::optional<std::string> LastName{};
            std::optional<std::string> UserName{};
    };
}

#endif // TELEGRAMBOTAPI_USER_HPP
