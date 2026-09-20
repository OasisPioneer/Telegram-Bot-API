#ifndef TELEGRAMBOTAPI_INPUTMEDIAPHOTO_HPP
#define TELEGRAMBOTAPI_INPUTMEDIAPHOTO_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputMediaPhoto {
    std::string Type;
    std::string Media;
    std::optional<std::string> Caption{};
    std::optional<std::string> ParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};
    std::optional<bool> ShowCaptionAboveMedia{};
    std::optional<bool> HasSpoiler{};
};

}

#endif // TELEGRAMBOTAPI_INPUTMEDIAPHOTO_HPP
