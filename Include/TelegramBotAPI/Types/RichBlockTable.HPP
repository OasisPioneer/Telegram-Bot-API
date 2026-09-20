#ifndef TELEGRAMBOTAPI_RICHBLOCKTABLE_HPP
#define TELEGRAMBOTAPI_RICHBLOCKTABLE_HPP

#include "TelegramBotAPI/Types/RichBlockTableCell.HPP"
#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct RichBlockTable {
    std::string Type;
    std::vector<std::vector<::TelegramBotAPI::Type::RichBlockTableCell>> Cells;
    std::optional<bool> IsBordered{};
    std::optional<bool> IsStriped{};
    std::optional<bool> IsCompact{};
    std::optional<::TelegramBotAPI::Type::RichText> Caption{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKTABLE_HPP
