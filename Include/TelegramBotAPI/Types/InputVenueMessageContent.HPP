#ifndef TELEGRAMBOTAPI_INPUTVENUEMESSAGECONTENT_HPP
#define TELEGRAMBOTAPI_INPUTVENUEMESSAGECONTENT_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputVenueMessageContent {
    double Latitude;
    double Longitude;
    std::string Title;
    std::string Address;
    std::optional<std::string> FoursquareID{};
    std::optional<std::string> FoursquareType{};
    std::optional<std::string> GooglePlaceID{};
    std::optional<std::string> GooglePlaceType{};
};

}

#endif // TELEGRAMBOTAPI_INPUTVENUEMESSAGECONTENT_HPP
