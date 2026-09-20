#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKVIDEO_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKVIDEO_HPP

#include "TelegramBotAPI/Types/InputMediaVideo.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockVideo {
    std::string Type;
    ::TelegramBotAPI::Type::InputMediaVideo Video;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKVIDEO_HPP
