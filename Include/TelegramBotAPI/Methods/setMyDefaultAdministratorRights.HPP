#ifndef TELEGRAMBOTAPI_METHOD_SETMYDEFAULTADMINISTRATORRIGHTS_HPP
#define TELEGRAMBOTAPI_METHOD_SETMYDEFAULTADMINISTRATORRIGHTS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatAdministratorRights.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to change the default administrator rights requested by the bot when it's added as an administrator to groups or channels. These rights will be suggested to users, but they are free to modify the list before adding the bot. Returns True on success.

struct setMyDefaultAdministratorRightsParameters {
    // Pass True to change the default administrator rights of the bot in channels. Otherwise, the default administrator rights of the bot for groups and supergroups will be changed.
    std::optional<bool> ForChannels{};

    // A JSON-serialized object describing new default administrator rights. If not specified, the default administrator rights will be cleared.
    std::optional<::TelegramBotAPI::Type::ChatAdministratorRights> Rights{};

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (ForChannels.has_value()) {
            Object["for_channels"] = JSON::ToJson(ForChannels.value());
        }

        if (Rights.has_value()) {
            Object["rights"] = JSON::ToJson(Rights.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (ForChannels.has_value() && JSON::RequiresMultipart(ForChannels.value())) || (Rights.has_value() && JSON::RequiresMultipart(Rights.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (ForChannels.has_value()) {
            JSON::AddMultipartField(
                Form, "for_channels",
                ForChannels.value());
        }

        if (Rights.has_value()) {
            JSON::AddMultipartField(
                Form, "rights",
                Rights.value());
        }

        return Form;
    }

};

class setMyDefaultAdministratorRights {
public:
    using Parameters = setMyDefaultAdministratorRightsParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setMyDefaultAdministratorRights";
    }

    explicit setMyDefaultAdministratorRights(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetMyDefaultAdministratorRights(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setMyDefaultAdministratorRights",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setMyDefaultAdministratorRights",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETMYDEFAULTADMINISTRATORRIGHTS_HPP
