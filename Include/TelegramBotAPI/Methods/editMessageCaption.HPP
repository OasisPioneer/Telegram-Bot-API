#ifndef TELEGRAMBOTAPI_METHOD_EDITMESSAGECAPTION_HPP
#define TELEGRAMBOTAPI_METHOD_EDITMESSAGECAPTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to edit captions of messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned. Note that business messages that were not sent by the bot and do not contain an inline keyboard can only be edited within 48 hours from the time they were sent.

struct editMessageCaptionParameters {
    // Unique identifier of the business connection on behalf of which the message to be edited was sent
    std::optional<std::string> BusinessConnectionID{};

    // New caption of the message, 0-1024 characters after entities parsing
    std::optional<std::string> Caption{};

    // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};

    // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username.
    std::optional<std::variant<long long, std::string>> ChatID{};

    // Required if chat_id and message_id are not specified. Identifier of the inline message.
    std::optional<std::string> InlineMessageID{};

    // Required if inline_message_id is not specified. Identifier of the message to edit.
    std::optional<long long> MessageID{};

    // Mode for parsing entities in the message caption. See formatting options for more details.
    std::optional<std::string> ParseMode{};

    // A JSON-serialized object for an inline keyboard
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

    // Pass True if the caption must be shown above the message media. Supported only for animation, photo and video messages.
    std::optional<bool> ShowCaptionAboveMedia{};

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (BusinessConnectionID.has_value()) {
            Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
        }

        if (Caption.has_value()) {
            Object["caption"] = JSON::ToJson(Caption.value());
        }

        if (CaptionEntities.has_value()) {
            Object["caption_entities"] = JSON::ToJson(CaptionEntities.value());
        }

        if (ChatID.has_value()) {
            Object["chat_id"] = JSON::ToJson(ChatID.value());
        }

        if (InlineMessageID.has_value()) {
            Object["inline_message_id"] = JSON::ToJson(InlineMessageID.value());
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

        if (ShowCaptionAboveMedia.has_value()) {
            Object["show_caption_above_media"] = JSON::ToJson(ShowCaptionAboveMedia.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || (Caption.has_value() && JSON::RequiresMultipart(Caption.value())) || (CaptionEntities.has_value() && JSON::RequiresMultipart(CaptionEntities.value())) || (ChatID.has_value() && JSON::RequiresMultipart(ChatID.value())) || (InlineMessageID.has_value() && JSON::RequiresMultipart(InlineMessageID.value())) || (MessageID.has_value() && JSON::RequiresMultipart(MessageID.value())) || (ParseMode.has_value() && JSON::RequiresMultipart(ParseMode.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (ShowCaptionAboveMedia.has_value() && JSON::RequiresMultipart(ShowCaptionAboveMedia.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (BusinessConnectionID.has_value()) {
            JSON::AddMultipartField(
                Form, "business_connection_id",
                BusinessConnectionID.value());
        }

        if (Caption.has_value()) {
            JSON::AddMultipartField(
                Form, "caption",
                Caption.value());
        }

        if (CaptionEntities.has_value()) {
            JSON::AddMultipartField(
                Form, "caption_entities",
                CaptionEntities.value());
        }

        if (ChatID.has_value()) {
            JSON::AddMultipartField(
                Form, "chat_id",
                ChatID.value());
        }

        if (InlineMessageID.has_value()) {
            JSON::AddMultipartField(
                Form, "inline_message_id",
                InlineMessageID.value());
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

        if (ShowCaptionAboveMedia.has_value()) {
            JSON::AddMultipartField(
                Form, "show_caption_above_media",
                ShowCaptionAboveMedia.value());
        }

        return Form;
    }

};

class editMessageCaption {
public:
    using Parameters = editMessageCaptionParameters;
    using ReturnType = std::variant<::TelegramBotAPI::Type::Message, bool>;

    static constexpr const char *Name() noexcept {
        return "editMessageCaption";
    }

    explicit editMessageCaption(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageCaption(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::variant<::TelegramBotAPI::Type::Message, bool>>(
                "editMessageCaption",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::variant<::TelegramBotAPI::Type::Message, bool>>(
            "editMessageCaption",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITMESSAGECAPTION_HPP
