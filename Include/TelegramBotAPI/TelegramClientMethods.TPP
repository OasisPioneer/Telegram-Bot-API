#ifndef TELEGRAMBOTAPI_TELEGRAMCLIENT_METHODS_TPP
#define TELEGRAMBOTAPI_TELEGRAMCLIENT_METHODS_TPP

#include "TelegramBotAPI/Methods/addStickerToSet.HPP"
#include "TelegramBotAPI/Methods/answerCallbackQuery.HPP"
#include "TelegramBotAPI/Methods/answerChatJoinRequestQuery.HPP"
#include "TelegramBotAPI/Methods/answerGuestQuery.HPP"
#include "TelegramBotAPI/Methods/answerInlineQuery.HPP"
#include "TelegramBotAPI/Methods/answerPreCheckoutQuery.HPP"
#include "TelegramBotAPI/Methods/answerShippingQuery.HPP"
#include "TelegramBotAPI/Methods/answerWebAppQuery.HPP"
#include "TelegramBotAPI/Methods/approveChatJoinRequest.HPP"
#include "TelegramBotAPI/Methods/approveSuggestedPost.HPP"
#include "TelegramBotAPI/Methods/banChatMember.HPP"
#include "TelegramBotAPI/Methods/banChatSenderChat.HPP"
#include "TelegramBotAPI/Methods/close.HPP"
#include "TelegramBotAPI/Methods/closeForumTopic.HPP"
#include "TelegramBotAPI/Methods/closeGeneralForumTopic.HPP"
#include "TelegramBotAPI/Methods/convertGiftToStars.HPP"
#include "TelegramBotAPI/Methods/copyMessage.HPP"
#include "TelegramBotAPI/Methods/copyMessages.HPP"
#include "TelegramBotAPI/Methods/createChatInviteLink.HPP"
#include "TelegramBotAPI/Methods/createChatSubscriptionInviteLink.HPP"
#include "TelegramBotAPI/Methods/createForumTopic.HPP"
#include "TelegramBotAPI/Methods/createInvoiceLink.HPP"
#include "TelegramBotAPI/Methods/createNewStickerSet.HPP"
#include "TelegramBotAPI/Methods/declineChatJoinRequest.HPP"
#include "TelegramBotAPI/Methods/declineSuggestedPost.HPP"
#include "TelegramBotAPI/Methods/deleteAllMessageReactions.HPP"
#include "TelegramBotAPI/Methods/deleteBusinessMessages.HPP"
#include "TelegramBotAPI/Methods/deleteChatPhoto.HPP"
#include "TelegramBotAPI/Methods/deleteChatStickerSet.HPP"
#include "TelegramBotAPI/Methods/deleteEphemeralMessage.HPP"
#include "TelegramBotAPI/Methods/deleteForumTopic.HPP"
#include "TelegramBotAPI/Methods/deleteMessage.HPP"
#include "TelegramBotAPI/Methods/deleteMessageReaction.HPP"
#include "TelegramBotAPI/Methods/deleteMessages.HPP"
#include "TelegramBotAPI/Methods/deleteMyCommands.HPP"
#include "TelegramBotAPI/Methods/deleteStickerFromSet.HPP"
#include "TelegramBotAPI/Methods/deleteStickerSet.HPP"
#include "TelegramBotAPI/Methods/deleteStory.HPP"
#include "TelegramBotAPI/Methods/deleteWebhook.HPP"
#include "TelegramBotAPI/Methods/editChatInviteLink.HPP"
#include "TelegramBotAPI/Methods/editChatSubscriptionInviteLink.HPP"
#include "TelegramBotAPI/Methods/editEphemeralMessageCaption.HPP"
#include "TelegramBotAPI/Methods/editEphemeralMessageMedia.HPP"
#include "TelegramBotAPI/Methods/editEphemeralMessageReplyMarkup.HPP"
#include "TelegramBotAPI/Methods/editEphemeralMessageText.HPP"
#include "TelegramBotAPI/Methods/editForumTopic.HPP"
#include "TelegramBotAPI/Methods/editGeneralForumTopic.HPP"
#include "TelegramBotAPI/Methods/editMessageCaption.HPP"
#include "TelegramBotAPI/Methods/editMessageChecklist.HPP"
#include "TelegramBotAPI/Methods/editMessageLiveLocation.HPP"
#include "TelegramBotAPI/Methods/editMessageMedia.HPP"
#include "TelegramBotAPI/Methods/editMessageReplyMarkup.HPP"
#include "TelegramBotAPI/Methods/editMessageText.HPP"
#include "TelegramBotAPI/Methods/editStory.HPP"
#include "TelegramBotAPI/Methods/editUserStarSubscription.HPP"
#include "TelegramBotAPI/Methods/exportChatInviteLink.HPP"
#include "TelegramBotAPI/Methods/forwardMessage.HPP"
#include "TelegramBotAPI/Methods/forwardMessages.HPP"
#include "TelegramBotAPI/Methods/getAvailableGifts.HPP"
#include "TelegramBotAPI/Methods/getBusinessAccountGifts.HPP"
#include "TelegramBotAPI/Methods/getBusinessAccountStarBalance.HPP"
#include "TelegramBotAPI/Methods/getBusinessConnection.HPP"
#include "TelegramBotAPI/Methods/getChat.HPP"
#include "TelegramBotAPI/Methods/getChatAdministrators.HPP"
#include "TelegramBotAPI/Methods/getChatGifts.HPP"
#include "TelegramBotAPI/Methods/getChatMember.HPP"
#include "TelegramBotAPI/Methods/getChatMemberCount.HPP"
#include "TelegramBotAPI/Methods/getChatMenuButton.HPP"
#include "TelegramBotAPI/Methods/getCustomEmojiStickers.HPP"
#include "TelegramBotAPI/Methods/getFile.HPP"
#include "TelegramBotAPI/Methods/getForumTopicIconStickers.HPP"
#include "TelegramBotAPI/Methods/getGameHighScores.HPP"
#include "TelegramBotAPI/Methods/getManagedBotAccessSettings.HPP"
#include "TelegramBotAPI/Methods/getManagedBotToken.HPP"
#include "TelegramBotAPI/Methods/getMe.HPP"
#include "TelegramBotAPI/Methods/getMyCommands.HPP"
#include "TelegramBotAPI/Methods/getMyDefaultAdministratorRights.HPP"
#include "TelegramBotAPI/Methods/getMyDescription.HPP"
#include "TelegramBotAPI/Methods/getMyName.HPP"
#include "TelegramBotAPI/Methods/getMyShortDescription.HPP"
#include "TelegramBotAPI/Methods/getMyStarBalance.HPP"
#include "TelegramBotAPI/Methods/getStarTransactions.HPP"
#include "TelegramBotAPI/Methods/getStickerSet.HPP"
#include "TelegramBotAPI/Methods/getUpdates.HPP"
#include "TelegramBotAPI/Methods/getUserChatBoosts.HPP"
#include "TelegramBotAPI/Methods/getUserGifts.HPP"
#include "TelegramBotAPI/Methods/getUserPersonalChatMessages.HPP"
#include "TelegramBotAPI/Methods/getUserProfileAudios.HPP"
#include "TelegramBotAPI/Methods/getUserProfilePhotos.HPP"
#include "TelegramBotAPI/Methods/getWebhookInfo.HPP"
#include "TelegramBotAPI/Methods/giftPremiumSubscription.HPP"
#include "TelegramBotAPI/Methods/hideGeneralForumTopic.HPP"
#include "TelegramBotAPI/Methods/leaveChat.HPP"
#include "TelegramBotAPI/Methods/logOut.HPP"
#include "TelegramBotAPI/Methods/pinChatMessage.HPP"
#include "TelegramBotAPI/Methods/postStory.HPP"
#include "TelegramBotAPI/Methods/promoteChatMember.HPP"
#include "TelegramBotAPI/Methods/readBusinessMessage.HPP"
#include "TelegramBotAPI/Methods/refundStarPayment.HPP"
#include "TelegramBotAPI/Methods/removeBusinessAccountProfilePhoto.HPP"
#include "TelegramBotAPI/Methods/removeChatVerification.HPP"
#include "TelegramBotAPI/Methods/removeMyProfilePhoto.HPP"
#include "TelegramBotAPI/Methods/removeUserVerification.HPP"
#include "TelegramBotAPI/Methods/reopenForumTopic.HPP"
#include "TelegramBotAPI/Methods/reopenGeneralForumTopic.HPP"
#include "TelegramBotAPI/Methods/replaceManagedBotToken.HPP"
#include "TelegramBotAPI/Methods/replaceStickerInSet.HPP"
#include "TelegramBotAPI/Methods/repostStory.HPP"
#include "TelegramBotAPI/Methods/restrictChatMember.HPP"
#include "TelegramBotAPI/Methods/revokeChatInviteLink.HPP"
#include "TelegramBotAPI/Methods/savePreparedInlineMessage.HPP"
#include "TelegramBotAPI/Methods/savePreparedKeyboardButton.HPP"
#include "TelegramBotAPI/Methods/sendAnimation.HPP"
#include "TelegramBotAPI/Methods/sendAudio.HPP"
#include "TelegramBotAPI/Methods/sendChatAction.HPP"
#include "TelegramBotAPI/Methods/sendChatJoinRequestWebApp.HPP"
#include "TelegramBotAPI/Methods/sendChecklist.HPP"
#include "TelegramBotAPI/Methods/sendContact.HPP"
#include "TelegramBotAPI/Methods/sendDice.HPP"
#include "TelegramBotAPI/Methods/sendDocument.HPP"
#include "TelegramBotAPI/Methods/sendGame.HPP"
#include "TelegramBotAPI/Methods/sendGift.HPP"
#include "TelegramBotAPI/Methods/sendInvoice.HPP"
#include "TelegramBotAPI/Methods/sendLivePhoto.HPP"
#include "TelegramBotAPI/Methods/sendLocation.HPP"
#include "TelegramBotAPI/Methods/sendMediaGroup.HPP"
#include "TelegramBotAPI/Methods/sendMessage.HPP"
#include "TelegramBotAPI/Methods/sendMessageDraft.HPP"
#include "TelegramBotAPI/Methods/sendPaidMedia.HPP"
#include "TelegramBotAPI/Methods/sendPhoto.HPP"
#include "TelegramBotAPI/Methods/sendPoll.HPP"
#include "TelegramBotAPI/Methods/sendRichMessage.HPP"
#include "TelegramBotAPI/Methods/sendRichMessageDraft.HPP"
#include "TelegramBotAPI/Methods/sendSticker.HPP"
#include "TelegramBotAPI/Methods/sendVenue.HPP"
#include "TelegramBotAPI/Methods/sendVideo.HPP"
#include "TelegramBotAPI/Methods/sendVideoNote.HPP"
#include "TelegramBotAPI/Methods/sendVoice.HPP"
#include "TelegramBotAPI/Methods/setBusinessAccountBio.HPP"
#include "TelegramBotAPI/Methods/setBusinessAccountGiftSettings.HPP"
#include "TelegramBotAPI/Methods/setBusinessAccountName.HPP"
#include "TelegramBotAPI/Methods/setBusinessAccountProfilePhoto.HPP"
#include "TelegramBotAPI/Methods/setBusinessAccountUsername.HPP"
#include "TelegramBotAPI/Methods/setChatAdministratorCustomTitle.HPP"
#include "TelegramBotAPI/Methods/setChatDescription.HPP"
#include "TelegramBotAPI/Methods/setChatMemberTag.HPP"
#include "TelegramBotAPI/Methods/setChatMenuButton.HPP"
#include "TelegramBotAPI/Methods/setChatPermissions.HPP"
#include "TelegramBotAPI/Methods/setChatPhoto.HPP"
#include "TelegramBotAPI/Methods/setChatStickerSet.HPP"
#include "TelegramBotAPI/Methods/setChatTitle.HPP"
#include "TelegramBotAPI/Methods/setCustomEmojiStickerSetThumbnail.HPP"
#include "TelegramBotAPI/Methods/setGameScore.HPP"
#include "TelegramBotAPI/Methods/setManagedBotAccessSettings.HPP"
#include "TelegramBotAPI/Methods/setMessageReaction.HPP"
#include "TelegramBotAPI/Methods/setMyCommands.HPP"
#include "TelegramBotAPI/Methods/setMyDefaultAdministratorRights.HPP"
#include "TelegramBotAPI/Methods/setMyDescription.HPP"
#include "TelegramBotAPI/Methods/setMyName.HPP"
#include "TelegramBotAPI/Methods/setMyProfilePhoto.HPP"
#include "TelegramBotAPI/Methods/setMyShortDescription.HPP"
#include "TelegramBotAPI/Methods/setPassportDataErrors.HPP"
#include "TelegramBotAPI/Methods/setStickerEmojiList.HPP"
#include "TelegramBotAPI/Methods/setStickerKeywords.HPP"
#include "TelegramBotAPI/Methods/setStickerMaskPosition.HPP"
#include "TelegramBotAPI/Methods/setStickerPositionInSet.HPP"
#include "TelegramBotAPI/Methods/setStickerSetThumbnail.HPP"
#include "TelegramBotAPI/Methods/setStickerSetTitle.HPP"
#include "TelegramBotAPI/Methods/setUserEmojiStatus.HPP"
#include "TelegramBotAPI/Methods/setWebhook.HPP"
#include "TelegramBotAPI/Methods/stopMessageLiveLocation.HPP"
#include "TelegramBotAPI/Methods/stopPoll.HPP"
#include "TelegramBotAPI/Methods/transferBusinessAccountStars.HPP"
#include "TelegramBotAPI/Methods/transferGift.HPP"
#include "TelegramBotAPI/Methods/unbanChatMember.HPP"
#include "TelegramBotAPI/Methods/unbanChatSenderChat.HPP"
#include "TelegramBotAPI/Methods/unhideGeneralForumTopic.HPP"
#include "TelegramBotAPI/Methods/unpinAllChatMessages.HPP"
#include "TelegramBotAPI/Methods/unpinAllForumTopicMessages.HPP"
#include "TelegramBotAPI/Methods/unpinAllGeneralForumTopicMessages.HPP"
#include "TelegramBotAPI/Methods/unpinChatMessage.HPP"
#include "TelegramBotAPI/Methods/upgradeGift.HPP"
#include "TelegramBotAPI/Methods/uploadStickerFile.HPP"
#include "TelegramBotAPI/Methods/verifyChat.HPP"
#include "TelegramBotAPI/Methods/verifyUser.HPP"

namespace TelegramBotAPI {

bool TelegramClient::AddStickerToSet(
    const std::string &Name,
    const ::TelegramBotAPI::Type::InputSticker &Sticker,
    const long long &UserID) {
    Methods::addStickerToSet Method(*this);

    return Method.AddStickerToSet(
        Name,
        Sticker,
        UserID
    );
}

bool TelegramClient::AnswerCallbackQuery(
    const std::string &CallbackQueryID) {
    Methods::answerCallbackQuery Method(*this);

    return Method.AnswerCallbackQuery(
        CallbackQueryID
    );
}

bool TelegramClient::AnswerChatJoinRequestQuery(
    const std::string &ChatJoinRequestQueryID,
    const std::string &Result) {
    Methods::answerChatJoinRequestQuery Method(*this);

    return Method.AnswerChatJoinRequestQuery(
        ChatJoinRequestQueryID,
        Result
    );
}

::TelegramBotAPI::Type::SentGuestMessage TelegramClient::AnswerGuestQuery(
    const std::string &GuestQueryID,
    const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &Result) {
    Methods::answerGuestQuery Method(*this);

    return Method.AnswerGuestQuery(
        GuestQueryID,
        Result
    );
}

bool TelegramClient::AnswerInlineQuery(
    const std::string &InlineQueryID,
    const std::vector<std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice>> &Results) {
    Methods::answerInlineQuery Method(*this);

    return Method.AnswerInlineQuery(
        InlineQueryID,
        Results
    );
}

bool TelegramClient::AnswerPreCheckoutQuery(
    const bool &Ok,
    const std::string &PreCheckoutQueryID) {
    Methods::answerPreCheckoutQuery Method(*this);

    return Method.AnswerPreCheckoutQuery(
        Ok,
        PreCheckoutQueryID
    );
}

bool TelegramClient::AnswerShippingQuery(
    const bool &Ok,
    const std::string &ShippingQueryID) {
    Methods::answerShippingQuery Method(*this);

    return Method.AnswerShippingQuery(
        Ok,
        ShippingQueryID
    );
}

::TelegramBotAPI::Type::SentWebAppMessage TelegramClient::AnswerWebAppQuery(
    const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &Result,
    const std::string &WebAppQueryID) {
    Methods::answerWebAppQuery Method(*this);

    return Method.AnswerWebAppQuery(
        Result,
        WebAppQueryID
    );
}

bool TelegramClient::ApproveChatJoinRequest(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::approveChatJoinRequest Method(*this);

    return Method.ApproveChatJoinRequest(
        ChatID,
        UserID
    );
}

bool TelegramClient::ApproveSuggestedPost(
    const long long &ChatID,
    const long long &MessageID) {
    Methods::approveSuggestedPost Method(*this);

    return Method.ApproveSuggestedPost(
        ChatID,
        MessageID
    );
}

bool TelegramClient::BanChatMember(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::banChatMember Method(*this);

    return Method.BanChatMember(
        ChatID,
        UserID
    );
}

bool TelegramClient::BanChatSenderChat(
    const std::variant<long long, std::string> &ChatID,
    const long long &SenderChatID) {
    Methods::banChatSenderChat Method(*this);

    return Method.BanChatSenderChat(
        ChatID,
        SenderChatID
    );
}

bool TelegramClient::Close() {
    Methods::close Method(*this);
    return Method.Close({});
}

bool TelegramClient::CloseForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageThreadID) {
    Methods::closeForumTopic Method(*this);

    return Method.CloseForumTopic(
        ChatID,
        MessageThreadID
    );
}

bool TelegramClient::CloseGeneralForumTopic(
    const std::variant<long long, std::string> &ChatID) {
    Methods::closeGeneralForumTopic Method(*this);

    return Method.CloseGeneralForumTopic(
        ChatID
    );
}

bool TelegramClient::ConvertGiftToStars(
    const std::string &BusinessConnectionID,
    const std::string &OwnedGiftID) {
    Methods::convertGiftToStars Method(*this);

    return Method.ConvertGiftToStars(
        BusinessConnectionID,
        OwnedGiftID
    );
}

::TelegramBotAPI::Type::MessageId TelegramClient::CopyMessage(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<long long, std::string> &FromChatID,
    const long long &MessageID) {
    Methods::copyMessage Method(*this);

    return Method.CopyMessage(
        ChatID,
        FromChatID,
        MessageID
    );
}

std::vector<::TelegramBotAPI::Type::MessageId> TelegramClient::CopyMessages(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<long long, std::string> &FromChatID,
    const std::vector<long long> &MessageIDs) {
    Methods::copyMessages Method(*this);

    return Method.CopyMessages(
        ChatID,
        FromChatID,
        MessageIDs
    );
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::CreateChatInviteLink(
    const std::variant<long long, std::string> &ChatID) {
    Methods::createChatInviteLink Method(*this);

    return Method.CreateChatInviteLink(
        ChatID
    );
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::CreateChatSubscriptionInviteLink(
    const std::variant<long long, std::string> &ChatID,
    const long long &SubscriptionPeriod,
    const long long &SubscriptionPrice) {
    Methods::createChatSubscriptionInviteLink Method(*this);

    return Method.CreateChatSubscriptionInviteLink(
        ChatID,
        SubscriptionPeriod,
        SubscriptionPrice
    );
}

::TelegramBotAPI::Type::ForumTopic TelegramClient::CreateForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const std::string &Name) {
    Methods::createForumTopic Method(*this);

    return Method.CreateForumTopic(
        ChatID,
        Name
    );
}

std::string TelegramClient::CreateInvoiceLink(
    const std::string &Currency,
    const std::string &Description,
    const std::string &Payload,
    const std::vector<::TelegramBotAPI::Type::LabeledPrice> &Prices,
    const std::string &Title) {
    Methods::createInvoiceLink Method(*this);

    return Method.CreateInvoiceLink(
        Currency,
        Description,
        Payload,
        Prices,
        Title
    );
}

bool TelegramClient::CreateNewStickerSet(
    const std::string &Name,
    const std::vector<::TelegramBotAPI::Type::InputSticker> &Stickers,
    const std::string &Title,
    const long long &UserID) {
    Methods::createNewStickerSet Method(*this);

    return Method.CreateNewStickerSet(
        Name,
        Stickers,
        Title,
        UserID
    );
}

bool TelegramClient::DeclineChatJoinRequest(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::declineChatJoinRequest Method(*this);

    return Method.DeclineChatJoinRequest(
        ChatID,
        UserID
    );
}

bool TelegramClient::DeclineSuggestedPost(
    const long long &ChatID,
    const long long &MessageID) {
    Methods::declineSuggestedPost Method(*this);

    return Method.DeclineSuggestedPost(
        ChatID,
        MessageID
    );
}

bool TelegramClient::DeleteAllMessageReactions(
    const std::variant<long long, std::string> &ChatID) {
    Methods::deleteAllMessageReactions Method(*this);

    return Method.DeleteAllMessageReactions(
        ChatID
    );
}

bool TelegramClient::DeleteBusinessMessages(
    const std::string &BusinessConnectionID,
    const std::vector<long long> &MessageIDs) {
    Methods::deleteBusinessMessages Method(*this);

    return Method.DeleteBusinessMessages(
        BusinessConnectionID,
        MessageIDs
    );
}

bool TelegramClient::DeleteChatPhoto(
    const std::variant<long long, std::string> &ChatID) {
    Methods::deleteChatPhoto Method(*this);

    return Method.DeleteChatPhoto(
        ChatID
    );
}

bool TelegramClient::DeleteChatStickerSet(
    const std::variant<long long, std::string> &ChatID) {
    Methods::deleteChatStickerSet Method(*this);

    return Method.DeleteChatStickerSet(
        ChatID
    );
}

bool TelegramClient::DeleteEphemeralMessage(
    const std::variant<long long, std::string> &ChatID,
    const long long &EphemeralMessageID,
    const long long &ReceiverUserID) {
    Methods::deleteEphemeralMessage Method(*this);

    return Method.DeleteEphemeralMessage(
        ChatID,
        EphemeralMessageID,
        ReceiverUserID
    );
}

bool TelegramClient::DeleteForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageThreadID) {
    Methods::deleteForumTopic Method(*this);

    return Method.DeleteForumTopic(
        ChatID,
        MessageThreadID
    );
}

bool TelegramClient::DeleteMessage(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageID) {
    Methods::deleteMessage Method(*this);

    return Method.DeleteMessage(
        ChatID,
        MessageID
    );
}

bool TelegramClient::DeleteMessageReaction(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageID) {
    Methods::deleteMessageReaction Method(*this);

    return Method.DeleteMessageReaction(
        ChatID,
        MessageID
    );
}

bool TelegramClient::DeleteMessages(
    const std::variant<long long, std::string> &ChatID,
    const std::vector<long long> &MessageIDs) {
    Methods::deleteMessages Method(*this);

    return Method.DeleteMessages(
        ChatID,
        MessageIDs
    );
}

bool TelegramClient::DeleteMyCommands() {
    Methods::deleteMyCommands Method(*this);
    return Method.DeleteMyCommands({});
}

bool TelegramClient::DeleteStickerFromSet(
    const std::string &Sticker) {
    Methods::deleteStickerFromSet Method(*this);

    return Method.DeleteStickerFromSet(
        Sticker
    );
}

bool TelegramClient::DeleteStickerSet(
    const std::string &Name) {
    Methods::deleteStickerSet Method(*this);

    return Method.DeleteStickerSet(
        Name
    );
}

bool TelegramClient::DeleteStory(
    const std::string &BusinessConnectionID,
    const long long &StoryID) {
    Methods::deleteStory Method(*this);

    return Method.DeleteStory(
        BusinessConnectionID,
        StoryID
    );
}

bool TelegramClient::DeleteWebhook() {
    Methods::deleteWebhook Method(*this);
    return Method.DeleteWebhook({});
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::EditChatInviteLink(
    const std::variant<long long, std::string> &ChatID,
    const std::string &InviteLink) {
    Methods::editChatInviteLink Method(*this);

    return Method.EditChatInviteLink(
        ChatID,
        InviteLink
    );
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::EditChatSubscriptionInviteLink(
    const std::variant<long long, std::string> &ChatID,
    const std::string &InviteLink) {
    Methods::editChatSubscriptionInviteLink Method(*this);

    return Method.EditChatSubscriptionInviteLink(
        ChatID,
        InviteLink
    );
}

bool TelegramClient::EditEphemeralMessageCaption(
    const std::variant<long long, std::string> &ChatID,
    const long long &EphemeralMessageID,
    const long long &ReceiverUserID) {
    Methods::editEphemeralMessageCaption Method(*this);

    return Method.EditEphemeralMessageCaption(
        ChatID,
        EphemeralMessageID,
        ReceiverUserID
    );
}

bool TelegramClient::EditEphemeralMessageMedia(
    const std::variant<long long, std::string> &ChatID,
    const long long &EphemeralMessageID,
    const std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> &Media,
    const long long &ReceiverUserID) {
    Methods::editEphemeralMessageMedia Method(*this);

    return Method.EditEphemeralMessageMedia(
        ChatID,
        EphemeralMessageID,
        Media,
        ReceiverUserID
    );
}

bool TelegramClient::EditEphemeralMessageReplyMarkup(
    const std::variant<long long, std::string> &ChatID,
    const long long &EphemeralMessageID,
    const long long &ReceiverUserID) {
    Methods::editEphemeralMessageReplyMarkup Method(*this);

    return Method.EditEphemeralMessageReplyMarkup(
        ChatID,
        EphemeralMessageID,
        ReceiverUserID
    );
}

bool TelegramClient::EditEphemeralMessageText(
    const std::variant<long long, std::string> &ChatID,
    const long long &EphemeralMessageID,
    const long long &ReceiverUserID) {
    Methods::editEphemeralMessageText Method(*this);

    return Method.EditEphemeralMessageText(
        ChatID,
        EphemeralMessageID,
        ReceiverUserID
    );
}

bool TelegramClient::EditForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageThreadID) {
    Methods::editForumTopic Method(*this);

    return Method.EditForumTopic(
        ChatID,
        MessageThreadID
    );
}

bool TelegramClient::EditGeneralForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const std::string &Name) {
    Methods::editGeneralForumTopic Method(*this);

    return Method.EditGeneralForumTopic(
        ChatID,
        Name
    );
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageCaption() {
    Methods::editMessageCaption Method(*this);
    return Method.EditMessageCaption({});
}

::TelegramBotAPI::Type::Message TelegramClient::EditMessageChecklist(
    const std::string &BusinessConnectionID,
    const std::variant<long long, std::string> &ChatID,
    const ::TelegramBotAPI::Type::InputChecklist &Checklist,
    const long long &MessageID) {
    Methods::editMessageChecklist Method(*this);

    return Method.EditMessageChecklist(
        BusinessConnectionID,
        ChatID,
        Checklist,
        MessageID
    );
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageLiveLocation(
    const double &Latitude,
    const double &Longitude) {
    Methods::editMessageLiveLocation Method(*this);

    return Method.EditMessageLiveLocation(
        Latitude,
        Longitude
    );
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageMedia(
    const std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> &Media) {
    Methods::editMessageMedia Method(*this);

    return Method.EditMessageMedia(
        Media
    );
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageReplyMarkup() {
    Methods::editMessageReplyMarkup Method(*this);
    return Method.EditMessageReplyMarkup({});
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageText() {
    Methods::editMessageText Method(*this);
    return Method.EditMessageText({});
}

::TelegramBotAPI::Type::Story TelegramClient::EditStory(
    const std::string &BusinessConnectionID,
    const std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> &Content,
    const long long &StoryID) {
    Methods::editStory Method(*this);

    return Method.EditStory(
        BusinessConnectionID,
        Content,
        StoryID
    );
}

bool TelegramClient::EditUserStarSubscription(
    const bool &IsCanceled,
    const std::string &TelegramPaymentChargeID,
    const long long &UserID) {
    Methods::editUserStarSubscription Method(*this);

    return Method.EditUserStarSubscription(
        IsCanceled,
        TelegramPaymentChargeID,
        UserID
    );
}

std::string TelegramClient::ExportChatInviteLink(
    const std::variant<long long, std::string> &ChatID) {
    Methods::exportChatInviteLink Method(*this);

    return Method.ExportChatInviteLink(
        ChatID
    );
}

::TelegramBotAPI::Type::Message TelegramClient::ForwardMessage(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<long long, std::string> &FromChatID,
    const long long &MessageID) {
    Methods::forwardMessage Method(*this);

    return Method.ForwardMessage(
        ChatID,
        FromChatID,
        MessageID
    );
}

std::vector<::TelegramBotAPI::Type::MessageId> TelegramClient::ForwardMessages(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<long long, std::string> &FromChatID,
    const std::vector<long long> &MessageIDs) {
    Methods::forwardMessages Method(*this);

    return Method.ForwardMessages(
        ChatID,
        FromChatID,
        MessageIDs
    );
}

::TelegramBotAPI::Type::Gifts TelegramClient::GetAvailableGifts() {
    Methods::getAvailableGifts Method(*this);
    return Method.GetAvailableGifts({});
}

::TelegramBotAPI::Type::OwnedGifts TelegramClient::GetBusinessAccountGifts(
    const std::string &BusinessConnectionID) {
    Methods::getBusinessAccountGifts Method(*this);

    return Method.GetBusinessAccountGifts(
        BusinessConnectionID
    );
}

::TelegramBotAPI::Type::StarAmount TelegramClient::GetBusinessAccountStarBalance(
    const std::string &BusinessConnectionID) {
    Methods::getBusinessAccountStarBalance Method(*this);

    return Method.GetBusinessAccountStarBalance(
        BusinessConnectionID
    );
}

::TelegramBotAPI::Type::BusinessConnection TelegramClient::GetBusinessConnection(
    const std::string &BusinessConnectionID) {
    Methods::getBusinessConnection Method(*this);

    return Method.GetBusinessConnection(
        BusinessConnectionID
    );
}

::TelegramBotAPI::Type::ChatFullInfo TelegramClient::GetChat(
    const std::variant<long long, std::string> &ChatID) {
    Methods::getChat Method(*this);

    return Method.GetChat(
        ChatID
    );
}

std::vector<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>> TelegramClient::GetChatAdministrators(
    const std::variant<long long, std::string> &ChatID) {
    Methods::getChatAdministrators Method(*this);

    return Method.GetChatAdministrators(
        ChatID
    );
}

::TelegramBotAPI::Type::OwnedGifts TelegramClient::GetChatGifts(
    const std::variant<long long, std::string> &ChatID) {
    Methods::getChatGifts Method(*this);

    return Method.GetChatGifts(
        ChatID
    );
}

std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned> TelegramClient::GetChatMember(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::getChatMember Method(*this);

    return Method.GetChatMember(
        ChatID,
        UserID
    );
}

long long TelegramClient::GetChatMemberCount(
    const std::variant<long long, std::string> &ChatID) {
    Methods::getChatMemberCount Method(*this);

    return Method.GetChatMemberCount(
        ChatID
    );
}

std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault> TelegramClient::GetChatMenuButton() {
    Methods::getChatMenuButton Method(*this);
    return Method.GetChatMenuButton({});
}

std::vector<::TelegramBotAPI::Type::Sticker> TelegramClient::GetCustomEmojiStickers(
    const std::vector<std::string> &CustomEmojiIDs) {
    Methods::getCustomEmojiStickers Method(*this);

    return Method.GetCustomEmojiStickers(
        CustomEmojiIDs
    );
}

::TelegramBotAPI::Type::File TelegramClient::GetFile(
    const std::string &FileID) {
    Methods::getFile Method(*this);

    return Method.GetFile(
        FileID
    );
}

std::vector<::TelegramBotAPI::Type::Sticker> TelegramClient::GetForumTopicIconStickers() {
    Methods::getForumTopicIconStickers Method(*this);
    return Method.GetForumTopicIconStickers({});
}

std::vector<::TelegramBotAPI::Type::GameHighScore> TelegramClient::GetGameHighScores(
    const long long &UserID) {
    Methods::getGameHighScores Method(*this);

    return Method.GetGameHighScores(
        UserID
    );
}

::TelegramBotAPI::Type::BotAccessSettings TelegramClient::GetManagedBotAccessSettings(
    const long long &UserID) {
    Methods::getManagedBotAccessSettings Method(*this);

    return Method.GetManagedBotAccessSettings(
        UserID
    );
}

std::string TelegramClient::GetManagedBotToken(
    const long long &UserID) {
    Methods::getManagedBotToken Method(*this);

    return Method.GetManagedBotToken(
        UserID
    );
}

::TelegramBotAPI::Type::User TelegramClient::GetMe() {
    Methods::getMe Method(*this);
    return Method.GetMe({});
}

std::vector<::TelegramBotAPI::Type::BotCommand> TelegramClient::GetMyCommands() {
    Methods::getMyCommands Method(*this);
    return Method.GetMyCommands({});
}

::TelegramBotAPI::Type::ChatAdministratorRights TelegramClient::GetMyDefaultAdministratorRights() {
    Methods::getMyDefaultAdministratorRights Method(*this);
    return Method.GetMyDefaultAdministratorRights({});
}

::TelegramBotAPI::Type::BotDescription TelegramClient::GetMyDescription() {
    Methods::getMyDescription Method(*this);
    return Method.GetMyDescription({});
}

::TelegramBotAPI::Type::BotName TelegramClient::GetMyName() {
    Methods::getMyName Method(*this);
    return Method.GetMyName({});
}

::TelegramBotAPI::Type::BotShortDescription TelegramClient::GetMyShortDescription() {
    Methods::getMyShortDescription Method(*this);
    return Method.GetMyShortDescription({});
}

::TelegramBotAPI::Type::StarAmount TelegramClient::GetMyStarBalance() {
    Methods::getMyStarBalance Method(*this);
    return Method.GetMyStarBalance({});
}

::TelegramBotAPI::Type::StarTransactions TelegramClient::GetStarTransactions() {
    Methods::getStarTransactions Method(*this);
    return Method.GetStarTransactions({});
}

::TelegramBotAPI::Type::StickerSet TelegramClient::GetStickerSet(
    const std::string &Name) {
    Methods::getStickerSet Method(*this);

    return Method.GetStickerSet(
        Name
    );
}

std::vector<::TelegramBotAPI::Type::Update> TelegramClient::GetUpdates() {
    Methods::getUpdates Method(*this);
    return Method.GetUpdates({});
}

::TelegramBotAPI::Type::UserChatBoosts TelegramClient::GetUserChatBoosts(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::getUserChatBoosts Method(*this);

    return Method.GetUserChatBoosts(
        ChatID,
        UserID
    );
}

::TelegramBotAPI::Type::OwnedGifts TelegramClient::GetUserGifts(
    const long long &UserID) {
    Methods::getUserGifts Method(*this);

    return Method.GetUserGifts(
        UserID
    );
}

std::vector<::TelegramBotAPI::Type::Message> TelegramClient::GetUserPersonalChatMessages(
    const long long &Limit,
    const long long &UserID) {
    Methods::getUserPersonalChatMessages Method(*this);

    return Method.GetUserPersonalChatMessages(
        Limit,
        UserID
    );
}

::TelegramBotAPI::Type::UserProfileAudios TelegramClient::GetUserProfileAudios(
    const long long &UserID) {
    Methods::getUserProfileAudios Method(*this);

    return Method.GetUserProfileAudios(
        UserID
    );
}

::TelegramBotAPI::Type::UserProfilePhotos TelegramClient::GetUserProfilePhotos(
    const long long &UserID) {
    Methods::getUserProfilePhotos Method(*this);

    return Method.GetUserProfilePhotos(
        UserID
    );
}

::TelegramBotAPI::Type::WebhookInfo TelegramClient::GetWebhookInfo() {
    Methods::getWebhookInfo Method(*this);
    return Method.GetWebhookInfo({});
}

bool TelegramClient::GiftPremiumSubscription(
    const long long &MonthCount,
    const long long &StarCount,
    const long long &UserID) {
    Methods::giftPremiumSubscription Method(*this);

    return Method.GiftPremiumSubscription(
        MonthCount,
        StarCount,
        UserID
    );
}

bool TelegramClient::HideGeneralForumTopic(
    const std::variant<long long, std::string> &ChatID) {
    Methods::hideGeneralForumTopic Method(*this);

    return Method.HideGeneralForumTopic(
        ChatID
    );
}

bool TelegramClient::LeaveChat(
    const std::variant<long long, std::string> &ChatID) {
    Methods::leaveChat Method(*this);

    return Method.LeaveChat(
        ChatID
    );
}

bool TelegramClient::LogOut() {
    Methods::logOut Method(*this);
    return Method.LogOut({});
}

bool TelegramClient::PinChatMessage(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageID) {
    Methods::pinChatMessage Method(*this);

    return Method.PinChatMessage(
        ChatID,
        MessageID
    );
}

::TelegramBotAPI::Type::Story TelegramClient::PostStory(
    const long long &ActivePeriod,
    const std::string &BusinessConnectionID,
    const std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> &Content) {
    Methods::postStory Method(*this);

    return Method.PostStory(
        ActivePeriod,
        BusinessConnectionID,
        Content
    );
}

bool TelegramClient::PromoteChatMember(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::promoteChatMember Method(*this);

    return Method.PromoteChatMember(
        ChatID,
        UserID
    );
}

bool TelegramClient::ReadBusinessMessage(
    const std::string &BusinessConnectionID,
    const long long &ChatID,
    const long long &MessageID) {
    Methods::readBusinessMessage Method(*this);

    return Method.ReadBusinessMessage(
        BusinessConnectionID,
        ChatID,
        MessageID
    );
}

bool TelegramClient::RefundStarPayment(
    const std::string &TelegramPaymentChargeID,
    const long long &UserID) {
    Methods::refundStarPayment Method(*this);

    return Method.RefundStarPayment(
        TelegramPaymentChargeID,
        UserID
    );
}

bool TelegramClient::RemoveBusinessAccountProfilePhoto(
    const std::string &BusinessConnectionID) {
    Methods::removeBusinessAccountProfilePhoto Method(*this);

    return Method.RemoveBusinessAccountProfilePhoto(
        BusinessConnectionID
    );
}

bool TelegramClient::RemoveChatVerification(
    const std::variant<long long, std::string> &ChatID) {
    Methods::removeChatVerification Method(*this);

    return Method.RemoveChatVerification(
        ChatID
    );
}

bool TelegramClient::RemoveMyProfilePhoto() {
    Methods::removeMyProfilePhoto Method(*this);
    return Method.RemoveMyProfilePhoto({});
}

bool TelegramClient::RemoveUserVerification(
    const long long &UserID) {
    Methods::removeUserVerification Method(*this);

    return Method.RemoveUserVerification(
        UserID
    );
}

bool TelegramClient::ReopenForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageThreadID) {
    Methods::reopenForumTopic Method(*this);

    return Method.ReopenForumTopic(
        ChatID,
        MessageThreadID
    );
}

bool TelegramClient::ReopenGeneralForumTopic(
    const std::variant<long long, std::string> &ChatID) {
    Methods::reopenGeneralForumTopic Method(*this);

    return Method.ReopenGeneralForumTopic(
        ChatID
    );
}

std::string TelegramClient::ReplaceManagedBotToken(
    const long long &UserID) {
    Methods::replaceManagedBotToken Method(*this);

    return Method.ReplaceManagedBotToken(
        UserID
    );
}

bool TelegramClient::ReplaceStickerInSet(
    const std::string &Name,
    const std::string &OldSticker,
    const ::TelegramBotAPI::Type::InputSticker &Sticker,
    const long long &UserID) {
    Methods::replaceStickerInSet Method(*this);

    return Method.ReplaceStickerInSet(
        Name,
        OldSticker,
        Sticker,
        UserID
    );
}

::TelegramBotAPI::Type::Story TelegramClient::RepostStory(
    const long long &ActivePeriod,
    const std::string &BusinessConnectionID,
    const long long &FromChatID,
    const long long &FromStoryID) {
    Methods::repostStory Method(*this);

    return Method.RepostStory(
        ActivePeriod,
        BusinessConnectionID,
        FromChatID,
        FromStoryID
    );
}

bool TelegramClient::RestrictChatMember(
    const std::variant<long long, std::string> &ChatID,
    const ::TelegramBotAPI::Type::ChatPermissions &Permissions,
    const long long &UserID) {
    Methods::restrictChatMember Method(*this);

    return Method.RestrictChatMember(
        ChatID,
        Permissions,
        UserID
    );
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::RevokeChatInviteLink(
    const std::variant<long long, std::string> &ChatID,
    const std::string &InviteLink) {
    Methods::revokeChatInviteLink Method(*this);

    return Method.RevokeChatInviteLink(
        ChatID,
        InviteLink
    );
}

::TelegramBotAPI::Type::PreparedInlineMessage TelegramClient::SavePreparedInlineMessage(
    const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &Result,
    const long long &UserID) {
    Methods::savePreparedInlineMessage Method(*this);

    return Method.SavePreparedInlineMessage(
        Result,
        UserID
    );
}

::TelegramBotAPI::Type::PreparedKeyboardButton TelegramClient::SavePreparedKeyboardButton(
    const ::TelegramBotAPI::Type::KeyboardButton &Button,
    const long long &UserID) {
    Methods::savePreparedKeyboardButton Method(*this);

    return Method.SavePreparedKeyboardButton(
        Button,
        UserID
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendAnimation(
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Animation,
    const std::variant<long long, std::string> &ChatID) {
    Methods::sendAnimation Method(*this);

    return Method.SendAnimation(
        Animation,
        ChatID
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendAudio(
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Audio,
    const std::variant<long long, std::string> &ChatID) {
    Methods::sendAudio Method(*this);

    return Method.SendAudio(
        Audio,
        ChatID
    );
}

bool TelegramClient::SendChatAction(
    const std::string &Action,
    const std::variant<long long, std::string> &ChatID) {
    Methods::sendChatAction Method(*this);

    return Method.SendChatAction(
        Action,
        ChatID
    );
}

bool TelegramClient::SendChatJoinRequestWebApp(
    const std::string &ChatJoinRequestQueryID,
    const std::string &WebAppURL) {
    Methods::sendChatJoinRequestWebApp Method(*this);

    return Method.SendChatJoinRequestWebApp(
        ChatJoinRequestQueryID,
        WebAppURL
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendChecklist(
    const std::string &BusinessConnectionID,
    const std::variant<long long, std::string> &ChatID,
    const ::TelegramBotAPI::Type::InputChecklist &Checklist) {
    Methods::sendChecklist Method(*this);

    return Method.SendChecklist(
        BusinessConnectionID,
        ChatID,
        Checklist
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendContact(
    const std::variant<long long, std::string> &ChatID,
    const std::string &FirstName,
    const std::string &PhoneNumber) {
    Methods::sendContact Method(*this);

    return Method.SendContact(
        ChatID,
        FirstName,
        PhoneNumber
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendDice(
    const std::variant<long long, std::string> &ChatID) {
    Methods::sendDice Method(*this);

    return Method.SendDice(
        ChatID
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendDocument(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Document) {
    Methods::sendDocument Method(*this);

    return Method.SendDocument(
        ChatID,
        Document
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendGame(
    const std::variant<long long, std::string> &ChatID,
    const std::string &GameShortName) {
    Methods::sendGame Method(*this);

    return Method.SendGame(
        ChatID,
        GameShortName
    );
}

bool TelegramClient::SendGift(
    const std::string &GiftID) {
    Methods::sendGift Method(*this);

    return Method.SendGift(
        GiftID
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendInvoice(
    const std::variant<long long, std::string> &ChatID,
    const std::string &Currency,
    const std::string &Description,
    const std::string &Payload,
    const std::vector<::TelegramBotAPI::Type::LabeledPrice> &Prices,
    const std::string &Title) {
    Methods::sendInvoice Method(*this);

    return Method.SendInvoice(
        ChatID,
        Currency,
        Description,
        Payload,
        Prices,
        Title
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendLivePhoto(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &LivePhoto,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Photo) {
    Methods::sendLivePhoto Method(*this);

    return Method.SendLivePhoto(
        ChatID,
        LivePhoto,
        Photo
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendLocation(
    const std::variant<long long, std::string> &ChatID,
    const double &Latitude,
    const double &Longitude) {
    Methods::sendLocation Method(*this);

    return Method.SendLocation(
        ChatID,
        Latitude,
        Longitude
    );
}

std::vector<::TelegramBotAPI::Type::Message> TelegramClient::SendMediaGroup(
    const std::variant<long long, std::string> &ChatID,
    const std::vector<std::variant<::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo>> &Media) {
    Methods::sendMediaGroup Method(*this);

    return Method.SendMediaGroup(
        ChatID,
        Media
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendMessage(
    const std::variant<long long, std::string> &ChatID,
    const std::string &Text) {
    Methods::sendMessage Method(*this);

    return Method.SendMessage(
        ChatID,
        Text
    );
}

bool TelegramClient::SendMessageDraft(
    const long long &ChatID,
    const long long &DraftID) {
    Methods::sendMessageDraft Method(*this);

    return Method.SendMessageDraft(
        ChatID,
        DraftID
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendPaidMedia(
    const std::variant<long long, std::string> &ChatID,
    const std::vector<std::variant<::TelegramBotAPI::Type::InputPaidMediaLivePhoto, ::TelegramBotAPI::Type::InputPaidMediaPhoto, ::TelegramBotAPI::Type::InputPaidMediaVideo>> &Media,
    const long long &StarCount) {
    Methods::sendPaidMedia Method(*this);

    return Method.SendPaidMedia(
        ChatID,
        Media,
        StarCount
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendPhoto(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Photo) {
    Methods::sendPhoto Method(*this);

    return Method.SendPhoto(
        ChatID,
        Photo
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendPoll(
    const std::variant<long long, std::string> &ChatID,
    const std::vector<::TelegramBotAPI::Type::InputPollOption> &Options,
    const std::string &Question) {
    Methods::sendPoll Method(*this);

    return Method.SendPoll(
        ChatID,
        Options,
        Question
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendRichMessage(
    const std::variant<long long, std::string> &ChatID,
    const ::TelegramBotAPI::Type::InputRichMessage &RichMessage) {
    Methods::sendRichMessage Method(*this);

    return Method.SendRichMessage(
        ChatID,
        RichMessage
    );
}

bool TelegramClient::SendRichMessageDraft(
    const long long &ChatID,
    const long long &DraftID,
    const ::TelegramBotAPI::Type::InputRichMessage &RichMessage) {
    Methods::sendRichMessageDraft Method(*this);

    return Method.SendRichMessageDraft(
        ChatID,
        DraftID,
        RichMessage
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendSticker(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Sticker) {
    Methods::sendSticker Method(*this);

    return Method.SendSticker(
        ChatID,
        Sticker
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendVenue(
    const std::string &Address,
    const std::variant<long long, std::string> &ChatID,
    const double &Latitude,
    const double &Longitude,
    const std::string &Title) {
    Methods::sendVenue Method(*this);

    return Method.SendVenue(
        Address,
        ChatID,
        Latitude,
        Longitude,
        Title
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendVideo(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Video) {
    Methods::sendVideo Method(*this);

    return Method.SendVideo(
        ChatID,
        Video
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendVideoNote(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &VideoNote) {
    Methods::sendVideoNote Method(*this);

    return Method.SendVideoNote(
        ChatID,
        VideoNote
    );
}

::TelegramBotAPI::Type::Message TelegramClient::SendVoice(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Voice) {
    Methods::sendVoice Method(*this);

    return Method.SendVoice(
        ChatID,
        Voice
    );
}

bool TelegramClient::SetBusinessAccountBio(
    const std::string &BusinessConnectionID) {
    Methods::setBusinessAccountBio Method(*this);

    return Method.SetBusinessAccountBio(
        BusinessConnectionID
    );
}

bool TelegramClient::SetBusinessAccountGiftSettings(
    const ::TelegramBotAPI::Type::AcceptedGiftTypes &AcceptedGiftTypes,
    const std::string &BusinessConnectionID,
    const bool &ShowGiftButton) {
    Methods::setBusinessAccountGiftSettings Method(*this);

    return Method.SetBusinessAccountGiftSettings(
        AcceptedGiftTypes,
        BusinessConnectionID,
        ShowGiftButton
    );
}

bool TelegramClient::SetBusinessAccountName(
    const std::string &BusinessConnectionID,
    const std::string &FirstName) {
    Methods::setBusinessAccountName Method(*this);

    return Method.SetBusinessAccountName(
        BusinessConnectionID,
        FirstName
    );
}

bool TelegramClient::SetBusinessAccountProfilePhoto(
    const std::string &BusinessConnectionID,
    const std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> &Photo) {
    Methods::setBusinessAccountProfilePhoto Method(*this);

    return Method.SetBusinessAccountProfilePhoto(
        BusinessConnectionID,
        Photo
    );
}

bool TelegramClient::SetBusinessAccountUsername(
    const std::string &BusinessConnectionID) {
    Methods::setBusinessAccountUsername Method(*this);

    return Method.SetBusinessAccountUsername(
        BusinessConnectionID
    );
}

bool TelegramClient::SetChatAdministratorCustomTitle(
    const std::variant<long long, std::string> &ChatID,
    const std::string &CustomTitle,
    const long long &UserID) {
    Methods::setChatAdministratorCustomTitle Method(*this);

    return Method.SetChatAdministratorCustomTitle(
        ChatID,
        CustomTitle,
        UserID
    );
}

bool TelegramClient::SetChatDescription(
    const std::variant<long long, std::string> &ChatID) {
    Methods::setChatDescription Method(*this);

    return Method.SetChatDescription(
        ChatID
    );
}

bool TelegramClient::SetChatMemberTag(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::setChatMemberTag Method(*this);

    return Method.SetChatMemberTag(
        ChatID,
        UserID
    );
}

bool TelegramClient::SetChatMenuButton() {
    Methods::setChatMenuButton Method(*this);
    return Method.SetChatMenuButton({});
}

bool TelegramClient::SetChatPermissions(
    const std::variant<long long, std::string> &ChatID,
    const ::TelegramBotAPI::Type::ChatPermissions &Permissions) {
    Methods::setChatPermissions Method(*this);

    return Method.SetChatPermissions(
        ChatID,
        Permissions
    );
}

bool TelegramClient::SetChatPhoto(
    const std::variant<long long, std::string> &ChatID) {
    Methods::setChatPhoto Method(*this);

    return Method.SetChatPhoto(
        ChatID
    );
}

bool TelegramClient::SetChatStickerSet(
    const std::variant<long long, std::string> &ChatID,
    const std::string &StickerSetName) {
    Methods::setChatStickerSet Method(*this);

    return Method.SetChatStickerSet(
        ChatID,
        StickerSetName
    );
}

bool TelegramClient::SetChatTitle(
    const std::variant<long long, std::string> &ChatID,
    const std::string &Title) {
    Methods::setChatTitle Method(*this);

    return Method.SetChatTitle(
        ChatID,
        Title
    );
}

bool TelegramClient::SetCustomEmojiStickerSetThumbnail(
    const std::string &Name) {
    Methods::setCustomEmojiStickerSetThumbnail Method(*this);

    return Method.SetCustomEmojiStickerSetThumbnail(
        Name
    );
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::SetGameScore(
    const long long &Score,
    const long long &UserID) {
    Methods::setGameScore Method(*this);

    return Method.SetGameScore(
        Score,
        UserID
    );
}

bool TelegramClient::SetManagedBotAccessSettings(
    const bool &IsAccessRestricted,
    const long long &UserID) {
    Methods::setManagedBotAccessSettings Method(*this);

    return Method.SetManagedBotAccessSettings(
        IsAccessRestricted,
        UserID
    );
}

bool TelegramClient::SetMessageReaction(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageID) {
    Methods::setMessageReaction Method(*this);

    return Method.SetMessageReaction(
        ChatID,
        MessageID
    );
}

bool TelegramClient::SetMyCommands(
    const std::vector<::TelegramBotAPI::Type::BotCommand> &Commands) {
    Methods::setMyCommands Method(*this);

    return Method.SetMyCommands(
        Commands
    );
}

bool TelegramClient::SetMyDefaultAdministratorRights() {
    Methods::setMyDefaultAdministratorRights Method(*this);
    return Method.SetMyDefaultAdministratorRights({});
}

bool TelegramClient::SetMyDescription() {
    Methods::setMyDescription Method(*this);
    return Method.SetMyDescription({});
}

bool TelegramClient::SetMyName() {
    Methods::setMyName Method(*this);
    return Method.SetMyName({});
}

bool TelegramClient::SetMyProfilePhoto(
    const std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> &Photo) {
    Methods::setMyProfilePhoto Method(*this);

    return Method.SetMyProfilePhoto(
        Photo
    );
}

bool TelegramClient::SetMyShortDescription() {
    Methods::setMyShortDescription Method(*this);
    return Method.SetMyShortDescription({});
}

bool TelegramClient::SetPassportDataErrors(
    const std::vector<std::variant<::TelegramBotAPI::Type::PassportElementErrorDataField, ::TelegramBotAPI::Type::PassportElementErrorFrontSide, ::TelegramBotAPI::Type::PassportElementErrorReverseSide, ::TelegramBotAPI::Type::PassportElementErrorSelfie, ::TelegramBotAPI::Type::PassportElementErrorFile, ::TelegramBotAPI::Type::PassportElementErrorFiles, ::TelegramBotAPI::Type::PassportElementErrorTranslationFile, ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles, ::TelegramBotAPI::Type::PassportElementErrorUnspecified>> &Errors,
    const long long &UserID) {
    Methods::setPassportDataErrors Method(*this);

    return Method.SetPassportDataErrors(
        Errors,
        UserID
    );
}

bool TelegramClient::SetStickerEmojiList(
    const std::vector<std::string> &EmojiList,
    const std::string &Sticker) {
    Methods::setStickerEmojiList Method(*this);

    return Method.SetStickerEmojiList(
        EmojiList,
        Sticker
    );
}

bool TelegramClient::SetStickerKeywords(
    const std::string &Sticker) {
    Methods::setStickerKeywords Method(*this);

    return Method.SetStickerKeywords(
        Sticker
    );
}

bool TelegramClient::SetStickerMaskPosition(
    const std::string &Sticker) {
    Methods::setStickerMaskPosition Method(*this);

    return Method.SetStickerMaskPosition(
        Sticker
    );
}

bool TelegramClient::SetStickerPositionInSet(
    const long long &Position,
    const std::string &Sticker) {
    Methods::setStickerPositionInSet Method(*this);

    return Method.SetStickerPositionInSet(
        Position,
        Sticker
    );
}

bool TelegramClient::SetStickerSetThumbnail(
    const std::string &Format,
    const std::string &Name,
    const long long &UserID) {
    Methods::setStickerSetThumbnail Method(*this);

    return Method.SetStickerSetThumbnail(
        Format,
        Name,
        UserID
    );
}

bool TelegramClient::SetStickerSetTitle(
    const std::string &Name,
    const std::string &Title) {
    Methods::setStickerSetTitle Method(*this);

    return Method.SetStickerSetTitle(
        Name,
        Title
    );
}

bool TelegramClient::SetUserEmojiStatus(
    const long long &UserID) {
    Methods::setUserEmojiStatus Method(*this);

    return Method.SetUserEmojiStatus(
        UserID
    );
}

bool TelegramClient::SetWebhook(
    const std::string &URL) {
    Methods::setWebhook Method(*this);

    return Method.SetWebhook(
        URL
    );
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::StopMessageLiveLocation() {
    Methods::stopMessageLiveLocation Method(*this);
    return Method.StopMessageLiveLocation({});
}

::TelegramBotAPI::Type::Poll TelegramClient::StopPoll(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageID) {
    Methods::stopPoll Method(*this);

    return Method.StopPoll(
        ChatID,
        MessageID
    );
}

bool TelegramClient::TransferBusinessAccountStars(
    const std::string &BusinessConnectionID,
    const long long &StarCount) {
    Methods::transferBusinessAccountStars Method(*this);

    return Method.TransferBusinessAccountStars(
        BusinessConnectionID,
        StarCount
    );
}

bool TelegramClient::TransferGift(
    const std::string &BusinessConnectionID,
    const long long &NewOwnerChatID,
    const std::string &OwnedGiftID) {
    Methods::transferGift Method(*this);

    return Method.TransferGift(
        BusinessConnectionID,
        NewOwnerChatID,
        OwnedGiftID
    );
}

bool TelegramClient::UnbanChatMember(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::unbanChatMember Method(*this);

    return Method.UnbanChatMember(
        ChatID,
        UserID
    );
}

bool TelegramClient::UnbanChatSenderChat(
    const std::variant<long long, std::string> &ChatID,
    const long long &SenderChatID) {
    Methods::unbanChatSenderChat Method(*this);

    return Method.UnbanChatSenderChat(
        ChatID,
        SenderChatID
    );
}

bool TelegramClient::UnhideGeneralForumTopic(
    const std::variant<long long, std::string> &ChatID) {
    Methods::unhideGeneralForumTopic Method(*this);

    return Method.UnhideGeneralForumTopic(
        ChatID
    );
}

bool TelegramClient::UnpinAllChatMessages(
    const std::variant<long long, std::string> &ChatID) {
    Methods::unpinAllChatMessages Method(*this);

    return Method.UnpinAllChatMessages(
        ChatID
    );
}

bool TelegramClient::UnpinAllForumTopicMessages(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageThreadID) {
    Methods::unpinAllForumTopicMessages Method(*this);

    return Method.UnpinAllForumTopicMessages(
        ChatID,
        MessageThreadID
    );
}

bool TelegramClient::UnpinAllGeneralForumTopicMessages(
    const std::variant<long long, std::string> &ChatID) {
    Methods::unpinAllGeneralForumTopicMessages Method(*this);

    return Method.UnpinAllGeneralForumTopicMessages(
        ChatID
    );
}

bool TelegramClient::UnpinChatMessage(
    const std::variant<long long, std::string> &ChatID) {
    Methods::unpinChatMessage Method(*this);

    return Method.UnpinChatMessage(
        ChatID
    );
}

bool TelegramClient::UpgradeGift(
    const std::string &BusinessConnectionID,
    const std::string &OwnedGiftID) {
    Methods::upgradeGift Method(*this);

    return Method.UpgradeGift(
        BusinessConnectionID,
        OwnedGiftID
    );
}

::TelegramBotAPI::Type::File TelegramClient::UploadStickerFile(
    const std::string &StickerFormat,
    const long long &UserID) {
    Methods::uploadStickerFile Method(*this);

    return Method.UploadStickerFile(
        StickerFormat,
        UserID
    );
}

bool TelegramClient::VerifyChat(
    const std::variant<long long, std::string> &ChatID) {
    Methods::verifyChat Method(*this);

    return Method.VerifyChat(
        ChatID
    );
}

bool TelegramClient::VerifyUser(
    const long long &UserID) {
    Methods::verifyUser Method(*this);

    return Method.VerifyUser(
        UserID
    );
}

} // namespace TelegramBotAPI

#endif
