#ifndef TELEGRAMBOTAPI_CHATOWNERCHANGED_HPP
#define TELEGRAMBOTAPI_CHATOWNERCHANGED_HPP

#include "TelegramBotAPI/Types/User.HPP"

namespace TelegramBotAPI::Type {

struct ChatOwnerChanged {
    ::TelegramBotAPI::Type::User NewOwner;
};

}

#endif // TELEGRAMBOTAPI_CHATOWNERCHANGED_HPP
