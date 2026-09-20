#ifndef TELEGRAMBOTAPI_BACKGROUNDFILLFREEFORMGRADIENT_HPP
#define TELEGRAMBOTAPI_BACKGROUNDFILLFREEFORMGRADIENT_HPP

#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct BackgroundFillFreeformGradient {
    std::string Type;
    std::vector<long long> Colors;
};

}

#endif // TELEGRAMBOTAPI_BACKGROUNDFILLFREEFORMGRADIENT_HPP
