#ifndef TELEGRAMBOTAPI_SHIPPINGQUERY_HPP
#define TELEGRAMBOTAPI_SHIPPINGQUERY_HPP

#include "TelegramBotAPI/Types/ShippingAddress.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct ShippingQuery {
    std::string ID;
    ::TelegramBotAPI::Type::User From;
    std::string InvoicePayload;
    ::TelegramBotAPI::Type::ShippingAddress ShippingAddress;
};

}

#endif // TELEGRAMBOTAPI_SHIPPINGQUERY_HPP
