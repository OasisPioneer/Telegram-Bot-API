#ifndef TELEGRAMBOTAPI_UPDATE_HPP
#define TELEGRAMBOTAPI_UPDATE_HPP

#include <optional>

#include "CallbackQuery.HPP"
#include "ChosenInlineResult.HPP"
#include "InlineQuery.HPP"
#include "Message.HPP"
#include "Poll.HPP"
#include "PollAnswer.HPP"
#include "PreCheckoutQuery.HPP"
#include "ShippingQuery.HPP"

namespace TelegramBotAPI::Type {
    struct Update {
            long long UpdateID{};

            std::optional<TelegramBotAPI::Type::Message> Message{};
            std::optional<TelegramBotAPI::Type::Message> EditedMessage{};
            std::optional<TelegramBotAPI::Type::Message> ChannelPost{};
            std::optional<TelegramBotAPI::Type::Message> EditedChannelPost{};

            std::optional<TelegramBotAPI::Type::InlineQuery> InlineQuery{};
            std::optional<TelegramBotAPI::Type::ChosenInlineResult>
                ChosenInlineResult{};

            std::optional<TelegramBotAPI::Type::CallbackQuery> CallbackQuery{};

            std::optional<TelegramBotAPI::Type::ShippingQuery> ShippingQuery{};

            std::optional<TelegramBotAPI::Type::PreCheckoutQuery>
                PreCheckoutQuery{};

            std::optional<TelegramBotAPI::Type::Poll> Poll{};

            std::optional<TelegramBotAPI::Type::PollAnswer> PollAnswer{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_UPDATE_HPP
