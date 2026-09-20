#ifndef TELEGRAMBOTAPI_DIRECTMESSAGEPRICECHANGED_HPP
#define TELEGRAMBOTAPI_DIRECTMESSAGEPRICECHANGED_HPP

#include <optional>

namespace TelegramBotAPI::Type {

struct DirectMessagePriceChanged {
    bool AreDirectMessagesEnabled;
    std::optional<long long> DirectMessageStarCount{};
};

}

#endif // TELEGRAMBOTAPI_DIRECTMESSAGEPRICECHANGED_HPP
