#ifndef TELEGRAMBOTAPI_INPUTMEDIA_HPP
#define TELEGRAMBOTAPI_INPUTMEDIA_HPP

#include "TelegramBotAPI/Types/InputMediaAnimation.HPP"
#include "TelegramBotAPI/Types/InputMediaAudio.HPP"
#include "TelegramBotAPI/Types/InputMediaDocument.HPP"
#include "TelegramBotAPI/Types/InputMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaVideo.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using InputMedia = std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo>;

}

#endif // TELEGRAMBOTAPI_INPUTMEDIA_HPP
