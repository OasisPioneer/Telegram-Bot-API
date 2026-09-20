#ifndef TELEGRAMBOTAPI_INPUTPROFILEPHOTO_HPP
#define TELEGRAMBOTAPI_INPUTPROFILEPHOTO_HPP

#include "TelegramBotAPI/Types/InputProfilePhotoAnimated.HPP"
#include "TelegramBotAPI/Types/InputProfilePhotoStatic.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using InputProfilePhoto = std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated>;

}

#endif // TELEGRAMBOTAPI_INPUTPROFILEPHOTO_HPP
