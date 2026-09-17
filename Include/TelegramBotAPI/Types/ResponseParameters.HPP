#ifndef TELEGRAMBOTAPI_RESPONSEPARAMETERS_HPP
#define TELEGRAMBOTAPI_RESPONSEPARAMETERS_HPP

#include <optional>

namespace TelegramBotAPI::Type {
    struct ResponseParameters {
        std::optional<long long> MigrateToChatID{};
        std::optional<long long> RetryAfter{};
    };
}

#endif // TELEGRAMBOTAPI_RESPONSEPARAMETERS_HPP