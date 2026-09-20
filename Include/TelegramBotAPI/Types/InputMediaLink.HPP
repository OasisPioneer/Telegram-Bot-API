#ifndef TELEGRAMBOTAPI_INPUTMEDIALINK_HPP
#define TELEGRAMBOTAPI_INPUTMEDIALINK_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct InputMediaLink {
    std::string Type;
    std::string URL;
};

}

#endif // TELEGRAMBOTAPI_INPUTMEDIALINK_HPP
