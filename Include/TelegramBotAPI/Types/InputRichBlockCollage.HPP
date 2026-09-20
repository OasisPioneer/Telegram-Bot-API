#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKCOLLAGE_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKCOLLAGE_HPP

#include "TelegramBotAPI/Types/InputRichBlock.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputRichBlockCollage {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::InputRichBlock> Blocks;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKCOLLAGE_HPP
