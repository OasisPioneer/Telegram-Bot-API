#ifndef TELEGRAMBOTAPI_METHOD_REMOVEUSERVERIFICATION_HPP
#define TELEGRAMBOTAPI_METHOD_REMOVEUSERVERIFICATION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Removes verification from a user who is currently verified on behalf of the organization represented by the bot. Returns True on success.

struct removeUserVerificationParameters {
    // Unique identifier of the target user
    long long UserID;

    removeUserVerificationParameters(const long long &UserIDValue)
        : UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class removeUserVerification {
public:
    using Parameters = removeUserVerificationParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "removeUserVerification";
    }

    explicit removeUserVerification(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool RemoveUserVerification(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "removeUserVerification",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "removeUserVerification",
            ParametersValue.ToJson()
        );
    }

    bool RemoveUserVerification(long long UserID) {
        Parameters ParametersValue(
        UserID
        );

        return RemoveUserVerification(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_REMOVEUSERVERIFICATION_HPP
