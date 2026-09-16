#ifndef TELEGRAMBOTAPI_INLINEQUERY_HPP
#define TELEGRAMBOTAPI_INLINEQUERY_HPP

#include <optional>
#include <string>

#include "Location.HPP"
#include "User.HPP"

namespace TelegramBotAPI::Type {
    struct InlineQuery {
            std::string                                   ID{};
            std::optional<TelegramBotAPI::Type::User>     From{};
            std::optional<TelegramBotAPI::Type::Location> Location{};
            std::string                                   Query{};
            std::string                                   Offset{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_INLINEQUERY_HPP