#ifndef TELEGRAMBOTAPI_PROXIMITYALERTTRIGGERED_HPP
#define TELEGRAMBOTAPI_PROXIMITYALERTTRIGGERED_HPP

#include "TelegramBotAPI/Types/User.HPP"

namespace TelegramBotAPI::Type {

struct ProximityAlertTriggered {
    ::TelegramBotAPI::Type::User Traveler;
    ::TelegramBotAPI::Type::User Watcher;
    long long Distance;
};

}

#endif // TELEGRAMBOTAPI_PROXIMITYALERTTRIGGERED_HPP
