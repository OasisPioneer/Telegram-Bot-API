#ifndef TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGETEXT_HPP
#define TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGETEXT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InputRichMessage.HPP"
#include "TelegramBotAPI/Types/LinkPreviewOptions.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to edit an ephemeral text or rich message. Note that it is not guaranteed that the user will receive the message edit event, especially if they are offline. On success, True is returned.

class editEphemeralMessageText {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target supergroup in the format @username
            std::variant<long long, std::string> ChatID;

            // A JSON-serialized list of special entities that appear in message text, which can be specified instead of parse_mode
            std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> Entities{};

            // Identifier of the ephemeral message to edit
            long long EphemeralMessageID;

            // Link preview generation options for the message
            std::optional<::TelegramBotAPI::Type::LinkPreviewOptions> LinkPreviewOptions{};

            // Mode for parsing entities in the message text. See formatting options for more details.
            std::optional<std::string> ParseMode{};

            // Identifier of the user who received the message
            long long ReceiverUserID;

            // A JSON-serialized object for an inline keyboard
            std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

            // New rich content of the message; required if text isn't specified
            std::optional<::TelegramBotAPI::Type::InputRichMessage> RichMessage{};

            // New text of the message, 1-4096 characters after entity parsing; required if rich_message isn't specified
            std::optional<std::string> Text{};

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const long long &EphemeralMessageIDValue, const long long &ReceiverUserIDValue)
                : ChatID(ChatIDValue), EphemeralMessageID(EphemeralMessageIDValue), ReceiverUserID(ReceiverUserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                if (Entities.has_value()) {
                    Object["entities"] = JSON::ToJson(Entities.value());
                }

                Object["ephemeral_message_id"] = JSON::ToJson(EphemeralMessageID);

                if (LinkPreviewOptions.has_value()) {
                    Object["link_preview_options"] = JSON::ToJson(LinkPreviewOptions.value());
                }

                if (ParseMode.has_value()) {
                    Object["parse_mode"] = JSON::ToJson(ParseMode.value());
                }

                Object["receiver_user_id"] = JSON::ToJson(ReceiverUserID);

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
                return JSON::RequiresMultipart(ChatID) || (Entities.has_value() && JSON::RequiresMultipart(Entities.value())) || JSON::RequiresMultipart(EphemeralMessageID) || (LinkPreviewOptions.has_value() && JSON::RequiresMultipart(LinkPreviewOptions.value())) || (ParseMode.has_value() && JSON::RequiresMultipart(ParseMode.value())) || JSON::RequiresMultipart(ReceiverUserID) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (RichMessage.has_value() && JSON::RequiresMultipart(RichMessage.value())) || (Text.has_value() && JSON::RequiresMultipart(Text.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                if (Entities.has_value()) {
                    JSON::AddMultipartField(
                        Form, "entities",
                        Entities.value());
                }

                JSON::AddMultipartField(
                    Form, "ephemeral_message_id",
                    EphemeralMessageID);

                if (LinkPreviewOptions.has_value()) {
                    JSON::AddMultipartField(
                        Form, "link_preview_options",
                        LinkPreviewOptions.value());
                }

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

        explicit editEphemeralMessageText(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool EditEphemeralMessageText(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("editEphemeralMessageText",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("editEphemeralMessageText",
                                      ParametersValue.ToJson());
        }

        bool EditEphemeralMessageText(std::variant<long long, std::string> ChatID, long long EphemeralMessageID, long long ReceiverUserID) {
            Parameters ParametersValue(
                ChatID,
                EphemeralMessageID,
                ReceiverUserID
            );

            return EditEphemeralMessageText(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITEPHEMERALMESSAGETEXT_HPP
