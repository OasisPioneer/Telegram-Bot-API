#ifndef TELEGRAMBOTAPI_RICHBLOCKPREFORMATTED_HPP
#define TELEGRAMBOTAPI_RICHBLOCKPREFORMATTED_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockPreformatted {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::optional<std::string> Language{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKPREFORMATTED_HPP
