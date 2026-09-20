#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKPHOTO_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKPHOTO_HPP

#include "TelegramBotAPI/Types/InputMediaPhoto.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockPhoto {
    std::string Type;
    ::TelegramBotAPI::Type::InputMediaPhoto Photo;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKPHOTO_HPP
