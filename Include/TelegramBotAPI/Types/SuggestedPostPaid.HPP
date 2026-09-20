#ifndef TELEGRAMBOTAPI_SUGGESTEDPOSTPAID_HPP
#define TELEGRAMBOTAPI_SUGGESTEDPOSTPAID_HPP

#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/StarAmount.HPP"
#include <memory>
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct Message;

}

namespace TelegramBotAPI::Type {

struct SuggestedPostPaid {
    std::shared_ptr<::TelegramBotAPI::Type::Message> SuggestedPostMessage{};
    std::string Currency;
    std::optional<long long> Amount{};
    std::optional<::TelegramBotAPI::Type::StarAmount> StarAmount{};
};

}

#endif // TELEGRAMBOTAPI_SUGGESTEDPOSTPAID_HPP
