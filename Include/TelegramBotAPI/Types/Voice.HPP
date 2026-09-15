#ifndef TELEGRAMBOTAPI_VOICE_HPP
#define TELEGRAMBOTAPI_VOICE_HPP

#include <string>

namespace TelegramBotAPI::Type {
    struct Voice {
        std::string FileID{};
        long long Duration{};
        std::string MimeType{};
        long long FileSize{};
    };
}

#endif // TELEGRAMBOTAPI_VOICE_HPP