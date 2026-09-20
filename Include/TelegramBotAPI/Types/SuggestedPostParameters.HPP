#ifndef TELEGRAMBOTAPI_SUGGESTEDPOSTPARAMETERS_HPP
#define TELEGRAMBOTAPI_SUGGESTEDPOSTPARAMETERS_HPP

#include "TelegramBotAPI/Types/SuggestedPostPrice.HPP"
#include <optional>

namespace TelegramBotAPI::Type {

struct SuggestedPostParameters {
    std::optional<::TelegramBotAPI::Type::SuggestedPostPrice> Price{};
    std::optional<long long> SendDate{};
};

}

#endif // TELEGRAMBOTAPI_SUGGESTEDPOSTPARAMETERS_HPP
