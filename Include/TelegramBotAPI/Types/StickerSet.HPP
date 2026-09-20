#ifndef TELEGRAMBOTAPI_STICKERSET_HPP
#define TELEGRAMBOTAPI_STICKERSET_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct StickerSet {
    std::string Name;
    std::string Title;
    std::string StickerType;
    std::vector<::TelegramBotAPI::Type::Sticker> Stickers;
    std::optional<::TelegramBotAPI::Type::PhotoSize> Thumbnail{};
};

}

#endif // TELEGRAMBOTAPI_STICKERSET_HPP
