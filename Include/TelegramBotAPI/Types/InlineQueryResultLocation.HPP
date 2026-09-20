#ifndef TELEGRAMBOTAPI_INLINEQUERYRESULTLOCATION_HPP
#define TELEGRAMBOTAPI_INLINEQUERYRESULTLOCATION_HPP

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

struct InlineQueryResultLocation {
    std::string Type;
    std::string ID;
    double Latitude;
    double Longitude;
    std::string Title;
    std::optional<double> HorizontalAccuracy{};
    std::optional<long long> LivePeriod{};
    std::optional<long long> Heading{};
    std::optional<long long> ProximityAlertRadius{};
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};
    std::optional<std::variant<::TelegramBotAPI::Type::InputTextMessageContent, ::TelegramBotAPI::Type::InputRichMessageContent, ::TelegramBotAPI::Type::InputLocationMessageContent, ::TelegramBotAPI::Type::InputVenueMessageContent, ::TelegramBotAPI::Type::InputContactMessageContent, ::TelegramBotAPI::Type::InputInvoiceMessageContent>> InputMessageContent{};
    std::optional<std::string> ThumbnailURL{};
    std::optional<long long> ThumbnailWidth{};
    std::optional<long long> ThumbnailHeight{};
};

}

#endif // TELEGRAMBOTAPI_INLINEQUERYRESULTLOCATION_HPP
