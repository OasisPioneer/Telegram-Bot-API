#ifndef TELEGRAMBOTAPI_FILE_HPP
#define TELEGRAMBOTAPI_FILE_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct File {
    std::string FileID;
    std::string FileUniqueID;
    std::optional<long long> FileSize{};
    std::optional<std::string> FilePath{};
};

}

#endif // TELEGRAMBOTAPI_FILE_HPP
