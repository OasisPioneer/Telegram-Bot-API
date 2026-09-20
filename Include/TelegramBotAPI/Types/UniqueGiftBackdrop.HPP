#ifndef TELEGRAMBOTAPI_UNIQUEGIFTBACKDROP_HPP
#define TELEGRAMBOTAPI_UNIQUEGIFTBACKDROP_HPP

#include "TelegramBotAPI/Types/UniqueGiftBackdropColors.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct UniqueGiftBackdrop {
    std::string Name;
    ::TelegramBotAPI::Type::UniqueGiftBackdropColors Colors;
    long long RarityPerMille;
};

}

#endif // TELEGRAMBOTAPI_UNIQUEGIFTBACKDROP_HPP
