#ifndef TELEGRAMBOTAPI_INACCESSIBLEMESSAGE_HPP
#define TELEGRAMBOTAPI_INACCESSIBLEMESSAGE_HPP

#include "TelegramBotAPI/Types/Chat.HPP"

namespace TelegramBotAPI::Type {

struct InaccessibleMessage {
    ::TelegramBotAPI::Type::Chat Chat;
    long long MessageID;
    long long Date;
};

}

#endif // TELEGRAMBOTAPI_INACCESSIBLEMESSAGE_HPP
