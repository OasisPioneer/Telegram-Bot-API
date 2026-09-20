#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKANIMATION_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKANIMATION_HPP

#include "TelegramBotAPI/Types/InputMediaAnimation.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockAnimation {
    std::string Type;
    ::TelegramBotAPI::Type::InputMediaAnimation Animation;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKANIMATION_HPP
