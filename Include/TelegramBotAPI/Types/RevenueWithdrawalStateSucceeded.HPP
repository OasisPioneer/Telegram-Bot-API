#ifndef TELEGRAMBOTAPI_REVENUEWITHDRAWALSTATESUCCEEDED_HPP
#define TELEGRAMBOTAPI_REVENUEWITHDRAWALSTATESUCCEEDED_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct RevenueWithdrawalStateSucceeded {
    std::string Type;
    long long Date;
    std::string URL;
};

}

#endif // TELEGRAMBOTAPI_REVENUEWITHDRAWALSTATESUCCEEDED_HPP
