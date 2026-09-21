#ifndef TELEGRAMBOTAPI_METHOD_GETUPDATES_HPP
#define TELEGRAMBOTAPI_METHOD_GETUPDATES_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Update.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to receive incoming updates using long polling (wiki). Returns an Array of Update objects.

struct getUpdatesParameters {
    // A JSON-serialized list of the update types you want your bot to receive. For example, specify ["message", "edited_channel_post", "callback_query"] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member, message_reaction, and message_reaction_count (default). If not specified, the previous setting will be used.Please note that this parameter doesn't affect updates created before the call to getUpdates, so unwanted updates may be received for a short period of time.
    std::optional<std::vector<std::string>> AllowedUpdates{};

    // Limits the number of updates to be retrieved. Values between 1-100 are accepted. Defaults to 100.
    std::optional<long long> Limit{};

    // Identifier of the first update to be returned. Must be greater by one than the highest among the identifiers of previously received updates. By default, updates starting with the earliest unconfirmed update are returned. An update is considered confirmed as soon as getUpdates is called with an offset higher than its update_id. The negative offset can be specified to retrieve updates starting from -offset update from the end of the updates queue. All previous updates will be forgotten.
    std::optional<long long> Offset{};

    // Timeout in seconds for long polling. Defaults to 0, i.e. usual short polling. Should be positive, short polling should be used for testing purposes only.
    std::optional<long long> Timeout{};

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (AllowedUpdates.has_value()) {
            Object["allowed_updates"] = JSON::ToJson(AllowedUpdates.value());
        }

        if (Limit.has_value()) {
            Object["limit"] = JSON::ToJson(Limit.value());
        }

        if (Offset.has_value()) {
            Object["offset"] = JSON::ToJson(Offset.value());
        }

        if (Timeout.has_value()) {
            Object["timeout"] = JSON::ToJson(Timeout.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (AllowedUpdates.has_value() && JSON::RequiresMultipart(AllowedUpdates.value())) || (Limit.has_value() && JSON::RequiresMultipart(Limit.value())) || (Offset.has_value() && JSON::RequiresMultipart(Offset.value())) || (Timeout.has_value() && JSON::RequiresMultipart(Timeout.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (AllowedUpdates.has_value()) {
            JSON::AddMultipartField(
                Form, "allowed_updates",
                AllowedUpdates.value());
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

        if (Timeout.has_value()) {
            JSON::AddMultipartField(
                Form, "timeout",
                Timeout.value());
        }

        return Form;
    }

};

class getUpdates {
public:
    using Parameters = getUpdatesParameters;
    using ReturnType = std::vector<::TelegramBotAPI::Type::Update>;

    static constexpr const char *Name() noexcept {
        return "getUpdates";
    }

    explicit getUpdates(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::vector<::TelegramBotAPI::Type::Update> GetUpdates(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::vector<::TelegramBotAPI::Type::Update>>(
                "getUpdates",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::vector<::TelegramBotAPI::Type::Update>>(
            "getUpdates",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETUPDATES_HPP
