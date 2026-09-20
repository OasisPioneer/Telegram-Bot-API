#ifndef TELEGRAMBOTAPI_RICHBLOCKSECTIONHEADING_HPP
#define TELEGRAMBOTAPI_RICHBLOCKSECTIONHEADING_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockSectionHeading {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    long long Size;
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKSECTIONHEADING_HPP
