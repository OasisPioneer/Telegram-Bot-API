#ifndef TELEGRAMBOTAPI_JSON_REQUEST_HPP
#define TELEGRAMBOTAPI_JSON_REQUEST_HPP

#include <boost/json.hpp>

#include <cstddef>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <optional>
#include <stdexcept>
#include <string>
#include <variant>
#include <vector>

#include "TelegramBotAPI/JSON/Json.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/Network/Multipart/MultipartForm.HPP"
#include "TelegramBotAPI/Types/InputFile.HPP"

namespace TelegramBotAPI::JSON::Detail {

    /*
     * ============================================================================
     * Forward declarations
     * ============================================================================
     */

    template <typename Type> bool RequiresMultipart(const Type &Value);

    inline bool
    RequiresMultipart(const ::TelegramBotAPI::Type::InputFile &Value);

    template <typename Type>
    bool RequiresMultipart(const std::optional<Type> &Value);

    template <typename... Types>
    bool RequiresMultipart(const std::variant<Types...> &Value);

    template <typename Type>
    bool RequiresMultipart(const std::vector<Type> &Value);

    /*
     * ============================================================================
     * Request JSON encoding
     * ============================================================================
     *
     * InputFile:
     *
     *   FileID    -> "file_id"
     *   URL       -> "https://..."
     *   LocalFile -> "attach://<field_name>"
     *
     * The latter is required by Telegram when the actual file is supplied
     * through multipart/form-data.
     */

    inline boost::json::value
    EncodeRequestValue(const ::TelegramBotAPI::Type::InputFile &Value,
                       const std::string                       &FieldName);

    template <typename Type>
    boost::json::value EncodeRequestValue(const std::optional<Type> &Value,
                                          const std::string         &FieldName);

    template <typename... Types>
    boost::json::value EncodeRequestValue(const std::variant<Types...> &Value,
                                          const std::string &FieldName);

    template <typename Type>
    boost::json::value EncodeRequestValue(const std::vector<Type> &Value,
                                          const std::string       &FieldName);

    template <typename Type>
    boost::json::value EncodeRequestValue(const Type        &Value,
                                          const std::string &FieldName);

    /*
     * ============================================================================
     * Multipart construction
     * ============================================================================
     */

    template <typename Type>
    void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string &FieldName, const Type &Value);

    inline void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string                       &FieldName,
                      const ::TelegramBotAPI::Type::InputFile &Value);

    template <typename Type>
    void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string         &FieldName,
                      const std::optional<Type> &Value);

    template <typename... Types>
    void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string            &FieldName,
                      const std::variant<Types...> &Value);

    template <typename Type>
    void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string       &FieldName,
                      const std::vector<Type> &Value);

    /*
     * ============================================================================
     * File helpers
     * ============================================================================
     */

    inline std::string
    GetRequestContentType(const std::filesystem::path &FilePath) {
        std::string Extension = FilePath.extension().string();

        for (char &Character : Extension) {
            if (Character >= 'A' && Character <= 'Z') {
                Character = static_cast<char>(Character - 'A' + 'a');
            }
        }

        if (Extension == ".jpg" || Extension == ".jpeg") {
            return "image/jpeg";
        }

        if (Extension == ".png") {
            return "image/png";
        }

        if (Extension == ".webp") {
            return "image/webp";
        }

        if (Extension == ".gif") {
            return "image/gif";
        }

        if (Extension == ".mp4") {
            return "video/mp4";
        }

        if (Extension == ".mov") {
            return "video/quicktime";
        }

        if (Extension == ".mp3") {
            return "audio/mpeg";
        }

        if (Extension == ".m4a") {
            return "audio/mp4";
        }

        if (Extension == ".ogg" || Extension == ".oga") {
            return "audio/ogg";
        }

        if (Extension == ".wav") {
            return "audio/wav";
        }

        if (Extension == ".webm") {
            return "video/webm";
        }

        if (Extension == ".tgs") {
            return "application/x-tgsticker";
        }

        if (Extension == ".zip") {
            return "application/zip";
        }

        if (Extension == ".pdf") {
            return "application/pdf";
        }

        return "application/octet-stream";
    }

    inline std::string ReadRequestFile(const std::filesystem::path &FilePath) {
        std::error_code ErrorCode;

        if (!std::filesystem::exists(FilePath, ErrorCode)) {
            if (ErrorCode) {
                throw std::runtime_error(
                    "Failed to inspect request file: " + FilePath.string() +
                    ": " + ErrorCode.message());
            }

            throw std::runtime_error("Request file does not exist: " +
                                     FilePath.string());
        }

        if (!std::filesystem::is_regular_file(FilePath, ErrorCode)) {
            if (ErrorCode) {
                throw std::runtime_error(
                    "Failed to inspect request path: " + FilePath.string() +
                    ": " + ErrorCode.message());
            }

            throw std::runtime_error("Request path is not a regular file: " +
                                     FilePath.string());
        }

        std::ifstream File(FilePath, std::ios::binary);

        if (!File.is_open()) {
            throw std::runtime_error("Failed to open request file: " +
                                     FilePath.string());
        }

        return std::string(std::istreambuf_iterator<char>(File),
                           std::istreambuf_iterator<char>());
    }

    /*
     * ============================================================================
     * RequiresMultipart
     * ============================================================================
     *
     * Multipart is required ONLY when an InputFile contains a local filesystem
     * path.
     *
     * FileID:
     *     no upload
     *
     * URL:
     *     no upload
     *
     * LocalFile:
     *     upload using multipart/form-data
     */

    inline bool
    RequiresMultipart(const ::TelegramBotAPI::Type::InputFile &Value) {
        return Value.IsLocalFile();
    }

    template <typename Type>
    bool RequiresMultipart(const std::optional<Type> &Value) {
        if (!Value.has_value()) {
            return false;
        }

        return RequiresMultipart(Value.value());
    }

    template <typename... Types>
    bool RequiresMultipart(const std::variant<Types...> &Value) {
        return std::visit(
            [](const auto &Alternative) {
                return RequiresMultipart(Alternative);
            },
            Value);
    }

    template <typename Type>
    bool RequiresMultipart(const std::vector<Type> &Value) {
        for (const auto &Element : Value) {
            if (RequiresMultipart(Element)) {
                return true;
            }
        }

        return false;
    }

    template <typename Type> bool RequiresMultipart(const Type &) {
        return false;
    }

    /*
     * ============================================================================
     * EncodeRequestValue
     * ============================================================================
     */

    inline boost::json::value
    EncodeRequestValue(const ::TelegramBotAPI::Type::InputFile &Value,
                       const std::string                       &FieldName) {
        /*
         * Local filesystem file:
         *
         *     "attach://photo"
         *
         * The corresponding multipart file part will be:
         *
         *     name="photo"
         */
        if (Value.IsLocalFile()) {
            return boost::json::value("attach://" + FieldName);
        }

        /*
         * FileID:
         *
         *     "AgACAg..."
         *
         * URL:
         *
         *     "https://example.com/photo.jpg"
         */
        return boost::json::value(Value.GetValue());
    }

    template <typename Type>
    boost::json::value EncodeRequestValue(const std::optional<Type> &Value,
                                          const std::string &FieldName) {
        if (!Value.has_value()) {
            return boost::json::value(nullptr);
        }

        return EncodeRequestValue(Value.value(), FieldName);
    }

    template <typename... Types>
    boost::json::value EncodeRequestValue(const std::variant<Types...> &Value,
                                          const std::string &FieldName) {
        return std::visit(
            [&FieldName](const auto &Alternative) {
                return EncodeRequestValue(Alternative, FieldName);
            },
            Value);
    }

    template <typename Type>
    boost::json::value EncodeRequestValue(const std::vector<Type> &Value,
                                          const std::string       &FieldName) {
        boost::json::array Array;

        Array.reserve(Value.size());

        std::size_t Index = 0;

        for (const auto &Element : Value) {
            Array.push_back(EncodeRequestValue(
                Element, FieldName + "_" + std::to_string(Index)));

            ++Index;
        }

        return boost::json::value(std::move(Array));
    }

    template <typename Type>
    boost::json::value EncodeRequestValue(const Type &Value,
                                          const std::string &) {
        return ::TelegramBotAPI::JSON::ToJson(Value);
    }

    /*
     * ============================================================================
     * Multipart: InputFile
     * ============================================================================
     *
     * IMPORTANT:
     *
     * For a local file, multipart/form-data requires TWO things:
     *
     * 1. A normal form field:
     *
     *       photo = attach://photo
     *
     * 2. The actual file part:
     *
     *       name="photo"
     *       filename="xxx.jpg"
     *       Content-Type: image/jpeg
     *
     * The previous implementation only emitted #2.
     */

    inline void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string                       &FieldName,
                      const ::TelegramBotAPI::Type::InputFile &Value) {
        /*
         * FileID or URL.
         *
         * No actual upload is necessary. Just send the string value as the
         * ordinary multipart field.
         */
        if (!Value.IsLocalFile()) {
            Form.AddField(FieldName, Value.GetValue());

            return;
        }

        /*
         * Local file.
         */
        const std::filesystem::path FilePath(Value.GetValue());

        const std::string FileName = FilePath.filename().string();

        if (FileName.empty()) {
            throw std::runtime_error("Request file has no filename: " +
                                     FilePath.string());
        }

        /*
         * First add the parameter itself:
         *
         *     photo = attach://photo
         *
         * Telegram uses this field to associate the JSON/string parameter with
         * the uploaded multipart part.
         */
        Form.AddField(FieldName, "attach://" + FieldName);

        /*
         * Then add the actual file part:
         *
         *     name="photo"
         */
        Form.AddFile(FieldName, FileName, GetRequestContentType(FilePath),
                     ReadRequestFile(FilePath));
    }

    /*
     * ============================================================================
     * Multipart: optional
     * ============================================================================
     */

    template <typename Type>
    void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string         &FieldName,
                      const std::optional<Type> &Value) {
        if (!Value.has_value()) {
            return;
        }

        AddMultipartField(Form, FieldName, Value.value());
    }

    /*
     * ============================================================================
     * Multipart: variant
     * ============================================================================
     */

    template <typename... Types>
    void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string            &FieldName,
                      const std::variant<Types...> &Value) {
        std::visit(
            [&Form, &FieldName](const auto &Alternative) {
                AddMultipartField(Form, FieldName, Alternative);
            },
            Value);
    }

    /*
     * ============================================================================
     * Multipart: vector
     * ============================================================================
     *
     * Example:
     *
     *     vector<InputFile>{
     *         fileA,
     *         fileB
     *     }
     *
     * becomes:
     *
     *     media = [
     *         "attach://media_0",
     *         "attach://media_1"
     *     ]
     *
     * and the multipart body contains:
     *
     *     name="media_0"
     *     name="media_1"
     *
     * For non-file vectors, this simply emits one JSON field.
     */

    template <typename Type>
    void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string       &FieldName,
                      const std::vector<Type> &Value) {
        /*
         * Add all actual local files first.
         *
         * The JSON field itself is added below.
         */
        for (std::size_t Index = 0; Index < Value.size(); ++Index) {
            const std::string ElementFieldName =
                FieldName + "_" + std::to_string(Index);

            /*
             * This only creates a file part for InputFile.
             * For all other element types the generic overload will serialize
             * them as ordinary values, so we do not call it here.
             *
             * The explicit InputFile case is handled through variant dispatch
             * below using a small helper lambda.
             */
            if constexpr (std::is_same_v<
                              std::remove_cv_t<std::remove_reference_t<Type>>,
                              ::TelegramBotAPI::Type::InputFile>) {
                const auto &Element = Value[Index];

                if (Element.IsLocalFile()) {
                    const std::filesystem::path FilePath(Element.GetValue());

                    const std::string FileName = FilePath.filename().string();

                    if (FileName.empty()) {
                        throw std::runtime_error(
                            "Request file has no filename: " +
                            FilePath.string());
                    }

                    Form.AddFile(ElementFieldName, FileName,
                                 GetRequestContentType(FilePath),
                                 ReadRequestFile(FilePath));
                }
            }
        }

        /*
         * Now create the actual multipart field.
         *
         * For InputFile vectors, EncodeRequestValue() generates:
         *
         *     ["attach://media_0", "attach://media_1"]
         *
         * For ordinary vectors it produces normal JSON.
         */
        Form.AddField(FieldName, boost::json::serialize(
                                     EncodeRequestValue(Value, FieldName)));
    }

    /*
     * ============================================================================
     * Multipart: generic value
     * ============================================================================
     */

    inline std::string SerializeMultipartFieldValue(const std::string &Value) {
        return Value;
    }

    template <typename Type>
    std::string SerializeMultipartFieldValue(const Type &Value) {
        return boost::json::serialize(::TelegramBotAPI::JSON::ToJson(Value));
    }

    template <typename Type>
    void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string &FieldName, const Type &Value) {
        Form.AddField(FieldName, SerializeMultipartFieldValue(Value));
    }

} // namespace TelegramBotAPI::JSON::Detail

/*
 * ============================================================================
 * Public JSON API
 * ============================================================================
 */

namespace TelegramBotAPI::JSON {

    template <typename Type> bool RequiresMultipart(const Type &Value) {
        return Detail::RequiresMultipart(Value);
    }

    template <typename Type>
    boost::json::value EncodeRequestValue(const Type        &Value,
                                          const std::string &FieldName) {
        return Detail::EncodeRequestValue(Value, FieldName);
    }

    template <typename Type>
    void
    AddMultipartField(::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
                      const std::string &FieldName, const Type &Value) {
        Detail::AddMultipartField(Form, FieldName, Value);
    }

} // namespace TelegramBotAPI::JSON

#endif // TELEGRAMBOTAPI_JSON_REQUEST_HPP