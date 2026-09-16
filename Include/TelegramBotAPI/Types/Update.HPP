#ifndef TELEGRAMBOTAPI_UPDATE_HPP
#define TELEGRAMBOTAPI_UPDATE_HPP

#include <memory>

#include "Message.HPP"
#include "InlineQuery.HPP"
#include "ChosenInlineResult.HPP"
#include "CallbackQuery.HPP"

namespace TelegramBotAPI::Type {
    struct Update {
        long long UpdateID{};
        std::shared_ptr<TelegramBotAPI::Type::Message> Message{};
        std::shared_ptr<TelegramBotAPI::Type::InlineQuery> InlineQuery{};
        std::shared_ptr<TelegramBotAPI::Type::ChosenInlineResult> ChosenInlineResult{};
        std::shared_ptr<TelegramBotAPI::Type::CallbackQuery> CallbackQuery{};
    };
}

#endif // TELEGRAMBOTAPI_UPDATE_HPP
