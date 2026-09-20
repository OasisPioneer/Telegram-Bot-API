#ifndef TELEGRAMBOTAPI_EPHEMERALMESSAGEPARAMETERS_HPP
#define TELEGRAMBOTAPI_EPHEMERALMESSAGEPARAMETERS_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct EphemeralMessageParameters {
    long long ReceiverUserID;
    std::optional<std::string> CallbackQueryID{};
    std::optional<bool> ReplaceCallbackQueryMessage{};
};

}

#endif // TELEGRAMBOTAPI_EPHEMERALMESSAGEPARAMETERS_HPP
