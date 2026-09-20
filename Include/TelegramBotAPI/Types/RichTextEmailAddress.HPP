#ifndef TELEGRAMBOTAPI_RICHTEXTEMAILADDRESS_HPP
#define TELEGRAMBOTAPI_RICHTEXTEMAILADDRESS_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextEmailAddress {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string EmailAddress;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTEMAILADDRESS_HPP
