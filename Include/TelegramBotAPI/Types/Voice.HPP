#ifndef TELEGRAMBOTAPI_VOICE_HPP
#define TELEGRAMBOTAPI_VOICE_HPP

#include <string>
#include <optional>

namespace TelegramBotAPI::Type {
    struct Voice {
        std::string FileID{};
        long long Duration{};
        std::optional<std::string> MimeType{};
        std::optional<long long> FileSize{};
    };
}

#endif // TELEGRAMBOTAPI_VOICE_HPP