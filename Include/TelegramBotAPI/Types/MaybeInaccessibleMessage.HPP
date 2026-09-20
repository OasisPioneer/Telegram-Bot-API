#ifndef TELEGRAMBOTAPI_MAYBEINACCESSIBLEMESSAGE_HPP
#define TELEGRAMBOTAPI_MAYBEINACCESSIBLEMESSAGE_HPP

#include "TelegramBotAPI/Types/InaccessibleMessage.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include <memory>
#include <variant>

namespace TelegramBotAPI::Type {

struct Message;

}

namespace TelegramBotAPI::Type {

using MaybeInaccessibleMessage = std::variant<std::shared_ptr<::TelegramBotAPI::Type::Message>, ::TelegramBotAPI::Type::InaccessibleMessage>;

}

#endif // TELEGRAMBOTAPI_MAYBEINACCESSIBLEMESSAGE_HPP
