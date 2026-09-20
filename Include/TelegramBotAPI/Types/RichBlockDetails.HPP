#ifndef TELEGRAMBOTAPI_RICHBLOCKDETAILS_HPP
#define TELEGRAMBOTAPI_RICHBLOCKDETAILS_HPP

#include "TelegramBotAPI/Types/RichBlock.HPP"
#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct RichBlockDetails {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Summary;
    std::vector<::TelegramBotAPI::Type::RichBlock> Blocks;
    std::optional<bool> IsOpen{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKDETAILS_HPP
