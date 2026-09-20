#ifndef TELEGRAMBOTAPI_TEXTQUOTE_HPP
#define TELEGRAMBOTAPI_TEXTQUOTE_HPP

#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct TextQuote {
    std::string Text;
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> Entities{};
    long long Position;
    std::optional<bool> IsManual{};
};

}

#endif // TELEGRAMBOTAPI_TEXTQUOTE_HPP
