#ifndef TELEGRAMBOTAPI_METHOD_UNPINALLFORUMTOPICMESSAGES_HPP
#define TELEGRAMBOTAPI_METHOD_UNPINALLFORUMTOPICMESSAGES_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to clear the list of pinned messages in a forum topic in a forum supergroup chat or a private chat with a user. In the case of a supergroup chat the bot must be an administrator in the chat for this to work and must have the can_pin_messages administrator right in the supergroup. Returns True on success.

struct unpinAllForumTopicMessagesParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // Unique identifier for the target message thread of the forum topic
    long long MessageThreadID;

    unpinAllForumTopicMessagesParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &MessageThreadIDValue)
        : ChatID(ChatIDValue), MessageThreadID(MessageThreadIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["message_thread_id"] = JSON::ToJson(MessageThreadID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(MessageThreadID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        JSON::AddMultipartField(
            Form, "message_thread_id",
            MessageThreadID);

        return Form;
    }

};

class unpinAllForumTopicMessages {
public:
    using Parameters = unpinAllForumTopicMessagesParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "unpinAllForumTopicMessages";
    }

    explicit unpinAllForumTopicMessages(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool UnpinAllForumTopicMessages(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "unpinAllForumTopicMessages",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "unpinAllForumTopicMessages",
            ParametersValue.ToJson()
        );
    }

    bool UnpinAllForumTopicMessages(std::variant<long long, std::string> ChatID, long long MessageThreadID) {
        Parameters ParametersValue(
        ChatID,
        MessageThreadID
        );

        return UnpinAllForumTopicMessages(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_UNPINALLFORUMTOPICMESSAGES_HPP
