#ifndef TELEGRAMBOTAPI_METHOD_LOGOUT_HPP
#define TELEGRAMBOTAPI_METHOD_LOGOUT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to log out from the cloud Bot API server before launching the bot locally. You must log out the bot before running it locally, otherwise there is no guarantee that the bot will receive updates. After a successful call, you can immediately log in on a local server, but will not be able to log in back to the cloud Bot API server for 10 minutes. Returns True on success. Requires no parameters.

struct logOutParameters {
    JSON::Object ToJson() const {
        JSON::Object Object;

        return Object;
    }

    bool RequiresMultipart() const {
        return false;
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        return Form;
    }

};

class logOut {
public:
    using Parameters = logOutParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "logOut";
    }

    explicit logOut(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool LogOut(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "logOut",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "logOut",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_LOGOUT_HPP
