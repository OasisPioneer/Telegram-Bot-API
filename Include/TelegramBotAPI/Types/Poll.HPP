#ifndef TELEGRAMBOTAPI_POLL_HPP
#define TELEGRAMBOTAPI_POLL_HPP

#include <optional>
#include <string>
#include <vector>

#include "MessageEntity.HPP"
#include "PollOption.HPP"

namespace TelegramBotAPI::Type {
    struct Poll {
            std::string ID{};
            std::string Question{};

            std::vector<TelegramBotAPI::Type::MessageEntity> QuestionEntities{};

            std::vector<TelegramBotAPI::Type::PollOption> Options{};

            int TotalVoterCount{};

            bool IsClosed{false};
            bool IsAnonymous{false};

            std::string Type{};

            bool AllowsMultipleAnswers{false};
            bool AllowsRevoting{false};
            bool MembersOnly{false};

            std::optional<std::vector<std::string>> CountryCodes{};

            std::optional<std::vector<long long>> CorrectOptionIDS{};

            std::optional<std::string> Explanation{};

            std::vector<TelegramBotAPI::Type::MessageEntity>
                ExplanationEntities{};

            std::optional<long long> OpenPeriod{};
            std::optional<long long> CloseDate{};

            std::optional<std::string> Description{};
            std::vector<TelegramBotAPI::Type::MessageEntity>
                DescriptionEntities{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_POLL_HPP