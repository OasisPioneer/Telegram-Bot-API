#ifndef TELEGRAMBOTAPI_MESSAGEORIGINCHANNEL_HPP
#define TELEGRAMBOTAPI_MESSAGEORIGINCHANNEL_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct MessageOriginChannel {
    std::string Type;
    long long Date;
    ::TelegramBotAPI::Type::Chat Chat;
    long long MessageID;
    std::optional<std::string> AuthorSignature{};
};

}

#endif // TELEGRAMBOTAPI_MESSAGEORIGINCHANNEL_HPP
