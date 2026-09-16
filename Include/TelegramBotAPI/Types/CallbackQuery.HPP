#ifndef TELEGRAMBOTAPI_CALLBACKQUERY_HPP
#define TELEGRAMBOTAPI_CALLBACKQUERY_HPP

#include <string>

#include "Message.HPP"
#include "User.HPP"

namespace TelegramBotAPI::Type {
    struct CallbackQuery {
            std::string                                      ID{};
            std::optional<TelegramBotAPI::Type::User>        From{};
            std::optional<TelegramBotAPI::Type::Message>     Message{};
            std::optional<TelegramBotAPI::Type::std::string> InlineMessageID{};
            std::optional<TelegramBotAPI::Type::std::string> Data{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_CALLBACKQUERY_HPP