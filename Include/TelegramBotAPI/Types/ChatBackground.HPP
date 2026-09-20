#ifndef TELEGRAMBOTAPI_CHATBACKGROUND_HPP
#define TELEGRAMBOTAPI_CHATBACKGROUND_HPP

#include "TelegramBotAPI/Types/BackgroundTypeChatTheme.HPP"
#include "TelegramBotAPI/Types/BackgroundTypeFill.HPP"
#include "TelegramBotAPI/Types/BackgroundTypePattern.HPP"
#include "TelegramBotAPI/Types/BackgroundTypeWallpaper.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

struct ChatBackground {
    std::variant<::TelegramBotAPI::Type::BackgroundTypeFill, ::TelegramBotAPI::Type::BackgroundTypeWallpaper, ::TelegramBotAPI::Type::BackgroundTypePattern, ::TelegramBotAPI::Type::BackgroundTypeChatTheme> Type;
};

}

#endif // TELEGRAMBOTAPI_CHATBACKGROUND_HPP
