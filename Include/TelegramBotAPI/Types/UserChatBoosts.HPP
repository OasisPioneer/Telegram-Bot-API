#ifndef TELEGRAMBOTAPI_USERCHATBOOSTS_HPP
#define TELEGRAMBOTAPI_USERCHATBOOSTS_HPP

#include "TelegramBotAPI/Types/ChatBoost.HPP"
#include <vector>

namespace TelegramBotAPI::Type {

struct UserChatBoosts {
    std::vector<::TelegramBotAPI::Type::ChatBoost> Boosts;
};

}

#endif // TELEGRAMBOTAPI_USERCHATBOOSTS_HPP
