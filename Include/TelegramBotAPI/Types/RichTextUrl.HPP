#ifndef TELEGRAMBOTAPI_RICHTEXTURL_HPP
#define TELEGRAMBOTAPI_RICHTEXTURL_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextUrl {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string URL;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTURL_HPP
