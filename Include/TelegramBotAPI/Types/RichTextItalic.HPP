#ifndef TELEGRAMBOTAPI_RICHTEXTITALIC_HPP
#define TELEGRAMBOTAPI_RICHTEXTITALIC_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextItalic {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTITALIC_HPP
