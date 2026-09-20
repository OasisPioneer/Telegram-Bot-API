#ifndef TELEGRAMBOTAPI_BACKGROUNDFILLGRADIENT_HPP
#define TELEGRAMBOTAPI_BACKGROUNDFILLGRADIENT_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct BackgroundFillGradient {
    std::string Type;
    long long TopColor;
    long long BottomColor;
    long long RotationAngle;
};

}

#endif // TELEGRAMBOTAPI_BACKGROUNDFILLGRADIENT_HPP
