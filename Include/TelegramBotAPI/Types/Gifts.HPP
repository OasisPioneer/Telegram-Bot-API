#ifndef TELEGRAMBOTAPI_GIFTS_HPP
#define TELEGRAMBOTAPI_GIFTS_HPP

#include "TelegramBotAPI/Types/Gift.HPP"
#include <vector>

namespace TelegramBotAPI::Type {

struct Gifts {
    std::vector<::TelegramBotAPI::Type::Gift> Gifts;
};

}

#endif // TELEGRAMBOTAPI_GIFTS_HPP
