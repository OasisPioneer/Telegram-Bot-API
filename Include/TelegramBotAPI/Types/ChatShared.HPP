#ifndef TELEGRAMBOTAPI_CHATSHARED_HPP
#define TELEGRAMBOTAPI_CHATSHARED_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct ChatShared {
    long long RequestID;
    long long ChatID;
    std::optional<std::string> Title{};
    std::optional<std::string> UserName{};
    std::optional<std::vector<::TelegramBotAPI::Type::PhotoSize>> Photo{};
};

}

#endif // TELEGRAMBOTAPI_CHATSHARED_HPP
