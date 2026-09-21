#ifndef TELEGRAMBOTAPI_METHOD_DELETEMESSAGEREACTION_HPP
#define TELEGRAMBOTAPI_METHOD_DELETEMESSAGEREACTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to remove a reaction from a message in a group or a supergroup chat. The bot must have the 'can_delete_messages' administrator right in the chat. Returns True on success.

struct deleteMessageReactionParameters {
    // Identifier of the chat whose reaction will be removed, if the reaction was added by a chat
    std::optional<long long> ActorChatID{};

    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // Identifier of the target message
    long long MessageID;

    // Identifier of the user whose reaction will be removed, if the reaction was added by a user
    std::optional<long long> UserID{};

    deleteMessageReactionParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &MessageIDValue)
        : ChatID(ChatIDValue), MessageID(MessageIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (ActorChatID.has_value()) {
            Object["actor_chat_id"] = JSON::ToJson(ActorChatID.value());
        }

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["message_id"] = JSON::ToJson(MessageID);

        if (UserID.has_value()) {
            Object["user_id"] = JSON::ToJson(UserID.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (ActorChatID.has_value() && JSON::RequiresMultipart(ActorChatID.value())) || JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(MessageID) || (UserID.has_value() && JSON::RequiresMultipart(UserID.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (ActorChatID.has_value()) {
            JSON::AddMultipartField(
                Form, "actor_chat_id",
                ActorChatID.value());
        }

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        JSON::AddMultipartField(
            Form, "message_id",
            MessageID);

        if (UserID.has_value()) {
            JSON::AddMultipartField(
                Form, "user_id",
                UserID.value());
        }

        return Form;
    }

};

class deleteMessageReaction {
public:
    using Parameters = deleteMessageReactionParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "deleteMessageReaction";
    }

    explicit deleteMessageReaction(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool DeleteMessageReaction(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "deleteMessageReaction",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "deleteMessageReaction",
            ParametersValue.ToJson()
        );
    }

    bool DeleteMessageReaction(std::variant<long long, std::string> ChatID, long long MessageID) {
        Parameters ParametersValue(
        ChatID,
        MessageID
        );

        return DeleteMessageReaction(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETEMESSAGEREACTION_HPP
