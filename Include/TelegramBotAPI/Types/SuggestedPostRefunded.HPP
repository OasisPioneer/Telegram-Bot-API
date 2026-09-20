#ifndef TELEGRAMBOTAPI_SUGGESTEDPOSTREFUNDED_HPP
#define TELEGRAMBOTAPI_SUGGESTEDPOSTREFUNDED_HPP

#include "TelegramBotAPI/Types/Message.HPP"
#include <memory>
#include <string>

namespace TelegramBotAPI::Type {

struct Message;

}

namespace TelegramBotAPI::Type {

struct SuggestedPostRefunded {
    std::shared_ptr<::TelegramBotAPI::Type::Message> SuggestedPostMessage{};
    std::string Reason;
};

}

#endif // TELEGRAMBOTAPI_SUGGESTEDPOSTREFUNDED_HPP
