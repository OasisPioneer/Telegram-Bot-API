#ifndef TELEGRAMBOTAPI_PREPAREDINLINEMESSAGE_HPP
#define TELEGRAMBOTAPI_PREPAREDINLINEMESSAGE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct PreparedInlineMessage {
    std::string ID;
    long long ExpirationDate;
};

}

#endif // TELEGRAMBOTAPI_PREPAREDINLINEMESSAGE_HPP
