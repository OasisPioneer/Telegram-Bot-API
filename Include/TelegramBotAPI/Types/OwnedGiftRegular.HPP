#ifndef TELEGRAMBOTAPI_OWNEDGIFTREGULAR_HPP
#define TELEGRAMBOTAPI_OWNEDGIFTREGULAR_HPP

#include "TelegramBotAPI/Types/Gift.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct OwnedGiftRegular {
    std::string Type;
    ::TelegramBotAPI::Type::Gift Gift;
    std::optional<std::string> OwnedGiftID{};
    std::optional<::TelegramBotAPI::Type::User> SenderUser{};
    long long SendDate;
    std::optional<std::string> Text{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> Entities{};
    std::optional<bool> IsPrivate{};
    std::optional<bool> IsSaved{};
    std::optional<bool> CanBeUpgraded{};
    std::optional<bool> WasRefunded{};
    std::optional<long long> ConvertStarCount{};
    std::optional<long long> PrepaidUpgradeStarCount{};
    std::optional<bool> IsUpgradeSeparate{};
    std::optional<long long> UniqueGiftNumber{};
};

}

#endif // TELEGRAMBOTAPI_OWNEDGIFTREGULAR_HPP
