#ifndef TELEGRAMBOTAPI_RICHTEXTBOTCOMMAND_HPP
#define TELEGRAMBOTAPI_RICHTEXTBOTCOMMAND_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextBotCommand {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    std::string BotCommand;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTBOTCOMMAND_HPP
