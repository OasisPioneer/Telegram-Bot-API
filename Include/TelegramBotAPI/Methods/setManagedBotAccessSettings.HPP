#ifndef TELEGRAMBOTAPI_METHOD_SETMANAGEDBOTACCESSSETTINGS_HPP
#define TELEGRAMBOTAPI_METHOD_SETMANAGEDBOTACCESSSETTINGS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to change the access settings of a managed bot. Returns True on success.

struct setManagedBotAccessSettingsParameters {
    // A JSON-serialized list of up to 10 identifiers of users who will have access to the bot in addition to its owner. Ignored if is_access_restricted is False.
    std::optional<std::vector<long long>> AddedUserIDs{};

    // Pass True if only selected users can access the bot. The bot's owner can always access it.
    bool IsAccessRestricted;

    // User identifier of the managed bot whose access settings will be changed
    long long UserID;

    setManagedBotAccessSettingsParameters(const bool &IsAccessRestrictedValue, const long long &UserIDValue)
        : IsAccessRestricted(IsAccessRestrictedValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (AddedUserIDs.has_value()) {
            Object["added_user_ids"] = JSON::ToJson(AddedUserIDs.value());
        }

        Object["is_access_restricted"] = JSON::ToJson(IsAccessRestricted);

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return (AddedUserIDs.has_value() && JSON::RequiresMultipart(AddedUserIDs.value())) || JSON::RequiresMultipart(IsAccessRestricted) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (AddedUserIDs.has_value()) {
            JSON::AddMultipartField(
                Form, "added_user_ids",
                AddedUserIDs.value());
        }

        JSON::AddMultipartField(
            Form, "is_access_restricted",
            IsAccessRestricted);

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class setManagedBotAccessSettings {
public:
    using Parameters = setManagedBotAccessSettingsParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setManagedBotAccessSettings";
    }

    explicit setManagedBotAccessSettings(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetManagedBotAccessSettings(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setManagedBotAccessSettings",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setManagedBotAccessSettings",
            ParametersValue.ToJson()
        );
    }

    bool SetManagedBotAccessSettings(bool IsAccessRestricted, long long UserID) {
        Parameters ParametersValue(
        IsAccessRestricted,
        UserID
        );

        return SetManagedBotAccessSettings(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETMANAGEDBOTACCESSSETTINGS_HPP
