#ifndef TELEGRAMBOTAPI_MESSAGEORIGIN_HPP
#define TELEGRAMBOTAPI_MESSAGEORIGIN_HPP

#include "TelegramBotAPI/Types/MessageOriginChannel.HPP"
#include "TelegramBotAPI/Types/MessageOriginChat.HPP"
#include "TelegramBotAPI/Types/MessageOriginHiddenUser.HPP"
#include "TelegramBotAPI/Types/MessageOriginUser.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using MessageOrigin = std::variant<::TelegramBotAPI::Type::MessageOriginUser, ::TelegramBotAPI::Type::MessageOriginHiddenUser, ::TelegramBotAPI::Type::MessageOriginChat, ::TelegramBotAPI::Type::MessageOriginChannel>;

}

#endif // TELEGRAMBOTAPI_MESSAGEORIGIN_HPP
