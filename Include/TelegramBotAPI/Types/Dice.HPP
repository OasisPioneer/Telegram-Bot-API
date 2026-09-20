#ifndef TELEGRAMBOTAPI_DICE_HPP
#define TELEGRAMBOTAPI_DICE_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct Dice {
    std::string Emoji;
    long long Value;
};

}

#endif // TELEGRAMBOTAPI_DICE_HPP
