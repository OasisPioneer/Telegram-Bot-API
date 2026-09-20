#ifndef TELEGRAMBOTAPI_SWITCHINLINEQUERYCHOSENCHAT_HPP
#define TELEGRAMBOTAPI_SWITCHINLINEQUERYCHOSENCHAT_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct SwitchInlineQueryChosenChat {
    std::optional<std::string> Query{};
    std::optional<bool> AllowUserChats{};
    std::optional<bool> AllowBotChats{};
    std::optional<bool> AllowGroupChats{};
    std::optional<bool> AllowChannelChats{};
};

}

#endif // TELEGRAMBOTAPI_SWITCHINLINEQUERYCHOSENCHAT_HPP
