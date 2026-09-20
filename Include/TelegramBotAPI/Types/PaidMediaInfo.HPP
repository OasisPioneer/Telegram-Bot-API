#ifndef TELEGRAMBOTAPI_PAIDMEDIAINFO_HPP
#define TELEGRAMBOTAPI_PAIDMEDIAINFO_HPP

#include "TelegramBotAPI/Types/PaidMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/PaidMediaPhoto.HPP"
#include "TelegramBotAPI/Types/PaidMediaPreview.HPP"
#include "TelegramBotAPI/Types/PaidMediaVideo.HPP"
#include <variant>
#include <vector>

namespace TelegramBotAPI::Type {

struct PaidMediaInfo {
    long long StarCount;
    std::vector<std::variant<::TelegramBotAPI::Type::PaidMediaLivePhoto, ::TelegramBotAPI::Type::PaidMediaPhoto, ::TelegramBotAPI::Type::PaidMediaPreview, ::TelegramBotAPI::Type::PaidMediaVideo>> PaidMedia;
};

}

#endif // TELEGRAMBOTAPI_PAIDMEDIAINFO_HPP
