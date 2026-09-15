#ifndef TELEGRAMBOTAPI_STICKER_HPP
#define TELEGRAMBOTAPI_STICKER_HPP

#include <string>

#include "PhotoSize.HPP"

namespace TelegramBotAPI::Type {
    struct Sticker {
        std::string FileID{};
        long long Width{};
        long long Height{};
        PhotoSize Thumb{};
        long long FileSize{};
    };
}

#endif // TELEGRAMBOTAPI_STICKER_HPP