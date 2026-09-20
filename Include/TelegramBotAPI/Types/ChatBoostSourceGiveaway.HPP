#ifndef TELEGRAMBOTAPI_CHATBOOSTSOURCEGIVEAWAY_HPP
#define TELEGRAMBOTAPI_CHATBOOSTSOURCEGIVEAWAY_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ChatBoostSourceGiveaway {
    std::string Source;
    long long GiveawayMessageID;
    std::optional<::TelegramBotAPI::Type::User> User{};
    std::optional<long long> PrizeStarCount{};
    std::optional<bool> IsUnclaimed{};
};

}

#endif // TELEGRAMBOTAPI_CHATBOOSTSOURCEGIVEAWAY_HPP
