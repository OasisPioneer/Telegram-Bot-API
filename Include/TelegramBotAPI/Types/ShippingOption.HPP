#ifndef TELEGRAMBOTAPI_SHIPPINGOPTION_HPP
#define TELEGRAMBOTAPI_SHIPPINGOPTION_HPP

#include "TelegramBotAPI/Types/LabeledPrice.HPP"
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct ShippingOption {
    std::string ID;
    std::string Title;
    std::vector<::TelegramBotAPI::Type::LabeledPrice> Prices;
};

}

#endif // TELEGRAMBOTAPI_SHIPPINGOPTION_HPP
