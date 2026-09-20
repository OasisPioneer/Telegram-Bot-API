#ifndef TELEGRAMBOTAPI_SENTWEBAPPMESSAGE_HPP
#define TELEGRAMBOTAPI_SENTWEBAPPMESSAGE_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct SentWebAppMessage {
    std::optional<std::string> InlineMessageID{};
};

}

#endif // TELEGRAMBOTAPI_SENTWEBAPPMESSAGE_HPP
