#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKAUDIO_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKAUDIO_HPP

#include "TelegramBotAPI/Types/InputMediaAudio.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockAudio {
    std::string Type;
    ::TelegramBotAPI::Type::InputMediaAudio Audio;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKAUDIO_HPP
