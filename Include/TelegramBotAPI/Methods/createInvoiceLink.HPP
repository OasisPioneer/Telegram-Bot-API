#ifndef TELEGRAMBOTAPI_METHOD_CREATEINVOICELINK_HPP
#define TELEGRAMBOTAPI_METHOD_CREATEINVOICELINK_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/LabeledPrice.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to create a link for an invoice. Returns the created invoice link as String on success.

struct createInvoiceLinkParameters {
    // Unique identifier of the business connection on behalf of which the link will be created. For payments in Telegram Stars only.
    std::optional<std::string> BusinessConnectionID{};

    // Three-letter ISO 4217 currency code, see more on currencies. Pass “XTR” for payments in Telegram Stars.
    std::string Currency;

    // Product description, 1-255 characters
    std::string Description;

    // Pass True if the final price depends on the shipping method. Ignored for payments in Telegram Stars.
    std::optional<bool> IsFlexible{};

    // The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0. Not supported for payments in Telegram Stars.
    std::optional<long long> MaxTipAmount{};

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

    // URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service.
    std::optional<std::string> PhotoURL{};

    // Photo width
    std::optional<long long> PhotoWidth{};

    // Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.). Must contain exactly one item for payments in Telegram Stars.
    std::vector<::TelegramBotAPI::Type::LabeledPrice> Prices;

    // JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.
    std::optional<std::string> ProviderData{};

    // Payment provider token, obtained via @BotFather. Pass an empty string for payments in Telegram Stars.
    std::optional<std::string> ProviderToken{};

    // Pass True if the user's email address should be sent to the provider. Ignored for payments in Telegram Stars.
    std::optional<bool> SendEmailToProvider{};

    // Pass True if the user's phone number should be sent to the provider. Ignored for payments in Telegram Stars.
    std::optional<bool> SendPhoneNumberToProvider{};

    // The number of seconds the subscription will be active for before the next payment. The currency must be set to “XTR” (Telegram Stars) if the parameter is used. Currently, it must always be 2592000 (30 days) if specified. Any number of subscriptions can be active for a given bot at the same time, including multiple concurrent subscriptions from the same user. Subscription price must no exceed 10000 Telegram Stars.
    std::optional<long long> SubscriptionPeriod{};

    // A JSON-serialized Array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
    std::optional<std::vector<long long>> SuggestedTipAmounts{};

    // Product name, 1-32 characters
    std::string Title;

    createInvoiceLinkParameters(const std::string &CurrencyValue, const std::string &DescriptionValue, const std::string &PayloadValue, const std::vector<::TelegramBotAPI::Type::LabeledPrice> &PricesValue, const std::string &TitleValue)
        : Currency(CurrencyValue), Description(DescriptionValue), Payload(PayloadValue), Prices(PricesValue), Title(TitleValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (BusinessConnectionID.has_value()) {
            Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
        }

        Object["currency"] = JSON::ToJson(Currency);

        Object["description"] = JSON::ToJson(Description);

        if (IsFlexible.has_value()) {
            Object["is_flexible"] = JSON::ToJson(IsFlexible.value());
        }

        if (MaxTipAmount.has_value()) {
            Object["max_tip_amount"] = JSON::ToJson(MaxTipAmount.value());
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

        if (ProviderData.has_value()) {
            Object["provider_data"] = JSON::ToJson(ProviderData.value());
        }

        if (ProviderToken.has_value()) {
            Object["provider_token"] = JSON::ToJson(ProviderToken.value());
        }

        if (SendEmailToProvider.has_value()) {
            Object["send_email_to_provider"] = JSON::ToJson(SendEmailToProvider.value());
        }

        if (SendPhoneNumberToProvider.has_value()) {
            Object["send_phone_number_to_provider"] = JSON::ToJson(SendPhoneNumberToProvider.value());
        }

        if (SubscriptionPeriod.has_value()) {
            Object["subscription_period"] = JSON::ToJson(SubscriptionPeriod.value());
        }

        if (SuggestedTipAmounts.has_value()) {
            Object["suggested_tip_amounts"] = JSON::ToJson(SuggestedTipAmounts.value());
        }

        Object["title"] = JSON::ToJson(Title);

        return Object;
    }

    bool RequiresMultipart() const {
        return (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || JSON::RequiresMultipart(Currency) || JSON::RequiresMultipart(Description) || (IsFlexible.has_value() && JSON::RequiresMultipart(IsFlexible.value())) || (MaxTipAmount.has_value() && JSON::RequiresMultipart(MaxTipAmount.value())) || (NeedEmail.has_value() && JSON::RequiresMultipart(NeedEmail.value())) || (NeedName.has_value() && JSON::RequiresMultipart(NeedName.value())) || (NeedPhoneNumber.has_value() && JSON::RequiresMultipart(NeedPhoneNumber.value())) || (NeedShippingAddress.has_value() && JSON::RequiresMultipart(NeedShippingAddress.value())) || JSON::RequiresMultipart(Payload) || (PhotoHeight.has_value() && JSON::RequiresMultipart(PhotoHeight.value())) || (PhotoSize.has_value() && JSON::RequiresMultipart(PhotoSize.value())) || (PhotoURL.has_value() && JSON::RequiresMultipart(PhotoURL.value())) || (PhotoWidth.has_value() && JSON::RequiresMultipart(PhotoWidth.value())) || JSON::RequiresMultipart(Prices) || (ProviderData.has_value() && JSON::RequiresMultipart(ProviderData.value())) || (ProviderToken.has_value() && JSON::RequiresMultipart(ProviderToken.value())) || (SendEmailToProvider.has_value() && JSON::RequiresMultipart(SendEmailToProvider.value())) || (SendPhoneNumberToProvider.has_value() && JSON::RequiresMultipart(SendPhoneNumberToProvider.value())) || (SubscriptionPeriod.has_value() && JSON::RequiresMultipart(SubscriptionPeriod.value())) || (SuggestedTipAmounts.has_value() && JSON::RequiresMultipart(SuggestedTipAmounts.value())) || JSON::RequiresMultipart(Title);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (BusinessConnectionID.has_value()) {
            JSON::AddMultipartField(
                Form, "business_connection_id",
                BusinessConnectionID.value());
        }

        JSON::AddMultipartField(
            Form, "currency",
            Currency);

        JSON::AddMultipartField(
            Form, "description",
            Description);

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

        if (SubscriptionPeriod.has_value()) {
            JSON::AddMultipartField(
                Form, "subscription_period",
                SubscriptionPeriod.value());
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

class createInvoiceLink {
public:
    using Parameters = createInvoiceLinkParameters;
    using ReturnType = std::string;

    static constexpr const char *Name() noexcept {
        return "createInvoiceLink";
    }

    explicit createInvoiceLink(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::string CreateInvoiceLink(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::string>(
                "createInvoiceLink",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::string>(
            "createInvoiceLink",
            ParametersValue.ToJson()
        );
    }

    std::string CreateInvoiceLink(std::string Currency, std::string Description, std::string Payload, std::vector<::TelegramBotAPI::Type::LabeledPrice> Prices, std::string Title) {
        Parameters ParametersValue(
        Currency,
        Description,
        Payload,
        Prices,
        Title
        );

        return CreateInvoiceLink(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_CREATEINVOICELINK_HPP
