#ifndef TELEGRAMBOTAPI_RICHBLOCKDOCUMENT_HPP
#define TELEGRAMBOTAPI_RICHBLOCKDOCUMENT_HPP

#include "TelegramBotAPI/Types/Document.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockDocument {
    std::string Type;
    ::TelegramBotAPI::Type::Document Document;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKDOCUMENT_HPP
