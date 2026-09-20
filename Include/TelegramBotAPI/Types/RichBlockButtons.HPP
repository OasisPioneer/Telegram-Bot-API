#ifndef TELEGRAMBOTAPI_RICHBLOCKBUTTONS_HPP
#define TELEGRAMBOTAPI_RICHBLOCKBUTTONS_HPP

#include "TelegramBotAPI/Types/RichMessageButton.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct RichBlockButtons {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::RichMessageButton> Buttons;
    std::optional<std::string> Align{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKBUTTONS_HPP
