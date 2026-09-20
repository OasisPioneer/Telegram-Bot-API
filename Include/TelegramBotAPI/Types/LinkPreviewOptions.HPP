#ifndef TELEGRAMBOTAPI_LINKPREVIEWOPTIONS_HPP
#define TELEGRAMBOTAPI_LINKPREVIEWOPTIONS_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct LinkPreviewOptions {
    std::optional<bool> IsDisabled{};
    std::optional<std::string> URL{};
    std::optional<bool> PreferSmallMedia{};
    std::optional<bool> PreferLargeMedia{};
    std::optional<bool> ShowAboveText{};
};

}

#endif // TELEGRAMBOTAPI_LINKPREVIEWOPTIONS_HPP
