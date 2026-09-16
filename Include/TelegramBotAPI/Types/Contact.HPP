#ifndef TELEGRAMBOTAPI_CONTACT_HPP
#define TELEGRAMBOTAPI_CONTACT_HPP

#include <string>

namespace TelegramBotAPI::Type {
    struct Contact {
            std::string                PhoneNumber{};
            std::string                FirstName{};
            std::optional<std::string> LastName{};
            std::optional<long long>   UserID{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_CONTACT_HPP