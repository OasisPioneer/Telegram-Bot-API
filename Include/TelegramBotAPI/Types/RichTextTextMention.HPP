#ifndef TELEGRAMBOTAPI_RICHTEXTTEXTMENTION_HPP
#define TELEGRAMBOTAPI_RICHTEXTTEXTMENTION_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextTextMention {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    ::TelegramBotAPI::Type::User User;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTTEXTMENTION_HPP
