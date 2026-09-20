#ifndef TELEGRAMBOTAPI_INPUTCHECKLIST_HPP
#define TELEGRAMBOTAPI_INPUTCHECKLIST_HPP

#include "TelegramBotAPI/Types/InputChecklistTask.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputChecklist {
    std::string Title;
    std::optional<std::string> ParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> TitleEntities{};
    std::vector<::TelegramBotAPI::Type::InputChecklistTask> Tasks;
    std::optional<bool> OthersCanAddTasks{};
    std::optional<bool> OthersCanMarkTasksAsDone{};
};

}

#endif // TELEGRAMBOTAPI_INPUTCHECKLIST_HPP
