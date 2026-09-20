#ifndef TELEGRAMBOTAPI_CHATOWNERLEFT_HPP
#define TELEGRAMBOTAPI_CHATOWNERLEFT_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>

namespace TelegramBotAPI::Type {

struct ChatOwnerLeft {
    std::optional<::TelegramBotAPI::Type::User> NewOwner{};
};

}

#endif // TELEGRAMBOTAPI_CHATOWNERLEFT_HPP
