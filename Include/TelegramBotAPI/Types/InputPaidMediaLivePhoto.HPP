#ifndef TELEGRAMBOTAPI_INPUTPAIDMEDIALIVEPHOTO_HPP
#define TELEGRAMBOTAPI_INPUTPAIDMEDIALIVEPHOTO_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct InputPaidMediaLivePhoto {
    std::string Type;
    std::string Media;
    std::string Photo;
};

}

#endif // TELEGRAMBOTAPI_INPUTPAIDMEDIALIVEPHOTO_HPP
