#ifndef TELEGRAMBOTAPI_RICHTEXTCUSTOMEMOJI_HPP
#define TELEGRAMBOTAPI_RICHTEXTCUSTOMEMOJI_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct RichTextCustomEmoji {
    std::string Type;
    std::string CustomEmojiID;
    std::string AlternativeText;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTCUSTOMEMOJI_HPP
