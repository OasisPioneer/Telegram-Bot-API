#ifndef TELEGRAMBOTAPI_RICHBLOCKPULLQUOTATION_HPP
#define TELEGRAMBOTAPI_RICHBLOCKPULLQUOTATION_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockPullQuotation {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::optional<::TelegramBotAPI::Type::RichText> Credit{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKPULLQUOTATION_HPP
