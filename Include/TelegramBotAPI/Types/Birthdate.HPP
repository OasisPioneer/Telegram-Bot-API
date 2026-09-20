#ifndef TELEGRAMBOTAPI_BIRTHDATE_HPP
#define TELEGRAMBOTAPI_BIRTHDATE_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct Birthdate {
    long long Day;
    long long Month;
    std::optional<long long> Year{};
};

}

#endif // TELEGRAMBOTAPI_BIRTHDATE_HPP
