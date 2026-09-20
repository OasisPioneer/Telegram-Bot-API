#ifndef TELEGRAMBOTAPI_INLINEQUERY_HPP
#define TELEGRAMBOTAPI_INLINEQUERY_HPP

#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InlineQuery {
    std::string ID;
    ::TelegramBotAPI::Type::User From;
    std::string Query;
    std::string Offset;
    std::optional<std::string> ChatType{};
    std::optional<::TelegramBotAPI::Type::Location> Location{};
};

}

#endif // TELEGRAMBOTAPI_INLINEQUERY_HPP
