#ifndef TELEGRAMBOTAPI_METHOD_GETME_HPP
#define TELEGRAMBOTAPI_METHOD_GETME_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // A simple method for testing your bot's authentication token. Requires no parameters. Returns basic information about the bot in form of a User object.

struct getMeParameters {
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

class getMe {
public:
    using Parameters = getMeParameters;
    using ReturnType = ::TelegramBotAPI::Type::User;

    static constexpr const char *Name() noexcept {
        return "getMe";
    }

    explicit getMe(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::User GetMe(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::User>(
                "getMe",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::User>(
            "getMe",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETME_HPP
