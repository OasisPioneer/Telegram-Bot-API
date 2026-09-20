#ifndef TELEGRAMBOTAPI_USER_HPP
#define TELEGRAMBOTAPI_USER_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct User {
    long long ID;
    bool IsBot;
    std::string FirstName;
    std::optional<std::string> LastName{};
    std::optional<std::string> UserName{};
    std::optional<std::string> LanguageCode{};
    std::optional<bool> IsPremium{};
    std::optional<bool> AddedToAttachmentMenu{};
    std::optional<bool> CanJoinGroups{};
    std::optional<bool> CanReadAllGroupMessages{};
    std::optional<bool> SupportsGuestQueries{};
    std::optional<bool> SupportsInlineQueries{};
    std::optional<bool> CanConnectToBusiness{};
    std::optional<bool> HasMainWebApp{};
    std::optional<bool> HasTopicsEnabled{};
    std::optional<bool> AllowsUsersToCreateTopics{};
    std::optional<bool> CanManageBots{};
    std::optional<bool> SupportsJoinRequestQueries{};
};

}

#endif // TELEGRAMBOTAPI_USER_HPP
