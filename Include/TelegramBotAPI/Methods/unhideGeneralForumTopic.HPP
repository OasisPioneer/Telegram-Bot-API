#ifndef TELEGRAMBOTAPI_METHOD_UNHIDEGENERALFORUMTOPIC_HPP
#define TELEGRAMBOTAPI_METHOD_UNHIDEGENERALFORUMTOPIC_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to unhide the 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. Returns True on success.

struct unhideGeneralForumTopicParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    unhideGeneralForumTopicParameters(const std::variant<long long, std::string> &ChatIDValue)
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

class unhideGeneralForumTopic {
public:
    using Parameters = unhideGeneralForumTopicParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "unhideGeneralForumTopic";
    }

    explicit unhideGeneralForumTopic(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool UnhideGeneralForumTopic(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "unhideGeneralForumTopic",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "unhideGeneralForumTopic",
            ParametersValue.ToJson()
        );
    }

    bool UnhideGeneralForumTopic(std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        ChatID
        );

        return UnhideGeneralForumTopic(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_UNHIDEGENERALFORUMTOPIC_HPP
