#ifndef TELEGRAMBOTAPI_STARAMOUNT_HPP
#define TELEGRAMBOTAPI_STARAMOUNT_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct StarAmount {
    long long Amount;
    std::optional<long long> NanostarAmount{};
};

}

#endif // TELEGRAMBOTAPI_STARAMOUNT_HPP
