#ifndef TELEGRAMBOTAPI_CHATADMINISTRATORRIGHTS_HPP
#define TELEGRAMBOTAPI_CHATADMINISTRATORRIGHTS_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct ChatAdministratorRights {
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
};

}

#endif // TELEGRAMBOTAPI_CHATADMINISTRATORRIGHTS_HPP
