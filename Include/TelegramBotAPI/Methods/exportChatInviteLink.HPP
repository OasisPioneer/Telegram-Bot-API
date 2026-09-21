#ifndef TELEGRAMBOTAPI_METHOD_EXPORTCHATINVITELINK_HPP
#define TELEGRAMBOTAPI_METHOD_EXPORTCHATINVITELINK_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to generate a new primary invite link for a chat; any previously generated primary link is revoked. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns the new invite link as String on success.

struct exportChatInviteLinkParameters {
    // Unique identifier for the target chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    exportChatInviteLinkParameters(const std::variant<long long, std::string> &ChatIDValue)
        : ChatID(ChatIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        return Form;
    }

};

class exportChatInviteLink {
public:
    using Parameters = exportChatInviteLinkParameters;
    using ReturnType = std::string;

    static constexpr const char *Name() noexcept {
        return "exportChatInviteLink";
    }

    explicit exportChatInviteLink(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::string ExportChatInviteLink(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::string>(
                "exportChatInviteLink",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::string>(
            "exportChatInviteLink",
            ParametersValue.ToJson()
        );
    }

    std::string ExportChatInviteLink(std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        ChatID
        );

        return ExportChatInviteLink(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EXPORTCHATINVITELINK_HPP
