#ifndef TELEGRAMBOTAPI_VOICE_HPP
#define TELEGRAMBOTAPI_VOICE_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct Voice {
    std::string FileID;
    std::string FileUniqueID;
    long long Duration;
    std::optional<std::string> MimeType{};
    std::optional<long long> FileSize{};
};

}

#endif // TELEGRAMBOTAPI_VOICE_HPP
