#ifndef TELEGRAMBOTAPI_METHOD_EDITMESSAGETEXT_HPP
#define TELEGRAMBOTAPI_METHOD_EDITMESSAGETEXT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InputRichMessage.HPP"
#include "TelegramBotAPI/Types/LinkPreviewOptions.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to edit text, rich and game messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned. Note that business messages that were not sent by the bot and do not contain an inline keyboard can only be edited within 48 hours from the time they were sent.

struct editMessageTextParameters {
    // Unique identifier of the business connection on behalf of which the message to be edited was sent
    std::optional<std::string> BusinessConnectionID{};

    // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username.
    std::optional<std::variant<long long, std::string>> ChatID{};

    // A JSON-serialized list of special entities that appear in message text, which can be specified instead of parse_mode
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> Entities{};

    // Required if chat_id and message_id are not specified. Identifier of the inline message.
    std::optional<std::string> InlineMessageID{};

    // Link preview generation options for the message
    std::optional<::TelegramBotAPI::Type::LinkPreviewOptions> LinkPreviewOptions{};

    // Required if inline_message_id is not specified. Identifier of the message to edit.
    std::optional<long long> MessageID{};

    // Mode for parsing entities in the message text. See formatting options for more details.
    std::optional<std::string> ParseMode{};

    // A JSON-serialized object for an inline keyboard
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

    // New rich content of the message; required if text isn't specified. Direct upload of new files and explicit upload of files by a URL isn't supported when an inline message is edited.
    std::optional<::TelegramBotAPI::Type::InputRichMessage> RichMessage{};

    // New text of the message, 1-4096 characters after entity parsing; required if rich_message isn't specified
    std::optional<std::string> Text{};

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (BusinessConnectionID.has_value()) {
            Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
        }

        if (ChatID.has_value()) {
            Object["chat_id"] = JSON::ToJson(ChatID.value());
        }

        if (Entities.has_value()) {
            Object["entities"] = JSON::ToJson(Entities.value());
        }

        if (InlineMessageID.has_value()) {
            Object["inline_message_id"] = JSON::ToJson(InlineMessageID.value());
        }

        if (LinkPreviewOptions.has_value()) {
            Object["link_preview_options"] = JSON::ToJson(LinkPreviewOptions.value());
        }

        if (MessageID.has_value()) {
            Object["message_id"] = JSON::ToJson(MessageID.value());
        }

        if (ParseMode.has_value()) {
            Object["parse_mode"] = JSON::ToJson(ParseMode.value());
        }

        if (ReplyMarkup.has_value()) {
            Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
        }

        if (RichMessage.has_value()) {
            Object["rich_message"] = JSON::ToJson(RichMessage.value());
        }

        if (Text.has_value()) {
            Object["text"] = JSON::ToJson(Text.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || (ChatID.has_value() && JSON::RequiresMultipart(ChatID.value())) || (Entities.has_value() && JSON::RequiresMultipart(Entities.value())) || (InlineMessageID.has_value() && JSON::RequiresMultipart(InlineMessageID.value())) || (LinkPreviewOptions.has_value() && JSON::RequiresMultipart(LinkPreviewOptions.value())) || (MessageID.has_value() && JSON::RequiresMultipart(MessageID.value())) || (ParseMode.has_value() && JSON::RequiresMultipart(ParseMode.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (RichMessage.has_value() && JSON::RequiresMultipart(RichMessage.value())) || (Text.has_value() && JSON::RequiresMultipart(Text.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (BusinessConnectionID.has_value()) {
            JSON::AddMultipartField(
                Form, "business_connection_id",
                BusinessConnectionID.value());
        }

        if (ChatID.has_value()) {
            JSON::AddMultipartField(
                Form, "chat_id",
                ChatID.value());
        }

        if (Entities.has_value()) {
            JSON::AddMultipartField(
                Form, "entities",
                Entities.value());
        }

        if (InlineMessageID.has_value()) {
            JSON::AddMultipartField(
                Form, "inline_message_id",
                InlineMessageID.value());
        }

        if (LinkPreviewOptions.has_value()) {
            JSON::AddMultipartField(
                Form, "link_preview_options",
                LinkPreviewOptions.value());
        }

        if (MessageID.has_value()) {
            JSON::AddMultipartField(
                Form, "message_id",
                MessageID.value());
        }

        if (ParseMode.has_value()) {
            JSON::AddMultipartField(
                Form, "parse_mode",
                ParseMode.value());
        }

        if (ReplyMarkup.has_value()) {
            JSON::AddMultipartField(
                Form, "reply_markup",
                ReplyMarkup.value());
        }

        if (RichMessage.has_value()) {
            JSON::AddMultipartField(
                Form, "rich_message",
                RichMessage.value());
        }

        if (Text.has_value()) {
            JSON::AddMultipartField(
                Form, "text",
                Text.value());
        }

        return Form;
    }

};

class editMessageText {
public:
    using Parameters = editMessageTextParameters;
    using ReturnType = std::variant<::TelegramBotAPI::Type::Message, bool>;

    static constexpr const char *Name() noexcept {
        return "editMessageText";
    }

    explicit editMessageText(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageText(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::variant<::TelegramBotAPI::Type::Message, bool>>(
                "editMessageText",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::variant<::TelegramBotAPI::Type::Message, bool>>(
            "editMessageText",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITMESSAGETEXT_HPP
