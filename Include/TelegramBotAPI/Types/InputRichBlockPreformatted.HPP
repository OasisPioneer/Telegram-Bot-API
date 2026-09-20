#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKPREFORMATTED_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKPREFORMATTED_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockPreformatted {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::optional<std::string> Language{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKPREFORMATTED_HPP
