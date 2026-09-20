#ifndef TELEGRAMBOTAPI_INLINEKEYBOARDMARKUP_HPP
#define TELEGRAMBOTAPI_INLINEKEYBOARDMARKUP_HPP

#include "TelegramBotAPI/Types/InlineKeyboardButton.HPP"
#include <optional>
#include <vector>

namespace TelegramBotAPI::Type {

struct InlineKeyboardMarkup {
    std::vector<std::vector<::TelegramBotAPI::Type::InlineKeyboardButton>> InlineKeyboard;
    std::optional<bool> ForceReply{};
};

}

#endif // TELEGRAMBOTAPI_INLINEKEYBOARDMARKUP_HPP
