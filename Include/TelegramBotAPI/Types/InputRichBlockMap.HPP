#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKMAP_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKMAP_HPP

#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockMap {
    std::string Type;
    ::TelegramBotAPI::Type::Location Location;
    std::optional<long long> Zoom{};
    std::optional<long long> Width{};
    std::optional<long long> Height{};
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKMAP_HPP
