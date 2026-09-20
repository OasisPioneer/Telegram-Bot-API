#ifndef TELEGRAMBOTAPI_INPUTINVOICEMESSAGECONTENT_HPP
#define TELEGRAMBOTAPI_INPUTINVOICEMESSAGECONTENT_HPP

#include "TelegramBotAPI/Types/LabeledPrice.HPP"
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Type {

struct InputInvoiceMessageContent {
    std::string Title;
    std::string Description;
    std::string Payload;
    std::optional<std::string> ProviderToken{};
    std::string Currency;
    std::vector<::TelegramBotAPI::Type::LabeledPrice> Prices;
    std::optional<long long> MaxTipAmount{};
    std::optional<std::vector<long long>> SuggestedTipAmounts{};
    std::optional<std::string> ProviderData{};
    std::optional<std::string> PhotoURL{};
    std::optional<long long> PhotoSize{};
    std::optional<long long> PhotoWidth{};
    std::optional<long long> PhotoHeight{};
    std::optional<bool> NeedName{};
    std::optional<bool> NeedPhoneNumber{};
    std::optional<bool> NeedEmail{};
    std::optional<bool> NeedShippingAddress{};
    std::optional<bool> SendPhoneNumberToProvider{};
    std::optional<bool> SendEmailToProvider{};
    std::optional<bool> IsFlexible{};
};

}

#endif // TELEGRAMBOTAPI_INPUTINVOICEMESSAGECONTENT_HPP
