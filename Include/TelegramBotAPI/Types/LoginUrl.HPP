#ifndef TELEGRAMBOTAPI_LOGINURL_HPP
#define TELEGRAMBOTAPI_LOGINURL_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct LoginUrl {
    std::string URL;
    std::optional<std::string> ForwardText{};
    std::optional<std::string> BotUserName{};
    std::optional<bool> RequestWriteAccess{};
};

}

#endif // TELEGRAMBOTAPI_LOGINURL_HPP
