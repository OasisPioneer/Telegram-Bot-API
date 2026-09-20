#ifndef TELEGRAMBOTAPI_OWNEDGIFTS_HPP
#define TELEGRAMBOTAPI_OWNEDGIFTS_HPP

#include "TelegramBotAPI/Types/OwnedGiftRegular.HPP"
#include "TelegramBotAPI/Types/OwnedGiftUnique.HPP"
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Type {

struct OwnedGifts {
    long long TotalCount;
    std::vector<std::variant<::TelegramBotAPI::Type::OwnedGiftRegular, ::TelegramBotAPI::Type::OwnedGiftUnique>> Gifts;
    std::optional<std::string> NextOffset{};
};

}

#endif // TELEGRAMBOTAPI_OWNEDGIFTS_HPP
