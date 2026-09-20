#ifndef TELEGRAMBOTAPI_RICHTEXTBANKCARDNUMBER_HPP
#define TELEGRAMBOTAPI_RICHTEXTBANKCARDNUMBER_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextBankCardNumber {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string BankCardNumber;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTBANKCARDNUMBER_HPP
