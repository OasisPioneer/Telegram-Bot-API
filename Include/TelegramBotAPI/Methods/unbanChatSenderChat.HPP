#ifndef TELEGRAMBOTAPI_METHOD_UNBANCHATSENDERCHAT_HPP
#define TELEGRAMBOTAPI_METHOD_UNBANCHATSENDERCHAT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to unban a previously banned channel chat in a supergroup or channel. The bot must be an administrator for this to work and must have the appropriate administrator rights. Returns True on success.

struct unbanChatSenderChatParameters {
    // Unique identifier for the target chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Unique identifier of the target sender chat
    long long SenderChatID;

    unbanChatSenderChatParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &SenderChatIDValue)
        : ChatID(ChatIDValue), SenderChatID(SenderChatIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["sender_chat_id"] = JSON::ToJson(SenderChatID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(SenderChatID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        JSON::AddMultipartField(
            Form, "sender_chat_id",
            SenderChatID);

        return Form;
    }

};

class unbanChatSenderChat {
public:
    using Parameters = unbanChatSenderChatParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "unbanChatSenderChat";
    }

    explicit unbanChatSenderChat(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool UnbanChatSenderChat(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "unbanChatSenderChat",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "unbanChatSenderChat",
            ParametersValue.ToJson()
        );
    }

    bool UnbanChatSenderChat(std::variant<long long, std::string> ChatID, long long SenderChatID) {
        Parameters ParametersValue(
        ChatID,
        SenderChatID
        );

        return UnbanChatSenderChat(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_UNBANCHATSENDERCHAT_HPP
