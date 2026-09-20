#ifndef TELEGRAMBOTAPI_CHATBOOSTUPDATED_HPP
#define TELEGRAMBOTAPI_CHATBOOSTUPDATED_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ChatBoost.HPP"

namespace TelegramBotAPI::Type {

struct ChatBoostUpdated {
    ::TelegramBotAPI::Type::Chat Chat;
    ::TelegramBotAPI::Type::ChatBoost Boost;
};

}

#endif // TELEGRAMBOTAPI_CHATBOOSTUPDATED_HPP
