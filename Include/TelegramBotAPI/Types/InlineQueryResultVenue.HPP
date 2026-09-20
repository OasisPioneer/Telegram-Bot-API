#ifndef TELEGRAMBOTAPI_INLINEQUERYRESULTVENUE_HPP
#define TELEGRAMBOTAPI_INLINEQUERYRESULTVENUE_HPP

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

struct InlineQueryResultVenue {
    std::string Type;
    std::string ID;
    double Latitude;
    double Longitude;
    std::string Title;
    std::string Address;
    std::optional<std::string> FoursquareID{};
    std::optional<std::string> FoursquareType{};
    std::optional<std::string> GooglePlaceID{};
    std::optional<std::string> GooglePlaceType{};
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};
    std::optional<std::variant<::TelegramBotAPI::Type::InputTextMessageContent, ::TelegramBotAPI::Type::InputRichMessageContent, ::TelegramBotAPI::Type::InputLocationMessageContent, ::TelegramBotAPI::Type::InputVenueMessageContent, ::TelegramBotAPI::Type::InputContactMessageContent, ::TelegramBotAPI::Type::InputInvoiceMessageContent>> InputMessageContent{};
    std::optional<std::string> ThumbnailURL{};
    std::optional<long long> ThumbnailWidth{};
    std::optional<long long> ThumbnailHeight{};
};

}

#endif // TELEGRAMBOTAPI_INLINEQUERYRESULTVENUE_HPP
