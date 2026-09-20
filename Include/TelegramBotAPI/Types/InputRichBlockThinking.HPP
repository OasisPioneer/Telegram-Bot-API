#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKTHINKING_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKTHINKING_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockThinking {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKTHINKING_HPP
