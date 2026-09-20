#ifndef TELEGRAMBOTAPI_REACTIONCOUNT_HPP
#define TELEGRAMBOTAPI_REACTIONCOUNT_HPP

#include "TelegramBotAPI/Types/ReactionTypeCustomEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypeEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypePaid.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

struct ReactionCount {
    std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid> Type;
    long long TotalCount;
};

}

#endif // TELEGRAMBOTAPI_REACTIONCOUNT_HPP
