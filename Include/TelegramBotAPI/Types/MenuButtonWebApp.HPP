#ifndef TELEGRAMBOTAPI_MENUBUTTONWEBAPP_HPP
#define TELEGRAMBOTAPI_MENUBUTTONWEBAPP_HPP

#include "TelegramBotAPI/Types/WebAppInfo.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct MenuButtonWebApp {
    std::string Type;
    std::string Text;
    ::TelegramBotAPI::Type::WebAppInfo WebApp;
};

}

#endif // TELEGRAMBOTAPI_MENUBUTTONWEBAPP_HPP
