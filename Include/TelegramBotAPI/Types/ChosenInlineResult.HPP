#ifndef TELEGRAMBOTAPI_CHOSENINLINERESULT_HPP
#define TELEGRAMBOTAPI_CHOSENINLINERESULT_HPP

#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ChosenInlineResult {
    std::string ResultID;
    ::TelegramBotAPI::Type::User From;
    std::optional<::TelegramBotAPI::Type::Location> Location{};
    std::optional<std::string> InlineMessageID{};
    std::string Query;
};

}

#endif // TELEGRAMBOTAPI_CHOSENINLINERESULT_HPP
