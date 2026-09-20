#ifndef TELEGRAMBOTAPI_INPUTRICHBLOCKVOICENOTE_HPP
#define TELEGRAMBOTAPI_INPUTRICHBLOCKVOICENOTE_HPP

#include "TelegramBotAPI/Types/InputMediaVoiceNote.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputRichBlockVoiceNote {
    std::string Type;
    ::TelegramBotAPI::Type::InputMediaVoiceNote VoiceNote;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_INPUTRICHBLOCKVOICENOTE_HPP
