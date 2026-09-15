#ifndef TELEGRAMBOTAPI_DOCUMENT_HPP
#define TELEGRAMBOTAPI_DOCUMENT_HPP

#include <string>

#include "PhotoSize.HPP"

namespace TelegramBotAPI::Type {
    struct Document {
        std::string FileID{};
        PhotoSize Thumb{};
        std::string FileName{};
        std::string MimeType{};
        long long FileSize{};
    };
}

#endif // TELEGRAMBOTAPI_DOCUMENT_HPP