#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKPULLQUOTATION_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKPULLQUOTATION_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockPullQuotation {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::optional<::TelegramBotAPI::Type::RichText> Credit{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKPULLQUOTATION_HPP
