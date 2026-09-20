#ifndef TELEGRAMBOTAPI_UNIQUEGIFTSYMBOL_HPP
#define TELEGRAMBOTAPI_UNIQUEGIFTSYMBOL_HPP

#include "TelegramBotAPI/Types/Sticker.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct UniqueGiftSymbol {
    std::string Name;
    ::TelegramBotAPI::Type::Sticker Sticker;
    long long RarityPerMille;
};

}

#endif // TELEGRAMBOTAPI_UNIQUEGIFTSYMBOL_HPP
