#ifndef TELEGRAMBOTAPI_METHOD_SETSTICKERSETTHUMBNAIL_HPP
#define TELEGRAMBOTAPI_METHOD_SETSTICKERSETTHUMBNAIL_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <TelegramBotAPI/Types/InputFile.HPP>
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to set the thumbnail of a regular or mask sticker set. The format of the thumbnail file must match the format of the stickers in the set. Returns True on success.

struct setStickerSetThumbnailParameters {
    // Format of the thumbnail, must be one of “static” for a .WEBP or .PNG image, “animated” for a .TGS animation, or “video” for a .WEBM video
    std::string Format;

    // Sticker set name
    std::string Name;

    // A .WEBP or .PNG image with the thumbnail, must be up to 128 kilobytes in size and have a width and height of exactly 100px, or a .TGS animation with a thumbnail up to 32 kilobytes in size (see https://core.telegram.org/stickers#animation-requirements for animated sticker technical requirements), or a .WEBM video with the thumbnail up to 32 kilobytes in size; see https://core.telegram.org/stickers#video-requirements for video sticker technical requirements. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More information on Sending Files ». Animated and video sticker set thumbnails can't be uploaded via HTTP URL. If omitted, then the thumbnail is dropped and the first sticker is used as the thumbnail.
    std::optional<std::variant<::TelegramBotAPI::Type::InputFile, std::string>> Thumbnail{};

    // User identifier of the sticker set owner
    long long UserID;

    setStickerSetThumbnailParameters(const std::string &FormatValue, const std::string &NameValue, const long long &UserIDValue)
        : Format(FormatValue), Name(NameValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["format"] = JSON::ToJson(Format);

        Object["name"] = JSON::ToJson(Name);

        if (Thumbnail.has_value()) {
            Object["thumbnail"] = JSON::EncodeRequestValue(Thumbnail.value(), "thumbnail");
        }

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Format) || JSON::RequiresMultipart(Name) || (Thumbnail.has_value() && JSON::RequiresMultipart(Thumbnail.value())) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "format",
            Format);

        JSON::AddMultipartField(
            Form, "name",
            Name);

        if (Thumbnail.has_value()) {
            JSON::AddMultipartField(
                Form, "thumbnail",
                Thumbnail.value());
        }

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class setStickerSetThumbnail {
public:
    using Parameters = setStickerSetThumbnailParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setStickerSetThumbnail";
    }

    explicit setStickerSetThumbnail(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetStickerSetThumbnail(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setStickerSetThumbnail",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setStickerSetThumbnail",
            ParametersValue.ToJson()
        );
    }

    bool SetStickerSetThumbnail(std::string Format, std::string Name, long long UserID) {
        Parameters ParametersValue(
        Format,
        Name,
        UserID
        );

        return SetStickerSetThumbnail(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETSTICKERSETTHUMBNAIL_HPP
