#ifndef TELEGRAMBOTAPI_METHOD_CREATEFORUMTOPIC_HPP
#define TELEGRAMBOTAPI_METHOD_CREATEFORUMTOPIC_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ForumTopic.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to create a topic in a forum supergroup chat or a private chat with a user. In the case of a supergroup chat the bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator right. Returns information about the created topic as a ForumTopic object.

struct createForumTopicParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    // Color of the topic icon in RGB format. Currently, must be one of 7322096 (0x6FB9F0), 16766590 (0xFFD67E), 13338331 (0xCB86DB), 9367192 (0x8EEE98), 16749490 (0xFF93B2), or 16478047 (0xFB6F5F).
    std::optional<long long> IconColor{};

    // Unique identifier of the custom emoji shown as the topic icon. Use getForumTopicIconStickers to get all allowed custom emoji identifiers.
    std::optional<std::string> IconCustomEmojiID{};

    // Topic name, 1-128 characters
    std::string Name;

    createForumTopicParameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &NameValue)
        : ChatID(ChatIDValue), Name(NameValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (IconColor.has_value()) {
            Object["icon_color"] = JSON::ToJson(IconColor.value());
        }

        if (IconCustomEmojiID.has_value()) {
            Object["icon_custom_emoji_id"] = JSON::ToJson(IconCustomEmojiID.value());
        }

        Object["name"] = JSON::ToJson(Name);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || (IconColor.has_value() && JSON::RequiresMultipart(IconColor.value())) || (IconCustomEmojiID.has_value() && JSON::RequiresMultipart(IconCustomEmojiID.value())) || JSON::RequiresMultipart(Name);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (IconColor.has_value()) {
            JSON::AddMultipartField(
                Form, "icon_color",
                IconColor.value());
        }

        if (IconCustomEmojiID.has_value()) {
            JSON::AddMultipartField(
                Form, "icon_custom_emoji_id",
                IconCustomEmojiID.value());
        }

        JSON::AddMultipartField(
            Form, "name",
            Name);

        return Form;
    }

};

class createForumTopic {
public:
    using Parameters = createForumTopicParameters;
    using ReturnType = ::TelegramBotAPI::Type::ForumTopic;

    static constexpr const char *Name() noexcept {
        return "createForumTopic";
    }

    explicit createForumTopic(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::ForumTopic CreateForumTopic(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::ForumTopic>(
                "createForumTopic",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::ForumTopic>(
            "createForumTopic",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::ForumTopic CreateForumTopic(std::variant<long long, std::string> ChatID, std::string Name) {
        Parameters ParametersValue(
        ChatID,
        Name
        );

        return CreateForumTopic(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_CREATEFORUMTOPIC_HPP
