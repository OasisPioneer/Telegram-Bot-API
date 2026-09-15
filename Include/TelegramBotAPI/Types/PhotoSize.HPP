#ifndef TELEGRAMBOTAPI_PHOTOSIZE_HPP
#define TELEGRAMBOTAPI_PHOTOSIZE_HPP

#include <string>

namespace TelegramBotAPI::Type {
    struct PhotoSize {
        std::string FileID{};
        long long Width{};
        long long Height{};
        long long FileSize{};
    };
}

#endif // TELEGRAMBOTAPI_PHOTOSIZE_HPP