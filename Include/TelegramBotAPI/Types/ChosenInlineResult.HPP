#ifndef TELEGRAMBOTAPI_CHOSENINLINERESULT_HPP
#define TELEGRAMBOTAPI_CHOSENINLINERESULT_HPP

#include <string>
#include <optional>

#include "User.HPP"
#include "Location.HPP"

namespace TelegramBotAPI::Type {
    struct ChosenInlineResult {
        std::string ResultID{};
        std::optional<TelegramBotAPI::Type::User> From{};
        std::optional<TelegramBotAPI::Type::Location> Location{};
        std::optional<std::string> InlineMessageID{};
        std::optional<std::string> Query{};
    };
}

#endif // TELEGRAMBOTAPI_CHOSENINLINERESULT_HPP