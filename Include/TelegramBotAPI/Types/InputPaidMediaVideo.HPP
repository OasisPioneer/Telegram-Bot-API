#ifndef TELEGRAMBOTAPI_INPUTPAIDMEDIAVIDEO_HPP
#define TELEGRAMBOTAPI_INPUTPAIDMEDIAVIDEO_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputPaidMediaVideo {
    std::string Type;
    std::string Media;
    std::optional<std::string> Thumbnail{};
    std::optional<std::string> Cover{};
    std::optional<long long> StartTimestamp{};
    std::optional<long long> Width{};
    std::optional<long long> Height{};
    std::optional<long long> Duration{};
    std::optional<bool> SupportsStreaming{};
};

}

#endif // TELEGRAMBOTAPI_INPUTPAIDMEDIAVIDEO_HPP
