#ifndef TELEGRAMBOTAPI_RICHTEXTBOLD_HPP
#define TELEGRAMBOTAPI_RICHTEXTBOLD_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextBold {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTBOLD_HPP
