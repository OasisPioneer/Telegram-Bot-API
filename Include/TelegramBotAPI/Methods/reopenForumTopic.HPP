#ifndef TELEGRAMBOTAPI_METHOD_REOPENFORUMTOPIC_HPP
#define TELEGRAMBOTAPI_METHOD_REOPENFORUMTOPIC_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to reopen a closed topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights, unless it is the creator of the topic. Returns True on success.

struct reopenForumTopicParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // Unique identifier for the target message thread of the forum topic
    long long MessageThreadID;

    reopenForumTopicParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &MessageThreadIDValue)
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

class reopenForumTopic {
public:
    using Parameters = reopenForumTopicParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "reopenForumTopic";
    }

    explicit reopenForumTopic(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool ReopenForumTopic(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "reopenForumTopic",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "reopenForumTopic",
            ParametersValue.ToJson()
        );
    }

    bool ReopenForumTopic(std::variant<long long, std::string> ChatID, long long MessageThreadID) {
        Parameters ParametersValue(
        ChatID,
        MessageThreadID
        );

        return ReopenForumTopic(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_REOPENFORUMTOPIC_HPP
