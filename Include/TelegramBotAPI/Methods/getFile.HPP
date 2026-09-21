#ifndef TELEGRAMBOTAPI_METHOD_GETFILE_HPP
#define TELEGRAMBOTAPI_METHOD_GETFILE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/File.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to get basic information about a file and prepare it for downloading. For the moment, bots can download files of up to 20MB in size. On success, a File object is returned. The file can then be downloaded via the link https://api.telegram.org/file/bot<token>/<file_path>, where <file_path> is taken from the response. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling getFile again.
    // Note: This function may not preserve the original file name and MIME type. You should save the file's MIME type and name (if available) when the File object is received.

struct getFileParameters {
    // File identifier to get information about
    std::string FileID;

    getFileParameters(const std::string &FileIDValue)
        : FileID(FileIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["file_id"] = JSON::ToJson(FileID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(FileID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "file_id",
            FileID);

        return Form;
    }

};

class getFile {
public:
    using Parameters = getFileParameters;
    using ReturnType = ::TelegramBotAPI::Type::File;

    static constexpr const char *Name() noexcept {
        return "getFile";
    }

    explicit getFile(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::File GetFile(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::File>(
                "getFile",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::File>(
            "getFile",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::File GetFile(std::string FileID) {
        Parameters ParametersValue(
        FileID
        );

        return GetFile(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETFILE_HPP
