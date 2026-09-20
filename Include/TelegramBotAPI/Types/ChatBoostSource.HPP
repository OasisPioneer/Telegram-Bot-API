#ifndef TELEGRAMBOTAPI_CHATBOOSTSOURCE_HPP
#define TELEGRAMBOTAPI_CHATBOOSTSOURCE_HPP

#include "TelegramBotAPI/Types/ChatBoostSourceGiftCode.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourceGiveaway.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourcePremium.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using ChatBoostSource = std::variant<::TelegramBotAPI::Type::ChatBoostSourcePremium, ::TelegramBotAPI::Type::ChatBoostSourceGiftCode, ::TelegramBotAPI::Type::ChatBoostSourceGiveaway>;

}

#endif // TELEGRAMBOTAPI_CHATBOOSTSOURCE_HPP
