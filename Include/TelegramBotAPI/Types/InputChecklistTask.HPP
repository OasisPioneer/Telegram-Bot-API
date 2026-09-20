#ifndef TELEGRAMBOTAPI_INPUTCHECKLISTTASK_HPP
#define TELEGRAMBOTAPI_INPUTCHECKLISTTASK_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputChecklistTask {
    long long ID;
    std::string Text;
    std::optional<std::string> ParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> TextEntities{};
};

}

#endif // TELEGRAMBOTAPI_INPUTCHECKLISTTASK_HPP
