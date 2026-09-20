#ifndef TELEGRAMBOTAPI_KEYBOARDBUTTONREQUESTCHAT_HPP
#define TELEGRAMBOTAPI_KEYBOARDBUTTONREQUESTCHAT_HPP

#include "TelegramBotAPI/Types/ChatAdministratorRights.HPP"
#include <optional>

namespace TelegramBotAPI::Type {

struct KeyboardButtonRequestChat {
    long long RequestID;
    bool ChatIsChannel;
    std::optional<bool> ChatIsForum{};
    std::optional<bool> ChatHasUserName{};
    std::optional<bool> ChatIsCreated{};
    std::optional<::TelegramBotAPI::Type::ChatAdministratorRights> UserAdministratorRights{};
    std::optional<::TelegramBotAPI::Type::ChatAdministratorRights> BotAdministratorRights{};
    std::optional<bool> BotIsMember{};
    std::optional<bool> RequestTitle{};
    std::optional<bool> RequestUserName{};
    std::optional<bool> RequestPhoto{};
};

}

#endif // TELEGRAMBOTAPI_KEYBOARDBUTTONREQUESTCHAT_HPP
