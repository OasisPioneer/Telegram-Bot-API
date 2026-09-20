#ifndef TELEGRAMBOTAPI_TRANSACTIONPARTNERTELEGRAMAPI_HPP
#define TELEGRAMBOTAPI_TRANSACTIONPARTNERTELEGRAMAPI_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct TransactionPartnerTelegramApi {
    std::string Type;
    long long RequestCount;
};

}

#endif // TELEGRAMBOTAPI_TRANSACTIONPARTNERTELEGRAMAPI_HPP
