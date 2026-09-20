#ifndef TELEGRAMBOTAPI_CHATMEMBEROWNER_HPP
#define TELEGRAMBOTAPI_CHATMEMBEROWNER_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ChatMemberOwner {
    std::string Status;
    ::TelegramBotAPI::Type::User User;
    bool IsAnonymous;
    std::optional<std::string> CustomTitle{};
};

}

#endif // TELEGRAMBOTAPI_CHATMEMBEROWNER_HPP
