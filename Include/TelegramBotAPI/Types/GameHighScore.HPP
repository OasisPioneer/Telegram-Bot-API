#ifndef TELEGRAMBOTAPI_GAMEHIGHSCORE_HPP
#define TELEGRAMBOTAPI_GAMEHIGHSCORE_HPP

#include "TelegramBotAPI/Types/User.HPP"

namespace TelegramBotAPI::Type {

struct GameHighScore {
    long long Position;
    ::TelegramBotAPI::Type::User User;
    long long Score;
};

}

#endif // TELEGRAMBOTAPI_GAMEHIGHSCORE_HPP
