#ifndef TELEGRAMBOTAPI_METHOD_REPLACEMANAGEDBOTTOKEN_HPP
#define TELEGRAMBOTAPI_METHOD_REPLACEMANAGEDBOTTOKEN_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to revoke the current token of a managed bot and generate a new one. Returns the new token as String on success.

struct replaceManagedBotTokenParameters {
    // User identifier of the managed bot whose token will be replaced
    long long UserID;

    replaceManagedBotTokenParameters(const long long &UserIDValue)
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

class replaceManagedBotToken {
public:
    using Parameters = replaceManagedBotTokenParameters;
    using ReturnType = std::string;

    static constexpr const char *Name() noexcept {
        return "replaceManagedBotToken";
    }

    explicit replaceManagedBotToken(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::string ReplaceManagedBotToken(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::string>(
                "replaceManagedBotToken",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::string>(
            "replaceManagedBotToken",
            ParametersValue.ToJson()
        );
    }

    std::string ReplaceManagedBotToken(long long UserID) {
        Parameters ParametersValue(
        UserID
        );

        return ReplaceManagedBotToken(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_REPLACEMANAGEDBOTTOKEN_HPP
