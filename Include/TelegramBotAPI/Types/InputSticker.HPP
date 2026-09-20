#ifndef TELEGRAMBOTAPI_INPUTSTICKER_HPP
#define TELEGRAMBOTAPI_INPUTSTICKER_HPP

#include "TelegramBotAPI/Types/MaskPosition.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputSticker {
    std::string Sticker;
    std::string Format;
    std::vector<std::string> EmojiList;
    std::optional<::TelegramBotAPI::Type::MaskPosition> MaskPosition{};
    std::optional<std::vector<std::string>> Keywords{};
};

}

#endif // TELEGRAMBOTAPI_INPUTSTICKER_HPP
