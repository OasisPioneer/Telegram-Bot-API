#ifndef TELEGRAMBOTAPI_METHOD_SENDCHATACTION_HPP
#define TELEGRAMBOTAPI_METHOD_SENDCHATACTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method when you need to tell the user that something is happening on the bot's side. The status is set for 5 seconds or less (when a message arrives from your bot, Telegram clients clear its typing status). Returns True on success.
    // We only recommend using this method when a response from the bot will take a noticeable amount of time to arrive.

struct sendChatActionParameters {
    // Type of action to broadcast. Choose one, depending on what the user is about to receive: typing for text messages, upload_photo for photos, record_video or upload_video for videos, record_voice or upload_voice for voice notes, upload_document for general files, choose_sticker for stickers, find_location for location data, record_video_note or upload_video_note for video notes.
    std::string Action;

    // Unique identifier of the business connection on behalf of which the action will be sent
    std::optional<std::string> BusinessConnectionID{};

    // Unique identifier for the target chat or username of the target bot or supergroup in the format @username. Channel chats and channel direct messages chats aren't supported.
    std::variant<long long, std::string> ChatID;

    // Unique identifier for the target message thread or topic of a forum; for supergroups and private chats of bots with forum topic mode enabled only
    std::optional<long long> MessageThreadID{};

    sendChatActionParameters(const std::string &ActionValue, const std::variant<long long, std::string> &ChatIDValue)
        : Action(ActionValue), ChatID(ChatIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["action"] = JSON::ToJson(Action);

        if (BusinessConnectionID.has_value()) {
            Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
        }

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (MessageThreadID.has_value()) {
            Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Action) || (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || JSON::RequiresMultipart(ChatID) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "action",
            Action);

        if (BusinessConnectionID.has_value()) {
            JSON::AddMultipartField(
                Form, "business_connection_id",
                BusinessConnectionID.value());
        }

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (MessageThreadID.has_value()) {
            JSON::AddMultipartField(
                Form, "message_thread_id",
                MessageThreadID.value());
        }

        return Form;
    }

};

class sendChatAction {
public:
    using Parameters = sendChatActionParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "sendChatAction";
    }

    explicit sendChatAction(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SendChatAction(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "sendChatAction",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "sendChatAction",
            ParametersValue.ToJson()
        );
    }

    bool SendChatAction(std::string Action, std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        Action,
        ChatID
        );

        return SendChatAction(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDCHATACTION_HPP
