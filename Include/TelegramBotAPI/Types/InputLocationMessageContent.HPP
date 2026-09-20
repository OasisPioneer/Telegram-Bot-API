#ifndef TELEGRAMBOTAPI_INPUTLOCATIONMESSAGECONTENT_HPP
#define TELEGRAMBOTAPI_INPUTLOCATIONMESSAGECONTENT_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct InputLocationMessageContent {
    double Latitude;
    double Longitude;
    std::optional<double> HorizontalAccuracy{};
    std::optional<long long> LivePeriod{};
    std::optional<long long> Heading{};
    std::optional<long long> ProximityAlertRadius{};
};

}

#endif // TELEGRAMBOTAPI_INPUTLOCATIONMESSAGECONTENT_HPP
