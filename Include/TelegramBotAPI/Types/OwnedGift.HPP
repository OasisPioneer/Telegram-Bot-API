#ifndef TELEGRAMBOTAPI_OWNEDGIFT_HPP
#define TELEGRAMBOTAPI_OWNEDGIFT_HPP

#include "TelegramBotAPI/Types/OwnedGiftRegular.HPP"
#include "TelegramBotAPI/Types/OwnedGiftUnique.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using OwnedGift = std::variant<::TelegramBotAPI::Type::OwnedGiftRegular, ::TelegramBotAPI::Type::OwnedGiftUnique>;

}

#endif // TELEGRAMBOTAPI_OWNEDGIFT_HPP
