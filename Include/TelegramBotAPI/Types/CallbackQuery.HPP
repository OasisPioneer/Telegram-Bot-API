#ifndef TELEGRAMBOTAPI_CALLBACKQUERY_HPP
#define TELEGRAMBOTAPI_CALLBACKQUERY_HPP

#include "TelegramBotAPI/Types/InaccessibleMessage.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <memory>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Type {

struct CallbackQuery {
    std::string ID;
    ::TelegramBotAPI::Type::User From;
    std::optional<std::variant<std::shared_ptr<::TelegramBotAPI::Type::Message>, ::TelegramBotAPI::Type::InaccessibleMessage>> Message{};
    std::optional<std::string> InlineMessageID{};
    std::string ChatInstance;
    std::optional<std::string> Data{};
    std::optional<std::string> GameShortName{};
};

}

#endif // TELEGRAMBOTAPI_CALLBACKQUERY_HPP
