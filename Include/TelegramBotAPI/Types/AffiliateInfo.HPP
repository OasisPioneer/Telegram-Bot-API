#ifndef TELEGRAMBOTAPI_AFFILIATEINFO_HPP
#define TELEGRAMBOTAPI_AFFILIATEINFO_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>

namespace TelegramBotAPI::Type {

struct AffiliateInfo {
    std::optional<::TelegramBotAPI::Type::User> AffiliateUser{};
    std::optional<::TelegramBotAPI::Type::Chat> AffiliateChat{};
    long long CommissionPerMille;
    long long Amount;
    std::optional<long long> NanostarAmount{};
};

}

#endif // TELEGRAMBOTAPI_AFFILIATEINFO_HPP
