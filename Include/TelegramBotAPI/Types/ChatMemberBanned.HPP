#ifndef TELEGRAMBOTAPI_CHATMEMBERBANNED_HPP
#define TELEGRAMBOTAPI_CHATMEMBERBANNED_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct ChatMemberBanned {
    std::string Status;
    ::TelegramBotAPI::Type::User User;
    long long UntilDate;
};

}

#endif // TELEGRAMBOTAPI_CHATMEMBERBANNED_HPP
