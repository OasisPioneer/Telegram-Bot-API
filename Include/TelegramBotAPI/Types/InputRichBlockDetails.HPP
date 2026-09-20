#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKDETAILS_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKDETAILS_HPP

#include "TelegramBotAPI/Types/InputRichBlock.HPP"
#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputRichBlockDetails {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Summary;
    std::vector<::TelegramBotAPI::Type::InputRichBlock> Blocks;
    std::optional<bool> IsOpen{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKDETAILS_HPP
