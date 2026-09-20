#ifndef TELEGRAMBOTAPI_RICHBLOCKTABLECELL_HPP
#define TELEGRAMBOTAPI_RICHBLOCKTABLECELL_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockTableCell {
    std::optional<::TelegramBotAPI::Type::RichText> Text{};
    std::optional<bool> IsHeader{};
    std::optional<long long> Colspan{};
    std::optional<long long> Rowspan{};
    std::string Align;
    std::string Valign;
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKTABLECELL_HPP
