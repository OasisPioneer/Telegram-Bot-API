#ifndef TELEGRAMBOTAPI_RICHTEXTPHONENUMBER_HPP
#define TELEGRAMBOTAPI_RICHTEXTPHONENUMBER_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextPhoneNumber {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string PhoneNumber;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTPHONENUMBER_HPP
