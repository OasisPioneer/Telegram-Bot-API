#ifndef TELEGRAMBOTAPI_CHATMEMBERRESTRICTED_HPP
#define TELEGRAMBOTAPI_CHATMEMBERRESTRICTED_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ChatMemberRestricted {
    std::string Status;
    std::optional<std::string> Tag{};
    ::TelegramBotAPI::Type::User User;
    bool IsMember;
    bool CanSendMessages;
    bool CanSendAudios;
    bool CanSendDocuments;
    bool CanSendPhotos;
    bool CanSendVideos;
    bool CanSendVideoNotes;
    bool CanSendVoiceNotes;
    bool CanSendPolls;
    bool CanSendOtherMessages;
    bool CanAddWebPagePreviews;
    bool CanReactToMessages;
    bool CanEditTag;
    bool CanChangeInfo;
    bool CanInviteUsers;
    bool CanPinMessages;
    bool CanManageTopics;
    long long UntilDate;
};

}

#endif // TELEGRAMBOTAPI_CHATMEMBERRESTRICTED_HPP
