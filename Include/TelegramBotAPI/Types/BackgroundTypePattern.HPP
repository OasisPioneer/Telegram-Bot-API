#ifndef TELEGRAMBOTAPI_BACKGROUNDTYPEPATTERN_HPP
#define TELEGRAMBOTAPI_BACKGROUNDTYPEPATTERN_HPP

#include "TelegramBotAPI/Types/BackgroundFillFreeformGradient.HPP"
#include "TelegramBotAPI/Types/BackgroundFillGradient.HPP"
#include "TelegramBotAPI/Types/BackgroundFillSolid.HPP"
#include "TelegramBotAPI/Types/Document.HPP"
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Type {

struct BackgroundTypePattern {
    std::string Type;
    ::TelegramBotAPI::Type::Document Document;
    std::variant<::TelegramBotAPI::Type::BackgroundFillSolid, ::TelegramBotAPI::Type::BackgroundFillGradient, ::TelegramBotAPI::Type::BackgroundFillFreeformGradient> Fill;
    long long Intensity;
    std::optional<bool> IsInverted{};
    std::optional<bool> IsMoving{};
};

}

#endif // TELEGRAMBOTAPI_BACKGROUNDTYPEPATTERN_HPP
