#ifndef TELEGRAMBOTAPI_UNIQUEGIFT_HPP
#define TELEGRAMBOTAPI_UNIQUEGIFT_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/UniqueGiftBackdrop.HPP"
#include "TelegramBotAPI/Types/UniqueGiftColors.HPP"
#include "TelegramBotAPI/Types/UniqueGiftModel.HPP"
#include "TelegramBotAPI/Types/UniqueGiftSymbol.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct UniqueGift {
    std::string GiftID;
    std::string BaseName;
    std::string Name;
    long long Number;
    ::TelegramBotAPI::Type::UniqueGiftModel Model;
    ::TelegramBotAPI::Type::UniqueGiftSymbol Symbol;
    ::TelegramBotAPI::Type::UniqueGiftBackdrop Backdrop;
    std::optional<bool> IsPremium{};
    std::optional<bool> IsBurned{};
    std::optional<bool> IsFromBlockchain{};
    std::optional<::TelegramBotAPI::Type::UniqueGiftColors> Colors{};
    std::optional<::TelegramBotAPI::Type::Chat> PublisherChat{};
};

}

#endif // TELEGRAMBOTAPI_UNIQUEGIFT_HPP
