#ifndef TELEGRAMBOTAPI_MESSAGEGENERATIONSTOPPED_HPP
#define TELEGRAMBOTAPI_MESSAGEGENERATIONSTOPPED_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include <optional>

namespace TelegramBotAPI::Type {

struct MessageGenerationStopped {
    ::TelegramBotAPI::Type::Chat Chat;
    std::optional<long long> MessageThreadID{};
    long long DraftID;
};

}

#endif // TELEGRAMBOTAPI_MESSAGEGENERATIONSTOPPED_HPP
