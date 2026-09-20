#ifndef TELEGRAMBOTAPI_CHATJOINREQUEST_HPP
#define TELEGRAMBOTAPI_CHATJOINREQUEST_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ChatInviteLink.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ChatJoinRequest {
    ::TelegramBotAPI::Type::Chat Chat;
    ::TelegramBotAPI::Type::User From;
    long long UserChatID;
    long long Date;
    std::optional<std::string> Bio{};
    std::optional<::TelegramBotAPI::Type::ChatInviteLink> InviteLink{};
    std::optional<std::string> QueryID{};
};

}

#endif // TELEGRAMBOTAPI_CHATJOINREQUEST_HPP
