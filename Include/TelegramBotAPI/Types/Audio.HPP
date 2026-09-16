#ifndef TELEGRAMBOTAPI_AUDIO_HPP
#define TELEGRAMBOTAPI_AUDIO_HPP

#include <string>
#include <optional>

namespace TelegramBotAPI::Type {
    struct Audio {
        std::string FileID{};
        long long Duration{};
        std::optional<std::string> Performer{};
        std::optional<std::string> Title{};
        std::optional<std::string> MimeType{};
        std::optional<long long> FileSize{};
    };
}

#endif // TELEGRAMBOTAPI_AUDIO_HPP