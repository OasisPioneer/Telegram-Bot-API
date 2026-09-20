#ifndef TELEGRAMBOTAPI_BACKGROUNDTYPEWALLPAPER_HPP
#define TELEGRAMBOTAPI_BACKGROUNDTYPEWALLPAPER_HPP

#include "TelegramBotAPI/Types/Document.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct BackgroundTypeWallpaper {
    std::string Type;
    ::TelegramBotAPI::Type::Document Document;
    long long DarkThemeDimming;
    std::optional<bool> IsBlurred{};
    std::optional<bool> IsMoving{};
};

}

#endif // TELEGRAMBOTAPI_BACKGROUNDTYPEWALLPAPER_HPP
