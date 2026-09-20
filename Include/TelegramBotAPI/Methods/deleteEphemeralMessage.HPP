#ifndef TELEGRAMBOTAPI_METHOD_DELETEEPHEMERALMESSAGE_HPP
#define TELEGRAMBOTAPI_METHOD_DELETEEPHEMERALMESSAGE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to delete an ephemeral message. Note that it is not guaranteed that the user will receive the message deletion event, especially if they are offline. Returns True on success.

class deleteEphemeralMessage {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target supergroup in the format @username
            std::variant<long long, std::string> ChatID;

            // Identifier of the ephemeral message to delete
            long long EphemeralMessageID;

            // Identifier of the user who received the message
            long long ReceiverUserID;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const long long &EphemeralMessageIDValue, const long long &ReceiverUserIDValue)
                : ChatID(ChatIDValue), EphemeralMessageID(EphemeralMessageIDValue), ReceiverUserID(ReceiverUserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["ephemeral_message_id"] = JSON::ToJson(EphemeralMessageID);

                Object["receiver_user_id"] = JSON::ToJson(ReceiverUserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(EphemeralMessageID) || JSON::RequiresMultipart(ReceiverUserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                JSON::AddMultipartField(
                    Form, "ephemeral_message_id",
                    EphemeralMessageID);

                JSON::AddMultipartField(
                    Form, "receiver_user_id",
                    ReceiverUserID);

                return Form;
            }

        };

        explicit deleteEphemeralMessage(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool DeleteEphemeralMessage(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("deleteEphemeralMessage",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("deleteEphemeralMessage",
                                      ParametersValue.ToJson());
        }

        bool DeleteEphemeralMessage(std::variant<long long, std::string> ChatID, long long EphemeralMessageID, long long ReceiverUserID) {
            Parameters ParametersValue(
                ChatID,
                EphemeralMessageID,
                ReceiverUserID
            );

            return DeleteEphemeralMessage(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETEEPHEMERALMESSAGE_HPP
