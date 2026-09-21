#ifndef TELEGRAMBOTAPI_METHOD_DECLINESUGGESTEDPOST_HPP
#define TELEGRAMBOTAPI_METHOD_DECLINESUGGESTEDPOST_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to decline a suggested post in a direct messages chat. The bot must have the 'can_manage_direct_messages' administrator right in the corresponding channel chat. Returns True on success.

struct declineSuggestedPostParameters {
    // Unique identifier for the target direct messages chat
    long long ChatID;

    // Comment for the creator of the suggested post; 0-128 characters
    std::optional<std::string> Comment{};

    // Identifier of a suggested post message to decline
    long long MessageID;

    declineSuggestedPostParameters(const long long &ChatIDValue, const long long &MessageIDValue)
        : ChatID(ChatIDValue), MessageID(MessageIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (Comment.has_value()) {
            Object["comment"] = JSON::ToJson(Comment.value());
        }

        Object["message_id"] = JSON::ToJson(MessageID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || (Comment.has_value() && JSON::RequiresMultipart(Comment.value())) || JSON::RequiresMultipart(MessageID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (Comment.has_value()) {
            JSON::AddMultipartField(
                Form, "comment",
                Comment.value());
        }

        JSON::AddMultipartField(
            Form, "message_id",
            MessageID);

        return Form;
    }

};

class declineSuggestedPost {
public:
    using Parameters = declineSuggestedPostParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "declineSuggestedPost";
    }

    explicit declineSuggestedPost(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool DeclineSuggestedPost(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "declineSuggestedPost",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "declineSuggestedPost",
            ParametersValue.ToJson()
        );
    }

    bool DeclineSuggestedPost(long long ChatID, long long MessageID) {
        Parameters ParametersValue(
        ChatID,
        MessageID
        );

        return DeclineSuggestedPost(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DECLINESUGGESTEDPOST_HPP
