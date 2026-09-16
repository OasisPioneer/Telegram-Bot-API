#ifndef TELEGRAMBOTAPI_INLINEQUERY_HPP
#define TELEGRAMBOTAPI_INLINEQUERY_HPP

#include <string>
#include <optional>

#include "User.HPP"
#include "Location.HPP"

namespace TelegramBotAPI::Type {
    struct InlineQuery {
        std::string ID{};
        std::optional<TelegramBotAPI::Type::User> From{};
        std::optional<TelegramBotAPI::Type::Location> Location{};
        std::string Query{};
        std::string Offset{};
    };
}

#endif // TELEGRAMBOTAPI_INLINEQUERY_HPP