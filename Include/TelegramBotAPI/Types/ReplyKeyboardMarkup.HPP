#ifndef TELEGRAMBOTAPI_REPLYKEYBOARDMARKUP_HPP
#define TELEGRAMBOTAPI_REPLYKEYBOARDMARKUP_HPP

#include "TelegramBotAPI/Types/KeyboardButton.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct ReplyKeyboardMarkup {
    std::vector<std::vector<::TelegramBotAPI::Type::KeyboardButton>> Keyboard;
    std::optional<bool> IsPersistent{};
    std::optional<bool> ResizeKeyboard{};
    std::optional<bool> OneTimeKeyboard{};
    std::optional<std::string> InputFieldPlaceholder{};
    std::optional<bool> Selective{};
    std::optional<bool> ForceReply{};
};

}

#endif // TELEGRAMBOTAPI_REPLYKEYBOARDMARKUP_HPP
