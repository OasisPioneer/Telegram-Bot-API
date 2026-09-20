#ifndef TELEGRAMBOTAPI_SUGGESTEDPOSTPRICE_HPP
#define TELEGRAMBOTAPI_SUGGESTEDPOSTPRICE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct SuggestedPostPrice {
    std::string Currency;
    long long Amount;
};

}

#endif // TELEGRAMBOTAPI_SUGGESTEDPOSTPRICE_HPP
