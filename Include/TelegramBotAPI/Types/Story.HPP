#ifndef TELEGRAMBOTAPI_STORY_HPP
#define TELEGRAMBOTAPI_STORY_HPP

#include "TelegramBotAPI/Types/Chat.HPP"

namespace TelegramBotAPI::Type {

struct Story {
    ::TelegramBotAPI::Type::Chat Chat;
    long long ID;
};

}

#endif // TELEGRAMBOTAPI_STORY_HPP
