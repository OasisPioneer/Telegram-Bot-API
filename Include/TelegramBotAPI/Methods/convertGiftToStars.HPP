#ifndef TELEGRAMBOTAPI_METHOD_CONVERTGIFTTOSTARS_HPP
#define TELEGRAMBOTAPI_METHOD_CONVERTGIFTTOSTARS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Converts a given regular gift to Telegram Stars. Requires the can_convert_gifts_to_stars business bot right. Returns True on success.

struct convertGiftToStarsParameters {
    // Unique identifier of the business connection
    std::string BusinessConnectionID;

    // Unique identifier of the regular gift that should be converted to Telegram Stars
    std::string OwnedGiftID;

    convertGiftToStarsParameters(const std::string &BusinessConnectionIDValue, const std::string &OwnedGiftIDValue)
        : BusinessConnectionID(BusinessConnectionIDValue), OwnedGiftID(OwnedGiftIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

        Object["owned_gift_id"] = JSON::ToJson(OwnedGiftID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(OwnedGiftID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "business_connection_id",
            BusinessConnectionID);

        JSON::AddMultipartField(
            Form, "owned_gift_id",
            OwnedGiftID);

        return Form;
    }

};

class convertGiftToStars {
public:
    using Parameters = convertGiftToStarsParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "convertGiftToStars";
    }

    explicit convertGiftToStars(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool ConvertGiftToStars(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "convertGiftToStars",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "convertGiftToStars",
            ParametersValue.ToJson()
        );
    }

    bool ConvertGiftToStars(std::string BusinessConnectionID, std::string OwnedGiftID) {
        Parameters ParametersValue(
        BusinessConnectionID,
        OwnedGiftID
        );

        return ConvertGiftToStars(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_CONVERTGIFTTOSTARS_HPP
