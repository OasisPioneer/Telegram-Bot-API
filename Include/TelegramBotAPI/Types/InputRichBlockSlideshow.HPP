#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKSLIDESHOW_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKSLIDESHOW_HPP

#include "TelegramBotAPI/Types/InputRichBlock.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputRichBlockSlideshow {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::InputRichBlock> Blocks;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKSLIDESHOW_HPP
