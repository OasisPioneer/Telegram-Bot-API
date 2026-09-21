#ifndef TELEGRAMBOTAPI_METHOD_EDITCHATINVITELINK_HPP
#define TELEGRAMBOTAPI_METHOD_EDITCHATINVITELINK_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatInviteLink.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to edit a non-primary invite link created by the bot. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns the edited invite link as a ChatInviteLink object.

struct editChatInviteLinkParameters {
    // Unique identifier for the target chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    // True, if users joining the chat via the link need to be approved by chat administrators. If True, member_limit can't be specified.
    std::optional<bool> CreatesJoinRequest{};

    // Point in time (Unix timestamp) when the link will expire
    std::optional<long long> ExpireDate{};

    // The invite link to edit
    std::string InviteLink;

    // The maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
    std::optional<long long> MemberLimit{};

    // Invite link name; 0-32 characters
    std::optional<std::string> Name{};

    editChatInviteLinkParameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &InviteLinkValue)
        : ChatID(ChatIDValue), InviteLink(InviteLinkValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (CreatesJoinRequest.has_value()) {
            Object["creates_join_request"] = JSON::ToJson(CreatesJoinRequest.value());
        }

        if (ExpireDate.has_value()) {
            Object["expire_date"] = JSON::ToJson(ExpireDate.value());
        }

        Object["invite_link"] = JSON::ToJson(InviteLink);

        if (MemberLimit.has_value()) {
            Object["member_limit"] = JSON::ToJson(MemberLimit.value());
        }

        if (Name.has_value()) {
            Object["name"] = JSON::ToJson(Name.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || (CreatesJoinRequest.has_value() && JSON::RequiresMultipart(CreatesJoinRequest.value())) || (ExpireDate.has_value() && JSON::RequiresMultipart(ExpireDate.value())) || JSON::RequiresMultipart(InviteLink) || (MemberLimit.has_value() && JSON::RequiresMultipart(MemberLimit.value())) || (Name.has_value() && JSON::RequiresMultipart(Name.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (CreatesJoinRequest.has_value()) {
            JSON::AddMultipartField(
                Form, "creates_join_request",
                CreatesJoinRequest.value());
        }

        if (ExpireDate.has_value()) {
            JSON::AddMultipartField(
                Form, "expire_date",
                ExpireDate.value());
        }

        JSON::AddMultipartField(
            Form, "invite_link",
            InviteLink);

        if (MemberLimit.has_value()) {
            JSON::AddMultipartField(
                Form, "member_limit",
                MemberLimit.value());
        }

        if (Name.has_value()) {
            JSON::AddMultipartField(
                Form, "name",
                Name.value());
        }

        return Form;
    }

};

class editChatInviteLink {
public:
    using Parameters = editChatInviteLinkParameters;
    using ReturnType = ::TelegramBotAPI::Type::ChatInviteLink;

    static constexpr const char *Name() noexcept {
        return "editChatInviteLink";
    }

    explicit editChatInviteLink(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::ChatInviteLink EditChatInviteLink(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::ChatInviteLink>(
                "editChatInviteLink",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::ChatInviteLink>(
            "editChatInviteLink",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::ChatInviteLink EditChatInviteLink(std::variant<long long, std::string> ChatID, std::string InviteLink) {
        Parameters ParametersValue(
        ChatID,
        InviteLink
        );

        return EditChatInviteLink(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITCHATINVITELINK_HPP
