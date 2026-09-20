#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKSECTIONHEADING_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKSECTIONHEADING_HPP

#include "TelegramBotAPI/Types/RichText.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockSectionHeading {
    std::string Type;
    ::TelegramBotAPI::Type::RichText Text;
    long long Size;
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKSECTIONHEADING_HPP
