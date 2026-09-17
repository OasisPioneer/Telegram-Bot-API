#ifndef TELEGRAMBOTAPI_POLLOPTION_HPP
#define TELEGRAMBOTAPI_POLLOPTION_HPP

#include <optional>
#include <string>
#include <vector>

#include "Chat.HPP"
#include "MessageEntity.HPP"
#include "PollMedia.HPP"
#include "User.HPP"

namespace TelegramBotAPI::Type {
    struct PollOption {
            std::string                                      PersistentID{};
            std::string                                      Text{};
            std::vector<TelegramBotAPI::Type::MessageEntity> TextEntities{};
            std::optional<PollMedia>                         Media{};

            int VoterCount{};

            std::optional<TelegramBotAPI::Type::User> AddedByUser{};
            std::optional<TelegramBotAPI::Type::Chat> AddedByChat{};
            std::optional<long long>                  AdditionDate{};
    };

} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_POLLOPTION_HPP