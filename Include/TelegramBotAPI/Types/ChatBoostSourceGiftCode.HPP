#ifndef TELEGRAMBOTAPI_CHATBOOSTSOURCEGIFTCODE_HPP
#define TELEGRAMBOTAPI_CHATBOOSTSOURCEGIFTCODE_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct ChatBoostSourceGiftCode {
    std::string Source;
    ::TelegramBotAPI::Type::User User;
};

}

#endif // TELEGRAMBOTAPI_CHATBOOSTSOURCEGIFTCODE_HPP
