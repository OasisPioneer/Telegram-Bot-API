#ifndef TELEGRAMBOTAPI_TRANSACTIONPARTNERAFFILIATEPROGRAM_HPP
#define TELEGRAMBOTAPI_TRANSACTIONPARTNERAFFILIATEPROGRAM_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct TransactionPartnerAffiliateProgram {
    std::string Type;
    std::optional<::TelegramBotAPI::Type::User> SponsorUser{};
    long long CommissionPerMille;
};

}

#endif // TELEGRAMBOTAPI_TRANSACTIONPARTNERAFFILIATEPROGRAM_HPP
