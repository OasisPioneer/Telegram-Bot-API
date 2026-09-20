#ifndef TELEGRAMBOTAPI_MESSAGEORIGINUSER_HPP
#define TELEGRAMBOTAPI_MESSAGEORIGINUSER_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct MessageOriginUser {
    std::string Type;
    long long Date;
    ::TelegramBotAPI::Type::User SenderUser;
};

}

#endif // TELEGRAMBOTAPI_MESSAGEORIGINUSER_HPP
