#ifndef TELEGRAMBOTAPI_REPLYPARAMETERS_HPP
#define TELEGRAMBOTAPI_REPLYPARAMETERS_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct ReplyParameters {
    std::optional<long long> MessageID{};
    std::optional<long long> ChatID{};
    std::optional<long long> EphemeralMessageID{};
    std::optional<bool> AllowSendingWithoutReply{};
    std::optional<std::string> Quote{};
    std::optional<std::string> QuoteParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> QuoteEntities{};
    std::optional<long long> QuotePosition{};
    std::optional<long long> ChecklistTaskID{};
    std::optional<std::string> PollOptionID{};
};

}

#endif // TELEGRAMBOTAPI_REPLYPARAMETERS_HPP
