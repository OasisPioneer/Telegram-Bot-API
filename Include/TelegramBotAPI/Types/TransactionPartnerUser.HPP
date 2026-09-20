#ifndef TELEGRAMBOTAPI_TRANSACTIONPARTNERUSER_HPP
#define TELEGRAMBOTAPI_TRANSACTIONPARTNERUSER_HPP

#include "TelegramBotAPI/Types/AffiliateInfo.HPP"
#include "TelegramBotAPI/Types/Gift.HPP"
#include "TelegramBotAPI/Types/PaidMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/PaidMediaPhoto.HPP"
#include "TelegramBotAPI/Types/PaidMediaPreview.HPP"
#include "TelegramBotAPI/Types/PaidMediaVideo.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Type {

struct TransactionPartnerUser {
    std::string Type;
    std::string TransactionType;
    ::TelegramBotAPI::Type::User User;
    std::optional<::TelegramBotAPI::Type::AffiliateInfo> Affiliate{};
    std::optional<std::string> InvoicePayload{};
    std::optional<long long> SubscriptionPeriod{};
    std::optional<std::vector<std::variant<::TelegramBotAPI::Type::PaidMediaLivePhoto, ::TelegramBotAPI::Type::PaidMediaPhoto, ::TelegramBotAPI::Type::PaidMediaPreview, ::TelegramBotAPI::Type::PaidMediaVideo>>> PaidMedia{};
    std::optional<std::string> PaidMediaPayload{};
    std::optional<::TelegramBotAPI::Type::Gift> Gift{};
    std::optional<long long> PremiumSubscriptionDuration{};
};

}

#endif // TELEGRAMBOTAPI_TRANSACTIONPARTNERUSER_HPP
