#ifndef TELEGRAMBOTAPI_USER_HPP
#define TELEGRAMBOTAPI_USER_HPP

#include <string>

namespace TelegramBotAPI::Type {
    class User {
        public:
            long long ID{};
            std::string FirstName{};
            std::string LastName{};
            std::string UserName{};
    };
}

#endif // TELEGRAMBOTAPI_USER_HPP
