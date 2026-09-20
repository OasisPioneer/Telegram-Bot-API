#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKLISTITEM_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKLISTITEM_HPP

#include "TelegramBotAPI/Types/InputRichBlock.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputRichBlockListItem {
    std::vector<::TelegramBotAPI::Type::InputRichBlock> Blocks;
    std::optional<bool> HasCheckbox{};
    std::optional<bool> IsChecked{};
    std::optional<long long> Value{};
    std::optional<std::string> Type{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKLISTITEM_HPP
