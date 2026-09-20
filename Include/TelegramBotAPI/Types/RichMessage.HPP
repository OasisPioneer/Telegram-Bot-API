#ifndef TELEGRAMBOTAPI_RICHMESSAGE_HPP
#define TELEGRAMBOTAPI_RICHMESSAGE_HPP

#include "TelegramBotAPI/Types/RichBlock.HPP"
#include <optional>
#include <vector>

namespace TelegramBotAPI::Type {

struct RichMessage {
    std::vector<::TelegramBotAPI::Type::RichBlock> Blocks;
    std::optional<bool> IsRtl{};
};

}

#endif // TELEGRAMBOTAPI_RICHMESSAGE_HPP
