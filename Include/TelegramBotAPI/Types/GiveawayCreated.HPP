#ifndef TELEGRAMBOTAPI_GIVEAWAYCREATED_HPP
#define TELEGRAMBOTAPI_GIVEAWAYCREATED_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct GiveawayCreated {
    std::optional<long long> PrizeStarCount{};
};

}

#endif // TELEGRAMBOTAPI_GIVEAWAYCREATED_HPP
