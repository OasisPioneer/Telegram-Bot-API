#ifndef TELEGRAMBOTAPI_METHOD_SENDANIMATION_HPP
#define TELEGRAMBOTAPI_METHOD_SENDANIMATION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/EphemeralMessageParameters.HPP"
#include "TelegramBotAPI/Types/ForceReply.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardRemove.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include "TelegramBotAPI/Types/SuggestedPostParameters.HPP"
#include <TelegramBotAPI/Types/InputFile.HPP>
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to send animation files (GIF or H.264/MPEG-4 AVC video without sound). On success, the sent Message is returned. Bots can currently send animation files of up to 50 MB in size, this limit may be changed in the future.

struct sendAnimationParameters {
    // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance.
    std::optional<bool> AllowPaidBroadcast{};

    // Animation to send. Pass a file_id as String to send an animation that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an animation from the Internet, or upload a new animation using multipart/form-data. More information on Sending Files »
    std::variant<::TelegramBotAPI::Type::InputFile, std::string> Animation;

    // Unique identifier of the business connection on behalf of which the message will be sent
    std::optional<std::string> BusinessConnectionID{};

    // Animation caption (may also be used when resending animation by file_id), 0-1024 characters after entities parsing
    std::optional<std::string> Caption{};

    // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};

    // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Identifier of the direct messages topic to which the message will be sent; required if the message is sent to a direct messages chat
    std::optional<long long> DirectMessagesTopicID{};

    // Sends the message silently. Users will receive a notification with no sound.
    std::optional<bool> DisableNotification{};

    // Duration of sent animation in seconds
    std::optional<long long> Duration{};

    // A JSON-serialized object containing the parameters of the ephemeral message to send
    std::optional<::TelegramBotAPI::Type::EphemeralMessageParameters> EphemeralMessageParameters{};

    // Pass True if the animation needs to be covered with a spoiler animation
    std::optional<bool> HasSpoiler{};

    // Animation height
    std::optional<long long> Height{};

    // Unique identifier of the message effect to be added to the message; for private chats only
    std::optional<std::string> MessageEffectID{};

    // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
    std::optional<long long> MessageThreadID{};

    // Mode for parsing entities in the animation caption. See formatting options for more details.
    std::optional<std::string> ParseMode{};

    // Protects the contents of the sent message from forwarding and saving
    std::optional<bool> ProtectContent{};

    // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user.
    std::optional<std::variant<::TelegramBotAPI::Type::InlineKeyboardMarkup, ::TelegramBotAPI::Type::ReplyKeyboardMarkup, ::TelegramBotAPI::Type::ReplyKeyboardRemove, ::TelegramBotAPI::Type::ForceReply>> ReplyMarkup{};

    // Description of the message to reply to
    std::optional<::TelegramBotAPI::Type::ReplyParameters> ReplyParameters{};

    // Pass True if the caption must be shown above the message media
    std::optional<bool> ShowCaptionAboveMedia{};

    // A JSON-serialized object containing the parameters of the suggested post to send; for direct messages chats only. If the message is sent as a reply to another suggested post, then that suggested post is automatically declined.
    std::optional<::TelegramBotAPI::Type::SuggestedPostParameters> SuggestedPostParameters{};

    // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
    std::optional<::TelegramBotAPI::Type::InputFile> Thumbnail{};

    // Animation width
    std::optional<long long> Width{};

    sendAnimationParameters(const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &AnimationValue, const std::variant<long long, std::string> &ChatIDValue)
        : Animation(AnimationValue), ChatID(ChatIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (AllowPaidBroadcast.has_value()) {
            Object["allow_paid_broadcast"] = JSON::ToJson(AllowPaidBroadcast.value());
        }

        Object["animation"] = JSON::EncodeRequestValue(Animation, "animation");

        if (BusinessConnectionID.has_value()) {
            Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
        }

        if (Caption.has_value()) {
            Object["caption"] = JSON::ToJson(Caption.value());
        }

        if (CaptionEntities.has_value()) {
            Object["caption_entities"] = JSON::ToJson(CaptionEntities.value());
        }

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (DirectMessagesTopicID.has_value()) {
            Object["direct_messages_topic_id"] = JSON::ToJson(DirectMessagesTopicID.value());
        }

        if (DisableNotification.has_value()) {
            Object["disable_notification"] = JSON::ToJson(DisableNotification.value());
        }

        if (Duration.has_value()) {
            Object["duration"] = JSON::ToJson(Duration.value());
        }

        if (EphemeralMessageParameters.has_value()) {
            Object["ephemeral_message_parameters"] = JSON::ToJson(EphemeralMessageParameters.value());
        }

        if (HasSpoiler.has_value()) {
            Object["has_spoiler"] = JSON::ToJson(HasSpoiler.value());
        }

        if (Height.has_value()) {
            Object["height"] = JSON::ToJson(Height.value());
        }

        if (MessageEffectID.has_value()) {
            Object["message_effect_id"] = JSON::ToJson(MessageEffectID.value());
        }

        if (MessageThreadID.has_value()) {
            Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
        }

        if (ParseMode.has_value()) {
            Object["parse_mode"] = JSON::ToJson(ParseMode.value());
        }

        if (ProtectContent.has_value()) {
            Object["protect_content"] = JSON::ToJson(ProtectContent.value());
        }

        if (ReplyMarkup.has_value()) {
            Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
        }

        if (ReplyParameters.has_value()) {
            Object["reply_parameters"] = JSON::ToJson(ReplyParameters.value());
        }

        if (ShowCaptionAboveMedia.has_value()) {
            Object["show_caption_above_media"] = JSON::ToJson(ShowCaptionAboveMedia.value());
        }

        if (SuggestedPostParameters.has_value()) {
            Object["suggested_post_parameters"] = JSON::ToJson(SuggestedPostParameters.value());
        }

        if (Thumbnail.has_value()) {
            Object["thumbnail"] = JSON::EncodeRequestValue(Thumbnail.value(), "thumbnail");
        }

        if (Width.has_value()) {
            Object["width"] = JSON::ToJson(Width.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (AllowPaidBroadcast.has_value() && JSON::RequiresMultipart(AllowPaidBroadcast.value())) || JSON::RequiresMultipart(Animation) || (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || (Caption.has_value() && JSON::RequiresMultipart(Caption.value())) || (CaptionEntities.has_value() && JSON::RequiresMultipart(CaptionEntities.value())) || JSON::RequiresMultipart(ChatID) || (DirectMessagesTopicID.has_value() && JSON::RequiresMultipart(DirectMessagesTopicID.value())) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || (Duration.has_value() && JSON::RequiresMultipart(Duration.value())) || (EphemeralMessageParameters.has_value() && JSON::RequiresMultipart(EphemeralMessageParameters.value())) || (HasSpoiler.has_value() && JSON::RequiresMultipart(HasSpoiler.value())) || (Height.has_value() && JSON::RequiresMultipart(Height.value())) || (MessageEffectID.has_value() && JSON::RequiresMultipart(MessageEffectID.value())) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (ParseMode.has_value() && JSON::RequiresMultipart(ParseMode.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (ReplyParameters.has_value() && JSON::RequiresMultipart(ReplyParameters.value())) || (ShowCaptionAboveMedia.has_value() && JSON::RequiresMultipart(ShowCaptionAboveMedia.value())) || (SuggestedPostParameters.has_value() && JSON::RequiresMultipart(SuggestedPostParameters.value())) || (Thumbnail.has_value() && JSON::RequiresMultipart(Thumbnail.value())) || (Width.has_value() && JSON::RequiresMultipart(Width.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (AllowPaidBroadcast.has_value()) {
            JSON::AddMultipartField(
                Form, "allow_paid_broadcast",
                AllowPaidBroadcast.value());
        }

        JSON::AddMultipartField(
            Form, "animation",
            Animation);

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

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (DirectMessagesTopicID.has_value()) {
            JSON::AddMultipartField(
                Form, "direct_messages_topic_id",
                DirectMessagesTopicID.value());
        }

        if (DisableNotification.has_value()) {
            JSON::AddMultipartField(
                Form, "disable_notification",
                DisableNotification.value());
        }

        if (Duration.has_value()) {
            JSON::AddMultipartField(
                Form, "duration",
                Duration.value());
        }

        if (EphemeralMessageParameters.has_value()) {
            JSON::AddMultipartField(
                Form, "ephemeral_message_parameters",
                EphemeralMessageParameters.value());
        }

        if (HasSpoiler.has_value()) {
            JSON::AddMultipartField(
                Form, "has_spoiler",
                HasSpoiler.value());
        }

        if (Height.has_value()) {
            JSON::AddMultipartField(
                Form, "height",
                Height.value());
        }

        if (MessageEffectID.has_value()) {
            JSON::AddMultipartField(
                Form, "message_effect_id",
                MessageEffectID.value());
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

        if (ProtectContent.has_value()) {
            JSON::AddMultipartField(
                Form, "protect_content",
                ProtectContent.value());
        }

        if (ReplyMarkup.has_value()) {
            JSON::AddMultipartField(
                Form, "reply_markup",
                ReplyMarkup.value());
        }

        if (ReplyParameters.has_value()) {
            JSON::AddMultipartField(
                Form, "reply_parameters",
                ReplyParameters.value());
        }

        if (ShowCaptionAboveMedia.has_value()) {
            JSON::AddMultipartField(
                Form, "show_caption_above_media",
                ShowCaptionAboveMedia.value());
        }

        if (SuggestedPostParameters.has_value()) {
            JSON::AddMultipartField(
                Form, "suggested_post_parameters",
                SuggestedPostParameters.value());
        }

        if (Thumbnail.has_value()) {
            JSON::AddMultipartField(
                Form, "thumbnail",
                Thumbnail.value());
        }

        if (Width.has_value()) {
            JSON::AddMultipartField(
                Form, "width",
                Width.value());
        }

        return Form;
    }

};

class sendAnimation {
public:
    using Parameters = sendAnimationParameters;
    using ReturnType = ::TelegramBotAPI::Type::Message;

    static constexpr const char *Name() noexcept {
        return "sendAnimation";
    }

    explicit sendAnimation(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::Message SendAnimation(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::Message>(
                "sendAnimation",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::Message>(
            "sendAnimation",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::Message SendAnimation(std::variant<::TelegramBotAPI::Type::InputFile, std::string> Animation, std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        Animation,
        ChatID
        );

        return SendAnimation(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDANIMATION_HPP
