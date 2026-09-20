#ifndef TELEGRAMBOTAPI_POLLOPTION_HPP
#define TELEGRAMBOTAPI_POLLOPTION_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/PollMedia.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct PollOption {
    std::string PersistentID;
    std::string Text;
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> TextEntities{};
    std::optional<::TelegramBotAPI::Type::PollMedia> Media{};
    long long VoterCount;
    std::optional<::TelegramBotAPI::Type::User> AddedByUser{};
    std::optional<::TelegramBotAPI::Type::Chat> AddedByChat{};
    std::optional<long long> AdditionDate{};
};

}

#endif // TELEGRAMBOTAPI_POLLOPTION_HPP
