#ifndef TELEGRAMBOTAPI_METHOD_APPROVECHATJOINREQUEST_HPP
#define TELEGRAMBOTAPI_METHOD_APPROVECHATJOINREQUEST_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to approve a chat join request. The bot must be an administrator in the chat for this to work and must have the can_invite_users administrator right. Returns True on success.

struct approveChatJoinRequestParameters {
    // Unique identifier for the target chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Unique identifier of the target user
    long long UserID;

    approveChatJoinRequestParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &UserIDValue)
        : ChatID(ChatIDValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class approveChatJoinRequest {
public:
    using Parameters = approveChatJoinRequestParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "approveChatJoinRequest";
    }

    explicit approveChatJoinRequest(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool ApproveChatJoinRequest(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "approveChatJoinRequest",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "approveChatJoinRequest",
            ParametersValue.ToJson()
        );
    }

    bool ApproveChatJoinRequest(std::variant<long long, std::string> ChatID, long long UserID) {
        Parameters ParametersValue(
        ChatID,
        UserID
        );

        return ApproveChatJoinRequest(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_APPROVECHATJOINREQUEST_HPP
