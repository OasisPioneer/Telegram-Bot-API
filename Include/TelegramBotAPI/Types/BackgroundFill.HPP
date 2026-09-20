#ifndef TELEGRAMBOTAPI_BACKGROUNDFILL_HPP
#define TELEGRAMBOTAPI_BACKGROUNDFILL_HPP

#include "TelegramBotAPI/Types/BackgroundFillFreeformGradient.HPP"
#include "TelegramBotAPI/Types/BackgroundFillGradient.HPP"
#include "TelegramBotAPI/Types/BackgroundFillSolid.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using BackgroundFill = std::variant<::TelegramBotAPI::Type::BackgroundFillSolid, ::TelegramBotAPI::Type::BackgroundFillGradient, ::TelegramBotAPI::Type::BackgroundFillFreeformGradient>;

}

#endif // TELEGRAMBOTAPI_BACKGROUNDFILL_HPP
