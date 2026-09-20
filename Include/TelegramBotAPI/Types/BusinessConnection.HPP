#ifndef TELEGRAMBOTAPI_BUSINESSCONNECTION_HPP
#define TELEGRAMBOTAPI_BUSINESSCONNECTION_HPP

#include "TelegramBotAPI/Types/BusinessBotRights.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct BusinessConnection {
    std::string ID;
    ::TelegramBotAPI::Type::User User;
    long long UserChatID;
    long long Date;
    std::optional<::TelegramBotAPI::Type::BusinessBotRights> Rights{};
    bool IsEnabled;
};

}

#endif // TELEGRAMBOTAPI_BUSINESSCONNECTION_HPP
