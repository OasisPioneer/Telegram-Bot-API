#ifndef TELEGRAMBOTAPI_SHAREDUSER_HPP
#define TELEGRAMBOTAPI_SHAREDUSER_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct SharedUser {
    long long UserID;
    std::optional<std::string> FirstName{};
    std::optional<std::string> LastName{};
    std::optional<std::string> UserName{};
    std::optional<std::vector<::TelegramBotAPI::Type::PhotoSize>> Photo{};
};

}

#endif // TELEGRAMBOTAPI_SHAREDUSER_HPP
