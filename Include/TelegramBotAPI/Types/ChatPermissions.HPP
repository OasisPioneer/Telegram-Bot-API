#ifndef TELEGRAMBOTAPI_CHATPERMISSIONS_HPP
#define TELEGRAMBOTAPI_CHATPERMISSIONS_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct ChatPermissions {
    std::optional<bool> CanSendMessages{};
    std::optional<bool> CanSendAudios{};
    std::optional<bool> CanSendDocuments{};
    std::optional<bool> CanSendPhotos{};
    std::optional<bool> CanSendVideos{};
    std::optional<bool> CanSendVideoNotes{};
    std::optional<bool> CanSendVoiceNotes{};
    std::optional<bool> CanSendPolls{};
    std::optional<bool> CanSendOtherMessages{};
    std::optional<bool> CanAddWebPagePreviews{};
    std::optional<bool> CanReactToMessages{};
    std::optional<bool> CanEditTag{};
    std::optional<bool> CanChangeInfo{};
    std::optional<bool> CanInviteUsers{};
    std::optional<bool> CanPinMessages{};
    std::optional<bool> CanManageTopics{};
};

}

#endif // TELEGRAMBOTAPI_CHATPERMISSIONS_HPP
