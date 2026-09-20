#ifndef TELEGRAMBOTAPI_FORCEREPLY_HPP
#define TELEGRAMBOTAPI_FORCEREPLY_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ForceReply {
    bool ForceReply;
    std::optional<std::string> InputFieldPlaceholder{};
    std::optional<bool> Selective{};
};

}

#endif // TELEGRAMBOTAPI_FORCEREPLY_HPP
