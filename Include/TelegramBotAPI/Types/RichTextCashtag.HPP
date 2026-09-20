#ifndef TELEGRAMBOTAPI_RICHTEXTCASHTAG_HPP
#define TELEGRAMBOTAPI_RICHTEXTCASHTAG_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextCashtag {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string Cashtag;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTCASHTAG_HPP
