#ifndef TELEGRAMBOTAPI_METHOD_GETBUSINESSCONNECTION_HPP
#define TELEGRAMBOTAPI_METHOD_GETBUSINESSCONNECTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/BusinessConnection.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to get information about the connection of the bot with a business account. Returns a BusinessConnection object on success.

struct getBusinessConnectionParameters {
    // Unique identifier of the business connection
    std::string BusinessConnectionID;

    getBusinessConnectionParameters(const std::string &BusinessConnectionIDValue)
        : BusinessConnectionID(BusinessConnectionIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(BusinessConnectionID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "business_connection_id",
            BusinessConnectionID);

        return Form;
    }

};

class getBusinessConnection {
public:
    using Parameters = getBusinessConnectionParameters;
    using ReturnType = ::TelegramBotAPI::Type::BusinessConnection;

    static constexpr const char *Name() noexcept {
        return "getBusinessConnection";
    }

    explicit getBusinessConnection(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::BusinessConnection GetBusinessConnection(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::BusinessConnection>(
                "getBusinessConnection",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::BusinessConnection>(
            "getBusinessConnection",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::BusinessConnection GetBusinessConnection(std::string BusinessConnectionID) {
        Parameters ParametersValue(
        BusinessConnectionID
        );

        return GetBusinessConnection(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETBUSINESSCONNECTION_HPP
