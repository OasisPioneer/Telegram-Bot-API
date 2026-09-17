#ifndef TELEGRAMBOTAPI_POLLANSWER_HPP
#define TELEGRAMBOTAPI_POLLANSWER_HPP

#include <optional>
#include <string>
#include <vector>

#include "Chat.HPP"
#include "User.HPP"

namespace TelegramBotAPI::Type {
    struct PollAnswer {
            std::string PollID{};

            std::optional<TelegramBotAPI::Type::Chat> VoterChat{};

            std::optional<TelegramBotAPI::Type::User> User{};

            std::vector<long long> OptionIDS{};

            std::vector<std::string> OptionPersistentIDS{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_POLLANSWER_HPP