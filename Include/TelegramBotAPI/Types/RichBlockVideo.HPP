#ifndef TELEGRAMBOTAPI_RICHBLOCKVIDEO_HPP
#define TELEGRAMBOTAPI_RICHBLOCKVIDEO_HPP

#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include "TelegramBotAPI/Types/Video.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockVideo {
    std::string Type;
    ::TelegramBotAPI::Type::Video Video;
    std::optional<bool> HasSpoiler{};
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKVIDEO_HPP
