#ifndef TELEGRAMBOTAPI_CHECKLIST_HPP
#define TELEGRAMBOTAPI_CHECKLIST_HPP

#include "TelegramBotAPI/Types/ChecklistTask.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct Checklist {
    std::string Title;
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> TitleEntities{};
    std::vector<::TelegramBotAPI::Type::ChecklistTask> Tasks;
    std::optional<bool> OthersCanAddTasks{};
    std::optional<bool> OthersCanMarkTasksAsDone{};
};

}

#endif // TELEGRAMBOTAPI_CHECKLIST_HPP
