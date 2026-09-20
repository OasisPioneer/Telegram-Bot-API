#ifndef TELEGRAMBOTAPI_PAIDMEDIAPURCHASED_HPP
#define TELEGRAMBOTAPI_PAIDMEDIAPURCHASED_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct PaidMediaPurchased {
    ::TelegramBotAPI::Type::User From;
    std::string PaidMediaPayload;
};

}

#endif // TELEGRAMBOTAPI_PAIDMEDIAPURCHASED_HPP
