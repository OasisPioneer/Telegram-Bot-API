#ifndef TELEGRAMBOTAPI_GIVEAWAY_HPP
#define TELEGRAMBOTAPI_GIVEAWAY_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct Giveaway {
    std::vector<::TelegramBotAPI::Type::Chat> Chats;
    long long WinnersSelectionDate;
    long long WinnerCount;
    std::optional<bool> OnlyNewMembers{};
    std::optional<bool> HasPublicWinners{};
    std::optional<std::string> PrizeDescription{};
    std::optional<std::vector<std::string>> CountryCodes{};
    std::optional<long long> PrizeStarCount{};
    std::optional<long long> PremiumSubscriptionMonthCount{};
};

}

#endif // TELEGRAMBOTAPI_GIVEAWAY_HPP
