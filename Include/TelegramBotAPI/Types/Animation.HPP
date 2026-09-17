#ifndef TELEGRAMBOTAPI_ANIMATION_HPP
#define TELEGRAMBOTAPI_ANIMATION_HPP

#include <optional>
#include <string>

#include "PhotoSize.HPP"

namespace TelegramBotAPI::Type {
    struct Animation {
            std::string                FileID{};
            std::string                FileUniqueID{};
            int                        Width{};
            int                        Height{};
            int                        Duration{};
            std::optional<PhotoSize>   Thumbnail{};
            std::optional<std::string> FileName{};
            std::optional<std::string> MimeType{};
            std::optional<long long>   FileSize{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_ANIMATION_HPP