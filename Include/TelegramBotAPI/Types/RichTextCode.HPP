#ifndef TELEGRAMBOTAPI_RICHTEXTCODE_HPP
#define TELEGRAMBOTAPI_RICHTEXTCODE_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextCode {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTCODE_HPP
