#ifndef TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTPROFILEPHOTO_HPP
#define TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTPROFILEPHOTO_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InputProfilePhotoAnimated.HPP"
#include "TelegramBotAPI/Types/InputProfilePhotoStatic.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Changes the profile photo of a managed business account. Requires the can_edit_profile_photo business bot right. Returns True on success.

struct setBusinessAccountProfilePhotoParameters {
    // Unique identifier of the business connection
    std::string BusinessConnectionID;

    // Pass True to set the public photo, which will be visible even if the main photo is hidden by the business account's privacy settings. An account can have only one public photo.
    std::optional<bool> IsPublic{};

    // The new profile photo to set
    std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> Photo;

    setBusinessAccountProfilePhotoParameters(const std::string &BusinessConnectionIDValue, const std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> &PhotoValue)
        : BusinessConnectionID(BusinessConnectionIDValue), Photo(PhotoValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

        if (IsPublic.has_value()) {
            Object["is_public"] = JSON::ToJson(IsPublic.value());
        }

        Object["photo"] = JSON::ToJson(Photo);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(BusinessConnectionID) || (IsPublic.has_value() && JSON::RequiresMultipart(IsPublic.value())) || JSON::RequiresMultipart(Photo);
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

        JSON::AddMultipartField(
            Form, "photo",
            Photo);

        return Form;
    }

};

class setBusinessAccountProfilePhoto {
public:
    using Parameters = setBusinessAccountProfilePhotoParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setBusinessAccountProfilePhoto";
    }

    explicit setBusinessAccountProfilePhoto(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetBusinessAccountProfilePhoto(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setBusinessAccountProfilePhoto",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setBusinessAccountProfilePhoto",
            ParametersValue.ToJson()
        );
    }

    bool SetBusinessAccountProfilePhoto(std::string BusinessConnectionID, std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> Photo) {
        Parameters ParametersValue(
        BusinessConnectionID,
        Photo
        );

        return SetBusinessAccountProfilePhoto(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTPROFILEPHOTO_HPP
