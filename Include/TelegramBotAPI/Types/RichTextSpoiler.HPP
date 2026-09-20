#ifndef TELEGRAMBOTAPI_RICHTEXTSPOILER_HPP
#define TELEGRAMBOTAPI_RICHTEXTSPOILER_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextSpoiler {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTSPOILER_HPP
