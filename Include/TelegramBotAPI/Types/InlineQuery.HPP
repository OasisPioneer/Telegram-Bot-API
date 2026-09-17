#ifndef TELEGRAMBOTAPI_INLINEQUERY_HPP
#define TELEGRAMBOTAPI_INLINEQUERY_HPP

#include <optional>
#include <string>

#include "Location.HPP"
#include "User.HPP"

namespace TelegramBotAPI::Type {
    struct InlineQuery {
            std::string                                   ID{};
            TelegramBotAPI::Type::User                    From{};
            std::string                                   Query{};
            std::string                                   Offset{};
            std::optional<std::string>                    ChatType{};
            std::optional<TelegramBotAPI::Type::Location> Location{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_INLINEQUERY_HPP