#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKFOOTER_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKFOOTER_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockFooter {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKFOOTER_HPP
