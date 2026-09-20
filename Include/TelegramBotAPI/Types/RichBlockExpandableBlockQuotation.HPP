#ifndef TELEGRAMBOTAPI_RICHBLOCKEXPANDABLEBLOCKQUOTATION_HPP
#define TELEGRAMBOTAPI_RICHBLOCKEXPANDABLEBLOCKQUOTATION_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockExpandableBlockQuotation {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::optional<::TelegramBotAPI::Type::RichText> Credit{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKEXPANDABLEBLOCKQUOTATION_HPP
