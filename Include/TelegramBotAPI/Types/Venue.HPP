#ifndef TELEGRAMBOTAPI_VENUE_HPP
#define TELEGRAMBOTAPI_VENUE_HPP

#include <optional>
#include <string>

#include "Location.HPP"

namespace TelegramBotAPI::Type {
    struct Venue {
            std::optional<TelegramBotAPI::Type::Location> Location{};
            std::string                                   Title{};
            std::string                                   Address{};
            std::optional<std::string>                    FoursquareID{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_VENUE_HPP