#ifndef TELEGRAMBOTAPI_INLINEQUERY_HPP
#define TELEGRAMBOTAPI_INLINEQUERY_HPP

#include <string>

#include "User.HPP"
#include "Location.HPP"

namespace TelegramBotAPI::Type {
    struct InlineQuery {
        std::string ID{};
        User From{};
        Location Location{};
        std::string Query{};
        std::string Offset{};
    };
}

#endif // TELEGRAMBOTAPI_INLINEQUERY_HPP