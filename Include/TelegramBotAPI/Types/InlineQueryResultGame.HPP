#ifndef TELEGRAMBOTAPI_INLINEQUERYRESULTGAME_HPP
#define TELEGRAMBOTAPI_INLINEQUERYRESULTGAME_HPP

#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InlineQueryResultGame {
    std::string Type;
    std::string ID;
    std::string GameShortName;
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};
};

}

#endif // TELEGRAMBOTAPI_INLINEQUERYRESULTGAME_HPP
