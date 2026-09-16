#ifndef TELEGRAMBOTAPI_VIDEO_HPP
#define TELEGRAMBOTAPI_VIDEO_HPP

#include <string>
#include <optional>

#include "PhotoSize.HPP"

namespace TelegramBotAPI::Type {
    struct Video {
        std::string FileID{};
        long long Width{};
        long long Height{};
        long long Duration{};
        std::optional<TelegramBotAPI::Type::PhotoSize> Thumb{};
        std::optional<std::string> FileName{};
        std::optional<std::string> MimeType{};
        std::optional<long long> FileSize{};
    };
}

#endif // TELEGRAMBOTAPI_VIDEO_HPP