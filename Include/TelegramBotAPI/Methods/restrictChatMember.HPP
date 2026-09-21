#ifndef TELEGRAMBOTAPI_METHOD_RESTRICTCHATMEMBER_HPP
#define TELEGRAMBOTAPI_METHOD_RESTRICTCHATMEMBER_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatPermissions.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to restrict a user in a supergroup. The bot must be an administrator in the supergroup for this to work and must have the appropriate administrator rights. Pass True for all permissions to lift restrictions from a user. Returns True on success.

struct restrictChatMemberParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // A JSON-serialized object for new user permissions
    ::TelegramBotAPI::Type::ChatPermissions Permissions;

    // Date when restrictions will be lifted for the user; Unix time. If user is restricted for more than 366 days or less than 30 seconds from the current time, they are considered to be restricted forever.
    std::optional<long long> UntilDate{};

    // Pass True if chat permissions are set independently. Otherwise, the can_send_other_messages and can_add_web_page_previews permissions will imply the can_send_messages, can_send_audios, can_send_documents, can_send_photos, can_send_videos, can_send_video_notes, and can_send_voice_notes permissions; the can_send_polls permission will imply the can_send_messages permission.
    std::optional<bool> UseIndependentChatPermissions{};

    // Unique identifier of the target user
    long long UserID;

    restrictChatMemberParameters(const std::variant<long long, std::string> &ChatIDValue, const ::TelegramBotAPI::Type::ChatPermissions &PermissionsValue, const long long &UserIDValue)
        : ChatID(ChatIDValue), Permissions(PermissionsValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["permissions"] = JSON::ToJson(Permissions);

        if (UntilDate.has_value()) {
            Object["until_date"] = JSON::ToJson(UntilDate.value());
        }

        if (UseIndependentChatPermissions.has_value()) {
            Object["use_independent_chat_permissions"] = JSON::ToJson(UseIndependentChatPermissions.value());
        }

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(Permissions) || (UntilDate.has_value() && JSON::RequiresMultipart(UntilDate.value())) || (UseIndependentChatPermissions.has_value() && JSON::RequiresMultipart(UseIndependentChatPermissions.value())) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        JSON::AddMultipartField(
            Form, "permissions",
            Permissions);

        if (UntilDate.has_value()) {
            JSON::AddMultipartField(
                Form, "until_date",
                UntilDate.value());
        }

        if (UseIndependentChatPermissions.has_value()) {
            JSON::AddMultipartField(
                Form, "use_independent_chat_permissions",
                UseIndependentChatPermissions.value());
        }

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class restrictChatMember {
public:
    using Parameters = restrictChatMemberParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "restrictChatMember";
    }

    explicit restrictChatMember(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool RestrictChatMember(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "restrictChatMember",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "restrictChatMember",
            ParametersValue.ToJson()
        );
    }

    bool RestrictChatMember(std::variant<long long, std::string> ChatID, ::TelegramBotAPI::Type::ChatPermissions Permissions, long long UserID) {
        Parameters ParametersValue(
        ChatID,
        Permissions,
        UserID
        );

        return RestrictChatMember(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_RESTRICTCHATMEMBER_HPP
