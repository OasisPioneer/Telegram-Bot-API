#ifndef TELEGRAMBOTAPI_MESSAGEREACTIONUPDATED_HPP
#define TELEGRAMBOTAPI_MESSAGEREACTIONUPDATED_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ReactionTypeCustomEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypeEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypePaid.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Type {

struct MessageReactionUpdated {
    ::TelegramBotAPI::Type::Chat Chat;
    long long MessageID;
    std::optional<::TelegramBotAPI::Type::User> User{};
    std::optional<::TelegramBotAPI::Type::Chat> ActorChat{};
    long long Date;
    std::vector<std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>> OldReaction;
    std::vector<std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>> NewReaction;
};

}

#endif // TELEGRAMBOTAPI_MESSAGEREACTIONUPDATED_HPP
