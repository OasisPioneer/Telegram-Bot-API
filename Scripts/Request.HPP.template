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

template <typename Type>
bool RequiresMultipart(const Type &Value);

inline bool RequiresMultipart(const ::TelegramBotAPI::Type::InputFile &Value);

template <typename Type>
bool RequiresMultipart(const std::optional<Type> &Value);

template <typename... Types>
bool RequiresMultipart(const std::variant<Types...> &Value);

template <typename Type>
bool RequiresMultipart(const std::vector<Type> &Value);

inline boost::json::value EncodeRequestValue(
    const ::TelegramBotAPI::Type::InputFile &Value,
    const std::string &FieldName);

template <typename Type>
boost::json::value EncodeRequestValue(
    const std::optional<Type> &Value,
    const std::string &FieldName);

template <typename... Types>
boost::json::value EncodeRequestValue(
    const std::variant<Types...> &Value,
    const std::string &FieldName);

template <typename Type>
boost::json::value EncodeRequestValue(
    const std::vector<Type> &Value,
    const std::string &FieldName);

template <typename Type>
boost::json::value EncodeRequestValue(
    const Type &Value,
    const std::string &FieldName);

template <typename Type>
void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const Type &Value);

inline void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const ::TelegramBotAPI::Type::InputFile &Value);

template <typename Type>
void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const std::optional<Type> &Value);

template <typename... Types>
void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const std::variant<Types...> &Value);

template <typename Type>
void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const std::vector<Type> &Value);

inline std::string GetRequestContentType(
    const std::filesystem::path &FilePath) {
    const std::string Extension = FilePath.extension().string();
    if (Extension == ".jpg" || Extension == ".jpeg") return "image/jpeg";
    if (Extension == ".png") return "image/png";
    if (Extension == ".webp") return "image/webp";
    if (Extension == ".gif") return "image/gif";
    if (Extension == ".mp4") return "video/mp4";
    if (Extension == ".mov") return "video/quicktime";
    if (Extension == ".mp3") return "audio/mpeg";
    if (Extension == ".m4a") return "audio/mp4";
    if (Extension == ".ogg" || Extension == ".oga") return "audio/ogg";
    if (Extension == ".wav") return "audio/wav";
    if (Extension == ".webm") return "video/webm";
    if (Extension == ".tgs") return "application/x-tgsticker";
    if (Extension == ".zip") return "application/zip";
    if (Extension == ".pdf") return "application/pdf";
    return "application/octet-stream";
}

inline std::string ReadRequestFile(
    const std::filesystem::path &FilePath) {
    if (!std::filesystem::exists(FilePath))
        throw std::runtime_error("Request file does not exist: " + FilePath.string());
    if (!std::filesystem::is_regular_file(FilePath))
        throw std::runtime_error("Request path is not a regular file: " + FilePath.string());

    std::ifstream File(FilePath, std::ios::binary);
    if (!File.is_open())
        throw std::runtime_error("Failed to open request file: " + FilePath.string());

    return std::string(
        std::istreambuf_iterator<char>(File),
        std::istreambuf_iterator<char>());
}

inline bool RequiresMultipart(
    const ::TelegramBotAPI::Type::InputFile &Value) {
    return Value.IsLocalFile();
}

template <typename Type>
bool RequiresMultipart(const std::optional<Type> &Value) {
    return Value.has_value() && RequiresMultipart(Value.value());
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
    for (const auto &Element : Value)
        if (RequiresMultipart(Element)) return true;
    return false;
}

template <typename Type>
bool RequiresMultipart(const Type &) {
    return false;
}

inline boost::json::value EncodeRequestValue(
    const ::TelegramBotAPI::Type::InputFile &Value,
    const std::string &FieldName) {
    if (Value.IsLocalFile())
        return boost::json::value("attach://" + FieldName);
    return boost::json::value(Value.GetValue());
}

template <typename Type>
boost::json::value EncodeRequestValue(
    const std::optional<Type> &Value,
    const std::string &FieldName) {
    if (!Value.has_value()) return boost::json::value(nullptr);
    return EncodeRequestValue(Value.value(), FieldName);
}

template <typename... Types>
boost::json::value EncodeRequestValue(
    const std::variant<Types...> &Value,
    const std::string &FieldName) {
    return std::visit(
        [&FieldName](const auto &Alternative) {
            return EncodeRequestValue(Alternative, FieldName);
        },
        Value);
}

template <typename Type>
boost::json::value EncodeRequestValue(
    const std::vector<Type> &Value,
    const std::string &FieldName) {
    boost::json::array Array;
    Array.reserve(Value.size());

    std::size_t Index = 0;
    for (const auto &Element : Value) {
        Array.push_back(
            EncodeRequestValue(
                Element,
                FieldName + "_" + std::to_string(Index)));
        ++Index;
    }

    return boost::json::value(std::move(Array));
}

template <typename Type>
boost::json::value EncodeRequestValue(
    const Type &Value,
    const std::string &) {
    return ::TelegramBotAPI::JSON::ToJson(Value);
}

inline void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const ::TelegramBotAPI::Type::InputFile &Value) {
    if (!Value.IsLocalFile()) {
        Form.AddField(FieldName, Value.GetValue());
        return;
    }

    const std::filesystem::path FilePath(Value.GetValue());
    Form.AddFile(
        FieldName,
        FilePath.filename().string(),
        GetRequestContentType(FilePath),
        ReadRequestFile(FilePath));
}

template <typename Type>
void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const std::optional<Type> &Value) {
    if (Value.has_value())
        AddMultipartField(Form, FieldName, Value.value());
}

template <typename... Types>
void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const std::variant<Types...> &Value) {
    std::visit(
        [&Form, &FieldName](const auto &Alternative) {
            AddMultipartField(Form, FieldName, Alternative);
        },
        Value);
}

template <typename Type>
void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const std::vector<Type> &Value) {
    Form.AddField(
        FieldName,
        boost::json::serialize(
            EncodeRequestValue(Value, FieldName)));
}

template <typename Type>
void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const Type &Value) {
    Form.AddField(
        FieldName,
        boost::json::serialize(
            ::TelegramBotAPI::JSON::ToJson(Value)));
}

} // namespace TelegramBotAPI::JSON::Detail

namespace TelegramBotAPI::JSON {

template <typename Type>
bool RequiresMultipart(const Type &Value) {
    return Detail::RequiresMultipart(Value);
}

template <typename Type>
boost::json::value EncodeRequestValue(
    const Type &Value,
    const std::string &FieldName) {
    return Detail::EncodeRequestValue(Value, FieldName);
}

template <typename Type>
void AddMultipartField(
    ::TelegramBotAPI::Network::Multipart::MultipartForm &Form,
    const std::string &FieldName,
    const Type &Value) {
    Detail::AddMultipartField(Form, FieldName, Value);
}

} // namespace TelegramBotAPI::JSON

#endif // TELEGRAMBOTAPI_JSON_REQUEST_HPP
