#ifndef TELEGRAMBOTAPI_PAIDMEDIALIVEPHOTO_HPP
#define TELEGRAMBOTAPI_PAIDMEDIALIVEPHOTO_HPP

#include "TelegramBotAPI/Types/LivePhoto.HPP"
#include <string>

namespace TelegramBotAPI::Type {

struct PaidMediaLivePhoto {
    std::string Type;
    ::TelegramBotAPI::Type::LivePhoto LivePhoto;
};

}

#endif // TELEGRAMBOTAPI_PAIDMEDIALIVEPHOTO_HPP
