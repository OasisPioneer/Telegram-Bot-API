#ifndef TELEGRAMBOTAPI_INPUTPAIDMEDIA_HPP
#define TELEGRAMBOTAPI_INPUTPAIDMEDIA_HPP

#include "TelegramBotAPI/Types/InputPaidMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaVideo.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using InputPaidMedia = std::variant<::TelegramBotAPI::Type::InputPaidMediaLivePhoto, ::TelegramBotAPI::Type::InputPaidMediaPhoto, ::TelegramBotAPI::Type::InputPaidMediaVideo>;

}

#endif // TELEGRAMBOTAPI_INPUTPAIDMEDIA_HPP
