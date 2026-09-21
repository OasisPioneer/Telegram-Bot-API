#ifndef TELEGRAMBOTAPI_METHOD_UNPINALLGENERALFORUMTOPICMESSAGES_HPP
#define TELEGRAMBOTAPI_METHOD_UNPINALLGENERALFORUMTOPICMESSAGES_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to clear the list of pinned messages in a General forum topic. The bot must be an administrator in the chat for this to work and must have the can_pin_messages administrator right in the supergroup. Returns True on success.

struct unpinAllGeneralForumTopicMessagesParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    unpinAllGeneralForumTopicMessagesParameters(const std::variant<long long, std::string> &ChatIDValue)
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

class unpinAllGeneralForumTopicMessages {
public:
    using Parameters = unpinAllGeneralForumTopicMessagesParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "unpinAllGeneralForumTopicMessages";
    }

    explicit unpinAllGeneralForumTopicMessages(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool UnpinAllGeneralForumTopicMessages(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "unpinAllGeneralForumTopicMessages",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "unpinAllGeneralForumTopicMessages",
            ParametersValue.ToJson()
        );
    }

    bool UnpinAllGeneralForumTopicMessages(std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        ChatID
        );

        return UnpinAllGeneralForumTopicMessages(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_UNPINALLGENERALFORUMTOPICMESSAGES_HPP
