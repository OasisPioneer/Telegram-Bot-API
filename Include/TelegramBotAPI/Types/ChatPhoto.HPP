#ifndef TELEGRAMBOTAPI_CHATPHOTO_HPP
#define TELEGRAMBOTAPI_CHATPHOTO_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct ChatPhoto {
    std::string SmallFileID;
    std::string SmallFileUniqueID;
    std::string BigFileID;
    std::string BigFileUniqueID;
};

}

#endif // TELEGRAMBOTAPI_CHATPHOTO_HPP
