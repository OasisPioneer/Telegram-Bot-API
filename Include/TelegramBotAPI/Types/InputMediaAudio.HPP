#ifndef TELEGRAMBOTAPI_INPUTMEDIAAUDIO_HPP
#define TELEGRAMBOTAPI_INPUTMEDIAAUDIO_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputMediaAudio {
    std::string Type;
    std::string Media;
    std::optional<std::string> Thumbnail{};
    std::optional<std::string> Caption{};
    std::optional<std::string> ParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};
    std::optional<long long> Duration{};
    std::optional<std::string> Performer{};
    std::optional<std::string> Title{};
};

}

#endif // TELEGRAMBOTAPI_INPUTMEDIAAUDIO_HPP
