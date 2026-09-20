#ifndef TELEGRAMBOTAPI_RICHBLOCKSLIDESHOW_HPP
#define TELEGRAMBOTAPI_RICHBLOCKSLIDESHOW_HPP

#include "TelegramBotAPI/Types/RichBlock.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct RichBlockSlideshow {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::RichBlock> Blocks;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKSLIDESHOW_HPP
