#ifndef TELEGRAMBOTAPI_CHATMEMBERLEFT_HPP
#define TELEGRAMBOTAPI_CHATMEMBERLEFT_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct ChatMemberLeft {
    std::string Status;
    ::TelegramBotAPI::Type::User User;
};

}

#endif // TELEGRAMBOTAPI_CHATMEMBERLEFT_HPP
