#ifndef TELEGRAMBOTAPI_TRANSACTIONPARTNER_HPP
#define TELEGRAMBOTAPI_TRANSACTIONPARTNER_HPP

#include "TelegramBotAPI/Types/TransactionPartnerAffiliateProgram.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerChat.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerFragment.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerOther.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerTelegramAds.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerTelegramApi.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerUser.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using TransactionPartner = std::variant<::TelegramBotAPI::Type::TransactionPartnerUser, ::TelegramBotAPI::Type::TransactionPartnerChat, ::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram, ::TelegramBotAPI::Type::TransactionPartnerFragment, ::TelegramBotAPI::Type::TransactionPartnerTelegramAds, ::TelegramBotAPI::Type::TransactionPartnerTelegramApi, ::TelegramBotAPI::Type::TransactionPartnerOther>;

}

#endif // TELEGRAMBOTAPI_TRANSACTIONPARTNER_HPP
