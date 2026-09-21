#ifndef TELEGRAMBOTAPI_METHOD_EDITFORUMTOPIC_HPP
#define TELEGRAMBOTAPI_METHOD_EDITFORUMTOPIC_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to edit name and icon of a topic in a forum supergroup chat or a private chat with a user. In the case of a supergroup chat the bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights, unless it is the creator of the topic. Returns True on success.

struct editForumTopicParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // New unique identifier of the custom emoji shown as the topic icon. Use getForumTopicIconStickers to get all allowed custom emoji identifiers. Pass an empty string to remove the icon. If not specified, the current icon will be kept.
    std::optional<std::string> IconCustomEmojiID{};

    // Unique identifier for the target message thread of the forum topic
    long long MessageThreadID;

    // New topic name, 0-128 characters. If not specified or empty, the current name of the topic will be kept.
    std::optional<std::string> Name{};

    editForumTopicParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &MessageThreadIDValue)
        : ChatID(ChatIDValue), MessageThreadID(MessageThreadIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (IconCustomEmojiID.has_value()) {
            Object["icon_custom_emoji_id"] = JSON::ToJson(IconCustomEmojiID.value());
        }

        Object["message_thread_id"] = JSON::ToJson(MessageThreadID);

        if (Name.has_value()) {
            Object["name"] = JSON::ToJson(Name.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || (IconCustomEmojiID.has_value() && JSON::RequiresMultipart(IconCustomEmojiID.value())) || JSON::RequiresMultipart(MessageThreadID) || (Name.has_value() && JSON::RequiresMultipart(Name.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (IconCustomEmojiID.has_value()) {
            JSON::AddMultipartField(
                Form, "icon_custom_emoji_id",
                IconCustomEmojiID.value());
        }

        JSON::AddMultipartField(
            Form, "message_thread_id",
            MessageThreadID);

        if (Name.has_value()) {
            JSON::AddMultipartField(
                Form, "name",
                Name.value());
        }

        return Form;
    }

};

class editForumTopic {
public:
    using Parameters = editForumTopicParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "editForumTopic";
    }

    explicit editForumTopic(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool EditForumTopic(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "editForumTopic",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "editForumTopic",
            ParametersValue.ToJson()
        );
    }

    bool EditForumTopic(std::variant<long long, std::string> ChatID, long long MessageThreadID) {
        Parameters ParametersValue(
        ChatID,
        MessageThreadID
        );

        return EditForumTopic(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITFORUMTOPIC_HPP
