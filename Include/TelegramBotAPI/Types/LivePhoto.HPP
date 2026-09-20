#ifndef TELEGRAMBOTAPI_LIVEPHOTO_HPP
#define TELEGRAMBOTAPI_LIVEPHOTO_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct LivePhoto {
    std::optional<std::vector<::TelegramBotAPI::Type::PhotoSize>> Photo{};
    std::string FileID;
    std::string FileUniqueID;
    long long Width;
    long long Height;
    long long Duration;
    std::optional<std::string> MimeType{};
    std::optional<long long> FileSize{};
};

}

#endif // TELEGRAMBOTAPI_LIVEPHOTO_HPP
