#ifndef TELEGRAMBOTAPI_RICHTEXTSUBSCRIPT_HPP
#define TELEGRAMBOTAPI_RICHTEXTSUBSCRIPT_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextSubscript {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTSUBSCRIPT_HPP
