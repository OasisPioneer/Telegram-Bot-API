#ifndef TELEGRAMBOTAPI_SUGGESTEDPOSTAPPROVALFAILED_HPP
#define TELEGRAMBOTAPI_SUGGESTEDPOSTAPPROVALFAILED_HPP

#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/SuggestedPostPrice.HPP"
#include <memory>

namespace TelegramBotAPI::Type {

struct Message;

}

namespace TelegramBotAPI::Type {

struct SuggestedPostApprovalFailed {
    std::shared_ptr<::TelegramBotAPI::Type::Message> SuggestedPostMessage{};
    ::TelegramBotAPI::Type::SuggestedPostPrice Price;
};

}

#endif // TELEGRAMBOTAPI_SUGGESTEDPOSTAPPROVALFAILED_HPP
