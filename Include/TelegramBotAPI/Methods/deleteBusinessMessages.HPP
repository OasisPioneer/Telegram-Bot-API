#ifndef TELEGRAMBOTAPI_METHOD_DELETEBUSINESSMESSAGES_HPP
#define TELEGRAMBOTAPI_METHOD_DELETEBUSINESSMESSAGES_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Delete messages on behalf of a business account. Requires the can_delete_sent_messages business bot right to delete messages sent by the bot itself, or the can_delete_all_messages business bot right to delete any message. Returns True on success.

struct deleteBusinessMessagesParameters {
    // Unique identifier of the business connection on behalf of which to delete the messages
    std::string BusinessConnectionID;

    // A JSON-serialized list of 1-100 identifiers of messages to delete. All messages must be from the same chat. See deleteMessage for limitations on which messages can be deleted.
    std::vector<long long> MessageIDs;

    deleteBusinessMessagesParameters(const std::string &BusinessConnectionIDValue, const std::vector<long long> &MessageIDsValue)
        : BusinessConnectionID(BusinessConnectionIDValue), MessageIDs(MessageIDsValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

        Object["message_ids"] = JSON::ToJson(MessageIDs);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(MessageIDs);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "business_connection_id",
            BusinessConnectionID);

        JSON::AddMultipartField(
            Form, "message_ids",
            MessageIDs);

        return Form;
    }

};

class deleteBusinessMessages {
public:
    using Parameters = deleteBusinessMessagesParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "deleteBusinessMessages";
    }

    explicit deleteBusinessMessages(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool DeleteBusinessMessages(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "deleteBusinessMessages",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "deleteBusinessMessages",
            ParametersValue.ToJson()
        );
    }

    bool DeleteBusinessMessages(std::string BusinessConnectionID, std::vector<long long> MessageIDs) {
        Parameters ParametersValue(
        BusinessConnectionID,
        MessageIDs
        );

        return DeleteBusinessMessages(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETEBUSINESSMESSAGES_HPP
