#ifndef TELEGRAMBOTAPI_REACTIONTYPEEMOJI_HPP
#define TELEGRAMBOTAPI_REACTIONTYPEEMOJI_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct ReactionTypeEmoji {
    std::string Type;
    std::string Emoji;
};

}

#endif // TELEGRAMBOTAPI_REACTIONTYPEEMOJI_HPP
