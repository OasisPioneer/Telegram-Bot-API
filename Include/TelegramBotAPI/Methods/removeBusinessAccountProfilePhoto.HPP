#ifndef TELEGRAMBOTAPI_METHOD_REMOVEBUSINESSACCOUNTPROFILEPHOTO_HPP
#define TELEGRAMBOTAPI_METHOD_REMOVEBUSINESSACCOUNTPROFILEPHOTO_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Removes the current profile photo of a managed business account. Requires the can_edit_profile_photo business bot right. Returns True on success.

struct removeBusinessAccountProfilePhotoParameters {
    // Unique identifier of the business connection
    std::string BusinessConnectionID;

    // Pass True to remove the public photo, which is visible even if the main photo is hidden by the business account's privacy settings. After the main photo is removed, the previous profile photo (if present) becomes the main photo.
    std::optional<bool> IsPublic{};

    removeBusinessAccountProfilePhotoParameters(const std::string &BusinessConnectionIDValue)
        : BusinessConnectionID(BusinessConnectionIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

        if (IsPublic.has_value()) {
            Object["is_public"] = JSON::ToJson(IsPublic.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(BusinessConnectionID) || (IsPublic.has_value() && JSON::RequiresMultipart(IsPublic.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "business_connection_id",
            BusinessConnectionID);

        if (IsPublic.has_value()) {
            JSON::AddMultipartField(
                Form, "is_public",
                IsPublic.value());
        }

        return Form;
    }

};

class removeBusinessAccountProfilePhoto {
public:
    using Parameters = removeBusinessAccountProfilePhotoParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "removeBusinessAccountProfilePhoto";
    }

    explicit removeBusinessAccountProfilePhoto(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool RemoveBusinessAccountProfilePhoto(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "removeBusinessAccountProfilePhoto",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "removeBusinessAccountProfilePhoto",
            ParametersValue.ToJson()
        );
    }

    bool RemoveBusinessAccountProfilePhoto(std::string BusinessConnectionID) {
        Parameters ParametersValue(
        BusinessConnectionID
        );

        return RemoveBusinessAccountProfilePhoto(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_REMOVEBUSINESSACCOUNTPROFILEPHOTO_HPP
