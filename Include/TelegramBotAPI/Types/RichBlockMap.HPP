#ifndef TELEGRAMBOTAPI_RICHBLOCKMAP_HPP
#define TELEGRAMBOTAPI_RICHBLOCKMAP_HPP

#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockMap {
    std::string Type;
    ::TelegramBotAPI::Type::Location Location;
    long long Zoom;
    long long Width;
    long long Height;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKMAP_HPP
