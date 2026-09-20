#ifndef TELEGRAMBOTAPI_MESSAGEREACTIONCOUNTUPDATED_HPP
#define TELEGRAMBOTAPI_MESSAGEREACTIONCOUNTUPDATED_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ReactionCount.HPP"
#include <vector>

namespace TelegramBotAPI::Type {

struct MessageReactionCountUpdated {
    ::TelegramBotAPI::Type::Chat Chat;
    long long MessageID;
    long long Date;
    std::vector<::TelegramBotAPI::Type::ReactionCount> Reactions;
};

}

#endif // TELEGRAMBOTAPI_MESSAGEREACTIONCOUNTUPDATED_HPP
