#ifndef TELEGRAMBOTAPI_METHOD_CLOSEGENERALFORUMTOPIC_HPP
#define TELEGRAMBOTAPI_METHOD_CLOSEGENERALFORUMTOPIC_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to close an open 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. Returns True on success.

struct closeGeneralForumTopicParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    closeGeneralForumTopicParameters(const std::variant<long long, std::string> &ChatIDValue)
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

class closeGeneralForumTopic {
public:
    using Parameters = closeGeneralForumTopicParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "closeGeneralForumTopic";
    }

    explicit closeGeneralForumTopic(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool CloseGeneralForumTopic(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "closeGeneralForumTopic",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "closeGeneralForumTopic",
            ParametersValue.ToJson()
        );
    }

    bool CloseGeneralForumTopic(std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        ChatID
        );

        return CloseGeneralForumTopic(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_CLOSEGENERALFORUMTOPIC_HPP
