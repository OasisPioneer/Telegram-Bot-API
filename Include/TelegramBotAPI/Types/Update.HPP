#ifndef TELEGRAMBOTAPI_UPDATE_HPP
#define TELEGRAMBOTAPI_UPDATE_HPP

#include <optional>

#include "CallbackQuery.HPP"
#include "ChosenInlineResult.HPP"
#include "InlineQuery.HPP"
#include "Message.HPP"

namespace TelegramBotAPI::Type {
    struct Update {
            long long UpdateID{};

            std::optional<TelegramBotAPI::Type::Message>     Message{};
            std::optional<TelegramBotAPI::Type::InlineQuery> InlineQuery{};
            std::optional<TelegramBotAPI::Type::ChosenInlineResult>
                ChosenInlineResult{};
            std::optional<TelegramBotAPI::Type::CallbackQuery> CallbackQuery{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_UPDATE_HPP
