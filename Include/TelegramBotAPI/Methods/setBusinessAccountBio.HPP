#ifndef TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTBIO_HPP
#define TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTBIO_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Changes the bio of a managed business account. Requires the can_change_bio business bot right. Returns True on success.

struct setBusinessAccountBioParameters {
    // The new value of the bio for the business account; 0-140 characters
    std::optional<std::string> Bio{};

    // Unique identifier of the business connection
    std::string BusinessConnectionID;

    setBusinessAccountBioParameters(const std::string &BusinessConnectionIDValue)
        : BusinessConnectionID(BusinessConnectionIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (Bio.has_value()) {
            Object["bio"] = JSON::ToJson(Bio.value());
        }

        Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

        return Object;
    }

    bool RequiresMultipart() const {
        return (Bio.has_value() && JSON::RequiresMultipart(Bio.value())) || JSON::RequiresMultipart(BusinessConnectionID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (Bio.has_value()) {
            JSON::AddMultipartField(
                Form, "bio",
                Bio.value());
        }

        JSON::AddMultipartField(
            Form, "business_connection_id",
            BusinessConnectionID);

        return Form;
    }

};

class setBusinessAccountBio {
public:
    using Parameters = setBusinessAccountBioParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setBusinessAccountBio";
    }

    explicit setBusinessAccountBio(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetBusinessAccountBio(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setBusinessAccountBio",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setBusinessAccountBio",
            ParametersValue.ToJson()
        );
    }

    bool SetBusinessAccountBio(std::string BusinessConnectionID) {
        Parameters ParametersValue(
        BusinessConnectionID
        );

        return SetBusinessAccountBio(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTBIO_HPP
