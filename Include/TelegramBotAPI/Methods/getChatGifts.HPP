#ifndef TELEGRAMBOTAPI_METHOD_GETCHATGIFTS_HPP
#define TELEGRAMBOTAPI_METHOD_GETCHATGIFTS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/OwnedGifts.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Returns the gifts owned by a chat. Returns OwnedGifts on success.

struct getChatGiftsParameters {
    // Unique identifier for the target chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Pass True to exclude gifts that were assigned from the TON blockchain and can't be resold or transferred in Telegram
    std::optional<bool> ExcludeFromBlockchain{};

    // Pass True to exclude gifts that can be purchased a limited number of times and can't be upgraded to unique
    std::optional<bool> ExcludeLimitedNonUpgradable{};

    // Pass True to exclude gifts that can be purchased a limited number of times and can be upgraded to unique
    std::optional<bool> ExcludeLimitedUpgradable{};

    // Pass True to exclude gifts that are saved to the chat's profile page. Always False, unless the bot has the can_post_messages administrator right in the channel.
    std::optional<bool> ExcludeSaved{};

    // Pass True to exclude unique gifts
    std::optional<bool> ExcludeUnique{};

    // Pass True to exclude gifts that can be purchased an unlimited number of times
    std::optional<bool> ExcludeUnlimited{};

    // Pass True to exclude gifts that aren't saved to the chat's profile page. Always True, unless the bot has the can_post_messages administrator right in the channel.
    std::optional<bool> ExcludeUnsaved{};

    // The maximum number of gifts to be returned; 1-100. Defaults to 100.
    std::optional<long long> Limit{};

    // Offset of the first entry to return as received from the previous request; use an empty string to get the first chunk of results
    std::optional<std::string> Offset{};

    // Pass True to sort results by gift price instead of send date. Sorting is applied before pagination.
    std::optional<bool> SortByPrice{};

    getChatGiftsParameters(const std::variant<long long, std::string> &ChatIDValue)
        : ChatID(ChatIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (ExcludeFromBlockchain.has_value()) {
            Object["exclude_from_blockchain"] = JSON::ToJson(ExcludeFromBlockchain.value());
        }

        if (ExcludeLimitedNonUpgradable.has_value()) {
            Object["exclude_limited_non_upgradable"] = JSON::ToJson(ExcludeLimitedNonUpgradable.value());
        }

        if (ExcludeLimitedUpgradable.has_value()) {
            Object["exclude_limited_upgradable"] = JSON::ToJson(ExcludeLimitedUpgradable.value());
        }

        if (ExcludeSaved.has_value()) {
            Object["exclude_saved"] = JSON::ToJson(ExcludeSaved.value());
        }

        if (ExcludeUnique.has_value()) {
            Object["exclude_unique"] = JSON::ToJson(ExcludeUnique.value());
        }

        if (ExcludeUnlimited.has_value()) {
            Object["exclude_unlimited"] = JSON::ToJson(ExcludeUnlimited.value());
        }

        if (ExcludeUnsaved.has_value()) {
            Object["exclude_unsaved"] = JSON::ToJson(ExcludeUnsaved.value());
        }

        if (Limit.has_value()) {
            Object["limit"] = JSON::ToJson(Limit.value());
        }

        if (Offset.has_value()) {
            Object["offset"] = JSON::ToJson(Offset.value());
        }

        if (SortByPrice.has_value()) {
            Object["sort_by_price"] = JSON::ToJson(SortByPrice.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || (ExcludeFromBlockchain.has_value() && JSON::RequiresMultipart(ExcludeFromBlockchain.value())) || (ExcludeLimitedNonUpgradable.has_value() && JSON::RequiresMultipart(ExcludeLimitedNonUpgradable.value())) || (ExcludeLimitedUpgradable.has_value() && JSON::RequiresMultipart(ExcludeLimitedUpgradable.value())) || (ExcludeSaved.has_value() && JSON::RequiresMultipart(ExcludeSaved.value())) || (ExcludeUnique.has_value() && JSON::RequiresMultipart(ExcludeUnique.value())) || (ExcludeUnlimited.has_value() && JSON::RequiresMultipart(ExcludeUnlimited.value())) || (ExcludeUnsaved.has_value() && JSON::RequiresMultipart(ExcludeUnsaved.value())) || (Limit.has_value() && JSON::RequiresMultipart(Limit.value())) || (Offset.has_value() && JSON::RequiresMultipart(Offset.value())) || (SortByPrice.has_value() && JSON::RequiresMultipart(SortByPrice.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (ExcludeFromBlockchain.has_value()) {
            JSON::AddMultipartField(
                Form, "exclude_from_blockchain",
                ExcludeFromBlockchain.value());
        }

        if (ExcludeLimitedNonUpgradable.has_value()) {
            JSON::AddMultipartField(
                Form, "exclude_limited_non_upgradable",
                ExcludeLimitedNonUpgradable.value());
        }

        if (ExcludeLimitedUpgradable.has_value()) {
            JSON::AddMultipartField(
                Form, "exclude_limited_upgradable",
                ExcludeLimitedUpgradable.value());
        }

        if (ExcludeSaved.has_value()) {
            JSON::AddMultipartField(
                Form, "exclude_saved",
                ExcludeSaved.value());
        }

        if (ExcludeUnique.has_value()) {
            JSON::AddMultipartField(
                Form, "exclude_unique",
                ExcludeUnique.value());
        }

        if (ExcludeUnlimited.has_value()) {
            JSON::AddMultipartField(
                Form, "exclude_unlimited",
                ExcludeUnlimited.value());
        }

        if (ExcludeUnsaved.has_value()) {
            JSON::AddMultipartField(
                Form, "exclude_unsaved",
                ExcludeUnsaved.value());
        }

        if (Limit.has_value()) {
            JSON::AddMultipartField(
                Form, "limit",
                Limit.value());
        }

        if (Offset.has_value()) {
            JSON::AddMultipartField(
                Form, "offset",
                Offset.value());
        }

        if (SortByPrice.has_value()) {
            JSON::AddMultipartField(
                Form, "sort_by_price",
                SortByPrice.value());
        }

        return Form;
    }

};

class getChatGifts {
public:
    using Parameters = getChatGiftsParameters;
    using ReturnType = ::TelegramBotAPI::Type::OwnedGifts;

    static constexpr const char *Name() noexcept {
        return "getChatGifts";
    }

    explicit getChatGifts(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::OwnedGifts GetChatGifts(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::OwnedGifts>(
                "getChatGifts",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::OwnedGifts>(
            "getChatGifts",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::OwnedGifts GetChatGifts(std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        ChatID
        );

        return GetChatGifts(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETCHATGIFTS_HPP
