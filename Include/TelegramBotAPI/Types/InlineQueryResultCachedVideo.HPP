#ifndef TELEGRAMBOTAPI_INLINEQUERYRESULTCACHEDVIDEO_HPP
#define TELEGRAMBOTAPI_INLINEQUERYRESULTCACHEDVIDEO_HPP

#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InputContactMessageContent.HPP"
#include "TelegramBotAPI/Types/InputInvoiceMessageContent.HPP"
#include "TelegramBotAPI/Types/InputLocationMessageContent.HPP"
#include "TelegramBotAPI/Types/InputRichMessageContent.HPP"
#include "TelegramBotAPI/Types/InputTextMessageContent.HPP"
#include "TelegramBotAPI/Types/InputVenueMessageContent.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Type {

struct InlineQueryResultCachedVideo {
    std::string Type;
    std::string ID;
    std::string VideoFileID;
    std::string Title;
    std::optional<std::string> Description{};
    std::optional<std::string> Caption{};
    std::optional<std::string> ParseMode{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};
    std::optional<bool> ShowCaptionAboveMedia{};
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};
    std::optional<std::variant<::TelegramBotAPI::Type::InputTextMessageContent, ::TelegramBotAPI::Type::InputRichMessageContent, ::TelegramBotAPI::Type::InputLocationMessageContent, ::TelegramBotAPI::Type::InputVenueMessageContent, ::TelegramBotAPI::Type::InputContactMessageContent, ::TelegramBotAPI::Type::InputInvoiceMessageContent>> InputMessageContent{};
};

}

#endif // TELEGRAMBOTAPI_INLINEQUERYRESULTCACHEDVIDEO_HPP
