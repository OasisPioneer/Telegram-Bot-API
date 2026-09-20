#ifndef TELEGRAMBOTAPI_CHECKLISTTASK_HPP
#define TELEGRAMBOTAPI_CHECKLISTTASK_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct ChecklistTask {
    long long ID;
    std::string Text;
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> TextEntities{};
    std::optional<::TelegramBotAPI::Type::User> CompletedByUser{};
    std::optional<::TelegramBotAPI::Type::Chat> CompletedByChat{};
    std::optional<long long> CompletionDate{};
};

}

#endif // TELEGRAMBOTAPI_CHECKLISTTASK_HPP
