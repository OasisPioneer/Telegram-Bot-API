#ifndef TELEGRAMBOTAPI_UPDATE_HPP
#define TELEGRAMBOTAPI_UPDATE_HPP

#include "TelegramBotAPI/Types/BotSubscriptionUpdated.HPP"
#include "TelegramBotAPI/Types/BusinessConnection.HPP"
#include "TelegramBotAPI/Types/BusinessMessagesDeleted.HPP"
#include "TelegramBotAPI/Types/CallbackQuery.HPP"
#include "TelegramBotAPI/Types/ChatBoostRemoved.HPP"
#include "TelegramBotAPI/Types/ChatBoostUpdated.HPP"
#include "TelegramBotAPI/Types/ChatJoinRequest.HPP"
#include "TelegramBotAPI/Types/ChatMemberUpdated.HPP"
#include "TelegramBotAPI/Types/ChosenInlineResult.HPP"
#include "TelegramBotAPI/Types/InlineQuery.HPP"
#include "TelegramBotAPI/Types/ManagedBotUpdated.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageGenerationStopped.HPP"
#include "TelegramBotAPI/Types/MessageReactionCountUpdated.HPP"
#include "TelegramBotAPI/Types/MessageReactionUpdated.HPP"
#include "TelegramBotAPI/Types/PaidMediaPurchased.HPP"
#include "TelegramBotAPI/Types/Poll.HPP"
#include "TelegramBotAPI/Types/PollAnswer.HPP"
#include "TelegramBotAPI/Types/PreCheckoutQuery.HPP"
#include "TelegramBotAPI/Types/ShippingQuery.HPP"
#include <optional>

namespace TelegramBotAPI::Type {

struct Update {
    long long UpdateID;
    std::optional<::TelegramBotAPI::Type::Message> Message{};
    std::optional<::TelegramBotAPI::Type::Message> EditedMessage{};
    std::optional<::TelegramBotAPI::Type::Message> ChannelPost{};
    std::optional<::TelegramBotAPI::Type::Message> EditedChannelPost{};
    std::optional<::TelegramBotAPI::Type::BusinessConnection> BusinessConnection{};
    std::optional<::TelegramBotAPI::Type::Message> BusinessMessage{};
    std::optional<::TelegramBotAPI::Type::Message> EditedBusinessMessage{};
    std::optional<::TelegramBotAPI::Type::BusinessMessagesDeleted> DeletedBusinessMessages{};
    std::optional<::TelegramBotAPI::Type::Message> GuestMessage{};
    std::optional<::TelegramBotAPI::Type::MessageReactionUpdated> MessageReaction{};
    std::optional<::TelegramBotAPI::Type::MessageReactionCountUpdated> MessageReactionCount{};
    std::optional<::TelegramBotAPI::Type::InlineQuery> InlineQuery{};
    std::optional<::TelegramBotAPI::Type::ChosenInlineResult> ChosenInlineResult{};
    std::optional<::TelegramBotAPI::Type::CallbackQuery> CallbackQuery{};
    std::optional<::TelegramBotAPI::Type::ShippingQuery> ShippingQuery{};
    std::optional<::TelegramBotAPI::Type::PreCheckoutQuery> PreCheckoutQuery{};
    std::optional<::TelegramBotAPI::Type::PaidMediaPurchased> PurchasedPaidMedia{};
    std::optional<::TelegramBotAPI::Type::Poll> Poll{};
    std::optional<::TelegramBotAPI::Type::PollAnswer> PollAnswer{};
    std::optional<::TelegramBotAPI::Type::ChatMemberUpdated> MyChatMember{};
    std::optional<::TelegramBotAPI::Type::ChatMemberUpdated> ChatMember{};
    std::optional<::TelegramBotAPI::Type::ChatJoinRequest> ChatJoinRequest{};
    std::optional<::TelegramBotAPI::Type::ChatBoostUpdated> ChatBoost{};
    std::optional<::TelegramBotAPI::Type::ChatBoostRemoved> RemovedChatBoost{};
    std::optional<::TelegramBotAPI::Type::ManagedBotUpdated> ManagedBot{};
    std::optional<::TelegramBotAPI::Type::BotSubscriptionUpdated> Subscription{};
    std::optional<::TelegramBotAPI::Type::MessageGenerationStopped> StoppedMessageGeneration{};
};

}

#endif // TELEGRAMBOTAPI_UPDATE_HPP
