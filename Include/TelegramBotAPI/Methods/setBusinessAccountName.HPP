#ifndef TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTNAME_HPP
#define TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTNAME_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Changes the first and last name of a managed business account. Requires the can_change_name business bot right. Returns True on success.

struct setBusinessAccountNameParameters {
    // Unique identifier of the business connection
    std::string BusinessConnectionID;

    // The new value of the first name for the business account; 1-64 characters
    std::string FirstName;

    // The new value of the last name for the business account; 0-64 characters
    std::optional<std::string> LastName{};

    setBusinessAccountNameParameters(const std::string &BusinessConnectionIDValue, const std::string &FirstNameValue)
        : BusinessConnectionID(BusinessConnectionIDValue), FirstName(FirstNameValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

        Object["first_name"] = JSON::ToJson(FirstName);

        if (LastName.has_value()) {
            Object["last_name"] = JSON::ToJson(LastName.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(FirstName) || (LastName.has_value() && JSON::RequiresMultipart(LastName.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "business_connection_id",
            BusinessConnectionID);

        JSON::AddMultipartField(
            Form, "first_name",
            FirstName);

        if (LastName.has_value()) {
            JSON::AddMultipartField(
                Form, "last_name",
                LastName.value());
        }

        return Form;
    }

};

class setBusinessAccountName {
public:
    using Parameters = setBusinessAccountNameParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setBusinessAccountName";
    }

    explicit setBusinessAccountName(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetBusinessAccountName(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setBusinessAccountName",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setBusinessAccountName",
            ParametersValue.ToJson()
        );
    }

    bool SetBusinessAccountName(std::string BusinessConnectionID, std::string FirstName) {
        Parameters ParametersValue(
        BusinessConnectionID,
        FirstName
        );

        return SetBusinessAccountName(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTNAME_HPP
