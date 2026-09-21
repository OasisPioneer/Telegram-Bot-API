#ifndef TELEGRAMBOTAPI_METHOD_EDITGENERALFORUMTOPIC_HPP
#define TELEGRAMBOTAPI_METHOD_EDITGENERALFORUMTOPIC_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to edit the name of the 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. Returns True on success.

struct editGeneralForumTopicParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // New topic name, 1-128 characters
    std::string Name;

    editGeneralForumTopicParameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &NameValue)
        : ChatID(ChatIDValue), Name(NameValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["name"] = JSON::ToJson(Name);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(Name);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        JSON::AddMultipartField(
            Form, "name",
            Name);

        return Form;
    }

};

class editGeneralForumTopic {
public:
    using Parameters = editGeneralForumTopicParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "editGeneralForumTopic";
    }

    explicit editGeneralForumTopic(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool EditGeneralForumTopic(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "editGeneralForumTopic",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "editGeneralForumTopic",
            ParametersValue.ToJson()
        );
    }

    bool EditGeneralForumTopic(std::variant<long long, std::string> ChatID, std::string Name) {
        Parameters ParametersValue(
        ChatID,
        Name
        );

        return EditGeneralForumTopic(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITGENERALFORUMTOPIC_HPP
