#ifndef TELEGRAMBOTAPI_UNIQUEGIFTINFO_HPP
#define TELEGRAMBOTAPI_UNIQUEGIFTINFO_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/UniqueGift.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct UniqueGiftInfo {
    ::TelegramBotAPI::Type::UniqueGift Gift;
    std::string Origin;
    std::optional<std::string> Text{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> Entities{};
    std::optional<bool> IsPrivate{};
    std::optional<std::string> LastResaleCurrency{};
    std::optional<long long> LastResaleAmount{};
    std::optional<std::string> OwnedGiftID{};
    std::optional<long long> TransferStarCount{};
    std::optional<long long> NextTransferDate{};
};

}

#endif // TELEGRAMBOTAPI_UNIQUEGIFTINFO_HPP
