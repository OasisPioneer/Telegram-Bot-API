#ifndef TELEGRAMBOTAPI_RICHBLOCKTHINKING_HPP
#define TELEGRAMBOTAPI_RICHBLOCKTHINKING_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockThinking {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKTHINKING_HPP
