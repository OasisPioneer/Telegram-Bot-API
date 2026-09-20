#ifndef TELEGRAMBOTAPI_GIFT_HPP
#define TELEGRAMBOTAPI_GIFT_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/GiftBackground.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct Gift {
    std::string ID;
    ::TelegramBotAPI::Type::Sticker Sticker;
    long long StarCount;
    std::optional<long long> UpgradeStarCount{};
    std::optional<bool> IsPremium{};
    std::optional<bool> HasColors{};
    std::optional<long long> TotalCount{};
    std::optional<long long> RemainingCount{};
    std::optional<long long> PersonalTotalCount{};
    std::optional<long long> PersonalRemainingCount{};
    std::optional<::TelegramBotAPI::Type::GiftBackground> Background{};
    std::optional<long long> UniqueGiftVariantCount{};
    std::optional<::TelegramBotAPI::Type::Chat> PublisherChat{};
};

}

#endif // TELEGRAMBOTAPI_GIFT_HPP
