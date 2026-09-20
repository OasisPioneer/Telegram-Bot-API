#ifndef TELEGRAMBOTAPI_REFUNDEDPAYMENT_HPP
#define TELEGRAMBOTAPI_REFUNDEDPAYMENT_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RefundedPayment {
    std::string Currency;
    long long TotalAmount;
    std::string InvoicePayload;
    std::string TelegramPaymentChargeID;
    std::optional<std::string> ProviderPaymentChargeID{};
};

}

#endif // TELEGRAMBOTAPI_REFUNDEDPAYMENT_HPP
