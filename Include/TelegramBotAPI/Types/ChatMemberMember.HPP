#ifndef TELEGRAMBOTAPI_CHATMEMBERMEMBER_HPP
#define TELEGRAMBOTAPI_CHATMEMBERMEMBER_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ChatMemberMember {
    std::string Status;
    std::optional<std::string> Tag{};
    ::TelegramBotAPI::Type::User User;
    std::optional<long long> UntilDate{};
};

}

#endif // TELEGRAMBOTAPI_CHATMEMBERMEMBER_HPP
