#ifndef TELEGRAMBOTAPI_METHOD_GIFTPREMIUMSUBSCRIPTION_HPP
#define TELEGRAMBOTAPI_METHOD_GIFTPREMIUMSUBSCRIPTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Gifts a Telegram Premium subscription to the given user. Returns True on success.

struct giftPremiumSubscriptionParameters {
    // Number of months the Telegram Premium subscription will be active for the user; must be one of 3, 6, or 12
    long long MonthCount;

    // Number of Telegram Stars to pay for the Telegram Premium subscription; must be 1000 for 3 months, 1500 for 6 months, and 2500 for 12 months
    long long StarCount;

    // Text that will be shown along with the service message about the subscription; 0-128 characters
    std::optional<std::string> Text{};

    // A JSON-serialized list of special entities that appear in the gift text. It can be specified instead of text_parse_mode. Entities other than “bold”, “italic”, “underline”, “strikethrough”, “spoiler”, “custom_emoji”, and “date_time” are ignored.
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> TextEntities{};

    // Mode for parsing entities in the text. See formatting options for more details. Entities other than “bold”, “italic”, “underline”, “strikethrough”, “spoiler”, “custom_emoji”, and “date_time” are ignored.
    std::optional<std::string> TextParseMode{};

    // Unique identifier of the target user who will receive a Telegram Premium subscription
    long long UserID;

    giftPremiumSubscriptionParameters(const long long &MonthCountValue, const long long &StarCountValue, const long long &UserIDValue)
        : MonthCount(MonthCountValue), StarCount(StarCountValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["month_count"] = JSON::ToJson(MonthCount);

        Object["star_count"] = JSON::ToJson(StarCount);

        if (Text.has_value()) {
            Object["text"] = JSON::ToJson(Text.value());
        }

        if (TextEntities.has_value()) {
            Object["text_entities"] = JSON::ToJson(TextEntities.value());
        }

        if (TextParseMode.has_value()) {
            Object["text_parse_mode"] = JSON::ToJson(TextParseMode.value());
        }

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(MonthCount) || JSON::RequiresMultipart(StarCount) || (Text.has_value() && JSON::RequiresMultipart(Text.value())) || (TextEntities.has_value() && JSON::RequiresMultipart(TextEntities.value())) || (TextParseMode.has_value() && JSON::RequiresMultipart(TextParseMode.value())) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "month_count",
            MonthCount);

        JSON::AddMultipartField(
            Form, "star_count",
            StarCount);

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

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class giftPremiumSubscription {
public:
    using Parameters = giftPremiumSubscriptionParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "giftPremiumSubscription";
    }

    explicit giftPremiumSubscription(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool GiftPremiumSubscription(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "giftPremiumSubscription",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "giftPremiumSubscription",
            ParametersValue.ToJson()
        );
    }

    bool GiftPremiumSubscription(long long MonthCount, long long StarCount, long long UserID) {
        Parameters ParametersValue(
        MonthCount,
        StarCount,
        UserID
        );

        return GiftPremiumSubscription(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GIFTPREMIUMSUBSCRIPTION_HPP
