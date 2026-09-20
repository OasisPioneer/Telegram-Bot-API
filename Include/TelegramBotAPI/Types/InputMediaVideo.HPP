#ifndef TELEGRAMBOTAPI_INPUTMEDIAVIDEO_HPP
#define TELEGRAMBOTAPI_INPUTMEDIAVIDEO_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputMediaVideo {
    std::string Type;
    std::string Media;
    std::optional<std::string> Thumbnail{};
    std::optional<std::string> Cover{};
    std::optional<long long> StartTimestamp{};
    std::optional<std::string> Caption{};
    std::optional<std::string> ParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};
    std::optional<bool> ShowCaptionAboveMedia{};
    std::optional<long long> Width{};
    std::optional<long long> Height{};
    std::optional<long long> Duration{};
    std::optional<bool> SupportsStreaming{};
    std::optional<bool> HasSpoiler{};
};

}

#endif // TELEGRAMBOTAPI_INPUTMEDIAVIDEO_HPP
