#ifndef TELEGRAMBOTAPI_METHOD_DELETEMESSAGES_HPP
#define TELEGRAMBOTAPI_METHOD_DELETEMESSAGES_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to delete multiple messages simultaneously. If some of the specified messages can't be found, they are skipped. Returns True on success.

struct deleteMessagesParameters {
    // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
    std::variant<long long, std::string> ChatID;

    // A JSON-serialized list of 1-100 identifiers of messages to delete. See deleteMessage for limitations on which messages can be deleted.
    std::vector<long long> MessageIDs;

    deleteMessagesParameters(const std::variant<long long, std::string> &ChatIDValue, const std::vector<long long> &MessageIDsValue)
        : ChatID(ChatIDValue), MessageIDs(MessageIDsValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["message_ids"] = JSON::ToJson(MessageIDs);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(MessageIDs);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        JSON::AddMultipartField(
            Form, "message_ids",
            MessageIDs);

        return Form;
    }

};

class deleteMessages {
public:
    using Parameters = deleteMessagesParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "deleteMessages";
    }

    explicit deleteMessages(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool DeleteMessages(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "deleteMessages",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "deleteMessages",
            ParametersValue.ToJson()
        );
    }

    bool DeleteMessages(std::variant<long long, std::string> ChatID, std::vector<long long> MessageIDs) {
        Parameters ParametersValue(
        ChatID,
        MessageIDs
        );

        return DeleteMessages(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETEMESSAGES_HPP
