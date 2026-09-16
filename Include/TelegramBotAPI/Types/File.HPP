#ifndef TELEGRAMBOTAPI_FILE_HPP
#define TELEGRAMBOTAPI_FILE_HPP

#include <string>
#include <optional>

namespace TelegramBotAPI::Type {
    struct File {
            std::string                FileID{};
            std::optional<long long>   FileSize{};
            std::optional<std::string> FilePath{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_FILE_HPP