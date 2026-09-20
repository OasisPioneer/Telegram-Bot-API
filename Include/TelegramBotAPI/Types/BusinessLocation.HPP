#ifndef TELEGRAMBOTAPI_BUSINESSLOCATION_HPP
#define TELEGRAMBOTAPI_BUSINESSLOCATION_HPP

#include "TelegramBotAPI/Types/Location.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct BusinessLocation {
    std::string Address;
    std::optional<::TelegramBotAPI::Type::Location> Location{};
};

}

#endif // TELEGRAMBOTAPI_BUSINESSLOCATION_HPP
