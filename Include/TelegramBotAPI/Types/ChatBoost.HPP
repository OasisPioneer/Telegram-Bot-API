#ifndef TELEGRAMBOTAPI_CHATBOOST_HPP
#define TELEGRAMBOTAPI_CHATBOOST_HPP

#include "TelegramBotAPI/Types/ChatBoostSourceGiftCode.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourceGiveaway.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourcePremium.HPP"
#include <string>
#include <variant>

namespace TelegramBotAPI::Type {

struct ChatBoost {
    std::string BoostID;
    long long AddDate;
    long long ExpirationDate;
    std::variant<::TelegramBotAPI::Type::ChatBoostSourcePremium, ::TelegramBotAPI::Type::ChatBoostSourceGiftCode, ::TelegramBotAPI::Type::ChatBoostSourceGiveaway> Source;
};

}

#endif // TELEGRAMBOTAPI_CHATBOOST_HPP
