#ifndef TELEGRAMBOTAPI_MANAGEDBOTUPDATED_HPP
#define TELEGRAMBOTAPI_MANAGEDBOTUPDATED_HPP

#include "TelegramBotAPI/Types/User.HPP"

namespace TelegramBotAPI::Type {

struct ManagedBotUpdated {
    ::TelegramBotAPI::Type::User User;
    ::TelegramBotAPI::Type::User Bot;
};

}

#endif // TELEGRAMBOTAPI_MANAGEDBOTUPDATED_HPP
