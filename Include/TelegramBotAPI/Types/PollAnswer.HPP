#ifndef TELEGRAMBOTAPI_POLLANSWER_HPP
#define TELEGRAMBOTAPI_POLLANSWER_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct PollAnswer {
    std::string PollID;
    std::optional<::TelegramBotAPI::Type::Chat> VoterChat{};
    std::optional<::TelegramBotAPI::Type::User> User{};
    std::vector<long long> OptionIDs;
    std::vector<std::string> OptionPersistentIDs;
};

}

#endif // TELEGRAMBOTAPI_POLLANSWER_HPP
