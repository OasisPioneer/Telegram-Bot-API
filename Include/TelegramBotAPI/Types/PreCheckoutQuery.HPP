#ifndef TELEGRAMBOTAPI_PRECHECKOUTQUERY_HPP
#define TELEGRAMBOTAPI_PRECHECKOUTQUERY_HPP

#include "TelegramBotAPI/Types/OrderInfo.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct PreCheckoutQuery {
    std::string ID;
    ::TelegramBotAPI::Type::User From;
    std::string Currency;
    long long TotalAmount;
    std::string InvoicePayload;
    std::optional<std::string> ShippingOptionID{};
    std::optional<::TelegramBotAPI::Type::OrderInfo> OrderInfo{};
};

}

#endif // TELEGRAMBOTAPI_PRECHECKOUTQUERY_HPP
