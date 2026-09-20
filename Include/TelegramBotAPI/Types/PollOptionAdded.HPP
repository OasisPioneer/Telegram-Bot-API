#ifndef TELEGRAMBOTAPI_POLLOPTIONADDED_HPP
#define TELEGRAMBOTAPI_POLLOPTIONADDED_HPP

#include "TelegramBotAPI/Types/InaccessibleMessage.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <memory>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Type {

struct Message;

}

namespace TelegramBotAPI::Type {

struct PollOptionAdded {
    std::optional<std::variant<std::shared_ptr<::TelegramBotAPI::Type::Message>, ::TelegramBotAPI::Type::InaccessibleMessage>> PollMessage{};
    std::string OptionPersistentID;
    std::string OptionText;
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> OptionTextEntities{};
};

}

#endif // TELEGRAMBOTAPI_POLLOPTIONADDED_HPP
