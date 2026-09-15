#ifndef TELEGRAMBOTAPI_AUDIO_HPP
#define TELEGRAMBOTAPI_AUDIO_HPP

#include <string>

namespace TelegramBotAPI::Type {
    struct Audio {
        std::string FileID{};
        long long Duration{};
        std::string Performer{};
        std::string Title{};
        std::string MimeType{};
        long long FileSize{};
    };
}

#endif // TELEGRAMBOTAPI_AUDIO_HPP