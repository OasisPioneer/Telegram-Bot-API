#ifndef TELEGRAMBOTAPI_MASKPOSITION_HPP
#define TELEGRAMBOTAPI_MASKPOSITION_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct MaskPosition {
    std::string Point;
    double XShift;
    double YShift;
    double Scale;
};

}

#endif // TELEGRAMBOTAPI_MASKPOSITION_HPP
