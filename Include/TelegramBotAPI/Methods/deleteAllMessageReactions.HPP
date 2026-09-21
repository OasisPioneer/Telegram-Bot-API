#ifndef TELEGRAMBOTAPI_METHOD_DELETEALLMESSAGEREACTIONS_HPP
#define TELEGRAMBOTAPI_METHOD_DELETEALLMESSAGEREACTIONS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to remove up to 10000 recent reactions in a group or a supergroup chat added by a given user or chat. The bot must have the 'can_delete_messages' administrator right in the chat. Returns True on success.
    // The following methods and objects allow your bot to handle stickers and sticker sets.

struct deleteAllMessageReactionsParameters {
    // Identifier of the chat whose reactions will be removed, if the reactions were added by a chat
    std::optional<long long> ActorChatID{};

    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // Identifier of the user whose reactions will be removed, if the reactions were added by a user
    std::optional<long long> UserID{};

    deleteAllMessageReactionsParameters(const std::variant<long long, std::string> &ChatIDValue)
        : ChatID(ChatIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (ActorChatID.has_value()) {
            Object["actor_chat_id"] = JSON::ToJson(ActorChatID.value());
        }

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (UserID.has_value()) {
            Object["user_id"] = JSON::ToJson(UserID.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (ActorChatID.has_value() && JSON::RequiresMultipart(ActorChatID.value())) || JSON::RequiresMultipart(ChatID) || (UserID.has_value() && JSON::RequiresMultipart(UserID.value()));
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

        if (UserID.has_value()) {
            JSON::AddMultipartField(
                Form, "user_id",
                UserID.value());
        }

        return Form;
    }

};

class deleteAllMessageReactions {
public:
    using Parameters = deleteAllMessageReactionsParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "deleteAllMessageReactions";
    }

    explicit deleteAllMessageReactions(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool DeleteAllMessageReactions(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "deleteAllMessageReactions",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "deleteAllMessageReactions",
            ParametersValue.ToJson()
        );
    }

    bool DeleteAllMessageReactions(std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        ChatID
        );

        return DeleteAllMessageReactions(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETEALLMESSAGEREACTIONS_HPP
