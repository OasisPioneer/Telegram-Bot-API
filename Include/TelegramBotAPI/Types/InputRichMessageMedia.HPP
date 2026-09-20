#ifndef TELEGRAMBOTAPI_INPUTRICHMESSAGEMEDIA_HPP
#define TELEGRAMBOTAPI_INPUTRICHMESSAGEMEDIA_HPP

#include "TelegramBotAPI/Types/InputMediaAnimation.HPP"
#include "TelegramBotAPI/Types/InputMediaAudio.HPP"
#include "TelegramBotAPI/Types/InputMediaDocument.HPP"
#include "TelegramBotAPI/Types/InputMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaVideo.HPP"
#include "TelegramBotAPI/Types/InputMediaVoiceNote.HPP"
#include <string>
#include <variant>

namespace TelegramBotAPI::Type {

struct InputRichMessageMedia {
    std::string ID;
    std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo, ::TelegramBotAPI::Type::InputMediaVoiceNote> Media;
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHMESSAGEMEDIA_HPP
