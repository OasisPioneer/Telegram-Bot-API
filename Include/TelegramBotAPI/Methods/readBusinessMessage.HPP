#ifndef TELEGRAMBOTAPI_METHOD_READBUSINESSMESSAGE_HPP
#define TELEGRAMBOTAPI_METHOD_READBUSINESSMESSAGE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Marks incoming message as read on behalf of a business account. Requires the can_read_messages business bot right. Returns True on success.

class readBusinessMessage {
    public:
        struct Parameters {
            // Unique identifier of the business connection on behalf of which to read the message
            std::string BusinessConnectionID;

            // Unique identifier of the chat in which the message was received. The chat must have been active in the last 24 hours.
            long long ChatID;

            // Unique identifier of the message to mark as read
            long long MessageID;

            Parameters(const std::string &BusinessConnectionIDValue, const long long &ChatIDValue, const long long &MessageIDValue)
                : BusinessConnectionID(BusinessConnectionIDValue), ChatID(ChatIDValue), MessageID(MessageIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["message_id"] = JSON::ToJson(MessageID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(MessageID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "business_connection_id",
                    BusinessConnectionID);

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                JSON::AddMultipartField(
                    Form, "message_id",
                    MessageID);

                return Form;
            }

        };

        explicit readBusinessMessage(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool ReadBusinessMessage(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("readBusinessMessage",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("readBusinessMessage",
                                      ParametersValue.ToJson());
        }

        bool ReadBusinessMessage(std::string BusinessConnectionID, long long ChatID, long long MessageID) {
            Parameters ParametersValue(
                BusinessConnectionID,
                ChatID,
                MessageID
            );

            return ReadBusinessMessage(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_READBUSINESSMESSAGE_HPP
