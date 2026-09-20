#ifndef TELEGRAMBOTAPI_INVOICE_HPP
#define TELEGRAMBOTAPI_INVOICE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct Invoice {
    std::string Title;
    std::string Description;
    std::string StartParameter;
    std::string Currency;
    long long TotalAmount;
};

}

#endif // TELEGRAMBOTAPI_INVOICE_HPP
