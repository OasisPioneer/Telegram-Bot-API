#ifndef TELEGRAMBOTAPI_SHIPPINGADDRESS_HPP
#define TELEGRAMBOTAPI_SHIPPINGADDRESS_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct ShippingAddress {
    std::string CountryCode;
    std::string State;
    std::string City;
    std::string StreetLine1;
    std::string StreetLine2;
    std::string PostCode;
};

}

#endif // TELEGRAMBOTAPI_SHIPPINGADDRESS_HPP
