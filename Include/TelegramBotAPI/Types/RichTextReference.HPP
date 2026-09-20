#ifndef TELEGRAMBOTAPI_RICHTEXTREFERENCE_HPP
#define TELEGRAMBOTAPI_RICHTEXTREFERENCE_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextReference {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string Name;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTREFERENCE_HPP
