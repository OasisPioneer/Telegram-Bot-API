#ifndef TELEGRAMBOTAPI_REACTIONTYPECUSTOMEMOJI_HPP
#define TELEGRAMBOTAPI_REACTIONTYPECUSTOMEMOJI_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct ReactionTypeCustomEmoji {
    std::string Type;
    std::string CustomEmojiID;
};

}

#endif // TELEGRAMBOTAPI_REACTIONTYPECUSTOMEMOJI_HPP
