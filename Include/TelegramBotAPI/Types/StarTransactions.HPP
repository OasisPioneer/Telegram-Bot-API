#ifndef TELEGRAMBOTAPI_STARTRANSACTIONS_HPP
#define TELEGRAMBOTAPI_STARTRANSACTIONS_HPP

#include "TelegramBotAPI/Types/StarTransaction.HPP"
#include <vector>

namespace TelegramBotAPI::Type {

struct StarTransactions {
    std::vector<::TelegramBotAPI::Type::StarTransaction> Transactions;
};

}

#endif // TELEGRAMBOTAPI_STARTRANSACTIONS_HPP
