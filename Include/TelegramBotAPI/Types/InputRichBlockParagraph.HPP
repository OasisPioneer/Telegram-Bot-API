#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKPARAGRAPH_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKPARAGRAPH_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockParagraph {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKPARAGRAPH_HPP
