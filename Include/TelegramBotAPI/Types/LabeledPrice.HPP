#ifndef TELEGRAMBOTAPI_LABELEDPRICE_HPP
#define TELEGRAMBOTAPI_LABELEDPRICE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct LabeledPrice {
    std::string Label;
    long long Amount;
};

}

#endif // TELEGRAMBOTAPI_LABELEDPRICE_HPP
