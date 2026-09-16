#ifndef TELEGRAMBOTAPI_CHOSENINLINERESULT_HPP
#define TELEGRAMBOTAPI_CHOSENINLINERESULT_HPP

#include <optional>
#include <string>

#include "Location.HPP"
#include "User.HPP"

namespace TelegramBotAPI::Type {
    struct ChosenInlineResult {
            std::string                                   ResultID{};
            std::optional<TelegramBotAPI::Type::User>     From{};
            std::optional<TelegramBotAPI::Type::Location> Location{};
            std::optional<std::string>                    InlineMessageID{};
            std::optional<std::string>                    Query{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_CHOSENINLINERESULT_HPP