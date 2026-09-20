#ifndef TELEGRAMBOTAPI_USERPROFILEPHOTOS_HPP
#define TELEGRAMBOTAPI_USERPROFILEPHOTOS_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <vector>

namespace TelegramBotAPI::Type {

struct UserProfilePhotos {
    long long TotalCount;
    std::vector<std::vector<::TelegramBotAPI::Type::PhotoSize>> Photos;
};

}

#endif // TELEGRAMBOTAPI_USERPROFILEPHOTOS_HPP
