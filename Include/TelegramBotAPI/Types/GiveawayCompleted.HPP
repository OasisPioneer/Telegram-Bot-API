#ifndef TELEGRAMBOTAPI_GIVEAWAYCOMPLETED_HPP
#define TELEGRAMBOTAPI_GIVEAWAYCOMPLETED_HPP

#include "TelegramBotAPI/Types/Message.HPP"
#include <memory>
#include <optional>

namespace TelegramBotAPI::Type {

struct Message;

}

namespace TelegramBotAPI::Type {

struct GiveawayCompleted {
    long long WinnerCount;
    std::optional<long long> UnclaimedPrizeCount{};
    std::shared_ptr<::TelegramBotAPI::Type::Message> GiveawayMessage{};
    std::optional<bool> IsStarGiveaway{};
};

}

#endif // TELEGRAMBOTAPI_GIVEAWAYCOMPLETED_HPP
