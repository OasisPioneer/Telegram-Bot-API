#ifndef TELEGRAMBOTAPI_CHATMEMBERADMINISTRATOR_HPP
#define TELEGRAMBOTAPI_CHATMEMBERADMINISTRATOR_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ChatMemberAdministrator {
    std::string Status;
    ::TelegramBotAPI::Type::User User;
    bool CanBeEdited;
    bool IsAnonymous;
    bool CanManageChat;
    bool CanDeleteMessages;
    bool CanManageVideoChats;
    bool CanRestrictMembers;
    bool CanPromoteMembers;
    bool CanChangeInfo;
    bool CanInviteUsers;
    bool CanPostStories;
    bool CanEditStories;
    bool CanDeleteStories;
    std::optional<bool> CanPostMessages{};
    std::optional<bool> CanEditMessages{};
    std::optional<bool> CanPinMessages{};
    std::optional<bool> CanManageTopics{};
    std::optional<bool> CanManageDirectMessages{};
    std::optional<bool> CanManageTags{};
    bool CanSendWelcomeMessages;
    std::optional<std::string> CustomTitle{};
};

}

#endif // TELEGRAMBOTAPI_CHATMEMBERADMINISTRATOR_HPP
