#ifndef TELEGRAMBOTAPI_USERPROFILEAUDIOS_HPP
#define TELEGRAMBOTAPI_USERPROFILEAUDIOS_HPP

#include "TelegramBotAPI/Types/Audio.HPP"
#include <vector>

namespace TelegramBotAPI::Type {

struct UserProfileAudios {
    long long TotalCount;
    std::vector<::TelegramBotAPI::Type::Audio> Audios;
};

}

#endif // TELEGRAMBOTAPI_USERPROFILEAUDIOS_HPP
