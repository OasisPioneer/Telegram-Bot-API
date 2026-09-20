#ifndef TELEGRAMBOTAPI_INPUTMEDIALOCATION_HPP
#define TELEGRAMBOTAPI_INPUTMEDIALOCATION_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputMediaLocation {
    std::string Type;
    double Latitude;
    double Longitude;
    std::optional<double> HorizontalAccuracy{};
};

}

#endif // TELEGRAMBOTAPI_INPUTMEDIALOCATION_HPP
