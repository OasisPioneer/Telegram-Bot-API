#ifndef TELEGRAMBOTAPI_BACKGROUNDTYPEFILL_HPP
#define TELEGRAMBOTAPI_BACKGROUNDTYPEFILL_HPP

#include "TelegramBotAPI/Types/BackgroundFillFreeformGradient.HPP"
#include "TelegramBotAPI/Types/BackgroundFillGradient.HPP"
#include "TelegramBotAPI/Types/BackgroundFillSolid.HPP"
#include <string>
#include <variant>

namespace TelegramBotAPI::Type {

struct BackgroundTypeFill {
    std::string Type;
    std::variant<::TelegramBotAPI::Type::BackgroundFillSolid, ::TelegramBotAPI::Type::BackgroundFillGradient, ::TelegramBotAPI::Type::BackgroundFillFreeformGradient> Fill;
    long long DarkThemeDimming;
};

}

#endif // TELEGRAMBOTAPI_BACKGROUNDTYPEFILL_HPP
