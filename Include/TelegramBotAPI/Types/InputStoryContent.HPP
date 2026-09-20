#ifndef TELEGRAMBOTAPI_INPUTSTORYCONTENT_HPP
#define TELEGRAMBOTAPI_INPUTSTORYCONTENT_HPP

#include "TelegramBotAPI/Types/InputStoryContentPhoto.HPP"
#include "TelegramBotAPI/Types/InputStoryContentVideo.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using InputStoryContent = std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo>;

}

#endif // TELEGRAMBOTAPI_INPUTSTORYCONTENT_HPP
