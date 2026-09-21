#ifndef TELEGRAMBOTAPI_METHOD_BANCHATSENDERCHAT_HPP
#define TELEGRAMBOTAPI_METHOD_BANCHATSENDERCHAT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to ban a channel chat in a supergroup or a channel. Until the chat is unbanned, the owner of the banned chat won't be able to send messages on behalf of any of their channels. The bot must be an administrator in the supergroup or channel for this to work and must have the appropriate administrator rights. Returns True on success.

struct banChatSenderChatParameters {
    // Unique identifier for the target chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Unique identifier of the target sender chat
    long long SenderChatID;

    banChatSenderChatParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &SenderChatIDValue)
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

class banChatSenderChat {
public:
    using Parameters = banChatSenderChatParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "banChatSenderChat";
    }

    explicit banChatSenderChat(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool BanChatSenderChat(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "banChatSenderChat",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "banChatSenderChat",
            ParametersValue.ToJson()
        );
    }

    bool BanChatSenderChat(std::variant<long long, std::string> ChatID, long long SenderChatID) {
        Parameters ParametersValue(
        ChatID,
        SenderChatID
        );

        return BanChatSenderChat(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_BANCHATSENDERCHAT_HPP
