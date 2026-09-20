#ifndef TELEGRAMBOTAPI_INLINEQUERYRESULTARTICLE_HPP
#define TELEGRAMBOTAPI_INLINEQUERYRESULTARTICLE_HPP

#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InputContactMessageContent.HPP"
#include "TelegramBotAPI/Types/InputInvoiceMessageContent.HPP"
#include "TelegramBotAPI/Types/InputLocationMessageContent.HPP"
#include "TelegramBotAPI/Types/InputRichMessageContent.HPP"
#include "TelegramBotAPI/Types/InputTextMessageContent.HPP"
#include "TelegramBotAPI/Types/InputVenueMessageContent.HPP"
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Type {

struct InlineQueryResultArticle {
    std::string Type;
    std::string ID;
    std::string Title;
    std::variant<::TelegramBotAPI::Type::InputTextMessageContent, ::TelegramBotAPI::Type::InputRichMessageContent, ::TelegramBotAPI::Type::InputLocationMessageContent, ::TelegramBotAPI::Type::InputVenueMessageContent, ::TelegramBotAPI::Type::InputContactMessageContent, ::TelegramBotAPI::Type::InputInvoiceMessageContent> InputMessageContent;
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};
    std::optional<std::string> URL{};
    std::optional<std::string> Description{};
    std::optional<std::string> ThumbnailURL{};
    std::optional<long long> ThumbnailWidth{};
    std::optional<long long> ThumbnailHeight{};
};

}

#endif // TELEGRAMBOTAPI_INLINEQUERYRESULTARTICLE_HPP
