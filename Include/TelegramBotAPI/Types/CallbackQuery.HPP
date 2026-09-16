#ifndef TELEGRAMBOTAPI_CALLBACKQUERY_HPP
#define TELEGRAMBOTAPI_CALLBACKQUERY_HPP

#include <optional>
#include <string>

#include "Message.HPP"
#include "User.HPP"

namespace TelegramBotAPI::Type {
    struct CallbackQuery {
            std::string                                  ID{};
            TelegramBotAPI::Type::User                   From{};
            std::optional<TelegramBotAPI::Type::Message> Message{};
            std::optional<std::string>                   InlineMessageID{};
            std::optional<std::string>                   Data{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_CALLBACKQUERY_HPP