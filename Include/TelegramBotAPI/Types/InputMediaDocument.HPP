#ifndef TELEGRAMBOTAPI_INPUTMEDIADOCUMENT_HPP
#define TELEGRAMBOTAPI_INPUTMEDIADOCUMENT_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputMediaDocument {
    std::string Type;
    std::string Media;
    std::optional<std::string> Thumbnail{};
    std::optional<std::string> Caption{};
    std::optional<std::string> ParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};
    std::optional<bool> DisableContentTypeDetection{};
};

}

#endif // TELEGRAMBOTAPI_INPUTMEDIADOCUMENT_HPP
