#ifndef TELEGRAMBOTAPI_STORYAREATYPESUGGESTEDREACTION_HPP
#define TELEGRAMBOTAPI_STORYAREATYPESUGGESTEDREACTION_HPP

#include "TelegramBotAPI/Types/ReactionTypeCustomEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypeEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypePaid.HPP"
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Type {

struct StoryAreaTypeSuggestedReaction {
    std::string Type;
    std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid> ReactionType;
    std::optional<bool> IsDark{};
    std::optional<bool> IsFlipped{};
};

}

#endif // TELEGRAMBOTAPI_STORYAREATYPESUGGESTEDREACTION_HPP
