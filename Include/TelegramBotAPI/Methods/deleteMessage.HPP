#ifndef TELEGRAMBOTAPI_METHOD_DELETEMESSAGE_HPP
#define TELEGRAMBOTAPI_METHOD_DELETEMESSAGE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to delete a message, including service messages, with the following limitations:- A message can only be deleted if it was sent less than 48 hours ago.- Service messages about a supergroup, channel, or forum topic creation can't be deleted.- A dice message in a private chat can only be deleted if it was sent more than 24 hours ago.- Bots can delete outgoing messages in private chats, groups, and supergroups.- Bots can delete incoming messages in private chats.- Bots granted can_post_messages permissions can delete outgoing messages in channels.- If the bot is an administrator of a group, it can delete any message there.- If the bot has can_delete_messages administrator right in a supergroup or a channel, it can delete any message there.- If the bot has can_manage_direct_messages administrator right in a channel, it can delete any message in the corresponding direct messages chat.Returns True on success.

class deleteMessage {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Identifier of the message to delete
            long long MessageID;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const long long &MessageIDValue)
                : ChatID(ChatIDValue), MessageID(MessageIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["message_id"] = JSON::ToJson(MessageID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(MessageID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                JSON::AddMultipartField(
                    Form, "message_id",
                    MessageID);

                return Form;
            }

        };

        explicit deleteMessage(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool DeleteMessage(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("deleteMessage",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("deleteMessage",
                                      ParametersValue.ToJson());
        }

        bool DeleteMessage(std::variant<long long, std::string> ChatID, long long MessageID) {
            Parameters ParametersValue(
                ChatID,
                MessageID
            );

            return DeleteMessage(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETEMESSAGE_HPP
