#ifndef TELEGRAMBOTAPI_VIDEONOTE_HPP
#define TELEGRAMBOTAPI_VIDEONOTE_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct VideoNote {
    std::string FileID;
    std::string FileUniqueID;
    long long Length;
    long long Duration;
    std::optional<::TelegramBotAPI::Type::PhotoSize> Thumbnail{};
    std::optional<long long> FileSize{};
};

}

#endif // TELEGRAMBOTAPI_VIDEONOTE_HPP
