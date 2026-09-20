#ifndef TELEGRAMBOTAPI_METHOD_SENDPAIDMEDIA_HPP
#define TELEGRAMBOTAPI_METHOD_SENDPAIDMEDIA_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ForceReply.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaVideo.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardRemove.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include "TelegramBotAPI/Types/SuggestedPostParameters.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to send paid media. On success, the sent Message is returned.

class sendPaidMedia {
    public:
        struct Parameters {
            // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance.
            std::optional<bool> AllowPaidBroadcast{};

            // Unique identifier of the business connection on behalf of which the message will be sent
            std::optional<std::string> BusinessConnectionID{};

            // Media caption, 0-1024 characters after entities parsing
            std::optional<std::string> Caption{};

            // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
            std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};

            // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username. If the chat is a channel, all Telegram Star proceeds from this media will be credited to the chat's balance. Otherwise, they will be credited to the bot's balance.
            std::variant<long long, std::string> ChatID;

            // Identifier of the direct messages topic to which the message will be sent; required if the message is sent to a direct messages chat
            std::optional<long long> DirectMessagesTopicID{};

            // Sends the message silently. Users will receive a notification with no sound.
            std::optional<bool> DisableNotification{};

            // A JSON-serialized Array describing the media to be sent; up to 10 items
            std::vector<std::variant<::TelegramBotAPI::Type::InputPaidMediaLivePhoto, ::TelegramBotAPI::Type::InputPaidMediaPhoto, ::TelegramBotAPI::Type::InputPaidMediaVideo>> Media;

            // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
            std::optional<long long> MessageThreadID{};

            // Mode for parsing entities in the media caption. See formatting options for more details.
            std::optional<std::string> ParseMode{};

            // Bot-defined paid media payload, 0-128 bytes. This will not be displayed to the user, use it for your internal processes.
            std::optional<std::string> Payload{};

            // Protects the contents of the sent message from forwarding and saving
            std::optional<bool> ProtectContent{};

            // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user.
            std::optional<std::variant<::TelegramBotAPI::Type::InlineKeyboardMarkup, ::TelegramBotAPI::Type::ReplyKeyboardMarkup, ::TelegramBotAPI::Type::ReplyKeyboardRemove, ::TelegramBotAPI::Type::ForceReply>> ReplyMarkup{};

            // Description of the message to reply to
            std::optional<::TelegramBotAPI::Type::ReplyParameters> ReplyParameters{};

            // Pass True if the caption must be shown above the message media
            std::optional<bool> ShowCaptionAboveMedia{};

            // The number of Telegram Stars that must be paid to buy access to the media; 1-25000
            long long StarCount;

            // A JSON-serialized object containing the parameters of the suggested post to send; for direct messages chats only. If the message is sent as a reply to another suggested post, then that suggested post is automatically declined.
            std::optional<::TelegramBotAPI::Type::SuggestedPostParameters> SuggestedPostParameters{};

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const std::vector<std::variant<::TelegramBotAPI::Type::InputPaidMediaLivePhoto, ::TelegramBotAPI::Type::InputPaidMediaPhoto, ::TelegramBotAPI::Type::InputPaidMediaVideo>> &MediaValue, const long long &StarCountValue)
                : ChatID(ChatIDValue), Media(MediaValue), StarCount(StarCountValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (AllowPaidBroadcast.has_value()) {
                    Object["allow_paid_broadcast"] = JSON::ToJson(AllowPaidBroadcast.value());
                }

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

                Object["media"] = JSON::ToJson(Media);

                if (MessageThreadID.has_value()) {
                    Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
                }

                if (ParseMode.has_value()) {
                    Object["parse_mode"] = JSON::ToJson(ParseMode.value());
                }

                if (Payload.has_value()) {
                    Object["payload"] = JSON::ToJson(Payload.value());
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

                Object["star_count"] = JSON::ToJson(StarCount);

                if (SuggestedPostParameters.has_value()) {
                    Object["suggested_post_parameters"] = JSON::ToJson(SuggestedPostParameters.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (AllowPaidBroadcast.has_value() && JSON::RequiresMultipart(AllowPaidBroadcast.value())) || (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || (Caption.has_value() && JSON::RequiresMultipart(Caption.value())) || (CaptionEntities.has_value() && JSON::RequiresMultipart(CaptionEntities.value())) || JSON::RequiresMultipart(ChatID) || (DirectMessagesTopicID.has_value() && JSON::RequiresMultipart(DirectMessagesTopicID.value())) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || JSON::RequiresMultipart(Media) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (ParseMode.has_value() && JSON::RequiresMultipart(ParseMode.value())) || (Payload.has_value() && JSON::RequiresMultipart(Payload.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (ReplyParameters.has_value() && JSON::RequiresMultipart(ReplyParameters.value())) || (ShowCaptionAboveMedia.has_value() && JSON::RequiresMultipart(ShowCaptionAboveMedia.value())) || JSON::RequiresMultipart(StarCount) || (SuggestedPostParameters.has_value() && JSON::RequiresMultipart(SuggestedPostParameters.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (AllowPaidBroadcast.has_value()) {
                    JSON::AddMultipartField(
                        Form, "allow_paid_broadcast",
                        AllowPaidBroadcast.value());
                }

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

                JSON::AddMultipartField(
                    Form, "media",
                    Media);

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

                if (Payload.has_value()) {
                    JSON::AddMultipartField(
                        Form, "payload",
                        Payload.value());
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

                JSON::AddMultipartField(
                    Form, "star_count",
                    StarCount);

                if (SuggestedPostParameters.has_value()) {
                    JSON::AddMultipartField(
                        Form, "suggested_post_parameters",
                        SuggestedPostParameters.value());
                }

                return Form;
            }

        };

        explicit sendPaidMedia(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::Message SendPaidMedia(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::Message>("sendPaidMedia",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::Message>("sendPaidMedia",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::Message SendPaidMedia(std::variant<long long, std::string> ChatID, std::vector<std::variant<::TelegramBotAPI::Type::InputPaidMediaLivePhoto, ::TelegramBotAPI::Type::InputPaidMediaPhoto, ::TelegramBotAPI::Type::InputPaidMediaVideo>> Media, long long StarCount) {
            Parameters ParametersValue(
                ChatID,
                Media,
                StarCount
            );

            return SendPaidMedia(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDPAIDMEDIA_HPP
