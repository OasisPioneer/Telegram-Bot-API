#ifndef TELEGRAMBOTAPI_BACKGROUNDTYPE_HPP
#define TELEGRAMBOTAPI_BACKGROUNDTYPE_HPP

#include "TelegramBotAPI/Types/BackgroundTypeChatTheme.HPP"
#include "TelegramBotAPI/Types/BackgroundTypeFill.HPP"
#include "TelegramBotAPI/Types/BackgroundTypePattern.HPP"
#include "TelegramBotAPI/Types/BackgroundTypeWallpaper.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using BackgroundType = std::variant<::TelegramBotAPI::Type::BackgroundTypeFill, ::TelegramBotAPI::Type::BackgroundTypeWallpaper, ::TelegramBotAPI::Type::BackgroundTypePattern, ::TelegramBotAPI::Type::BackgroundTypeChatTheme>;

}

#endif // TELEGRAMBOTAPI_BACKGROUNDTYPE_HPP
