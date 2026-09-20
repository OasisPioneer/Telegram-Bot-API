#ifndef TELEGRAMBOTAPI_STICKER_HPP
#define TELEGRAMBOTAPI_STICKER_HPP

#include "TelegramBotAPI/Types/File.HPP"
#include "TelegramBotAPI/Types/MaskPosition.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct Sticker {
    std::string FileID;
    std::string FileUniqueID;
    std::string Type;
    long long Width;
    long long Height;
    bool IsAnimated;
    bool IsVideo;
    std::optional<::TelegramBotAPI::Type::PhotoSize> Thumbnail{};
    std::optional<std::string> Emoji{};
    std::optional<std::string> SetName{};
    std::optional<::TelegramBotAPI::Type::File> PremiumAnimation{};
    std::optional<::TelegramBotAPI::Type::MaskPosition> MaskPosition{};
    std::optional<std::string> CustomEmojiID{};
    std::optional<bool> NeedsRepainting{};
    std::optional<long long> FileSize{};
};

}

#endif // TELEGRAMBOTAPI_STICKER_HPP
