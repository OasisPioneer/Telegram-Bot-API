#ifndef TELEGRAMBOTAPI_PAIDMEDIAVIDEO_HPP
#define TELEGRAMBOTAPI_PAIDMEDIAVIDEO_HPP

#include "TelegramBotAPI/Types/Video.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct PaidMediaVideo {
    std::string Type;
    ::TelegramBotAPI::Type::Video Video;
};

}

#endif // TELEGRAMBOTAPI_PAIDMEDIAVIDEO_HPP
