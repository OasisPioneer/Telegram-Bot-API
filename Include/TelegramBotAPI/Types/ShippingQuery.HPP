#ifndef TELEGRAMBOTAPI_SHIPPINGQUERY_HPP
#define TELEGRAMBOTAPI_SHIPPINGQUERY_HPP

#include <string>

#include "ShippingAddress.HPP"
#include "User.HPP"

namespace TelegramBotAPI::Type {
    struct ShippingQuery {
            std::string                           ID{};
            TelegramBotAPI::Type::User            From{};
            std::string                           InvoicePayload{};
            TelegramBotAPI::Type::ShippingAddress ShippingAddress{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_SHIPPINGQUERY_HPP