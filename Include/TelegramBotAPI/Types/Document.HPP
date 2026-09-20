#ifndef TELEGRAMBOTAPI_DOCUMENT_HPP
#define TELEGRAMBOTAPI_DOCUMENT_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct Document {
    std::string FileID;
    std::string FileUniqueID;
    std::optional<::TelegramBotAPI::Type::PhotoSize> Thumbnail{};
    std::optional<std::string> FileName{};
    std::optional<std::string> MimeType{};
    std::optional<long long> FileSize{};
};

}

#endif // TELEGRAMBOTAPI_DOCUMENT_HPP
