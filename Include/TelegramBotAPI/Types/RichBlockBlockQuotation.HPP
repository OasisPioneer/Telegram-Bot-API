#ifndef TELEGRAMBOTAPI_RICHBLOCKBLOCKQUOTATION_HPP
#define TELEGRAMBOTAPI_RICHBLOCKBLOCKQUOTATION_HPP

#include "TelegramBotAPI/Types/RichBlock.HPP"
#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct RichBlockBlockQuotation {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::RichBlock> Blocks;
    std::optional<::TelegramBotAPI::Type::RichText> Credit{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKBLOCKQUOTATION_HPP
