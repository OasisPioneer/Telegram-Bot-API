#ifndef TELEGRAMBOTAPI_INPUTMEDIAANIMATION_HPP
#define TELEGRAMBOTAPI_INPUTMEDIAANIMATION_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputMediaAnimation {
    std::string Type;
    std::string Media;
    std::optional<std::string> Thumbnail{};
    std::optional<std::string> Caption{};
    std::optional<std::string> ParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};
    std::optional<bool> ShowCaptionAboveMedia{};
    std::optional<long long> Width{};
    std::optional<long long> Height{};
    std::optional<long long> Duration{};
    std::optional<bool> HasSpoiler{};
};

}

#endif // TELEGRAMBOTAPI_INPUTMEDIAANIMATION_HPP
