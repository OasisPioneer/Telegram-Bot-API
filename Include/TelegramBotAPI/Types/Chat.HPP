#ifndef TELEGRAMBOTAPI_CHAT_HPP
#define TELEGRAMBOTAPI_CHAT_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {
    struct Chat {
            long long   ID{};
            std::string Type{};

            std::optional<std::string> Title{};
            std::optional<std::string> UserName{};
            std::optional<std::string> FirstName{};
            std::optional<std::string> LastName{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_CHAT_HPP