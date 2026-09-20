#ifndef TELEGRAMBOTAPI_CHATMEMBERUPDATED_HPP
#define TELEGRAMBOTAPI_CHATMEMBERUPDATED_HPP

#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ChatInviteLink.HPP"
#include "TelegramBotAPI/Types/ChatMemberAdministrator.HPP"
#include "TelegramBotAPI/Types/ChatMemberBanned.HPP"
#include "TelegramBotAPI/Types/ChatMemberLeft.HPP"
#include "TelegramBotAPI/Types/ChatMemberMember.HPP"
#include "TelegramBotAPI/Types/ChatMemberOwner.HPP"
#include "TelegramBotAPI/Types/ChatMemberRestricted.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <optional>
#include <variant>

namespace TelegramBotAPI::Type {

struct ChatMemberUpdated {
    ::TelegramBotAPI::Type::Chat Chat;
    ::TelegramBotAPI::Type::User From;
    long long Date;
    std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned> OldChatMember;
    std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned> NewChatMember;
    std::optional<::TelegramBotAPI::Type::ChatInviteLink> InviteLink{};
    std::optional<bool> ViaJoinRequest{};
    std::optional<bool> ViaChatFolderInviteLink{};
};

}

#endif // TELEGRAMBOTAPI_CHATMEMBERUPDATED_HPP
