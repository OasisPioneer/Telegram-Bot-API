#ifndef TELEGRAMBOTAPI_RICHTEXTDATETIME_HPP
#define TELEGRAMBOTAPI_RICHTEXTDATETIME_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichTextDateTime {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    long long UnixTime;
    std::string DateTimeFormat;
};

}

#endif // TELEGRAMBOTAPI_RICHTEXTDATETIME_HPP
