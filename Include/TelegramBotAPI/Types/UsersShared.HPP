#ifndef TELEGRAMBOTAPI_USERSSHARED_HPP
#define TELEGRAMBOTAPI_USERSSHARED_HPP

#include "TelegramBotAPI/Types/SharedUser.HPP"
#include <vector>

namespace TelegramBotAPI::Type {

struct UsersShared {
    long long RequestID;
    std::vector<::TelegramBotAPI::Type::SharedUser> Users;
};

}

#endif // TELEGRAMBOTAPI_USERSSHARED_HPP
