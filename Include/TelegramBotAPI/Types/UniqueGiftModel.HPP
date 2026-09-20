#ifndef TELEGRAMBOTAPI_UNIQUEGIFTMODEL_HPP
#define TELEGRAMBOTAPI_UNIQUEGIFTMODEL_HPP

#include "TelegramBotAPI/Types/Sticker.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct UniqueGiftModel {
    std::string Name;
    ::TelegramBotAPI::Type::Sticker Sticker;
    long long RarityPerMille;
    std::optional<std::string> Rarity{};
};

}

#endif // TELEGRAMBOTAPI_UNIQUEGIFTMODEL_HPP
