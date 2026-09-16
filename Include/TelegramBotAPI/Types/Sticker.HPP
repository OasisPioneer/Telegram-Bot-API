#ifndef TELEGRAMBOTAPI_STICKER_HPP
#define TELEGRAMBOTAPI_STICKER_HPP

#include <string>
#include <optional>

#include "PhotoSize.HPP"

namespace TelegramBotAPI::Type {
    struct Sticker {
        std::string FileID{};
        long long Width{};
        long long Height{};
        std::optional<TelegramBotAPI::Type::PhotoSize> Thumb{};
        long long FileSize{};
    };
}

#endif // TELEGRAMBOTAPI_STICKER_HPP