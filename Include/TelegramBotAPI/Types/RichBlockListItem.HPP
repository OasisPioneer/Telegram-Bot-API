#ifndef TELEGRAMBOTAPI_RICHBLOCKLISTITEM_HPP
#define TELEGRAMBOTAPI_RICHBLOCKLISTITEM_HPP

#include "TelegramBotAPI/Types/RichBlock.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct RichBlockListItem {
    std::string Label;
    std::vector<::TelegramBotAPI::Type::RichBlock> Blocks;
    std::optional<bool> HasCheckbox{};
    std::optional<bool> IsChecked{};
    std::optional<long long> Value{};
    std::optional<std::string> Type{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKLISTITEM_HPP
