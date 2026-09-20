#ifndef TELEGRAMBOTAPI_USERRATING_HPP
#define TELEGRAMBOTAPI_USERRATING_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct UserRating {
    long long Level;
    long long Rating;
    long long CurrentLevelRating;
    std::optional<long long> NextLevelRating{};
};

}

#endif // TELEGRAMBOTAPI_USERRATING_HPP
