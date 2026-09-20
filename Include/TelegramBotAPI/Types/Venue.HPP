#ifndef TELEGRAMBOTAPI_VENUE_HPP
#define TELEGRAMBOTAPI_VENUE_HPP

#include "TelegramBotAPI/Types/Location.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct Venue {
    ::TelegramBotAPI::Type::Location Location;
    std::string Title;
    std::string Address;
    std::optional<std::string> FoursquareID{};
    std::optional<std::string> FoursquareType{};
    std::optional<std::string> GooglePlaceID{};
    std::optional<std::string> GooglePlaceType{};
};

}

#endif // TELEGRAMBOTAPI_VENUE_HPP
