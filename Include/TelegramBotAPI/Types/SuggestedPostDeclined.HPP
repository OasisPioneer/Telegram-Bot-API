#ifndef TELEGRAMBOTAPI_SUGGESTEDPOSTDECLINED_HPP
#define TELEGRAMBOTAPI_SUGGESTEDPOSTDECLINED_HPP

#include "TelegramBotAPI/Types/Message.HPP"
#include <memory>
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct Message;

}

namespace TelegramBotAPI::Type {

struct SuggestedPostDeclined {
    std::shared_ptr<::TelegramBotAPI::Type::Message> SuggestedPostMessage{};
    std::optional<std::string> Comment{};
};

}

#endif // TELEGRAMBOTAPI_SUGGESTEDPOSTDECLINED_HPP
