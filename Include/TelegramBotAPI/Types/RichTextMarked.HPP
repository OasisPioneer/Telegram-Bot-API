#ifndef TELEGRAMBOTAPI_RICHTEXTMARKED_HPP
#define TELEGRAMBOTAPI_RICHTEXTMARKED_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextMarked {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTMARKED_HPP
