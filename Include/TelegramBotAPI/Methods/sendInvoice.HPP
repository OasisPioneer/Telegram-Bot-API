#ifndef TELEGRAMBOTAPI_METHOD_SENDINVOICE_HPP
#define TELEGRAMBOTAPI_METHOD_SENDINVOICE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/LabeledPrice.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include "TelegramBotAPI/Types/SuggestedPostParameters.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to send invoices. On success, the sent Message is returned.

class sendInvoice {
    public:
        struct Parameters {
            // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance.
            std::optional<bool> AllowPaidBroadcast{};

            // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Three-letter ISO 4217 currency code, see more on currencies. Pass “XTR” for payments in Telegram Stars.
            std::string Currency;

            // Product description, 1-255 characters
            std::string Description;

            // Identifier of the direct messages topic to which the message will be sent; required if the message is sent to a direct messages chat
            std::optional<long long> DirectMessagesTopicID{};

            // Sends the message silently. Users will receive a notification with no sound.
            std::optional<bool> DisableNotification{};

            // Pass True if the final price depends on the shipping method. Ignored for payments in Telegram Stars.
            std::optional<bool> IsFlexible{};

            // The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0. Not supported for payments in Telegram Stars.
            std::optional<long long> MaxTipAmount{};

            // Unique identifier of the message effect to be added to the message; for private chats only
            std::optional<std::string> MessageEffectID{};

            // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
            std::optional<long long> MessageThreadID{};

            // Pass True if you require the user's email address to complete the order. Ignored for payments in Telegram Stars.
            std::optional<bool> NeedEmail{};

            // Pass True if you require the user's full name to complete the order. Ignored for payments in Telegram Stars.
            std::optional<bool> NeedName{};

            // Pass True if you require the user's phone number to complete the order. Ignored for payments in Telegram Stars.
            std::optional<bool> NeedPhoneNumber{};

            // Pass True if you require the user's shipping address to complete the order. Ignored for payments in Telegram Stars.
            std::optional<bool> NeedShippingAddress{};

            // Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use it for your internal processes.
            std::string Payload;

            // Photo height
            std::optional<long long> PhotoHeight{};

            // Photo size in bytes
            std::optional<long long> PhotoSize{};

            // URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service. People like it better when they see what they are paying for.
            std::optional<std::string> PhotoURL{};

            // Photo width
            std::optional<long long> PhotoWidth{};

            // Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.). Must contain exactly one item for payments in Telegram Stars.
            std::vector<::TelegramBotAPI::Type::LabeledPrice> Prices;

            // Protects the contents of the sent message from forwarding and saving
            std::optional<bool> ProtectContent{};

            // JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.
            std::optional<std::string> ProviderData{};

            // Payment provider token, obtained via @BotFather. Pass an empty string for payments in Telegram Stars.
            std::optional<std::string> ProviderToken{};

            // A JSON-serialized object for an inline keyboard. If empty, one 'Pay total price' button will be shown. If not empty, the first button must be a Pay button.
            std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

            // Description of the message to reply to
            std::optional<::TelegramBotAPI::Type::ReplyParameters> ReplyParameters{};

            // Pass True if the user's email address should be sent to the provider. Ignored for payments in Telegram Stars.
            std::optional<bool> SendEmailToProvider{};

            // Pass True if the user's phone number should be sent to the provider. Ignored for payments in Telegram Stars.
            std::optional<bool> SendPhoneNumberToProvider{};

            // Unique deep-linking parameter. If left empty, forwarded copies of the sent message will have a Pay button, allowing multiple users to pay directly from the forwarded message, using the same invoice. If non-empty, forwarded copies of the sent message will have a URL button with a deep link to the bot (instead of a Pay button), with the value used as the start parameter.
            std::optional<std::string> StartParameter{};

            // A JSON-serialized object containing the parameters of the suggested post to send; for direct messages chats only. If the message is sent as a reply to another suggested post, then that suggested post is automatically declined.
            std::optional<::TelegramBotAPI::Type::SuggestedPostParameters> SuggestedPostParameters{};

            // A JSON-serialized Array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
            std::optional<std::vector<long long>> SuggestedTipAmounts{};

            // Product name, 1-32 characters
            std::string Title;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &CurrencyValue, const std::string &DescriptionValue, const std::string &PayloadValue, const std::vector<::TelegramBotAPI::Type::LabeledPrice> &PricesValue, const std::string &TitleValue)
                : ChatID(ChatIDValue), Currency(CurrencyValue), Description(DescriptionValue), Payload(PayloadValue), Prices(PricesValue), Title(TitleValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (AllowPaidBroadcast.has_value()) {
                    Object["allow_paid_broadcast"] = JSON::ToJson(AllowPaidBroadcast.value());
                }

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["currency"] = JSON::ToJson(Currency);

                Object["description"] = JSON::ToJson(Description);

                if (DirectMessagesTopicID.has_value()) {
                    Object["direct_messages_topic_id"] = JSON::ToJson(DirectMessagesTopicID.value());
                }

                if (DisableNotification.has_value()) {
                    Object["disable_notification"] = JSON::ToJson(DisableNotification.value());
                }

                if (IsFlexible.has_value()) {
                    Object["is_flexible"] = JSON::ToJson(IsFlexible.value());
                }

                if (MaxTipAmount.has_value()) {
                    Object["max_tip_amount"] = JSON::ToJson(MaxTipAmount.value());
                }

                if (MessageEffectID.has_value()) {
                    Object["message_effect_id"] = JSON::ToJson(MessageEffectID.value());
                }

                if (MessageThreadID.has_value()) {
                    Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
                }

                if (NeedEmail.has_value()) {
                    Object["need_email"] = JSON::ToJson(NeedEmail.value());
                }

                if (NeedName.has_value()) {
                    Object["need_name"] = JSON::ToJson(NeedName.value());
                }

                if (NeedPhoneNumber.has_value()) {
                    Object["need_phone_number"] = JSON::ToJson(NeedPhoneNumber.value());
                }

                if (NeedShippingAddress.has_value()) {
                    Object["need_shipping_address"] = JSON::ToJson(NeedShippingAddress.value());
                }

                Object["payload"] = JSON::ToJson(Payload);

                if (PhotoHeight.has_value()) {
                    Object["photo_height"] = JSON::ToJson(PhotoHeight.value());
                }

                if (PhotoSize.has_value()) {
                    Object["photo_size"] = JSON::ToJson(PhotoSize.value());
                }

                if (PhotoURL.has_value()) {
                    Object["photo_url"] = JSON::ToJson(PhotoURL.value());
                }

                if (PhotoWidth.has_value()) {
                    Object["photo_width"] = JSON::ToJson(PhotoWidth.value());
                }

                Object["prices"] = JSON::ToJson(Prices);

                if (ProtectContent.has_value()) {
                    Object["protect_content"] = JSON::ToJson(ProtectContent.value());
                }

                if (ProviderData.has_value()) {
                    Object["provider_data"] = JSON::ToJson(ProviderData.value());
                }

                if (ProviderToken.has_value()) {
                    Object["provider_token"] = JSON::ToJson(ProviderToken.value());
                }

                if (ReplyMarkup.has_value()) {
                    Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
                }

                if (ReplyParameters.has_value()) {
                    Object["reply_parameters"] = JSON::ToJson(ReplyParameters.value());
                }

                if (SendEmailToProvider.has_value()) {
                    Object["send_email_to_provider"] = JSON::ToJson(SendEmailToProvider.value());
                }

                if (SendPhoneNumberToProvider.has_value()) {
                    Object["send_phone_number_to_provider"] = JSON::ToJson(SendPhoneNumberToProvider.value());
                }

                if (StartParameter.has_value()) {
                    Object["start_parameter"] = JSON::ToJson(StartParameter.value());
                }

                if (SuggestedPostParameters.has_value()) {
                    Object["suggested_post_parameters"] = JSON::ToJson(SuggestedPostParameters.value());
                }

                if (SuggestedTipAmounts.has_value()) {
                    Object["suggested_tip_amounts"] = JSON::ToJson(SuggestedTipAmounts.value());
                }

                Object["title"] = JSON::ToJson(Title);

                return Object;
            }

            bool RequiresMultipart() const {
                return (AllowPaidBroadcast.has_value() && JSON::RequiresMultipart(AllowPaidBroadcast.value())) || JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(Currency) || JSON::RequiresMultipart(Description) || (DirectMessagesTopicID.has_value() && JSON::RequiresMultipart(DirectMessagesTopicID.value())) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || (IsFlexible.has_value() && JSON::RequiresMultipart(IsFlexible.value())) || (MaxTipAmount.has_value() && JSON::RequiresMultipart(MaxTipAmount.value())) || (MessageEffectID.has_value() && JSON::RequiresMultipart(MessageEffectID.value())) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (NeedEmail.has_value() && JSON::RequiresMultipart(NeedEmail.value())) || (NeedName.has_value() && JSON::RequiresMultipart(NeedName.value())) || (NeedPhoneNumber.has_value() && JSON::RequiresMultipart(NeedPhoneNumber.value())) || (NeedShippingAddress.has_value() && JSON::RequiresMultipart(NeedShippingAddress.value())) || JSON::RequiresMultipart(Payload) || (PhotoHeight.has_value() && JSON::RequiresMultipart(PhotoHeight.value())) || (PhotoSize.has_value() && JSON::RequiresMultipart(PhotoSize.value())) || (PhotoURL.has_value() && JSON::RequiresMultipart(PhotoURL.value())) || (PhotoWidth.has_value() && JSON::RequiresMultipart(PhotoWidth.value())) || JSON::RequiresMultipart(Prices) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || (ProviderData.has_value() && JSON::RequiresMultipart(ProviderData.value())) || (ProviderToken.has_value() && JSON::RequiresMultipart(ProviderToken.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (ReplyParameters.has_value() && JSON::RequiresMultipart(ReplyParameters.value())) || (SendEmailToProvider.has_value() && JSON::RequiresMultipart(SendEmailToProvider.value())) || (SendPhoneNumberToProvider.has_value() && JSON::RequiresMultipart(SendPhoneNumberToProvider.value())) || (StartParameter.has_value() && JSON::RequiresMultipart(StartParameter.value())) || (SuggestedPostParameters.has_value() && JSON::RequiresMultipart(SuggestedPostParameters.value())) || (SuggestedTipAmounts.has_value() && JSON::RequiresMultipart(SuggestedTipAmounts.value())) || JSON::RequiresMultipart(Title);
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
                    Form, "chat_id",
                    ChatID);

                JSON::AddMultipartField(
                    Form, "currency",
                    Currency);

                JSON::AddMultipartField(
                    Form, "description",
                    Description);

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

                if (IsFlexible.has_value()) {
                    JSON::AddMultipartField(
                        Form, "is_flexible",
                        IsFlexible.value());
                }

                if (MaxTipAmount.has_value()) {
                    JSON::AddMultipartField(
                        Form, "max_tip_amount",
                        MaxTipAmount.value());
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

                if (NeedEmail.has_value()) {
                    JSON::AddMultipartField(
                        Form, "need_email",
                        NeedEmail.value());
                }

                if (NeedName.has_value()) {
                    JSON::AddMultipartField(
                        Form, "need_name",
                        NeedName.value());
                }

                if (NeedPhoneNumber.has_value()) {
                    JSON::AddMultipartField(
                        Form, "need_phone_number",
                        NeedPhoneNumber.value());
                }

                if (NeedShippingAddress.has_value()) {
                    JSON::AddMultipartField(
                        Form, "need_shipping_address",
                        NeedShippingAddress.value());
                }

                JSON::AddMultipartField(
                    Form, "payload",
                    Payload);

                if (PhotoHeight.has_value()) {
                    JSON::AddMultipartField(
                        Form, "photo_height",
                        PhotoHeight.value());
                }

                if (PhotoSize.has_value()) {
                    JSON::AddMultipartField(
                        Form, "photo_size",
                        PhotoSize.value());
                }

                if (PhotoURL.has_value()) {
                    JSON::AddMultipartField(
                        Form, "photo_url",
                        PhotoURL.value());
                }

                if (PhotoWidth.has_value()) {
                    JSON::AddMultipartField(
                        Form, "photo_width",
                        PhotoWidth.value());
                }

                JSON::AddMultipartField(
                    Form, "prices",
                    Prices);

                if (ProtectContent.has_value()) {
                    JSON::AddMultipartField(
                        Form, "protect_content",
                        ProtectContent.value());
                }

                if (ProviderData.has_value()) {
                    JSON::AddMultipartField(
                        Form, "provider_data",
                        ProviderData.value());
                }

                if (ProviderToken.has_value()) {
                    JSON::AddMultipartField(
                        Form, "provider_token",
                        ProviderToken.value());
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

                if (SendEmailToProvider.has_value()) {
                    JSON::AddMultipartField(
                        Form, "send_email_to_provider",
                        SendEmailToProvider.value());
                }

                if (SendPhoneNumberToProvider.has_value()) {
                    JSON::AddMultipartField(
                        Form, "send_phone_number_to_provider",
                        SendPhoneNumberToProvider.value());
                }

                if (StartParameter.has_value()) {
                    JSON::AddMultipartField(
                        Form, "start_parameter",
                        StartParameter.value());
                }

                if (SuggestedPostParameters.has_value()) {
                    JSON::AddMultipartField(
                        Form, "suggested_post_parameters",
                        SuggestedPostParameters.value());
                }

                if (SuggestedTipAmounts.has_value()) {
                    JSON::AddMultipartField(
                        Form, "suggested_tip_amounts",
                        SuggestedTipAmounts.value());
                }

                JSON::AddMultipartField(
                    Form, "title",
                    Title);

                return Form;
            }

        };

        explicit sendInvoice(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::Message SendInvoice(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::Message>("sendInvoice",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::Message>("sendInvoice",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::Message SendInvoice(std::variant<long long, std::string> ChatID, std::string Currency, std::string Description, std::string Payload, std::vector<::TelegramBotAPI::Type::LabeledPrice> Prices, std::string Title) {
            Parameters ParametersValue(
                ChatID,
                Currency,
                Description,
                Payload,
                Prices,
                Title
            );

            return SendInvoice(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDINVOICE_HPP
