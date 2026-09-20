#ifndef TELEGRAMBOTAPI_CHATLOCATION_HPP
#define TELEGRAMBOTAPI_CHATLOCATION_HPP

#include "TelegramBotAPI/Types/Location.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct ChatLocation {
    ::TelegramBotAPI::Type::Location Location;
    std::string Address;
};

}

#endif // TELEGRAMBOTAPI_CHATLOCATION_HPP
