#ifndef TELEGRAMBOTAPI_RICHTEXTSUPERSCRIPT_HPP
#define TELEGRAMBOTAPI_RICHTEXTSUPERSCRIPT_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextSuperscript {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTSUPERSCRIPT_HPP
