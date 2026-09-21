#ifndef TELEGRAMBOTAPI_METHOD_CREATECHATSUBSCRIPTIONINVITELINK_HPP
#define TELEGRAMBOTAPI_METHOD_CREATECHATSUBSCRIPTIONINVITELINK_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatInviteLink.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to create a subscription invite link for a channel chat. The bot must have the can_invite_users administrator rights. The link can be edited using the method editChatSubscriptionInviteLink or revoked using the method revokeChatInviteLink. Returns the new invite link as a ChatInviteLink object.

struct createChatSubscriptionInviteLinkParameters {
    // Unique identifier for the target channel chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Invite link name; 0-32 characters
    std::optional<std::string> Name{};

    // The number of seconds the subscription will be active for before the next payment. Currently, it must always be 2592000 (30 days).
    long long SubscriptionPeriod;

    // The amount of Telegram Stars a user must pay initially and after each subsequent subscription period to be a member of the chat; 1-10000
    long long SubscriptionPrice;

    createChatSubscriptionInviteLinkParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &SubscriptionPeriodValue, const long long &SubscriptionPriceValue)
        : ChatID(ChatIDValue), SubscriptionPeriod(SubscriptionPeriodValue), SubscriptionPrice(SubscriptionPriceValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (Name.has_value()) {
            Object["name"] = JSON::ToJson(Name.value());
        }

        Object["subscription_period"] = JSON::ToJson(SubscriptionPeriod);

        Object["subscription_price"] = JSON::ToJson(SubscriptionPrice);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || (Name.has_value() && JSON::RequiresMultipart(Name.value())) || JSON::RequiresMultipart(SubscriptionPeriod) || JSON::RequiresMultipart(SubscriptionPrice);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (Name.has_value()) {
            JSON::AddMultipartField(
                Form, "name",
                Name.value());
        }

        JSON::AddMultipartField(
            Form, "subscription_period",
            SubscriptionPeriod);

        JSON::AddMultipartField(
            Form, "subscription_price",
            SubscriptionPrice);

        return Form;
    }

};

class createChatSubscriptionInviteLink {
public:
    using Parameters = createChatSubscriptionInviteLinkParameters;
    using ReturnType = ::TelegramBotAPI::Type::ChatInviteLink;

    static constexpr const char *Name() noexcept {
        return "createChatSubscriptionInviteLink";
    }

    explicit createChatSubscriptionInviteLink(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::ChatInviteLink CreateChatSubscriptionInviteLink(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::ChatInviteLink>(
                "createChatSubscriptionInviteLink",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::ChatInviteLink>(
            "createChatSubscriptionInviteLink",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::ChatInviteLink CreateChatSubscriptionInviteLink(std::variant<long long, std::string> ChatID, long long SubscriptionPeriod, long long SubscriptionPrice) {
        Parameters ParametersValue(
        ChatID,
        SubscriptionPeriod,
        SubscriptionPrice
        );

        return CreateChatSubscriptionInviteLink(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_CREATECHATSUBSCRIPTIONINVITELINK_HPP
