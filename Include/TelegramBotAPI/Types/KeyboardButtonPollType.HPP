#ifndef TELEGRAMBOTAPI_KEYBOARDBUTTONPOLLTYPE_HPP
#define TELEGRAMBOTAPI_KEYBOARDBUTTONPOLLTYPE_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct KeyboardButtonPollType {
    std::optional<std::string> Type{};
};

}

#endif // TELEGRAMBOTAPI_KEYBOARDBUTTONPOLLTYPE_HPP
