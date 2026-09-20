#ifndef TELEGRAMBOTAPI_VIDEOCHATPARTICIPANTSINVITED_HPP
#define TELEGRAMBOTAPI_VIDEOCHATPARTICIPANTSINVITED_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <vector>

namespace TelegramBotAPI::Type {

struct VideoChatParticipantsInvited {
    std::vector<::TelegramBotAPI::Type::User> Users;
};

}

#endif // TELEGRAMBOTAPI_VIDEOCHATPARTICIPANTSINVITED_HPP
