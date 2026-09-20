#ifndef TELEGRAMBOTAPI_PHOTOSIZE_HPP
#define TELEGRAMBOTAPI_PHOTOSIZE_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct PhotoSize {
    std::string FileID;
    std::string FileUniqueID;
    long long Width;
    long long Height;
    std::optional<long long> FileSize{};
};

}

#endif // TELEGRAMBOTAPI_PHOTOSIZE_HPP
