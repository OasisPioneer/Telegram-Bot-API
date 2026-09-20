#ifndef TELEGRAMBOTAPI_MESSAGEENTITY_HPP
#define TELEGRAMBOTAPI_MESSAGEENTITY_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct MessageEntity {
    std::string Type;
    long long Offset;
    long long Length;
    std::optional<std::string> URL{};
    std::optional<::TelegramBotAPI::Type::User> User{};
    std::optional<std::string> Language{};
    std::optional<std::string> CustomEmojiID{};
    std::optional<long long> UnixTime{};
    std::optional<std::string> DateTimeFormat{};
};

}

#endif // TELEGRAMBOTAPI_MESSAGEENTITY_HPP
