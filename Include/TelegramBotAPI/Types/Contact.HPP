#ifndef TELEGRAMBOTAPI_CONTACT_HPP
#define TELEGRAMBOTAPI_CONTACT_HPP

#include <string>

namespace TelegramBotAPI::Type {
    struct Contact {
        std::string PhoneNumber{};
        std::string FirstName{};
        std::string LastName{};
        long long UserID{};
    };
}

#endif // TELEGRAMBOTAPI_CONTACT_HPP