#ifndef TELEGRAMBOTAPI_METHOD_SETMYPROFILEPHOTO_HPP
#define TELEGRAMBOTAPI_METHOD_SETMYPROFILEPHOTO_HPP

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

    // Changes the profile photo of the bot. Returns True on success.

struct setMyProfilePhotoParameters {
    // The new profile photo to set
    std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> Photo;

    setMyProfilePhotoParameters(const std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> &PhotoValue)
        : Photo(PhotoValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["photo"] = JSON::ToJson(Photo);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Photo);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "photo",
            Photo);

        return Form;
    }

};

class setMyProfilePhoto {
public:
    using Parameters = setMyProfilePhotoParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setMyProfilePhoto";
    }

    explicit setMyProfilePhoto(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetMyProfilePhoto(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setMyProfilePhoto",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setMyProfilePhoto",
            ParametersValue.ToJson()
        );
    }

    bool SetMyProfilePhoto(std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> Photo) {
        Parameters ParametersValue(
        Photo
        );

        return SetMyProfilePhoto(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETMYPROFILEPHOTO_HPP
