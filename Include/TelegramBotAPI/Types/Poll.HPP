#ifndef TELEGRAMBOTAPI_POLL_HPP
#define TELEGRAMBOTAPI_POLL_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/PollMedia.HPP"
#include "TelegramBotAPI/Types/PollOption.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct Poll {
    std::string ID;
    std::string Question;
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> QuestionEntities{};
    std::vector<::TelegramBotAPI::Type::PollOption> Options;
    long long TotalVoterCount;
    bool IsClosed;
    bool IsAnonymous;
    std::string Type;
    bool AllowsMultipleAnswers;
    bool AllowsRevoting;
    bool MembersOnly;
    std::optional<std::vector<std::string>> CountryCodes{};
    std::optional<std::vector<long long>> CorrectOptionIDs{};
    std::optional<std::string> Explanation{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> ExplanationEntities{};
    std::optional<::TelegramBotAPI::Type::PollMedia> ExplanationMedia{};
    std::optional<long long> OpenPeriod{};
    std::optional<long long> CloseDate{};
    std::optional<std::string> Description{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> DescriptionEntities{};
    std::optional<::TelegramBotAPI::Type::PollMedia> Media{};
};

}

#endif // TELEGRAMBOTAPI_POLL_HPP
