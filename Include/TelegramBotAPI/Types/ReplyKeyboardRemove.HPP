#ifndef TELEGRAMBOTAPI_REPLYKEYBOARDREMOVE_HPP
#define TELEGRAMBOTAPI_REPLYKEYBOARDREMOVE_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct ReplyKeyboardRemove {
    bool RemoveKeyboard;
    std::optional<bool> Selective{};
};

}

#endif // TELEGRAMBOTAPI_REPLYKEYBOARDREMOVE_HPP
