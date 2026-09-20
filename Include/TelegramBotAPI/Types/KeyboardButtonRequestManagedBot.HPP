#ifndef TELEGRAMBOTAPI_KEYBOARDBUTTONREQUESTMANAGEDBOT_HPP
#define TELEGRAMBOTAPI_KEYBOARDBUTTONREQUESTMANAGEDBOT_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct KeyboardButtonRequestManagedBot {
    long long RequestID;
    std::optional<std::string> SuggestedName{};
    std::optional<std::string> SuggestedUserName{};
};

}

#endif // TELEGRAMBOTAPI_KEYBOARDBUTTONREQUESTMANAGEDBOT_HPP
