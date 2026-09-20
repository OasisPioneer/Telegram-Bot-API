#ifndef TELEGRAMBOTAPI_CHATBOOSTREMOVED_HPP
#define TELEGRAMBOTAPI_CHATBOOSTREMOVED_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourceGiftCode.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourceGiveaway.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourcePremium.HPP"
#include <string>
#include <variant>

namespace TelegramBotAPI::Type {

struct ChatBoostRemoved {
    ::TelegramBotAPI::Type::Chat Chat;
    std::string BoostID;
    long long RemoveDate;
    std::variant<::TelegramBotAPI::Type::ChatBoostSourcePremium, ::TelegramBotAPI::Type::ChatBoostSourceGiftCode, ::TelegramBotAPI::Type::ChatBoostSourceGiveaway> Source;
};

}

#endif // TELEGRAMBOTAPI_CHATBOOSTREMOVED_HPP
