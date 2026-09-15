#ifndef TELEGRAMBOTAPI_VIDEO_HPP
#define TELEGRAMBOTAPI_VIDEO_HPP

#include <string>

#include "PhotoSize.HPP"

namespace TelegramBotAPI::Type {
    struct Video {
        std::string FileID{};
        long long Width{};
        long long Height{};
        long long Duration{};
        PhotoSize Thumb{};
        std::string FileName{};
        std::string MimeType{};
        long long FileSize{};
    };
}

#endif // TELEGRAMBOTAPI_VIDEO_HPP