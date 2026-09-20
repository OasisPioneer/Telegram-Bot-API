#ifndef TELEGRAMBOTAPI_KEYBOARDBUTTONREQUESTUSERS_HPP
#define TELEGRAMBOTAPI_KEYBOARDBUTTONREQUESTUSERS_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct KeyboardButtonRequestUsers {
    long long RequestID;
    std::optional<bool> UserIsBot{};
    std::optional<bool> UserIsPremium{};
    std::optional<long long> MaxQuantity{};
    std::optional<bool> RequestName{};
    std::optional<bool> RequestUserName{};
    std::optional<bool> RequestPhoto{};
};

}

#endif // TELEGRAMBOTAPI_KEYBOARDBUTTONREQUESTUSERS_HPP
