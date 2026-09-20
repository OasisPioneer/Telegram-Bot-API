#ifndef TELEGRAMBOTAPI_RICHTEXTBUTTON_HPP
#define TELEGRAMBOTAPI_RICHTEXTBUTTON_HPP

#include "TelegramBotAPI/Types/RichMessageButton.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextButton {
    std::string Type;
    ::TelegramBotAPI::Type::RichMessageButton Button;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTBUTTON_HPP
