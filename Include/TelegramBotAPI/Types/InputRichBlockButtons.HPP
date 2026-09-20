#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKBUTTONS_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKBUTTONS_HPP

#include "TelegramBotAPI/Types/RichMessageButton.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputRichBlockButtons {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::RichMessageButton> Buttons;
    std::optional<std::string> Align{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKBUTTONS_HPP
