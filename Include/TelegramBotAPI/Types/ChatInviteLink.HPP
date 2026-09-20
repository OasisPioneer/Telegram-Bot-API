#ifndef TELEGRAMBOTAPI_CHATINVITELINK_HPP
#define TELEGRAMBOTAPI_CHATINVITELINK_HPP

#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct ChatInviteLink {
    std::string InviteLink;
    ::TelegramBotAPI::Type::User Creator;
    bool CreatesJoinRequest;
    bool IsPrimary;
    bool IsRevoked;
    std::optional<std::string> Name{};
    std::optional<long long> ExpireDate{};
    std::optional<long long> MemberLimit{};
    std::optional<long long> PendingJoinRequestCount{};
    std::optional<long long> SubscriptionPeriod{};
    std::optional<long long> SubscriptionPrice{};
};

}

#endif // TELEGRAMBOTAPI_CHATINVITELINK_HPP
