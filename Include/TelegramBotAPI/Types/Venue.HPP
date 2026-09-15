#ifndef TELEGRAMBOTAPI_VENUE_HPP
#define TELEGRAMBOTAPI_VENUE_HPP

#include <string>

#include "Location.HPP"

namespace TelegramBotAPI::Type {
    struct Venue {
        Location Location{};
        std::string Title{};
        std::string Address{};
        std::string FoursquareID{};
    };
}

#endif // TELEGRAMBOTAPI_VENUE_HPP