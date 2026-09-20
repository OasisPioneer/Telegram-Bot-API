#ifndef TELEGRAMBOTAPI_METHOD_SENDRICHMESSAGEDRAFT_HPP
#define TELEGRAMBOTAPI_METHOD_SENDRICHMESSAGEDRAFT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InputRichMessage.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to stream a partial rich message to a user while the message is being generated. Note that the streamed draft is ephemeral and acts as a temporary 30-second preview - once the output is finalized, you must call sendRichMessage with the complete message to persist it in the user's chat. Returns True on success.

class sendRichMessageDraft {
    public:
        struct Parameters {
            // Pass True to show the user a button to stop further drafts. The bot will receive an Update “stopped_message_generation” if the user presses the button.
            std::optional<bool> CanStop{};

            // Unique identifier for the target private chat
            long long ChatID;

            // Unique identifier of the message draft; must be non-zero. Changes to drafts with the same identifier are animated. Otherwise, the draft is replaced without animation.
            long long DraftID;

            // Pass True to keep the draft in the chat when the button is pressed. The draft will still disappear after a short time or if the bot sends a message. To fully preserve the partial draft, the bot should send it as a new message.
            std::optional<bool> KeepOnStop{};

            // Unique identifier for the target message thread
            std::optional<long long> MessageThreadID{};

            // The partial message to be streamed. Direct upload of new files and explicit upload of files by a URL isn't supported.
            ::TelegramBotAPI::Type::InputRichMessage RichMessage;

            Parameters(const long long &ChatIDValue, const long long &DraftIDValue, const ::TelegramBotAPI::Type::InputRichMessage &RichMessageValue)
                : ChatID(ChatIDValue), DraftID(DraftIDValue), RichMessage(RichMessageValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (CanStop.has_value()) {
                    Object["can_stop"] = JSON::ToJson(CanStop.value());
                }

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["draft_id"] = JSON::ToJson(DraftID);

                if (KeepOnStop.has_value()) {
                    Object["keep_on_stop"] = JSON::ToJson(KeepOnStop.value());
                }

                if (MessageThreadID.has_value()) {
                    Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
                }

                Object["rich_message"] = JSON::ToJson(RichMessage);

                return Object;
            }

            bool RequiresMultipart() const {
                return (CanStop.has_value() && JSON::RequiresMultipart(CanStop.value())) || JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(DraftID) || (KeepOnStop.has_value() && JSON::RequiresMultipart(KeepOnStop.value())) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || JSON::RequiresMultipart(RichMessage);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (CanStop.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_stop",
                        CanStop.value());
                }

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                JSON::AddMultipartField(
                    Form, "draft_id",
                    DraftID);

                if (KeepOnStop.has_value()) {
                    JSON::AddMultipartField(
                        Form, "keep_on_stop",
                        KeepOnStop.value());
                }

                if (MessageThreadID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "message_thread_id",
                        MessageThreadID.value());
                }

                JSON::AddMultipartField(
                    Form, "rich_message",
                    RichMessage);

                return Form;
            }

        };

        explicit sendRichMessageDraft(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SendRichMessageDraft(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("sendRichMessageDraft",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("sendRichMessageDraft",
                                      ParametersValue.ToJson());
        }

        bool SendRichMessageDraft(long long ChatID, long long DraftID, ::TelegramBotAPI::Type::InputRichMessage RichMessage) {
            Parameters ParametersValue(
                ChatID,
                DraftID,
                RichMessage
            );

            return SendRichMessageDraft(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDRICHMESSAGEDRAFT_HPP
