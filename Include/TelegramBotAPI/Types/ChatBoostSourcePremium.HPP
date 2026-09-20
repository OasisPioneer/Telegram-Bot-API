#ifndef TELEGRAMBOTAPI_CHATBOOSTSOURCEPREMIUM_HPP
#define TELEGRAMBOTAPI_CHATBOOSTSOURCEPREMIUM_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct ChatBoostSourcePremium {
    std::string Source;
    ::TelegramBotAPI::Type::User User;
};

}

#endif // TELEGRAMBOTAPI_CHATBOOSTSOURCEPREMIUM_HPP
