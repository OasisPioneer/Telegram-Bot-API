#ifndef TELEGRAMBOTAPI_VIDEOQUALITY_HPP
#define TELEGRAMBOTAPI_VIDEOQUALITY_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct VideoQuality {
    std::string FileID;
    std::string FileUniqueID;
    long long Width;
    long long Height;
    std::string Codec;
    std::optional<long long> FileSize{};
};

}

#endif // TELEGRAMBOTAPI_VIDEOQUALITY_HPP
