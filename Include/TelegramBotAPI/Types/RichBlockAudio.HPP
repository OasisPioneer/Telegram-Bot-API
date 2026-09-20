#ifndef TELEGRAMBOTAPI_RICHBLOCKAUDIO_HPP
#define TELEGRAMBOTAPI_RICHBLOCKAUDIO_HPP

#include "TelegramBotAPI/Types/Audio.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockAudio {
    std::string Type;
    ::TelegramBotAPI::Type::Audio Audio;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKAUDIO_HPP
