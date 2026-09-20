#ifndef TELEGRAMBOTAPI_TRANSACTIONPARTNERFRAGMENT_HPP
#define TELEGRAMBOTAPI_TRANSACTIONPARTNERFRAGMENT_HPP

#include "TelegramBotAPI/Types/RevenueWithdrawalStateFailed.HPP"
#include "TelegramBotAPI/Types/RevenueWithdrawalStatePending.HPP"
#include "TelegramBotAPI/Types/RevenueWithdrawalStateSucceeded.HPP"
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Type {

struct TransactionPartnerFragment {
    std::string Type;
    std::optional<std::variant<::TelegramBotAPI::Type::RevenueWithdrawalStatePending, ::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded, ::TelegramBotAPI::Type::RevenueWithdrawalStateFailed>> WithdrawalState{};
};

}

#endif // TELEGRAMBOTAPI_TRANSACTIONPARTNERFRAGMENT_HPP
