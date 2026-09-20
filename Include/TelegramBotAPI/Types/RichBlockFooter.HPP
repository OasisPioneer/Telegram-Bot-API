#ifndef TELEGRAMBOTAPI_RICHBLOCKFOOTER_HPP
#define TELEGRAMBOTAPI_RICHBLOCKFOOTER_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockFooter {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKFOOTER_HPP
