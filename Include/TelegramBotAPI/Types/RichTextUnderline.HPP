#ifndef TELEGRAMBOTAPI_RICHTEXTUNDERLINE_HPP
#define TELEGRAMBOTAPI_RICHTEXTUNDERLINE_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextUnderline {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTUNDERLINE_HPP
