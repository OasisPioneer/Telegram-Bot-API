#ifndef TELEGRAMBOTAPI_ORDERINFO_HPP
#define TELEGRAMBOTAPI_ORDERINFO_HPP

#include "TelegramBotAPI/Types/ShippingAddress.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct OrderInfo {
    std::optional<std::string> Name{};
    std::optional<std::string> PhoneNumber{};
    std::optional<std::string> Email{};
    std::optional<::TelegramBotAPI::Type::ShippingAddress> ShippingAddress{};
};

}

#endif // TELEGRAMBOTAPI_ORDERINFO_HPP
