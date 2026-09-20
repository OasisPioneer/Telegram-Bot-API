#ifndef TELEGRAMBOTAPI_VIDEO_HPP
#define TELEGRAMBOTAPI_VIDEO_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include "TelegramBotAPI/Types/VideoQuality.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct Video {
    std::string FileID;
    std::string FileUniqueID;
    long long Width;
    long long Height;
    long long Duration;
    std::optional<::TelegramBotAPI::Type::PhotoSize> Thumbnail{};
    std::optional<std::vector<::TelegramBotAPI::Type::PhotoSize>> Cover{};
    std::optional<long long> StartTimestamp{};
    std::optional<std::vector<::TelegramBotAPI::Type::VideoQuality>> Qualities{};
    std::optional<std::string> FileName{};
    std::optional<std::string> MimeType{};
    std::optional<long long> FileSize{};
};

}

#endif // TELEGRAMBOTAPI_VIDEO_HPP
