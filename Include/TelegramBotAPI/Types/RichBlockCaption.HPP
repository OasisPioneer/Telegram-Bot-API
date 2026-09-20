#ifndef TELEGRAMBOTAPI_RICHBLOCKCAPTION_HPP
#define TELEGRAMBOTAPI_RICHBLOCKCAPTION_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>

namespace TelegramBotAPI::Type {

struct RichBlockCaption {
    ::TelegramBotAPI::Type::RichText Text;
    std::optional<::TelegramBotAPI::Type::RichText> Credit{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKCAPTION_HPP
