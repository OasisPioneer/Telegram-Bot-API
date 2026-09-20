#ifndef TELEGRAMBOTAPI_GIVEAWAYWINNERS_HPP
#define TELEGRAMBOTAPI_GIVEAWAYWINNERS_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct GiveawayWinners {
    ::TelegramBotAPI::Type::Chat Chat;
    long long GiveawayMessageID;
    long long WinnersSelectionDate;
    long long WinnerCount;
    std::vector<::TelegramBotAPI::Type::User> Winners;
    std::optional<long long> AdditionalChatCount{};
    std::optional<long long> PrizeStarCount{};
    std::optional<long long> PremiumSubscriptionMonthCount{};
    std::optional<long long> UnclaimedPrizeCount{};
    std::optional<bool> OnlyNewMembers{};
    std::optional<bool> WasRefunded{};
    std::optional<std::string> PrizeDescription{};
};

}

#endif // TELEGRAMBOTAPI_GIVEAWAYWINNERS_HPP
