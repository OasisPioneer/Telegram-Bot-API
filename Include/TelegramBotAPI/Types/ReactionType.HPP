#ifndef TELEGRAMBOTAPI_REACTIONTYPE_HPP
#define TELEGRAMBOTAPI_REACTIONTYPE_HPP

#include "TelegramBotAPI/Types/ReactionTypeCustomEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypeEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypePaid.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using ReactionType = std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>;

}

#endif // TELEGRAMBOTAPI_REACTIONTYPE_HPP
