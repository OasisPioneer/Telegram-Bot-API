#ifndef TELEGRAMBOTAPI_CONTACT_HPP
#define TELEGRAMBOTAPI_CONTACT_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct Contact {
    std::string PhoneNumber;
    std::string FirstName;
    std::optional<std::string> LastName{};
    std::optional<long long> UserID{};
    std::optional<std::string> Vcard{};
};

}

#endif // TELEGRAMBOTAPI_CONTACT_HPP
