#ifndef TELEGRAMBOTAPI_SUGGESTEDPOSTAPPROVED_HPP
#define TELEGRAMBOTAPI_SUGGESTEDPOSTAPPROVED_HPP

#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/SuggestedPostPrice.HPP"
#include <memory>
#include <optional>

namespace TelegramBotAPI::Type {

struct Message;

}

namespace TelegramBotAPI::Type {

struct SuggestedPostApproved {
    std::shared_ptr<::TelegramBotAPI::Type::Message> SuggestedPostMessage{};
    std::optional<::TelegramBotAPI::Type::SuggestedPostPrice> Price{};
    long long SendDate;
};

}

#endif // TELEGRAMBOTAPI_SUGGESTEDPOSTAPPROVED_HPP
