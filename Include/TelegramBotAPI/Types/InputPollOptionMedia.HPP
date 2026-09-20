#ifndef TELEGRAMBOTAPI_INPUTPOLLOPTIONMEDIA_HPP
#define TELEGRAMBOTAPI_INPUTPOLLOPTIONMEDIA_HPP

#include "TelegramBotAPI/Types/InputMediaAnimation.HPP"
#include "TelegramBotAPI/Types/InputMediaLink.HPP"
#include "TelegramBotAPI/Types/InputMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaLocation.HPP"
#include "TelegramBotAPI/Types/InputMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaSticker.HPP"
#include "TelegramBotAPI/Types/InputMediaVenue.HPP"
#include "TelegramBotAPI/Types/InputMediaVideo.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using InputPollOptionMedia = std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaLink, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaLocation, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaSticker, ::TelegramBotAPI::Type::InputMediaVenue, ::TelegramBotAPI::Type::InputMediaVideo>;

}

#endif // TELEGRAMBOTAPI_INPUTPOLLOPTIONMEDIA_HPP
