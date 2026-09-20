#ifndef TELEGRAMBOTAPI_OWNEDGIFTUNIQUE_HPP
#define TELEGRAMBOTAPI_OWNEDGIFTUNIQUE_HPP

#include "TelegramBotAPI/Types/UniqueGift.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct OwnedGiftUnique {
    std::string Type;
    ::TelegramBotAPI::Type::UniqueGift Gift;
    std::optional<std::string> OwnedGiftID{};
    std::optional<::TelegramBotAPI::Type::User> SenderUser{};
    long long SendDate;
    std::optional<bool> IsSaved{};
    std::optional<bool> CanBeTransferred{};
    std::optional<long long> TransferStarCount{};
    std::optional<long long> NextTransferDate{};
};

}

#endif // TELEGRAMBOTAPI_OWNEDGIFTUNIQUE_HPP
