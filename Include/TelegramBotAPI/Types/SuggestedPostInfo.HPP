#ifndef TELEGRAMBOTAPI_SUGGESTEDPOSTINFO_HPP
#define TELEGRAMBOTAPI_SUGGESTEDPOSTINFO_HPP

#include "TelegramBotAPI/Types/SuggestedPostPrice.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct SuggestedPostInfo {
    std::string State;
    std::optional<::TelegramBotAPI::Type::SuggestedPostPrice> Price{};
    std::optional<long long> SendDate{};
};

}

#endif // TELEGRAMBOTAPI_SUGGESTEDPOSTINFO_HPP
