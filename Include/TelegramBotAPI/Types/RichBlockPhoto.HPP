#ifndef TELEGRAMBOTAPI_RICHBLOCKPHOTO_HPP
#define TELEGRAMBOTAPI_RICHBLOCKPHOTO_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct RichBlockPhoto {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::PhotoSize> Photo;
    std::optional<bool> HasSpoiler{};
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKPHOTO_HPP
