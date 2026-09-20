#ifndef TELEGRAMBOTAPI_DIRECTMESSAGESTOPIC_HPP
#define TELEGRAMBOTAPI_DIRECTMESSAGESTOPIC_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>

namespace TelegramBotAPI::Type {

struct DirectMessagesTopic {
    long long TopicID;
    std::optional<::TelegramBotAPI::Type::User> User{};
};

}

#endif // TELEGRAMBOTAPI_DIRECTMESSAGESTOPIC_HPP
