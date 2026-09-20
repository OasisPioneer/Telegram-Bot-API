#ifndef TELEGRAMBOTAPI_TRANSACTIONPARTNERCHAT_HPP
#define TELEGRAMBOTAPI_TRANSACTIONPARTNERCHAT_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/Gift.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct TransactionPartnerChat {
    std::string Type;
    ::TelegramBotAPI::Type::Chat Chat;
    std::optional<::TelegramBotAPI::Type::Gift> Gift{};
};

}

#endif // TELEGRAMBOTAPI_TRANSACTIONPARTNERCHAT_HPP
