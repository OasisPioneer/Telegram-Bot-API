#ifndef TELEGRAMBOTAPI_METHOD_SETCHATPERMISSIONS_HPP
#define TELEGRAMBOTAPI_METHOD_SETCHATPERMISSIONS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatPermissions.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to set default chat permissions for all members. The bot must be an administrator in the group or a supergroup for this to work and must have the can_restrict_members administrator rights. Returns True on success.

struct setChatPermissionsParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // A JSON-serialized object for new default chat permissions
    ::TelegramBotAPI::Type::ChatPermissions Permissions;

    // Pass True if chat permissions are set independently. Otherwise, the can_send_other_messages and can_add_web_page_previews permissions will imply the can_send_messages, can_send_audios, can_send_documents, can_send_photos, can_send_videos, can_send_video_notes, and can_send_voice_notes permissions; the can_send_polls permission will imply the can_send_messages permission.
    std::optional<bool> UseIndependentChatPermissions{};

    setChatPermissionsParameters(const std::variant<long long, std::string> &ChatIDValue, const ::TelegramBotAPI::Type::ChatPermissions &PermissionsValue)
        : ChatID(ChatIDValue), Permissions(PermissionsValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["permissions"] = JSON::ToJson(Permissions);

        if (UseIndependentChatPermissions.has_value()) {
            Object["use_independent_chat_permissions"] = JSON::ToJson(UseIndependentChatPermissions.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(Permissions) || (UseIndependentChatPermissions.has_value() && JSON::RequiresMultipart(UseIndependentChatPermissions.value()));
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

        if (UseIndependentChatPermissions.has_value()) {
            JSON::AddMultipartField(
                Form, "use_independent_chat_permissions",
                UseIndependentChatPermissions.value());
        }

        return Form;
    }

};

class setChatPermissions {
public:
    using Parameters = setChatPermissionsParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setChatPermissions";
    }

    explicit setChatPermissions(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetChatPermissions(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setChatPermissions",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setChatPermissions",
            ParametersValue.ToJson()
        );
    }

    bool SetChatPermissions(std::variant<long long, std::string> ChatID, ::TelegramBotAPI::Type::ChatPermissions Permissions) {
        Parameters ParametersValue(
        ChatID,
        Permissions
        );

        return SetChatPermissions(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETCHATPERMISSIONS_HPP
