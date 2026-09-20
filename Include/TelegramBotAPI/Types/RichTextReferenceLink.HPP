#ifndef TELEGRAMBOTAPI_RICHTEXTREFERENCELINK_HPP
#define TELEGRAMBOTAPI_RICHTEXTREFERENCELINK_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextReferenceLink {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string ReferenceName;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTREFERENCELINK_HPP
