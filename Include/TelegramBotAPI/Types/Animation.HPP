#ifndef TELEGRAMBOTAPI_ANIMATION_HPP
#define TELEGRAMBOTAPI_ANIMATION_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct Animation {
    std::string FileID;
    std::string FileUniqueID;
    long long Width;
    long long Height;
    long long Duration;
    std::optional<::TelegramBotAPI::Type::PhotoSize> Thumbnail{};
    std::optional<std::string> FileName{};
    std::optional<std::string> MimeType{};
    std::optional<long long> FileSize{};
};

}

#endif // TELEGRAMBOTAPI_ANIMATION_HPP
