#ifndef TELEGRAMBOTAPI_RICHTEXTMENTION_HPP
#define TELEGRAMBOTAPI_RICHTEXTMENTION_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextMention {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string UserName;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTMENTION_HPP
