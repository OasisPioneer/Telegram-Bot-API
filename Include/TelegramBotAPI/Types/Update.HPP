#ifndef TELEGRAMBOTAPI_UPDATE_HPP
#define TELEGRAMBOTAPI_UPDATE_HPP

#include <memory>
#include <optional>

#include "Message.HPP"
#include "InlineQuery.HPP"

namespace TelegramBotAPI::Type {
    struct Update {
        long long UpdateID{};
        std::optional<std::shared_ptr<Message>> Message{};
        std::optional<std::shared_ptr<InlineQuery>> InlineQuery{};
    };
}

#endif // TELEGRAMBOTAPI_UPDATE_HPP
