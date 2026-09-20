#ifndef TELEGRAMBOTAPI_PAIDMEDIA_HPP
#define TELEGRAMBOTAPI_PAIDMEDIA_HPP

#include "TelegramBotAPI/Types/PaidMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/PaidMediaPhoto.HPP"
#include "TelegramBotAPI/Types/PaidMediaPreview.HPP"
#include "TelegramBotAPI/Types/PaidMediaVideo.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using PaidMedia = std::variant<::TelegramBotAPI::Type::PaidMediaLivePhoto, ::TelegramBotAPI::Type::PaidMediaPhoto, ::TelegramBotAPI::Type::PaidMediaPreview, ::TelegramBotAPI::Type::PaidMediaVideo>;

}

#endif // TELEGRAMBOTAPI_PAIDMEDIA_HPP
