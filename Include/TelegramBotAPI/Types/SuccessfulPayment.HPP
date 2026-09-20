#ifndef TELEGRAMBOTAPI_SUCCESSFULPAYMENT_HPP
#define TELEGRAMBOTAPI_SUCCESSFULPAYMENT_HPP

#include "TelegramBotAPI/Types/OrderInfo.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct SuccessfulPayment {
    std::string Currency;
    long long TotalAmount;
    std::string InvoicePayload;
    std::optional<long long> SubscriptionExpirationDate{};
    std::optional<bool> IsRecurring{};
    std::optional<bool> IsFirstRecurring{};
    std::optional<std::string> ShippingOptionID{};
    std::optional<::TelegramBotAPI::Type::OrderInfo> OrderInfo{};
    std::string TelegramPaymentChargeID;
    std::string ProviderPaymentChargeID;
};

}

#endif // TELEGRAMBOTAPI_SUCCESSFULPAYMENT_HPP
