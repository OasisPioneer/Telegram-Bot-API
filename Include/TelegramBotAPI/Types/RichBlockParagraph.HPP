#ifndef TELEGRAMBOTAPI_RICHBLOCKPARAGRAPH_HPP
#define TELEGRAMBOTAPI_RICHBLOCKPARAGRAPH_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockParagraph {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKPARAGRAPH_HPP
