#ifndef TELEGRAMBOTAPI_RICHBLOCKANIMATION_HPP
#define TELEGRAMBOTAPI_RICHBLOCKANIMATION_HPP

#include "TelegramBotAPI/Types/Animation.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockAnimation {
    std::string Type;
    ::TelegramBotAPI::Type::Animation Animation;
    std::optional<bool> HasSpoiler{};
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKANIMATION_HPP
