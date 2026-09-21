#ifndef TELEGRAMBOTAPI_METHOD_APPROVESUGGESTEDPOST_HPP
#define TELEGRAMBOTAPI_METHOD_APPROVESUGGESTEDPOST_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to approve a suggested post in a direct messages chat. The bot must have the 'can_post_messages' administrator right in the corresponding channel chat. Returns True on success.

struct approveSuggestedPostParameters {
    // Unique identifier for the target direct messages chat
    long long ChatID;

    // Identifier of a suggested post message to approve
    long long MessageID;

    // Point in time (Unix timestamp) when the post is expected to be published; omit if the date has already been specified when the suggested post was created. If specified, then the date must be not more than 2678400 seconds (30 days) in the future.
    std::optional<long long> SendDate{};

    approveSuggestedPostParameters(const long long &ChatIDValue, const long long &MessageIDValue)
        : ChatID(ChatIDValue), MessageID(MessageIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["message_id"] = JSON::ToJson(MessageID);

        if (SendDate.has_value()) {
            Object["send_date"] = JSON::ToJson(SendDate.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(MessageID) || (SendDate.has_value() && JSON::RequiresMultipart(SendDate.value()));
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

        if (SendDate.has_value()) {
            JSON::AddMultipartField(
                Form, "send_date",
                SendDate.value());
        }

        return Form;
    }

};

class approveSuggestedPost {
public:
    using Parameters = approveSuggestedPostParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "approveSuggestedPost";
    }

    explicit approveSuggestedPost(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool ApproveSuggestedPost(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "approveSuggestedPost",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "approveSuggestedPost",
            ParametersValue.ToJson()
        );
    }

    bool ApproveSuggestedPost(long long ChatID, long long MessageID) {
        Parameters ParametersValue(
        ChatID,
        MessageID
        );

        return ApproveSuggestedPost(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_APPROVESUGGESTEDPOST_HPP
