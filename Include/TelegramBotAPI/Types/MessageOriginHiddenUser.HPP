#ifndef TELEGRAMBOTAPI_MESSAGEORIGINHIDDENUSER_HPP
#define TELEGRAMBOTAPI_MESSAGEORIGINHIDDENUSER_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct MessageOriginHiddenUser {
    std::string Type;
    long long Date;
    std::string SenderUserName;
};

}

#endif // TELEGRAMBOTAPI_MESSAGEORIGINHIDDENUSER_HPP
