#ifndef TELEGRAMBOTAPI_LOCATIONADDRESS_HPP
#define TELEGRAMBOTAPI_LOCATIONADDRESS_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct LocationAddress {
    std::string CountryCode;
    std::optional<std::string> State{};
    std::optional<std::string> City{};
    std::optional<std::string> Street{};
};

}

#endif // TELEGRAMBOTAPI_LOCATIONADDRESS_HPP
