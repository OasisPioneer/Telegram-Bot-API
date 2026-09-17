#ifndef TELEGRAMBOTAPI_LIVEPHOTO_HPP
#define TELEGRAMBOTAPI_LIVEPHOTO_HPP

#include <optional>
#include <string>
#include <vector>

#include "PhotoSize.HPP"

namespace TelegramBotAPI::Type {
    struct LivePhoto {
            std::optional<std::vector<PhotoSize>> Photo{};
            std::string                           FileID{};
            std::string                           FileUniqueID{};
            int                                   Width{};
            int                                   Height{};
            int                                   Duration{};
            std::optional<std::string>            MimeType{};
            std::optional<long long>              FileSize{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_LIVEPHOTO_HPP