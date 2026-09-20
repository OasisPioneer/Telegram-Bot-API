#ifndef TELEGRAMBOTAPI_UNIQUEGIFTCOLORS_HPP
#define TELEGRAMBOTAPI_UNIQUEGIFTCOLORS_HPP

#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct UniqueGiftColors {
    std::string ModelCustomEmojiID;
    std::string SymbolCustomEmojiID;
    long long LightThemeMainColor;
    std::vector<long long> LightThemeOtherColors;
    long long DarkThemeMainColor;
    std::vector<long long> DarkThemeOtherColors;
};

}

#endif // TELEGRAMBOTAPI_UNIQUEGIFTCOLORS_HPP
