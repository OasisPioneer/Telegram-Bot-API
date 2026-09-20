#ifndef TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGECAPTION_HPP
#define TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGECAPTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to edit the caption of an ephemeral message. Note that it is not guaranteed that the user will receive the message edit event, especially if they are offline. On success, True is returned.

class editEphemeralMessageCaption {
    public:
        struct Parameters {
            // New caption of the message, 0-1024 characters after entities parsing
            std::optional<std::string> Caption{};

            // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
            std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};

            // Unique identifier for the target chat or username of the target supergroup in the format @username
            std::variant<long long, std::string> ChatID;

            // Identifier of the ephemeral message to edit
            long long EphemeralMessageID;

            // Mode for parsing entities in the message caption. See formatting options for more details.
            std::optional<std::string> ParseMode{};

            // Identifier of the user who received the message
            long long ReceiverUserID;

            // A JSON-serialized object for an inline keyboard
            std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

            // Pass True if the caption must be shown above the message media. Supported only for animation, photo and video messages.
            std::optional<bool> ShowCaptionAboveMedia{};

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const long long &EphemeralMessageIDValue, const long long &ReceiverUserIDValue)
                : ChatID(ChatIDValue), EphemeralMessageID(EphemeralMessageIDValue), ReceiverUserID(ReceiverUserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (Caption.has_value()) {
                    Object["caption"] = JSON::ToJson(Caption.value());
                }

                if (CaptionEntities.has_value()) {
                    Object["caption_entities"] = JSON::ToJson(CaptionEntities.value());
                }

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["ephemeral_message_id"] = JSON::ToJson(EphemeralMessageID);

                if (ParseMode.has_value()) {
                    Object["parse_mode"] = JSON::ToJson(ParseMode.value());
                }

                Object["receiver_user_id"] = JSON::ToJson(ReceiverUserID);

                if (ReplyMarkup.has_value()) {
                    Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
                }

                if (ShowCaptionAboveMedia.has_value()) {
                    Object["show_caption_above_media"] = JSON::ToJson(ShowCaptionAboveMedia.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (Caption.has_value() && JSON::RequiresMultipart(Caption.value())) || (CaptionEntities.has_value() && JSON::RequiresMultipart(CaptionEntities.value())) || JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(EphemeralMessageID) || (ParseMode.has_value() && JSON::RequiresMultipart(ParseMode.value())) || JSON::RequiresMultipart(ReceiverUserID) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (ShowCaptionAboveMedia.has_value() && JSON::RequiresMultipart(ShowCaptionAboveMedia.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

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

                JSON::AddMultipartField(
                    Form, "ephemeral_message_id",
                    EphemeralMessageID);

                if (ParseMode.has_value()) {
                    JSON::AddMultipartField(
                        Form, "parse_mode",
                        ParseMode.value());
                }

                JSON::AddMultipartField(
                    Form, "receiver_user_id",
                    ReceiverUserID);

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

        explicit editEphemeralMessageCaption(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool EditEphemeralMessageCaption(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("editEphemeralMessageCaption",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("editEphemeralMessageCaption",
                                      ParametersValue.ToJson());
        }

        bool EditEphemeralMessageCaption(std::variant<long long, std::string> ChatID, long long EphemeralMessageID, long long ReceiverUserID) {
            Parameters ParametersValue(
                ChatID,
                EphemeralMessageID,
                ReceiverUserID
            );

            return EditEphemeralMessageCaption(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGECAPTION_HPP
