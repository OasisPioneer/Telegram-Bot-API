#ifndef TELEGRAMBOTAPI_METHOD_SENDGIFT_HPP
#define TELEGRAMBOTAPI_METHOD_SENDGIFT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Sends a gift to the given user or channel chat. The gift can't be converted to Telegram Stars by the receiver. Returns True on success.

class sendGift {
    public:
        struct Parameters {
            // Required if user_id is not specified. Unique identifier for the chat or username of the channel (in the format @username) that will receive the gift.
            std::optional<std::variant<long long, std::string>> ChatID{};

            // Identifier of the gift; limited gifts can't be sent to channel chats
            std::string GiftID;

            // Pass True to pay for the gift upgrade from the bot's balance, thereby making the upgrade free for the receiver
            std::optional<bool> PayForUpgrade{};

            // Text that will be shown along with the gift; 0-128 characters
            std::optional<std::string> Text{};

            // A JSON-serialized list of special entities that appear in the gift text. It can be specified instead of text_parse_mode. Entities other than “bold”, “italic”, “underline”, “strikethrough”, “spoiler”, “custom_emoji”, and “date_time” are ignored.
            std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> TextEntities{};

            // Mode for parsing entities in the text. See formatting options for more details. Entities other than “bold”, “italic”, “underline”, “strikethrough”, “spoiler”, “custom_emoji”, and “date_time” are ignored.
            std::optional<std::string> TextParseMode{};

            // Required if chat_id is not specified. Unique identifier of the target user who will receive the gift.
            std::optional<long long> UserID{};

            Parameters(const std::string &GiftIDValue)
                : GiftID(GiftIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (ChatID.has_value()) {
                    Object["chat_id"] = JSON::ToJson(ChatID.value());
                }

                Object["gift_id"] = JSON::ToJson(GiftID);

                if (PayForUpgrade.has_value()) {
                    Object["pay_for_upgrade"] = JSON::ToJson(PayForUpgrade.value());
                }

                if (Text.has_value()) {
                    Object["text"] = JSON::ToJson(Text.value());
                }

                if (TextEntities.has_value()) {
                    Object["text_entities"] = JSON::ToJson(TextEntities.value());
                }

                if (TextParseMode.has_value()) {
                    Object["text_parse_mode"] = JSON::ToJson(TextParseMode.value());
                }

                if (UserID.has_value()) {
                    Object["user_id"] = JSON::ToJson(UserID.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (ChatID.has_value() && JSON::RequiresMultipart(ChatID.value())) || JSON::RequiresMultipart(GiftID) || (PayForUpgrade.has_value() && JSON::RequiresMultipart(PayForUpgrade.value())) || (Text.has_value() && JSON::RequiresMultipart(Text.value())) || (TextEntities.has_value() && JSON::RequiresMultipart(TextEntities.value())) || (TextParseMode.has_value() && JSON::RequiresMultipart(TextParseMode.value())) || (UserID.has_value() && JSON::RequiresMultipart(UserID.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (ChatID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "chat_id",
                        ChatID.value());
                }

                JSON::AddMultipartField(
                    Form, "gift_id",
                    GiftID);

                if (PayForUpgrade.has_value()) {
                    JSON::AddMultipartField(
                        Form, "pay_for_upgrade",
                        PayForUpgrade.value());
                }

                if (Text.has_value()) {
                    JSON::AddMultipartField(
                        Form, "text",
                        Text.value());
                }

                if (TextEntities.has_value()) {
                    JSON::AddMultipartField(
                        Form, "text_entities",
                        TextEntities.value());
                }

                if (TextParseMode.has_value()) {
                    JSON::AddMultipartField(
                        Form, "text_parse_mode",
                        TextParseMode.value());
                }

                if (UserID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "user_id",
                        UserID.value());
                }

                return Form;
            }

        };

        explicit sendGift(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SendGift(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("sendGift",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("sendGift",
                                      ParametersValue.ToJson());
        }

        bool SendGift(std::string GiftID) {
            Parameters ParametersValue(
                GiftID
            );

            return SendGift(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDGIFT_HPP
