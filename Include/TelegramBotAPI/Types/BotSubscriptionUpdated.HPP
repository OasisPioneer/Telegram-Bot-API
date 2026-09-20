#ifndef TELEGRAMBOTAPI_BOTSUBSCRIPTIONUPDATED_HPP
#define TELEGRAMBOTAPI_BOTSUBSCRIPTIONUPDATED_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct BotSubscriptionUpdated {
    ::TelegramBotAPI::Type::User User;
    std::string InvoicePayload;
    std::string State;
};

}

#endif // TELEGRAMBOTAPI_BOTSUBSCRIPTIONUPDATED_HPP
