#ifndef TELEGRAMBOTAPI_INLINEQUERYRESULTSBUTTON_HPP
#define TELEGRAMBOTAPI_INLINEQUERYRESULTSBUTTON_HPP

#include "TelegramBotAPI/Types/WebAppInfo.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InlineQueryResultsButton {
    std::string Text;
    std::optional<::TelegramBotAPI::Type::WebAppInfo> WebApp{};
    std::optional<std::string> StartParameter{};
};

}

#endif // TELEGRAMBOTAPI_INLINEQUERYRESULTSBUTTON_HPP
