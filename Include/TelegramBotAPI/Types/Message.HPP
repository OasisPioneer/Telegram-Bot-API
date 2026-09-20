#ifndef TELEGRAMBOTAPI_MESSAGE_HPP
#define TELEGRAMBOTAPI_MESSAGE_HPP

#include "TelegramBotAPI/Types/Animation.HPP"
#include "TelegramBotAPI/Types/Audio.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ChatBackground.HPP"
#include "TelegramBotAPI/Types/ChatBoostAdded.HPP"
#include "TelegramBotAPI/Types/ChatOwnerChanged.HPP"
#include "TelegramBotAPI/Types/ChatOwnerLeft.HPP"
#include "TelegramBotAPI/Types/ChatShared.HPP"
#include "TelegramBotAPI/Types/Checklist.HPP"
#include "TelegramBotAPI/Types/ChecklistTasksAdded.HPP"
#include "TelegramBotAPI/Types/ChecklistTasksDone.HPP"
#include "TelegramBotAPI/Types/CommunityChatAdded.HPP"
#include "TelegramBotAPI/Types/CommunityChatJoined.HPP"
#include "TelegramBotAPI/Types/CommunityChatRemoved.HPP"
#include "TelegramBotAPI/Types/Contact.HPP"
#include "TelegramBotAPI/Types/Dice.HPP"
#include "TelegramBotAPI/Types/DirectMessagePriceChanged.HPP"
#include "TelegramBotAPI/Types/DirectMessagesTopic.HPP"
#include "TelegramBotAPI/Types/Document.HPP"
#include "TelegramBotAPI/Types/ExternalReplyInfo.HPP"
#include "TelegramBotAPI/Types/ForumTopicClosed.HPP"
#include "TelegramBotAPI/Types/ForumTopicCreated.HPP"
#include "TelegramBotAPI/Types/ForumTopicEdited.HPP"
#include "TelegramBotAPI/Types/ForumTopicReopened.HPP"
#include "TelegramBotAPI/Types/Game.HPP"
#include "TelegramBotAPI/Types/GeneralForumTopicHidden.HPP"
#include "TelegramBotAPI/Types/GeneralForumTopicUnhidden.HPP"
#include "TelegramBotAPI/Types/GiftInfo.HPP"
#include "TelegramBotAPI/Types/Giveaway.HPP"
#include "TelegramBotAPI/Types/GiveawayCompleted.HPP"
#include "TelegramBotAPI/Types/GiveawayCreated.HPP"
#include "TelegramBotAPI/Types/GiveawayWinners.HPP"
#include "TelegramBotAPI/Types/InaccessibleMessage.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/Invoice.HPP"
#include "TelegramBotAPI/Types/LinkPreviewOptions.HPP"
#include "TelegramBotAPI/Types/LivePhoto.HPP"
#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/ManagedBotCreated.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageAutoDeleteTimerChanged.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/MessageOriginChannel.HPP"
#include "TelegramBotAPI/Types/MessageOriginChat.HPP"
#include "TelegramBotAPI/Types/MessageOriginHiddenUser.HPP"
#include "TelegramBotAPI/Types/MessageOriginUser.HPP"
#include "TelegramBotAPI/Types/PaidMediaInfo.HPP"
#include "TelegramBotAPI/Types/PaidMessagePriceChanged.HPP"
#include "TelegramBotAPI/Types/PassportData.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include "TelegramBotAPI/Types/Poll.HPP"
#include "TelegramBotAPI/Types/PollOptionAdded.HPP"
#include "TelegramBotAPI/Types/PollOptionDeleted.HPP"
#include "TelegramBotAPI/Types/ProximityAlertTriggered.HPP"
#include "TelegramBotAPI/Types/RefundedPayment.HPP"
#include "TelegramBotAPI/Types/RichMessage.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include "TelegramBotAPI/Types/Story.HPP"
#include "TelegramBotAPI/Types/SuccessfulPayment.HPP"
#include "TelegramBotAPI/Types/SuggestedPostApprovalFailed.HPP"
#include "TelegramBotAPI/Types/SuggestedPostApproved.HPP"
#include "TelegramBotAPI/Types/SuggestedPostDeclined.HPP"
#include "TelegramBotAPI/Types/SuggestedPostInfo.HPP"
#include "TelegramBotAPI/Types/SuggestedPostPaid.HPP"
#include "TelegramBotAPI/Types/SuggestedPostRefunded.HPP"
#include "TelegramBotAPI/Types/TextQuote.HPP"
#include "TelegramBotAPI/Types/UniqueGiftInfo.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include "TelegramBotAPI/Types/UsersShared.HPP"
#include "TelegramBotAPI/Types/Venue.HPP"
#include "TelegramBotAPI/Types/Video.HPP"
#include "TelegramBotAPI/Types/VideoChatEnded.HPP"
#include "TelegramBotAPI/Types/VideoChatParticipantsInvited.HPP"
#include "TelegramBotAPI/Types/VideoChatScheduled.HPP"
#include "TelegramBotAPI/Types/VideoChatStarted.HPP"
#include "TelegramBotAPI/Types/VideoNote.HPP"
#include "TelegramBotAPI/Types/Voice.HPP"
#include "TelegramBotAPI/Types/WebAppData.HPP"
#include "TelegramBotAPI/Types/WriteAccessAllowed.HPP"
#include <memory>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Type {

struct ChecklistTasksAdded;
struct ChecklistTasksDone;
struct GiveawayCompleted;
struct PollOptionAdded;
struct PollOptionDeleted;
struct SuggestedPostApprovalFailed;
struct SuggestedPostApproved;
struct SuggestedPostDeclined;
struct SuggestedPostPaid;
struct SuggestedPostRefunded;

}

namespace TelegramBotAPI::Type {

struct Message {
    long long MessageID;
    std::optional<long long> MessageThreadID{};
    std::optional<::TelegramBotAPI::Type::DirectMessagesTopic> DirectMessagesTopic{};
    std::optional<::TelegramBotAPI::Type::User> From{};
    std::optional<::TelegramBotAPI::Type::Chat> SenderChat{};
    std::optional<long long> SenderBoostCount{};
    std::optional<::TelegramBotAPI::Type::User> SenderBusinessBot{};
    std::optional<std::string> SenderTag{};
    std::optional<::TelegramBotAPI::Type::User> ReceiverUser{};
    std::optional<long long> EphemeralMessageID{};
    long long Date;
    std::optional<std::string> GuestQueryID{};
    std::optional<std::string> BusinessConnectionID{};
    ::TelegramBotAPI::Type::Chat Chat;
    std::optional<std::variant<::TelegramBotAPI::Type::MessageOriginUser, ::TelegramBotAPI::Type::MessageOriginHiddenUser, ::TelegramBotAPI::Type::MessageOriginChat, ::TelegramBotAPI::Type::MessageOriginChannel>> ForwardOrigin{};
    std::optional<bool> IsTopicMessage{};
    std::optional<bool> IsAutomaticForward{};
    std::shared_ptr<::TelegramBotAPI::Type::Message> ReplyToMessage{};
    std::optional<::TelegramBotAPI::Type::ExternalReplyInfo> ExternalReply{};
    std::optional<::TelegramBotAPI::Type::TextQuote> Quote{};
    std::optional<::TelegramBotAPI::Type::Story> ReplyToStory{};
    std::optional<long long> ReplyToChecklistTaskID{};
    std::optional<std::string> ReplyToPollOptionID{};
    std::optional<::TelegramBotAPI::Type::User> ViaBot{};
    std::optional<::TelegramBotAPI::Type::User> GuestBotCallerUser{};
    std::optional<::TelegramBotAPI::Type::Chat> GuestBotCallerChat{};
    std::optional<long long> EditDate{};
    std::optional<bool> HasProtectedContent{};
    std::optional<bool> IsFromOffline{};
    std::optional<bool> IsPaidPost{};
    std::optional<std::string> MediaGroupID{};
    std::optional<std::string> AuthorSignature{};
    std::optional<long long> PaidStarCount{};
    std::optional<std::string> Text{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> Entities{};
    std::optional<::TelegramBotAPI::Type::LinkPreviewOptions> LinkPreviewOptions{};
    std::optional<::TelegramBotAPI::Type::SuggestedPostInfo> SuggestedPostInfo{};
    std::optional<std::string> EffectID{};
    std::optional<::TelegramBotAPI::Type::RichMessage> RichMessage{};
    std::optional<::TelegramBotAPI::Type::Animation> Animation{};
    std::optional<::TelegramBotAPI::Type::Audio> Audio{};
    std::optional<::TelegramBotAPI::Type::Document> Document{};
    std::optional<::TelegramBotAPI::Type::LivePhoto> LivePhoto{};
    std::optional<::TelegramBotAPI::Type::PaidMediaInfo> PaidMedia{};
    std::optional<std::vector<::TelegramBotAPI::Type::PhotoSize>> Photo{};
    std::optional<::TelegramBotAPI::Type::Sticker> Sticker{};
    std::optional<::TelegramBotAPI::Type::Story> Story{};
    std::optional<::TelegramBotAPI::Type::Video> Video{};
    std::optional<::TelegramBotAPI::Type::VideoNote> VideoNote{};
    std::optional<::TelegramBotAPI::Type::Voice> Voice{};
    std::optional<std::string> Caption{};
    std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};
    std::optional<bool> ShowCaptionAboveMedia{};
    std::optional<bool> HasMediaSpoiler{};
    std::optional<::TelegramBotAPI::Type::Checklist> Checklist{};
    std::optional<::TelegramBotAPI::Type::Contact> Contact{};
    std::optional<::TelegramBotAPI::Type::Dice> Dice{};
    std::optional<::TelegramBotAPI::Type::Game> Game{};
    std::optional<::TelegramBotAPI::Type::Poll> Poll{};
    std::optional<::TelegramBotAPI::Type::Venue> Venue{};
    std::optional<::TelegramBotAPI::Type::Location> Location{};
    std::optional<std::vector<::TelegramBotAPI::Type::User>> NewChatMembers{};
    std::optional<::TelegramBotAPI::Type::User> LeftChatMember{};
    std::optional<::TelegramBotAPI::Type::ChatOwnerLeft> ChatOwnerLeft{};
    std::optional<::TelegramBotAPI::Type::ChatOwnerChanged> ChatOwnerChanged{};
    std::optional<std::string> NewChatTitle{};
    std::optional<std::vector<::TelegramBotAPI::Type::PhotoSize>> NewChatPhoto{};
    std::optional<bool> DeleteChatPhoto{};
    std::optional<bool> GroupChatCreated{};
    std::optional<bool> SupergroupChatCreated{};
    std::optional<bool> ChannelChatCreated{};
    std::optional<::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged> MessageAutoDeleteTimerChanged{};
    std::optional<long long> MigrateToChatID{};
    std::optional<long long> MigrateFromChatID{};
    std::optional<std::variant<std::shared_ptr<::TelegramBotAPI::Type::Message>, ::TelegramBotAPI::Type::InaccessibleMessage>> PinnedMessage{};
    std::optional<::TelegramBotAPI::Type::Invoice> Invoice{};
    std::optional<::TelegramBotAPI::Type::SuccessfulPayment> SuccessfulPayment{};
    std::optional<::TelegramBotAPI::Type::RefundedPayment> RefundedPayment{};
    std::optional<::TelegramBotAPI::Type::UsersShared> UsersShared{};
    std::optional<::TelegramBotAPI::Type::ChatShared> ChatShared{};
    std::optional<::TelegramBotAPI::Type::GiftInfo> Gift{};
    std::optional<::TelegramBotAPI::Type::UniqueGiftInfo> UniqueGift{};
    std::optional<::TelegramBotAPI::Type::GiftInfo> GiftUpgradeSent{};
    std::optional<std::string> ConnectedWebsite{};
    std::optional<::TelegramBotAPI::Type::WriteAccessAllowed> WriteAccessAllowed{};
    std::optional<::TelegramBotAPI::Type::PassportData> PassportData{};
    std::optional<::TelegramBotAPI::Type::ProximityAlertTriggered> ProximityAlertTriggered{};
    std::optional<::TelegramBotAPI::Type::ChatBoostAdded> BoostAdded{};
    std::optional<::TelegramBotAPI::Type::ChatBackground> ChatBackgroundSet{};
    std::shared_ptr<::TelegramBotAPI::Type::ChecklistTasksDone> ChecklistTasksDone{};
    std::shared_ptr<::TelegramBotAPI::Type::ChecklistTasksAdded> ChecklistTasksAdded{};
    std::optional<::TelegramBotAPI::Type::CommunityChatAdded> CommunityChatAdded{};
    std::optional<::TelegramBotAPI::Type::CommunityChatJoined> CommunityChatJoined{};
    std::optional<::TelegramBotAPI::Type::CommunityChatRemoved> CommunityChatRemoved{};
    std::optional<::TelegramBotAPI::Type::DirectMessagePriceChanged> DirectMessagePriceChanged{};
    std::optional<::TelegramBotAPI::Type::ForumTopicCreated> ForumTopicCreated{};
    std::optional<::TelegramBotAPI::Type::ForumTopicEdited> ForumTopicEdited{};
    std::optional<::TelegramBotAPI::Type::ForumTopicClosed> ForumTopicClosed{};
    std::optional<::TelegramBotAPI::Type::ForumTopicReopened> ForumTopicReopened{};
    std::optional<::TelegramBotAPI::Type::GeneralForumTopicHidden> GeneralForumTopicHidden{};
    std::optional<::TelegramBotAPI::Type::GeneralForumTopicUnhidden> GeneralForumTopicUnhidden{};
    std::optional<::TelegramBotAPI::Type::GiveawayCreated> GiveawayCreated{};
    std::optional<::TelegramBotAPI::Type::Giveaway> Giveaway{};
    std::optional<::TelegramBotAPI::Type::GiveawayWinners> GiveawayWinners{};
    std::shared_ptr<::TelegramBotAPI::Type::GiveawayCompleted> GiveawayCompleted{};
    std::optional<::TelegramBotAPI::Type::ManagedBotCreated> ManagedBotCreated{};
    std::optional<::TelegramBotAPI::Type::PaidMessagePriceChanged> PaidMessagePriceChanged{};
    std::shared_ptr<::TelegramBotAPI::Type::PollOptionAdded> PollOptionAdded{};
    std::shared_ptr<::TelegramBotAPI::Type::PollOptionDeleted> PollOptionDeleted{};
    std::shared_ptr<::TelegramBotAPI::Type::SuggestedPostApproved> SuggestedPostApproved{};
    std::shared_ptr<::TelegramBotAPI::Type::SuggestedPostApprovalFailed> SuggestedPostApprovalFailed{};
    std::shared_ptr<::TelegramBotAPI::Type::SuggestedPostDeclined> SuggestedPostDeclined{};
    std::shared_ptr<::TelegramBotAPI::Type::SuggestedPostPaid> SuggestedPostPaid{};
    std::shared_ptr<::TelegramBotAPI::Type::SuggestedPostRefunded> SuggestedPostRefunded{};
    std::optional<::TelegramBotAPI::Type::VideoChatScheduled> VideoChatScheduled{};
    std::optional<::TelegramBotAPI::Type::VideoChatStarted> VideoChatStarted{};
    std::optional<::TelegramBotAPI::Type::VideoChatEnded> VideoChatEnded{};
    std::optional<::TelegramBotAPI::Type::VideoChatParticipantsInvited> VideoChatParticipantsInvited{};
    std::optional<::TelegramBotAPI::Type::WebAppData> WebAppData{};
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};
};

}

#endif // TELEGRAMBOTAPI_MESSAGE_HPP
