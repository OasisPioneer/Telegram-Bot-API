#ifndef TELEGRAMBOTAPI_METHOD_GETAVAILABLEGIFTS_HPP
#define TELEGRAMBOTAPI_METHOD_GETAVAILABLEGIFTS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Gifts.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Returns the list of gifts that can be sent by the bot to users and channel chats. Requires no parameters. Returns a Gifts object.

struct getAvailableGiftsParameters {
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

class getAvailableGifts {
public:
    using Parameters = getAvailableGiftsParameters;
    using ReturnType = ::TelegramBotAPI::Type::Gifts;

    static constexpr const char *Name() noexcept {
        return "getAvailableGifts";
    }

    explicit getAvailableGifts(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::Gifts GetAvailableGifts(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::Gifts>(
                "getAvailableGifts",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::Gifts>(
            "getAvailableGifts",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETAVAILABLEGIFTS_HPP
