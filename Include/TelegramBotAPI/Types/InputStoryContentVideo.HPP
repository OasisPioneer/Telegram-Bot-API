#ifndef TELEGRAMBOTAPI_INPUTSTORYCONTENTVIDEO_HPP
#define TELEGRAMBOTAPI_INPUTSTORYCONTENTVIDEO_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputStoryContentVideo {
    std::string Type;
    std::string Video;
    std::optional<double> Duration{};
    std::optional<double> CoverFrameTimestamp{};
    std::optional<bool> IsAnimation{};
};

}

#endif // TELEGRAMBOTAPI_INPUTSTORYCONTENTVIDEO_HPP
