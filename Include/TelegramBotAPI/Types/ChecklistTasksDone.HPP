#ifndef TELEGRAMBOTAPI_CHECKLISTTASKSDONE_HPP
#define TELEGRAMBOTAPI_CHECKLISTTASKSDONE_HPP

#include "TelegramBotAPI/Types/Message.HPP"
#include <memory>
#include <optional>
#include <vector>

namespace TelegramBotAPI::Type {

struct Message;

}

namespace TelegramBotAPI::Type {

struct ChecklistTasksDone {
    std::shared_ptr<::TelegramBotAPI::Type::Message> ChecklistMessage{};
    std::optional<std::vector<long long>> MarkedAsDoneTaskIDs{};
    std::optional<std::vector<long long>> MarkedAsNotDoneTaskIDs{};
};

}

#endif // TELEGRAMBOTAPI_CHECKLISTTASKSDONE_HPP
