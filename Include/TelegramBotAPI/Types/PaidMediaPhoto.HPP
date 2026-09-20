#ifndef TELEGRAMBOTAPI_PAIDMEDIAPHOTO_HPP
#define TELEGRAMBOTAPI_PAIDMEDIAPHOTO_HPP

#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct PaidMediaPhoto {
    std::string Type;
    std::vector<::TelegramBotAPI::Type::PhotoSize> Photo;
};

}

#endif // TELEGRAMBOTAPI_PAIDMEDIAPHOTO_HPP
