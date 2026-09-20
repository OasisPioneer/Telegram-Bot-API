#ifndef TELEGRAMBOTAPI_MESSAGEORIGINCHAT_HPP
#define TELEGRAMBOTAPI_MESSAGEORIGINCHAT_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct MessageOriginChat {
    std::string Type;
    long long Date;
    ::TelegramBotAPI::Type::Chat SenderChat;
    std::optional<std::string> AuthorSignature{};
};

}

#endif // TELEGRAMBOTAPI_MESSAGEORIGINCHAT_HPP
