#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKEXPANDABLEBLOCKQUOTATION_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKEXPANDABLEBLOCKQUOTATION_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockExpandableBlockQuotation {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::optional<::TelegramBotAPI::Type::RichText> Credit{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKEXPANDABLEBLOCKQUOTATION_HPP
