#ifndef TELEGRAMBOTAPI_INPUTMEDIAVOICENOTE_HPP
#define TELEGRAMBOTAPI_INPUTMEDIAVOICENOTE_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputMediaVoiceNote {
    std::string Type;
    std::string Media;
    std::optional<std::string> Caption{};
    std::optional<std::string> ParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};
    std::optional<long long> Duration{};
};

}

#endif // TELEGRAMBOTAPI_INPUTMEDIAVOICENOTE_HPP
