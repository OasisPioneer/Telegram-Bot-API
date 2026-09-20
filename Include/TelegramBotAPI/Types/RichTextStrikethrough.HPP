#ifndef TELEGRAMBOTAPI_RICHTEXTSTRIKETHROUGH_HPP
#define TELEGRAMBOTAPI_RICHTEXTSTRIKETHROUGH_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextStrikethrough {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTSTRIKETHROUGH_HPP
