#ifndef TELEGRAMBOTAPI_RICHTEXTHASHTAG_HPP
#define TELEGRAMBOTAPI_RICHTEXTHASHTAG_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextHashtag {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string Hashtag;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTHASHTAG_HPP
