#ifndef TELEGRAMBOTAPI_FILE_HPP
#define TELEGRAMBOTAPI_FILE_HPP

#include <string>

namespace TelegramBotAPI::Type {
    struct File {
        std::string FileID{};
        long long FileSize{};
        std::string FilePath{};
    };
}

#endif // TELEGRAMBOTAPI_FILE_HPP