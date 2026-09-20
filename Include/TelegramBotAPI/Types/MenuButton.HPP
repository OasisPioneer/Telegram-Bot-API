#ifndef TELEGRAMBOTAPI_MENUBUTTON_HPP
#define TELEGRAMBOTAPI_MENUBUTTON_HPP

#include "TelegramBotAPI/Types/MenuButtonCommands.HPP"
#include "TelegramBotAPI/Types/MenuButtonDefault.HPP"
#include "TelegramBotAPI/Types/MenuButtonWebApp.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using MenuButton = std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault>;

}

#endif // TELEGRAMBOTAPI_MENUBUTTON_HPP
