#ifndef TELEGRAMBOTAPI_GAME_HPP
#define TELEGRAMBOTAPI_GAME_HPP

#include "TelegramBotAPI/Types/Animation.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct Game {
    std::string Title;
    std::string Description;
    std::vector<::TelegramBotAPI::Type::PhotoSize> Photo;
    std::optional<std::string> Text{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> TextEntities{};
    std::optional<::TelegramBotAPI::Type::Animation> Animation{};
};

}

#endif // TELEGRAMBOTAPI_GAME_HPP
