#ifndef TELEGRAMBOTAPI_METHOD_SENDMESSAGEDRAFT_HPP
#define TELEGRAMBOTAPI_METHOD_SENDMESSAGEDRAFT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to stream a partial message to a user while the message is being generated. Note that the streamed draft is ephemeral and acts as a temporary 30-second preview - once the output is finalized, you must call sendMessage with the complete message to persist it in the user's chat. Returns True on success.

struct sendMessageDraftParameters {
    // Pass True to show the user a button to stop further drafts. The bot will receive an Update “stopped_message_generation” if the user presses the button.
    std::optional<bool> CanStop{};

    // Unique identifier for the target private chat
    long long ChatID;

    // Unique identifier of the message draft; must be non-zero. Changes to drafts with the same identifier are animated. Otherwise, the draft is replaced without animation.
    long long DraftID;

    // A JSON-serialized list of special entities that appear in message text, which can be specified instead of parse_mode
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> Entities{};

    // Pass True to keep the draft in the chat when the button is pressed. The draft will still disappear after a short time or if the bot sends a message. To fully preserve the partial draft, the bot should send it as a new message.
    std::optional<bool> KeepOnStop{};

    // Unique identifier for the target message thread
    std::optional<long long> MessageThreadID{};

    // Mode for parsing entities in the message text. See formatting options for more details.
    std::optional<std::string> ParseMode{};

    // Text of the message to be sent, 0-4096 characters after entities parsing. Pass an empty text to show a “Thinking…” placeholder.
    std::optional<std::string> Text{};

    sendMessageDraftParameters(const long long &ChatIDValue, const long long &DraftIDValue)
        : ChatID(ChatIDValue), DraftID(DraftIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (CanStop.has_value()) {
            Object["can_stop"] = JSON::ToJson(CanStop.value());
        }

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["draft_id"] = JSON::ToJson(DraftID);

        if (Entities.has_value()) {
            Object["entities"] = JSON::ToJson(Entities.value());
        }

        if (KeepOnStop.has_value()) {
            Object["keep_on_stop"] = JSON::ToJson(KeepOnStop.value());
        }

        if (MessageThreadID.has_value()) {
            Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
        }

        if (ParseMode.has_value()) {
            Object["parse_mode"] = JSON::ToJson(ParseMode.value());
        }

        if (Text.has_value()) {
            Object["text"] = JSON::ToJson(Text.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (CanStop.has_value() && JSON::RequiresMultipart(CanStop.value())) || JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(DraftID) || (Entities.has_value() && JSON::RequiresMultipart(Entities.value())) || (KeepOnStop.has_value() && JSON::RequiresMultipart(KeepOnStop.value())) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (ParseMode.has_value() && JSON::RequiresMultipart(ParseMode.value())) || (Text.has_value() && JSON::RequiresMultipart(Text.value()));
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

        if (Entities.has_value()) {
            JSON::AddMultipartField(
                Form, "entities",
                Entities.value());
        }

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

        if (ParseMode.has_value()) {
            JSON::AddMultipartField(
                Form, "parse_mode",
                ParseMode.value());
        }

        if (Text.has_value()) {
            JSON::AddMultipartField(
                Form, "text",
                Text.value());
        }

        return Form;
    }

};

class sendMessageDraft {
public:
    using Parameters = sendMessageDraftParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "sendMessageDraft";
    }

    explicit sendMessageDraft(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SendMessageDraft(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "sendMessageDraft",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "sendMessageDraft",
            ParametersValue.ToJson()
        );
    }

    bool SendMessageDraft(long long ChatID, long long DraftID) {
        Parameters ParametersValue(
        ChatID,
        DraftID
        );

        return SendMessageDraft(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDMESSAGEDRAFT_HPP
