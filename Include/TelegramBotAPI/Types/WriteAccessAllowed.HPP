#ifndef TELEGRAMBOTAPI_WRITEACCESSALLOWED_HPP
#define TELEGRAMBOTAPI_WRITEACCESSALLOWED_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct WriteAccessAllowed {
    std::optional<bool> FromRequest{};
    std::optional<std::string> WebAppName{};
    std::optional<bool> FromAttachmentMenu{};
};

}

#endif // TELEGRAMBOTAPI_WRITEACCESSALLOWED_HPP
