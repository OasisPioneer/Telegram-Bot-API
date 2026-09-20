#ifndef TELEGRAMBOTAPI_METHOD_EDITMESSAGEMEDIA_HPP
#define TELEGRAMBOTAPI_METHOD_EDITMESSAGEMEDIA_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InputMediaAnimation.HPP"
#include "TelegramBotAPI/Types/InputMediaAudio.HPP"
#include "TelegramBotAPI/Types/InputMediaDocument.HPP"
#include "TelegramBotAPI/Types/InputMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaVideo.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to edit animation, audio, document, live photo, photo, or video messages, or to replace a text or a rich message with a media. If a message is part of a message album, then it can be edited only to an audio for audio albums, only to a document for document albums and to a photo, a live photo, or a video otherwise. When an inline message is edited, a new file can't be uploaded; use a previously uploaded file via its file_id or specify a URL. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned. Note that business messages that were not sent by the bot and do not contain an inline keyboard can only be edited within 48 hours from the time they were sent.

class editMessageMedia {
    public:
        struct Parameters {
            // Unique identifier of the business connection on behalf of which the message to be edited was sent
            std::optional<std::string> BusinessConnectionID{};

            // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username.
            std::optional<std::variant<long long, std::string>> ChatID{};

            // Required if chat_id and message_id are not specified. Identifier of the inline message.
            std::optional<std::string> InlineMessageID{};

            // A JSON-serialized object for the new media content of the message
            std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> Media;

            // Required if inline_message_id is not specified. Identifier of the message to edit.
            std::optional<long long> MessageID{};

            // A JSON-serialized object for a new inline keyboard
            std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

            Parameters(const std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> &MediaValue)
                : Media(MediaValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (BusinessConnectionID.has_value()) {
                    Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
                }

                if (ChatID.has_value()) {
                    Object["chat_id"] = JSON::ToJson(ChatID.value());
                }

                if (InlineMessageID.has_value()) {
                    Object["inline_message_id"] = JSON::ToJson(InlineMessageID.value());
                }

                Object["media"] = JSON::ToJson(Media);

                if (MessageID.has_value()) {
                    Object["message_id"] = JSON::ToJson(MessageID.value());
                }

                if (ReplyMarkup.has_value()) {
                    Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || (ChatID.has_value() && JSON::RequiresMultipart(ChatID.value())) || (InlineMessageID.has_value() && JSON::RequiresMultipart(InlineMessageID.value())) || JSON::RequiresMultipart(Media) || (MessageID.has_value() && JSON::RequiresMultipart(MessageID.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value()));
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

                if (InlineMessageID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "inline_message_id",
                        InlineMessageID.value());
                }

                JSON::AddMultipartField(
                    Form, "media",
                    Media);

                if (MessageID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "message_id",
                        MessageID.value());
                }

                if (ReplyMarkup.has_value()) {
                    JSON::AddMultipartField(
                        Form, "reply_markup",
                        ReplyMarkup.value());
                }

                return Form;
            }

        };

        explicit editMessageMedia(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageMedia(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::variant<::TelegramBotAPI::Type::Message, bool>>("editMessageMedia",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::variant<::TelegramBotAPI::Type::Message, bool>>("editMessageMedia",
                                      ParametersValue.ToJson());
        }

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageMedia(std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> Media) {
            Parameters ParametersValue(
                Media
            );

            return EditMessageMedia(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITMESSAGEMEDIA_HPP
