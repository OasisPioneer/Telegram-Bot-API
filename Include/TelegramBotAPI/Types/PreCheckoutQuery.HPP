#ifndef TELEGRAMBOTAPI_PRECHECKOUTQUERY_HPP
#define TELEGRAMBOTAPI_PRECHECKOUTQUERY_HPP

#include <optional>
#include <string>

#include "OrderInfo.HPP"
#include "User.HPP"

namespace TelegramBotAPI::Type {
    struct PreCheckoutQuery {
            std::string                                    ID{};
            TelegramBotAPI::Type::User                     From{};
            std::string                                    Currency{};
            long long                                      TotalAmount{};
            std::string                                    InvoicePayload{};
            std::optional<std::string>                     ShippingOptionID{};
            std::optional<TelegramBotAPI::Type::OrderInfo> OrderInfo{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_PRECHECKOUTQUERY_HPP