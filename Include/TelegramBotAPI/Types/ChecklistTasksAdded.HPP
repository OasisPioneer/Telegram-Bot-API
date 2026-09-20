#ifndef TELEGRAMBOTAPI_CHECKLISTTASKSADDED_HPP
#define TELEGRAMBOTAPI_CHECKLISTTASKSADDED_HPP

#include "TelegramBotAPI/Types/ChecklistTask.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include <memory>
#include <vector>

namespace TelegramBotAPI::Type {

struct Message;

}

namespace TelegramBotAPI::Type {

struct ChecklistTasksAdded {
    std::shared_ptr<::TelegramBotAPI::Type::Message> ChecklistMessage{};
    std::vector<::TelegramBotAPI::Type::ChecklistTask> Tasks;
};

}

#endif // TELEGRAMBOTAPI_CHECKLISTTASKSADDED_HPP
