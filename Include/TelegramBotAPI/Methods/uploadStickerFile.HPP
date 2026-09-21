#ifndef TELEGRAMBOTAPI_METHOD_UPLOADSTICKERFILE_HPP
#define TELEGRAMBOTAPI_METHOD_UPLOADSTICKERFILE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/File.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to upload a file with a sticker for later use in the createNewStickerSet, addStickerToSet, or replaceStickerInSet methods (the file can be used multiple times). Returns the uploaded File on success.

struct uploadStickerFileParameters {
    // Format of the sticker, must be one of “static”, “animated”, “video”
    std::string StickerFormat;

    // User identifier of sticker file owner
    long long UserID;

    uploadStickerFileParameters(const std::string &StickerFormatValue, const long long &UserIDValue)
        : StickerFormat(StickerFormatValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["sticker_format"] = JSON::ToJson(StickerFormat);

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(StickerFormat) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "sticker_format",
            StickerFormat);

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class uploadStickerFile {
public:
    using Parameters = uploadStickerFileParameters;
    using ReturnType = ::TelegramBotAPI::Type::File;

    static constexpr const char *Name() noexcept {
        return "uploadStickerFile";
    }

    explicit uploadStickerFile(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::File UploadStickerFile(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::File>(
                "uploadStickerFile",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::File>(
            "uploadStickerFile",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::File UploadStickerFile(std::string StickerFormat, long long UserID) {
        Parameters ParametersValue(
        StickerFormat,
        UserID
        );

        return UploadStickerFile(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_UPLOADSTICKERFILE_HPP
