#ifndef TELEGRAMBOTAPI_RICHTEXTANCHORLINK_HPP
#define TELEGRAMBOTAPI_RICHTEXTANCHORLINK_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextAnchorLink {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string AnchorName;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTANCHORLINK_HPP
