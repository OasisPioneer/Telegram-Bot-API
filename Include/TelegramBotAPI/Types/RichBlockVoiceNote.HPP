#ifndef TELEGRAMBOTAPI_RICHBLOCKVOICENOTE_HPP
#define TELEGRAMBOTAPI_RICHBLOCKVOICENOTE_HPP

#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include "TelegramBotAPI/Types/Voice.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct RichBlockVoiceNote {
    std::string Type;
    ::TelegramBotAPI::Type::Voice VoiceNote;
    std::optional<::TelegramBotAPI::Type::RichBlockCaption> Caption{};
};

}

#endif // TELEGRAMBOTAPI_RICHBLOCKVOICENOTE_HPP
