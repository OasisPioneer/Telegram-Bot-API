#ifndef TELEGRAMBOTAPI_REVENUEWITHDRAWALSTATE_HPP
#define TELEGRAMBOTAPI_REVENUEWITHDRAWALSTATE_HPP

#include "TelegramBotAPI/Types/RevenueWithdrawalStateFailed.HPP"
#include "TelegramBotAPI/Types/RevenueWithdrawalStatePending.HPP"
#include "TelegramBotAPI/Types/RevenueWithdrawalStateSucceeded.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using RevenueWithdrawalState = std::variant<::TelegramBotAPI::Type::RevenueWithdrawalStatePending, ::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded, ::TelegramBotAPI::Type::RevenueWithdrawalStateFailed>;

}

#endif // TELEGRAMBOTAPI_REVENUEWITHDRAWALSTATE_HPP
