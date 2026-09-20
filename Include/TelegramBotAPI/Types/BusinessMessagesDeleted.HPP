#ifndef TELEGRAMBOTAPI_BUSINESSMESSAGESDELETED_HPP
#define TELEGRAMBOTAPI_BUSINESSMESSAGESDELETED_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct BusinessMessagesDeleted {
    std::string BusinessConnectionID;
    ::TelegramBotAPI::Type::Chat Chat;
    std::vector<long long> MessageIDs;
};

}

#endif // TELEGRAMBOTAPI_BUSINESSMESSAGESDELETED_HPP
