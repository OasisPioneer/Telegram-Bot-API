#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKDOCUMENT_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKDOCUMENT_HPP

#include "TelegramBotAPI/Types/InputMediaDocument.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockDocument {
    std::string Type;
    ::TelegramBotAPI::Type::InputMediaDocument Document;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKDOCUMENT_HPP
