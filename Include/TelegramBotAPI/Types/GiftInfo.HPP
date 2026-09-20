#ifndef TELEGRAMBOTAPI_GIFTINFO_HPP
#define TELEGRAMBOTAPI_GIFTINFO_HPP

#include "TelegramBotAPI/Types/Gift.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct GiftInfo {
    ::TelegramBotAPI::Type::Gift Gift;
    std::optional<std::string> OwnedGiftID{};
    std::optional<long long> ConvertStarCount{};
    std::optional<long long> PrepaidUpgradeStarCount{};
    std::optional<bool> IsUpgradeSeparate{};
    std::optional<bool> CanBeUpgraded{};
    std::optional<std::string> Text{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> Entities{};
    std::optional<bool> IsPrivate{};
    std::optional<long long> UniqueGiftNumber{};
};

}

#endif // TELEGRAMBOTAPI_GIFTINFO_HPP
