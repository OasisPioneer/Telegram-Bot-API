#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKBLOCKQUOTATION_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKBLOCKQUOTATION_HPP

#include "TelegramBotAPI/Types/InputRichBlock.HPP"
#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputRichBlockBlockQuotation {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::InputRichBlock> Blocks;
    std::optional<::TelegramBotAPI::Type::RichText> Credit{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKBLOCKQUOTATION_HPP
