#ifndef TELEGRAMBOTAPI_AUDIO_HPP
#define TELEGRAMBOTAPI_AUDIO_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct Audio {
    std::string FileID;
    std::string FileUniqueID;
    long long Duration;
    std::optional<std::string> Performer{};
    std::optional<std::string> Title{};
    std::optional<std::string> FileName{};
    std::optional<std::string> MimeType{};
    std::optional<long long> FileSize{};
    std::optional<::TelegramBotAPI::Type::PhotoSize> Thumbnail{};
};

}

#endif // TELEGRAMBOTAPI_AUDIO_HPP
