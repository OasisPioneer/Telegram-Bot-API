#ifndef TELEGRAMBOTAPI_INPUTMEDIASTICKER_HPP
#define TELEGRAMBOTAPI_INPUTMEDIASTICKER_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputMediaSticker {
    std::string Type;
    std::string Media;
    std::optional<std::string> Emoji{};
};

}

#endif // TELEGRAMBOTAPI_INPUTMEDIASTICKER_HPP
