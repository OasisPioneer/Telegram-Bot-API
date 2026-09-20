#ifndef TELEGRAMBOTAPI_LOCATION_HPP
#define TELEGRAMBOTAPI_LOCATION_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct Location {
    double Latitude;
    double Longitude;
    std::optional<double> HorizontalAccuracy{};
    std::optional<long long> LivePeriod{};
    std::optional<long long> Heading{};
    std::optional<long long> ProximityAlertRadius{};
};

}

#endif // TELEGRAMBOTAPI_LOCATION_HPP
