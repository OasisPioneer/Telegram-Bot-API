#ifndef TELEGRAMBOTAPI_STARTRANSACTION_HPP
#define TELEGRAMBOTAPI_STARTRANSACTION_HPP

#include "TelegramBotAPI/Types/TransactionPartnerAffiliateProgram.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerChat.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerFragment.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerOther.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerTelegramAds.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerTelegramApi.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerUser.HPP"
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Type {

struct StarTransaction {
    std::string ID;
    long long Amount;
    std::optional<long long> NanostarAmount{};
    long long Date;
    std::optional<std::variant<::TelegramBotAPI::Type::TransactionPartnerUser, ::TelegramBotAPI::Type::TransactionPartnerChat, ::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram, ::TelegramBotAPI::Type::TransactionPartnerFragment, ::TelegramBotAPI::Type::TransactionPartnerTelegramAds, ::TelegramBotAPI::Type::TransactionPartnerTelegramApi, ::TelegramBotAPI::Type::TransactionPartnerOther>> Source{};
    std::optional<std::variant<::TelegramBotAPI::Type::TransactionPartnerUser, ::TelegramBotAPI::Type::TransactionPartnerChat, ::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram, ::TelegramBotAPI::Type::TransactionPartnerFragment, ::TelegramBotAPI::Type::TransactionPartnerTelegramAds, ::TelegramBotAPI::Type::TransactionPartnerTelegramApi, ::TelegramBotAPI::Type::TransactionPartnerOther>> Receiver{};
};

}

#endif // TELEGRAMBOTAPI_STARTRANSACTION_HPP
