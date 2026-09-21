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
    const Methods::addStickerToSetParameters &Parameters
) {
    Methods::addStickerToSet Method(*this);
    return Method.AddStickerToSet(Parameters);
}

bool TelegramClient::AddStickerToSet(
    const std::string &Name,
    const ::TelegramBotAPI::Type::InputSticker &Sticker,
    const long long &UserID) {
    Methods::addStickerToSetParameters ParametersValue(
        Name,
        Sticker,
        UserID
    );

    return AddStickerToSet(ParametersValue);
}

bool TelegramClient::AnswerCallbackQuery(
    const Methods::answerCallbackQueryParameters &Parameters
) {
    Methods::answerCallbackQuery Method(*this);
    return Method.AnswerCallbackQuery(Parameters);
}

bool TelegramClient::AnswerCallbackQuery(
    const std::string &CallbackQueryID) {
    Methods::answerCallbackQueryParameters ParametersValue(
        CallbackQueryID
    );

    return AnswerCallbackQuery(ParametersValue);
}

bool TelegramClient::AnswerChatJoinRequestQuery(
    const Methods::answerChatJoinRequestQueryParameters &Parameters
) {
    Methods::answerChatJoinRequestQuery Method(*this);
    return Method.AnswerChatJoinRequestQuery(Parameters);
}

bool TelegramClient::AnswerChatJoinRequestQuery(
    const std::string &ChatJoinRequestQueryID,
    const std::string &Result) {
    Methods::answerChatJoinRequestQueryParameters ParametersValue(
        ChatJoinRequestQueryID,
        Result
    );

    return AnswerChatJoinRequestQuery(ParametersValue);
}

::TelegramBotAPI::Type::SentGuestMessage TelegramClient::AnswerGuestQuery(
    const Methods::answerGuestQueryParameters &Parameters
) {
    Methods::answerGuestQuery Method(*this);
    return Method.AnswerGuestQuery(Parameters);
}

::TelegramBotAPI::Type::SentGuestMessage TelegramClient::AnswerGuestQuery(
    const std::string &GuestQueryID,
    const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &Result) {
    Methods::answerGuestQueryParameters ParametersValue(
        GuestQueryID,
        Result
    );

    return AnswerGuestQuery(ParametersValue);
}

bool TelegramClient::AnswerInlineQuery(
    const Methods::answerInlineQueryParameters &Parameters
) {
    Methods::answerInlineQuery Method(*this);
    return Method.AnswerInlineQuery(Parameters);
}

bool TelegramClient::AnswerInlineQuery(
    const std::string &InlineQueryID,
    const std::vector<std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice>> &Results) {
    Methods::answerInlineQueryParameters ParametersValue(
        InlineQueryID,
        Results
    );

    return AnswerInlineQuery(ParametersValue);
}

bool TelegramClient::AnswerPreCheckoutQuery(
    const Methods::answerPreCheckoutQueryParameters &Parameters
) {
    Methods::answerPreCheckoutQuery Method(*this);
    return Method.AnswerPreCheckoutQuery(Parameters);
}

bool TelegramClient::AnswerPreCheckoutQuery(
    const bool &Ok,
    const std::string &PreCheckoutQueryID) {
    Methods::answerPreCheckoutQueryParameters ParametersValue(
        Ok,
        PreCheckoutQueryID
    );

    return AnswerPreCheckoutQuery(ParametersValue);
}

bool TelegramClient::AnswerShippingQuery(
    const Methods::answerShippingQueryParameters &Parameters
) {
    Methods::answerShippingQuery Method(*this);
    return Method.AnswerShippingQuery(Parameters);
}

bool TelegramClient::AnswerShippingQuery(
    const bool &Ok,
    const std::string &ShippingQueryID) {
    Methods::answerShippingQueryParameters ParametersValue(
        Ok,
        ShippingQueryID
    );

    return AnswerShippingQuery(ParametersValue);
}

::TelegramBotAPI::Type::SentWebAppMessage TelegramClient::AnswerWebAppQuery(
    const Methods::answerWebAppQueryParameters &Parameters
) {
    Methods::answerWebAppQuery Method(*this);
    return Method.AnswerWebAppQuery(Parameters);
}

::TelegramBotAPI::Type::SentWebAppMessage TelegramClient::AnswerWebAppQuery(
    const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &Result,
    const std::string &WebAppQueryID) {
    Methods::answerWebAppQueryParameters ParametersValue(
        Result,
        WebAppQueryID
    );

    return AnswerWebAppQuery(ParametersValue);
}

bool TelegramClient::ApproveChatJoinRequest(
    const Methods::approveChatJoinRequestParameters &Parameters
) {
    Methods::approveChatJoinRequest Method(*this);
    return Method.ApproveChatJoinRequest(Parameters);
}

bool TelegramClient::ApproveChatJoinRequest(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::approveChatJoinRequestParameters ParametersValue(
        ChatID,
        UserID
    );

    return ApproveChatJoinRequest(ParametersValue);
}

bool TelegramClient::ApproveSuggestedPost(
    const Methods::approveSuggestedPostParameters &Parameters
) {
    Methods::approveSuggestedPost Method(*this);
    return Method.ApproveSuggestedPost(Parameters);
}

bool TelegramClient::ApproveSuggestedPost(
    const long long &ChatID,
    const long long &MessageID) {
    Methods::approveSuggestedPostParameters ParametersValue(
        ChatID,
        MessageID
    );

    return ApproveSuggestedPost(ParametersValue);
}

bool TelegramClient::BanChatMember(
    const Methods::banChatMemberParameters &Parameters
) {
    Methods::banChatMember Method(*this);
    return Method.BanChatMember(Parameters);
}

bool TelegramClient::BanChatMember(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::banChatMemberParameters ParametersValue(
        ChatID,
        UserID
    );

    return BanChatMember(ParametersValue);
}

bool TelegramClient::BanChatSenderChat(
    const Methods::banChatSenderChatParameters &Parameters
) {
    Methods::banChatSenderChat Method(*this);
    return Method.BanChatSenderChat(Parameters);
}

bool TelegramClient::BanChatSenderChat(
    const std::variant<long long, std::string> &ChatID,
    const long long &SenderChatID) {
    Methods::banChatSenderChatParameters ParametersValue(
        ChatID,
        SenderChatID
    );

    return BanChatSenderChat(ParametersValue);
}

bool TelegramClient::Close(
    const Methods::closeParameters &Parameters
) {
    Methods::close Method(*this);
    return Method.Close(Parameters);
}

bool TelegramClient::Close() {
    Methods::closeParameters ParametersValue;

    return Close(ParametersValue);
}

bool TelegramClient::CloseForumTopic(
    const Methods::closeForumTopicParameters &Parameters
) {
    Methods::closeForumTopic Method(*this);
    return Method.CloseForumTopic(Parameters);
}

bool TelegramClient::CloseForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageThreadID) {
    Methods::closeForumTopicParameters ParametersValue(
        ChatID,
        MessageThreadID
    );

    return CloseForumTopic(ParametersValue);
}

bool TelegramClient::CloseGeneralForumTopic(
    const Methods::closeGeneralForumTopicParameters &Parameters
) {
    Methods::closeGeneralForumTopic Method(*this);
    return Method.CloseGeneralForumTopic(Parameters);
}

bool TelegramClient::CloseGeneralForumTopic(
    const std::variant<long long, std::string> &ChatID) {
    Methods::closeGeneralForumTopicParameters ParametersValue(
        ChatID
    );

    return CloseGeneralForumTopic(ParametersValue);
}

bool TelegramClient::ConvertGiftToStars(
    const Methods::convertGiftToStarsParameters &Parameters
) {
    Methods::convertGiftToStars Method(*this);
    return Method.ConvertGiftToStars(Parameters);
}

bool TelegramClient::ConvertGiftToStars(
    const std::string &BusinessConnectionID,
    const std::string &OwnedGiftID) {
    Methods::convertGiftToStarsParameters ParametersValue(
        BusinessConnectionID,
        OwnedGiftID
    );

    return ConvertGiftToStars(ParametersValue);
}

::TelegramBotAPI::Type::MessageId TelegramClient::CopyMessage(
    const Methods::copyMessageParameters &Parameters
) {
    Methods::copyMessage Method(*this);
    return Method.CopyMessage(Parameters);
}

::TelegramBotAPI::Type::MessageId TelegramClient::CopyMessage(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<long long, std::string> &FromChatID,
    const long long &MessageID) {
    Methods::copyMessageParameters ParametersValue(
        ChatID,
        FromChatID,
        MessageID
    );

    return CopyMessage(ParametersValue);
}

std::vector<::TelegramBotAPI::Type::MessageId> TelegramClient::CopyMessages(
    const Methods::copyMessagesParameters &Parameters
) {
    Methods::copyMessages Method(*this);
    return Method.CopyMessages(Parameters);
}

std::vector<::TelegramBotAPI::Type::MessageId> TelegramClient::CopyMessages(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<long long, std::string> &FromChatID,
    const std::vector<long long> &MessageIDs) {
    Methods::copyMessagesParameters ParametersValue(
        ChatID,
        FromChatID,
        MessageIDs
    );

    return CopyMessages(ParametersValue);
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::CreateChatInviteLink(
    const Methods::createChatInviteLinkParameters &Parameters
) {
    Methods::createChatInviteLink Method(*this);
    return Method.CreateChatInviteLink(Parameters);
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::CreateChatInviteLink(
    const std::variant<long long, std::string> &ChatID) {
    Methods::createChatInviteLinkParameters ParametersValue(
        ChatID
    );

    return CreateChatInviteLink(ParametersValue);
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::CreateChatSubscriptionInviteLink(
    const Methods::createChatSubscriptionInviteLinkParameters &Parameters
) {
    Methods::createChatSubscriptionInviteLink Method(*this);
    return Method.CreateChatSubscriptionInviteLink(Parameters);
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::CreateChatSubscriptionInviteLink(
    const std::variant<long long, std::string> &ChatID,
    const long long &SubscriptionPeriod,
    const long long &SubscriptionPrice) {
    Methods::createChatSubscriptionInviteLinkParameters ParametersValue(
        ChatID,
        SubscriptionPeriod,
        SubscriptionPrice
    );

    return CreateChatSubscriptionInviteLink(ParametersValue);
}

::TelegramBotAPI::Type::ForumTopic TelegramClient::CreateForumTopic(
    const Methods::createForumTopicParameters &Parameters
) {
    Methods::createForumTopic Method(*this);
    return Method.CreateForumTopic(Parameters);
}

::TelegramBotAPI::Type::ForumTopic TelegramClient::CreateForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const std::string &Name) {
    Methods::createForumTopicParameters ParametersValue(
        ChatID,
        Name
    );

    return CreateForumTopic(ParametersValue);
}

std::string TelegramClient::CreateInvoiceLink(
    const Methods::createInvoiceLinkParameters &Parameters
) {
    Methods::createInvoiceLink Method(*this);
    return Method.CreateInvoiceLink(Parameters);
}

std::string TelegramClient::CreateInvoiceLink(
    const std::string &Currency,
    const std::string &Description,
    const std::string &Payload,
    const std::vector<::TelegramBotAPI::Type::LabeledPrice> &Prices,
    const std::string &Title) {
    Methods::createInvoiceLinkParameters ParametersValue(
        Currency,
        Description,
        Payload,
        Prices,
        Title
    );

    return CreateInvoiceLink(ParametersValue);
}

bool TelegramClient::CreateNewStickerSet(
    const Methods::createNewStickerSetParameters &Parameters
) {
    Methods::createNewStickerSet Method(*this);
    return Method.CreateNewStickerSet(Parameters);
}

bool TelegramClient::CreateNewStickerSet(
    const std::string &Name,
    const std::vector<::TelegramBotAPI::Type::InputSticker> &Stickers,
    const std::string &Title,
    const long long &UserID) {
    Methods::createNewStickerSetParameters ParametersValue(
        Name,
        Stickers,
        Title,
        UserID
    );

    return CreateNewStickerSet(ParametersValue);
}

bool TelegramClient::DeclineChatJoinRequest(
    const Methods::declineChatJoinRequestParameters &Parameters
) {
    Methods::declineChatJoinRequest Method(*this);
    return Method.DeclineChatJoinRequest(Parameters);
}

bool TelegramClient::DeclineChatJoinRequest(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::declineChatJoinRequestParameters ParametersValue(
        ChatID,
        UserID
    );

    return DeclineChatJoinRequest(ParametersValue);
}

bool TelegramClient::DeclineSuggestedPost(
    const Methods::declineSuggestedPostParameters &Parameters
) {
    Methods::declineSuggestedPost Method(*this);
    return Method.DeclineSuggestedPost(Parameters);
}

bool TelegramClient::DeclineSuggestedPost(
    const long long &ChatID,
    const long long &MessageID) {
    Methods::declineSuggestedPostParameters ParametersValue(
        ChatID,
        MessageID
    );

    return DeclineSuggestedPost(ParametersValue);
}

bool TelegramClient::DeleteAllMessageReactions(
    const Methods::deleteAllMessageReactionsParameters &Parameters
) {
    Methods::deleteAllMessageReactions Method(*this);
    return Method.DeleteAllMessageReactions(Parameters);
}

bool TelegramClient::DeleteAllMessageReactions(
    const std::variant<long long, std::string> &ChatID) {
    Methods::deleteAllMessageReactionsParameters ParametersValue(
        ChatID
    );

    return DeleteAllMessageReactions(ParametersValue);
}

bool TelegramClient::DeleteBusinessMessages(
    const Methods::deleteBusinessMessagesParameters &Parameters
) {
    Methods::deleteBusinessMessages Method(*this);
    return Method.DeleteBusinessMessages(Parameters);
}

bool TelegramClient::DeleteBusinessMessages(
    const std::string &BusinessConnectionID,
    const std::vector<long long> &MessageIDs) {
    Methods::deleteBusinessMessagesParameters ParametersValue(
        BusinessConnectionID,
        MessageIDs
    );

    return DeleteBusinessMessages(ParametersValue);
}

bool TelegramClient::DeleteChatPhoto(
    const Methods::deleteChatPhotoParameters &Parameters
) {
    Methods::deleteChatPhoto Method(*this);
    return Method.DeleteChatPhoto(Parameters);
}

bool TelegramClient::DeleteChatPhoto(
    const std::variant<long long, std::string> &ChatID) {
    Methods::deleteChatPhotoParameters ParametersValue(
        ChatID
    );

    return DeleteChatPhoto(ParametersValue);
}

bool TelegramClient::DeleteChatStickerSet(
    const Methods::deleteChatStickerSetParameters &Parameters
) {
    Methods::deleteChatStickerSet Method(*this);
    return Method.DeleteChatStickerSet(Parameters);
}

bool TelegramClient::DeleteChatStickerSet(
    const std::variant<long long, std::string> &ChatID) {
    Methods::deleteChatStickerSetParameters ParametersValue(
        ChatID
    );

    return DeleteChatStickerSet(ParametersValue);
}

bool TelegramClient::DeleteEphemeralMessage(
    const Methods::deleteEphemeralMessageParameters &Parameters
) {
    Methods::deleteEphemeralMessage Method(*this);
    return Method.DeleteEphemeralMessage(Parameters);
}

bool TelegramClient::DeleteEphemeralMessage(
    const std::variant<long long, std::string> &ChatID,
    const long long &EphemeralMessageID,
    const long long &ReceiverUserID) {
    Methods::deleteEphemeralMessageParameters ParametersValue(
        ChatID,
        EphemeralMessageID,
        ReceiverUserID
    );

    return DeleteEphemeralMessage(ParametersValue);
}

bool TelegramClient::DeleteForumTopic(
    const Methods::deleteForumTopicParameters &Parameters
) {
    Methods::deleteForumTopic Method(*this);
    return Method.DeleteForumTopic(Parameters);
}

bool TelegramClient::DeleteForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageThreadID) {
    Methods::deleteForumTopicParameters ParametersValue(
        ChatID,
        MessageThreadID
    );

    return DeleteForumTopic(ParametersValue);
}

bool TelegramClient::DeleteMessage(
    const Methods::deleteMessageParameters &Parameters
) {
    Methods::deleteMessage Method(*this);
    return Method.DeleteMessage(Parameters);
}

bool TelegramClient::DeleteMessage(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageID) {
    Methods::deleteMessageParameters ParametersValue(
        ChatID,
        MessageID
    );

    return DeleteMessage(ParametersValue);
}

bool TelegramClient::DeleteMessageReaction(
    const Methods::deleteMessageReactionParameters &Parameters
) {
    Methods::deleteMessageReaction Method(*this);
    return Method.DeleteMessageReaction(Parameters);
}

bool TelegramClient::DeleteMessageReaction(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageID) {
    Methods::deleteMessageReactionParameters ParametersValue(
        ChatID,
        MessageID
    );

    return DeleteMessageReaction(ParametersValue);
}

bool TelegramClient::DeleteMessages(
    const Methods::deleteMessagesParameters &Parameters
) {
    Methods::deleteMessages Method(*this);
    return Method.DeleteMessages(Parameters);
}

bool TelegramClient::DeleteMessages(
    const std::variant<long long, std::string> &ChatID,
    const std::vector<long long> &MessageIDs) {
    Methods::deleteMessagesParameters ParametersValue(
        ChatID,
        MessageIDs
    );

    return DeleteMessages(ParametersValue);
}

bool TelegramClient::DeleteMyCommands(
    const Methods::deleteMyCommandsParameters &Parameters
) {
    Methods::deleteMyCommands Method(*this);
    return Method.DeleteMyCommands(Parameters);
}

bool TelegramClient::DeleteMyCommands() {
    Methods::deleteMyCommandsParameters ParametersValue;

    return DeleteMyCommands(ParametersValue);
}

bool TelegramClient::DeleteStickerFromSet(
    const Methods::deleteStickerFromSetParameters &Parameters
) {
    Methods::deleteStickerFromSet Method(*this);
    return Method.DeleteStickerFromSet(Parameters);
}

bool TelegramClient::DeleteStickerFromSet(
    const std::string &Sticker) {
    Methods::deleteStickerFromSetParameters ParametersValue(
        Sticker
    );

    return DeleteStickerFromSet(ParametersValue);
}

bool TelegramClient::DeleteStickerSet(
    const Methods::deleteStickerSetParameters &Parameters
) {
    Methods::deleteStickerSet Method(*this);
    return Method.DeleteStickerSet(Parameters);
}

bool TelegramClient::DeleteStickerSet(
    const std::string &Name) {
    Methods::deleteStickerSetParameters ParametersValue(
        Name
    );

    return DeleteStickerSet(ParametersValue);
}

bool TelegramClient::DeleteStory(
    const Methods::deleteStoryParameters &Parameters
) {
    Methods::deleteStory Method(*this);
    return Method.DeleteStory(Parameters);
}

bool TelegramClient::DeleteStory(
    const std::string &BusinessConnectionID,
    const long long &StoryID) {
    Methods::deleteStoryParameters ParametersValue(
        BusinessConnectionID,
        StoryID
    );

    return DeleteStory(ParametersValue);
}

bool TelegramClient::DeleteWebhook(
    const Methods::deleteWebhookParameters &Parameters
) {
    Methods::deleteWebhook Method(*this);
    return Method.DeleteWebhook(Parameters);
}

bool TelegramClient::DeleteWebhook() {
    Methods::deleteWebhookParameters ParametersValue;

    return DeleteWebhook(ParametersValue);
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::EditChatInviteLink(
    const Methods::editChatInviteLinkParameters &Parameters
) {
    Methods::editChatInviteLink Method(*this);
    return Method.EditChatInviteLink(Parameters);
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::EditChatInviteLink(
    const std::variant<long long, std::string> &ChatID,
    const std::string &InviteLink) {
    Methods::editChatInviteLinkParameters ParametersValue(
        ChatID,
        InviteLink
    );

    return EditChatInviteLink(ParametersValue);
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::EditChatSubscriptionInviteLink(
    const Methods::editChatSubscriptionInviteLinkParameters &Parameters
) {
    Methods::editChatSubscriptionInviteLink Method(*this);
    return Method.EditChatSubscriptionInviteLink(Parameters);
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::EditChatSubscriptionInviteLink(
    const std::variant<long long, std::string> &ChatID,
    const std::string &InviteLink) {
    Methods::editChatSubscriptionInviteLinkParameters ParametersValue(
        ChatID,
        InviteLink
    );

    return EditChatSubscriptionInviteLink(ParametersValue);
}

bool TelegramClient::EditEphemeralMessageCaption(
    const Methods::editEphemeralMessageCaptionParameters &Parameters
) {
    Methods::editEphemeralMessageCaption Method(*this);
    return Method.EditEphemeralMessageCaption(Parameters);
}

bool TelegramClient::EditEphemeralMessageCaption(
    const std::variant<long long, std::string> &ChatID,
    const long long &EphemeralMessageID,
    const long long &ReceiverUserID) {
    Methods::editEphemeralMessageCaptionParameters ParametersValue(
        ChatID,
        EphemeralMessageID,
        ReceiverUserID
    );

    return EditEphemeralMessageCaption(ParametersValue);
}

bool TelegramClient::EditEphemeralMessageMedia(
    const Methods::editEphemeralMessageMediaParameters &Parameters
) {
    Methods::editEphemeralMessageMedia Method(*this);
    return Method.EditEphemeralMessageMedia(Parameters);
}

bool TelegramClient::EditEphemeralMessageMedia(
    const std::variant<long long, std::string> &ChatID,
    const long long &EphemeralMessageID,
    const std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> &Media,
    const long long &ReceiverUserID) {
    Methods::editEphemeralMessageMediaParameters ParametersValue(
        ChatID,
        EphemeralMessageID,
        Media,
        ReceiverUserID
    );

    return EditEphemeralMessageMedia(ParametersValue);
}

bool TelegramClient::EditEphemeralMessageReplyMarkup(
    const Methods::editEphemeralMessageReplyMarkupParameters &Parameters
) {
    Methods::editEphemeralMessageReplyMarkup Method(*this);
    return Method.EditEphemeralMessageReplyMarkup(Parameters);
}

bool TelegramClient::EditEphemeralMessageReplyMarkup(
    const std::variant<long long, std::string> &ChatID,
    const long long &EphemeralMessageID,
    const long long &ReceiverUserID) {
    Methods::editEphemeralMessageReplyMarkupParameters ParametersValue(
        ChatID,
        EphemeralMessageID,
        ReceiverUserID
    );

    return EditEphemeralMessageReplyMarkup(ParametersValue);
}

bool TelegramClient::EditEphemeralMessageText(
    const Methods::editEphemeralMessageTextParameters &Parameters
) {
    Methods::editEphemeralMessageText Method(*this);
    return Method.EditEphemeralMessageText(Parameters);
}

bool TelegramClient::EditEphemeralMessageText(
    const std::variant<long long, std::string> &ChatID,
    const long long &EphemeralMessageID,
    const long long &ReceiverUserID) {
    Methods::editEphemeralMessageTextParameters ParametersValue(
        ChatID,
        EphemeralMessageID,
        ReceiverUserID
    );

    return EditEphemeralMessageText(ParametersValue);
}

bool TelegramClient::EditForumTopic(
    const Methods::editForumTopicParameters &Parameters
) {
    Methods::editForumTopic Method(*this);
    return Method.EditForumTopic(Parameters);
}

bool TelegramClient::EditForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageThreadID) {
    Methods::editForumTopicParameters ParametersValue(
        ChatID,
        MessageThreadID
    );

    return EditForumTopic(ParametersValue);
}

bool TelegramClient::EditGeneralForumTopic(
    const Methods::editGeneralForumTopicParameters &Parameters
) {
    Methods::editGeneralForumTopic Method(*this);
    return Method.EditGeneralForumTopic(Parameters);
}

bool TelegramClient::EditGeneralForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const std::string &Name) {
    Methods::editGeneralForumTopicParameters ParametersValue(
        ChatID,
        Name
    );

    return EditGeneralForumTopic(ParametersValue);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageCaption(
    const Methods::editMessageCaptionParameters &Parameters
) {
    Methods::editMessageCaption Method(*this);
    return Method.EditMessageCaption(Parameters);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageCaption() {
    Methods::editMessageCaptionParameters ParametersValue;

    return EditMessageCaption(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::EditMessageChecklist(
    const Methods::editMessageChecklistParameters &Parameters
) {
    Methods::editMessageChecklist Method(*this);
    return Method.EditMessageChecklist(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::EditMessageChecklist(
    const std::string &BusinessConnectionID,
    const std::variant<long long, std::string> &ChatID,
    const ::TelegramBotAPI::Type::InputChecklist &Checklist,
    const long long &MessageID) {
    Methods::editMessageChecklistParameters ParametersValue(
        BusinessConnectionID,
        ChatID,
        Checklist,
        MessageID
    );

    return EditMessageChecklist(ParametersValue);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageLiveLocation(
    const Methods::editMessageLiveLocationParameters &Parameters
) {
    Methods::editMessageLiveLocation Method(*this);
    return Method.EditMessageLiveLocation(Parameters);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageLiveLocation(
    const double &Latitude,
    const double &Longitude) {
    Methods::editMessageLiveLocationParameters ParametersValue(
        Latitude,
        Longitude
    );

    return EditMessageLiveLocation(ParametersValue);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageMedia(
    const Methods::editMessageMediaParameters &Parameters
) {
    Methods::editMessageMedia Method(*this);
    return Method.EditMessageMedia(Parameters);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageMedia(
    const std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> &Media) {
    Methods::editMessageMediaParameters ParametersValue(
        Media
    );

    return EditMessageMedia(ParametersValue);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageReplyMarkup(
    const Methods::editMessageReplyMarkupParameters &Parameters
) {
    Methods::editMessageReplyMarkup Method(*this);
    return Method.EditMessageReplyMarkup(Parameters);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageReplyMarkup() {
    Methods::editMessageReplyMarkupParameters ParametersValue;

    return EditMessageReplyMarkup(ParametersValue);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageText(
    const Methods::editMessageTextParameters &Parameters
) {
    Methods::editMessageText Method(*this);
    return Method.EditMessageText(Parameters);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::EditMessageText() {
    Methods::editMessageTextParameters ParametersValue;

    return EditMessageText(ParametersValue);
}

::TelegramBotAPI::Type::Story TelegramClient::EditStory(
    const Methods::editStoryParameters &Parameters
) {
    Methods::editStory Method(*this);
    return Method.EditStory(Parameters);
}

::TelegramBotAPI::Type::Story TelegramClient::EditStory(
    const std::string &BusinessConnectionID,
    const std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> &Content,
    const long long &StoryID) {
    Methods::editStoryParameters ParametersValue(
        BusinessConnectionID,
        Content,
        StoryID
    );

    return EditStory(ParametersValue);
}

bool TelegramClient::EditUserStarSubscription(
    const Methods::editUserStarSubscriptionParameters &Parameters
) {
    Methods::editUserStarSubscription Method(*this);
    return Method.EditUserStarSubscription(Parameters);
}

bool TelegramClient::EditUserStarSubscription(
    const bool &IsCanceled,
    const std::string &TelegramPaymentChargeID,
    const long long &UserID) {
    Methods::editUserStarSubscriptionParameters ParametersValue(
        IsCanceled,
        TelegramPaymentChargeID,
        UserID
    );

    return EditUserStarSubscription(ParametersValue);
}

std::string TelegramClient::ExportChatInviteLink(
    const Methods::exportChatInviteLinkParameters &Parameters
) {
    Methods::exportChatInviteLink Method(*this);
    return Method.ExportChatInviteLink(Parameters);
}

std::string TelegramClient::ExportChatInviteLink(
    const std::variant<long long, std::string> &ChatID) {
    Methods::exportChatInviteLinkParameters ParametersValue(
        ChatID
    );

    return ExportChatInviteLink(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::ForwardMessage(
    const Methods::forwardMessageParameters &Parameters
) {
    Methods::forwardMessage Method(*this);
    return Method.ForwardMessage(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::ForwardMessage(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<long long, std::string> &FromChatID,
    const long long &MessageID) {
    Methods::forwardMessageParameters ParametersValue(
        ChatID,
        FromChatID,
        MessageID
    );

    return ForwardMessage(ParametersValue);
}

std::vector<::TelegramBotAPI::Type::MessageId> TelegramClient::ForwardMessages(
    const Methods::forwardMessagesParameters &Parameters
) {
    Methods::forwardMessages Method(*this);
    return Method.ForwardMessages(Parameters);
}

std::vector<::TelegramBotAPI::Type::MessageId> TelegramClient::ForwardMessages(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<long long, std::string> &FromChatID,
    const std::vector<long long> &MessageIDs) {
    Methods::forwardMessagesParameters ParametersValue(
        ChatID,
        FromChatID,
        MessageIDs
    );

    return ForwardMessages(ParametersValue);
}

::TelegramBotAPI::Type::Gifts TelegramClient::GetAvailableGifts(
    const Methods::getAvailableGiftsParameters &Parameters
) {
    Methods::getAvailableGifts Method(*this);
    return Method.GetAvailableGifts(Parameters);
}

::TelegramBotAPI::Type::Gifts TelegramClient::GetAvailableGifts() {
    Methods::getAvailableGiftsParameters ParametersValue;

    return GetAvailableGifts(ParametersValue);
}

::TelegramBotAPI::Type::OwnedGifts TelegramClient::GetBusinessAccountGifts(
    const Methods::getBusinessAccountGiftsParameters &Parameters
) {
    Methods::getBusinessAccountGifts Method(*this);
    return Method.GetBusinessAccountGifts(Parameters);
}

::TelegramBotAPI::Type::OwnedGifts TelegramClient::GetBusinessAccountGifts(
    const std::string &BusinessConnectionID) {
    Methods::getBusinessAccountGiftsParameters ParametersValue(
        BusinessConnectionID
    );

    return GetBusinessAccountGifts(ParametersValue);
}

::TelegramBotAPI::Type::StarAmount TelegramClient::GetBusinessAccountStarBalance(
    const Methods::getBusinessAccountStarBalanceParameters &Parameters
) {
    Methods::getBusinessAccountStarBalance Method(*this);
    return Method.GetBusinessAccountStarBalance(Parameters);
}

::TelegramBotAPI::Type::StarAmount TelegramClient::GetBusinessAccountStarBalance(
    const std::string &BusinessConnectionID) {
    Methods::getBusinessAccountStarBalanceParameters ParametersValue(
        BusinessConnectionID
    );

    return GetBusinessAccountStarBalance(ParametersValue);
}

::TelegramBotAPI::Type::BusinessConnection TelegramClient::GetBusinessConnection(
    const Methods::getBusinessConnectionParameters &Parameters
) {
    Methods::getBusinessConnection Method(*this);
    return Method.GetBusinessConnection(Parameters);
}

::TelegramBotAPI::Type::BusinessConnection TelegramClient::GetBusinessConnection(
    const std::string &BusinessConnectionID) {
    Methods::getBusinessConnectionParameters ParametersValue(
        BusinessConnectionID
    );

    return GetBusinessConnection(ParametersValue);
}

::TelegramBotAPI::Type::ChatFullInfo TelegramClient::GetChat(
    const Methods::getChatParameters &Parameters
) {
    Methods::getChat Method(*this);
    return Method.GetChat(Parameters);
}

::TelegramBotAPI::Type::ChatFullInfo TelegramClient::GetChat(
    const std::variant<long long, std::string> &ChatID) {
    Methods::getChatParameters ParametersValue(
        ChatID
    );

    return GetChat(ParametersValue);
}

std::vector<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>> TelegramClient::GetChatAdministrators(
    const Methods::getChatAdministratorsParameters &Parameters
) {
    Methods::getChatAdministrators Method(*this);
    return Method.GetChatAdministrators(Parameters);
}

std::vector<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>> TelegramClient::GetChatAdministrators(
    const std::variant<long long, std::string> &ChatID) {
    Methods::getChatAdministratorsParameters ParametersValue(
        ChatID
    );

    return GetChatAdministrators(ParametersValue);
}

::TelegramBotAPI::Type::OwnedGifts TelegramClient::GetChatGifts(
    const Methods::getChatGiftsParameters &Parameters
) {
    Methods::getChatGifts Method(*this);
    return Method.GetChatGifts(Parameters);
}

::TelegramBotAPI::Type::OwnedGifts TelegramClient::GetChatGifts(
    const std::variant<long long, std::string> &ChatID) {
    Methods::getChatGiftsParameters ParametersValue(
        ChatID
    );

    return GetChatGifts(ParametersValue);
}

std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned> TelegramClient::GetChatMember(
    const Methods::getChatMemberParameters &Parameters
) {
    Methods::getChatMember Method(*this);
    return Method.GetChatMember(Parameters);
}

std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned> TelegramClient::GetChatMember(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::getChatMemberParameters ParametersValue(
        ChatID,
        UserID
    );

    return GetChatMember(ParametersValue);
}

long long TelegramClient::GetChatMemberCount(
    const Methods::getChatMemberCountParameters &Parameters
) {
    Methods::getChatMemberCount Method(*this);
    return Method.GetChatMemberCount(Parameters);
}

long long TelegramClient::GetChatMemberCount(
    const std::variant<long long, std::string> &ChatID) {
    Methods::getChatMemberCountParameters ParametersValue(
        ChatID
    );

    return GetChatMemberCount(ParametersValue);
}

std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault> TelegramClient::GetChatMenuButton(
    const Methods::getChatMenuButtonParameters &Parameters
) {
    Methods::getChatMenuButton Method(*this);
    return Method.GetChatMenuButton(Parameters);
}

std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault> TelegramClient::GetChatMenuButton() {
    Methods::getChatMenuButtonParameters ParametersValue;

    return GetChatMenuButton(ParametersValue);
}

std::vector<::TelegramBotAPI::Type::Sticker> TelegramClient::GetCustomEmojiStickers(
    const Methods::getCustomEmojiStickersParameters &Parameters
) {
    Methods::getCustomEmojiStickers Method(*this);
    return Method.GetCustomEmojiStickers(Parameters);
}

std::vector<::TelegramBotAPI::Type::Sticker> TelegramClient::GetCustomEmojiStickers(
    const std::vector<std::string> &CustomEmojiIDs) {
    Methods::getCustomEmojiStickersParameters ParametersValue(
        CustomEmojiIDs
    );

    return GetCustomEmojiStickers(ParametersValue);
}

::TelegramBotAPI::Type::File TelegramClient::GetFile(
    const Methods::getFileParameters &Parameters
) {
    Methods::getFile Method(*this);
    return Method.GetFile(Parameters);
}

::TelegramBotAPI::Type::File TelegramClient::GetFile(
    const std::string &FileID) {
    Methods::getFileParameters ParametersValue(
        FileID
    );

    return GetFile(ParametersValue);
}

std::vector<::TelegramBotAPI::Type::Sticker> TelegramClient::GetForumTopicIconStickers(
    const Methods::getForumTopicIconStickersParameters &Parameters
) {
    Methods::getForumTopicIconStickers Method(*this);
    return Method.GetForumTopicIconStickers(Parameters);
}

std::vector<::TelegramBotAPI::Type::Sticker> TelegramClient::GetForumTopicIconStickers() {
    Methods::getForumTopicIconStickersParameters ParametersValue;

    return GetForumTopicIconStickers(ParametersValue);
}

std::vector<::TelegramBotAPI::Type::GameHighScore> TelegramClient::GetGameHighScores(
    const Methods::getGameHighScoresParameters &Parameters
) {
    Methods::getGameHighScores Method(*this);
    return Method.GetGameHighScores(Parameters);
}

std::vector<::TelegramBotAPI::Type::GameHighScore> TelegramClient::GetGameHighScores(
    const long long &UserID) {
    Methods::getGameHighScoresParameters ParametersValue(
        UserID
    );

    return GetGameHighScores(ParametersValue);
}

::TelegramBotAPI::Type::BotAccessSettings TelegramClient::GetManagedBotAccessSettings(
    const Methods::getManagedBotAccessSettingsParameters &Parameters
) {
    Methods::getManagedBotAccessSettings Method(*this);
    return Method.GetManagedBotAccessSettings(Parameters);
}

::TelegramBotAPI::Type::BotAccessSettings TelegramClient::GetManagedBotAccessSettings(
    const long long &UserID) {
    Methods::getManagedBotAccessSettingsParameters ParametersValue(
        UserID
    );

    return GetManagedBotAccessSettings(ParametersValue);
}

std::string TelegramClient::GetManagedBotToken(
    const Methods::getManagedBotTokenParameters &Parameters
) {
    Methods::getManagedBotToken Method(*this);
    return Method.GetManagedBotToken(Parameters);
}

std::string TelegramClient::GetManagedBotToken(
    const long long &UserID) {
    Methods::getManagedBotTokenParameters ParametersValue(
        UserID
    );

    return GetManagedBotToken(ParametersValue);
}

::TelegramBotAPI::Type::User TelegramClient::GetMe(
    const Methods::getMeParameters &Parameters
) {
    Methods::getMe Method(*this);
    return Method.GetMe(Parameters);
}

::TelegramBotAPI::Type::User TelegramClient::GetMe() {
    Methods::getMeParameters ParametersValue;

    return GetMe(ParametersValue);
}

std::vector<::TelegramBotAPI::Type::BotCommand> TelegramClient::GetMyCommands(
    const Methods::getMyCommandsParameters &Parameters
) {
    Methods::getMyCommands Method(*this);
    return Method.GetMyCommands(Parameters);
}

std::vector<::TelegramBotAPI::Type::BotCommand> TelegramClient::GetMyCommands() {
    Methods::getMyCommandsParameters ParametersValue;

    return GetMyCommands(ParametersValue);
}

::TelegramBotAPI::Type::ChatAdministratorRights TelegramClient::GetMyDefaultAdministratorRights(
    const Methods::getMyDefaultAdministratorRightsParameters &Parameters
) {
    Methods::getMyDefaultAdministratorRights Method(*this);
    return Method.GetMyDefaultAdministratorRights(Parameters);
}

::TelegramBotAPI::Type::ChatAdministratorRights TelegramClient::GetMyDefaultAdministratorRights() {
    Methods::getMyDefaultAdministratorRightsParameters ParametersValue;

    return GetMyDefaultAdministratorRights(ParametersValue);
}

::TelegramBotAPI::Type::BotDescription TelegramClient::GetMyDescription(
    const Methods::getMyDescriptionParameters &Parameters
) {
    Methods::getMyDescription Method(*this);
    return Method.GetMyDescription(Parameters);
}

::TelegramBotAPI::Type::BotDescription TelegramClient::GetMyDescription() {
    Methods::getMyDescriptionParameters ParametersValue;

    return GetMyDescription(ParametersValue);
}

::TelegramBotAPI::Type::BotName TelegramClient::GetMyName(
    const Methods::getMyNameParameters &Parameters
) {
    Methods::getMyName Method(*this);
    return Method.GetMyName(Parameters);
}

::TelegramBotAPI::Type::BotName TelegramClient::GetMyName() {
    Methods::getMyNameParameters ParametersValue;

    return GetMyName(ParametersValue);
}

::TelegramBotAPI::Type::BotShortDescription TelegramClient::GetMyShortDescription(
    const Methods::getMyShortDescriptionParameters &Parameters
) {
    Methods::getMyShortDescription Method(*this);
    return Method.GetMyShortDescription(Parameters);
}

::TelegramBotAPI::Type::BotShortDescription TelegramClient::GetMyShortDescription() {
    Methods::getMyShortDescriptionParameters ParametersValue;

    return GetMyShortDescription(ParametersValue);
}

::TelegramBotAPI::Type::StarAmount TelegramClient::GetMyStarBalance(
    const Methods::getMyStarBalanceParameters &Parameters
) {
    Methods::getMyStarBalance Method(*this);
    return Method.GetMyStarBalance(Parameters);
}

::TelegramBotAPI::Type::StarAmount TelegramClient::GetMyStarBalance() {
    Methods::getMyStarBalanceParameters ParametersValue;

    return GetMyStarBalance(ParametersValue);
}

::TelegramBotAPI::Type::StarTransactions TelegramClient::GetStarTransactions(
    const Methods::getStarTransactionsParameters &Parameters
) {
    Methods::getStarTransactions Method(*this);
    return Method.GetStarTransactions(Parameters);
}

::TelegramBotAPI::Type::StarTransactions TelegramClient::GetStarTransactions() {
    Methods::getStarTransactionsParameters ParametersValue;

    return GetStarTransactions(ParametersValue);
}

::TelegramBotAPI::Type::StickerSet TelegramClient::GetStickerSet(
    const Methods::getStickerSetParameters &Parameters
) {
    Methods::getStickerSet Method(*this);
    return Method.GetStickerSet(Parameters);
}

::TelegramBotAPI::Type::StickerSet TelegramClient::GetStickerSet(
    const std::string &Name) {
    Methods::getStickerSetParameters ParametersValue(
        Name
    );

    return GetStickerSet(ParametersValue);
}

std::vector<::TelegramBotAPI::Type::Update> TelegramClient::GetUpdates(
    const Methods::getUpdatesParameters &Parameters
) {
    Methods::getUpdates Method(*this);
    return Method.GetUpdates(Parameters);
}

std::vector<::TelegramBotAPI::Type::Update> TelegramClient::GetUpdates() {
    Methods::getUpdatesParameters ParametersValue;

    return GetUpdates(ParametersValue);
}

::TelegramBotAPI::Type::UserChatBoosts TelegramClient::GetUserChatBoosts(
    const Methods::getUserChatBoostsParameters &Parameters
) {
    Methods::getUserChatBoosts Method(*this);
    return Method.GetUserChatBoosts(Parameters);
}

::TelegramBotAPI::Type::UserChatBoosts TelegramClient::GetUserChatBoosts(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::getUserChatBoostsParameters ParametersValue(
        ChatID,
        UserID
    );

    return GetUserChatBoosts(ParametersValue);
}

::TelegramBotAPI::Type::OwnedGifts TelegramClient::GetUserGifts(
    const Methods::getUserGiftsParameters &Parameters
) {
    Methods::getUserGifts Method(*this);
    return Method.GetUserGifts(Parameters);
}

::TelegramBotAPI::Type::OwnedGifts TelegramClient::GetUserGifts(
    const long long &UserID) {
    Methods::getUserGiftsParameters ParametersValue(
        UserID
    );

    return GetUserGifts(ParametersValue);
}

std::vector<::TelegramBotAPI::Type::Message> TelegramClient::GetUserPersonalChatMessages(
    const Methods::getUserPersonalChatMessagesParameters &Parameters
) {
    Methods::getUserPersonalChatMessages Method(*this);
    return Method.GetUserPersonalChatMessages(Parameters);
}

std::vector<::TelegramBotAPI::Type::Message> TelegramClient::GetUserPersonalChatMessages(
    const long long &Limit,
    const long long &UserID) {
    Methods::getUserPersonalChatMessagesParameters ParametersValue(
        Limit,
        UserID
    );

    return GetUserPersonalChatMessages(ParametersValue);
}

::TelegramBotAPI::Type::UserProfileAudios TelegramClient::GetUserProfileAudios(
    const Methods::getUserProfileAudiosParameters &Parameters
) {
    Methods::getUserProfileAudios Method(*this);
    return Method.GetUserProfileAudios(Parameters);
}

::TelegramBotAPI::Type::UserProfileAudios TelegramClient::GetUserProfileAudios(
    const long long &UserID) {
    Methods::getUserProfileAudiosParameters ParametersValue(
        UserID
    );

    return GetUserProfileAudios(ParametersValue);
}

::TelegramBotAPI::Type::UserProfilePhotos TelegramClient::GetUserProfilePhotos(
    const Methods::getUserProfilePhotosParameters &Parameters
) {
    Methods::getUserProfilePhotos Method(*this);
    return Method.GetUserProfilePhotos(Parameters);
}

::TelegramBotAPI::Type::UserProfilePhotos TelegramClient::GetUserProfilePhotos(
    const long long &UserID) {
    Methods::getUserProfilePhotosParameters ParametersValue(
        UserID
    );

    return GetUserProfilePhotos(ParametersValue);
}

::TelegramBotAPI::Type::WebhookInfo TelegramClient::GetWebhookInfo(
    const Methods::getWebhookInfoParameters &Parameters
) {
    Methods::getWebhookInfo Method(*this);
    return Method.GetWebhookInfo(Parameters);
}

::TelegramBotAPI::Type::WebhookInfo TelegramClient::GetWebhookInfo() {
    Methods::getWebhookInfoParameters ParametersValue;

    return GetWebhookInfo(ParametersValue);
}

bool TelegramClient::GiftPremiumSubscription(
    const Methods::giftPremiumSubscriptionParameters &Parameters
) {
    Methods::giftPremiumSubscription Method(*this);
    return Method.GiftPremiumSubscription(Parameters);
}

bool TelegramClient::GiftPremiumSubscription(
    const long long &MonthCount,
    const long long &StarCount,
    const long long &UserID) {
    Methods::giftPremiumSubscriptionParameters ParametersValue(
        MonthCount,
        StarCount,
        UserID
    );

    return GiftPremiumSubscription(ParametersValue);
}

bool TelegramClient::HideGeneralForumTopic(
    const Methods::hideGeneralForumTopicParameters &Parameters
) {
    Methods::hideGeneralForumTopic Method(*this);
    return Method.HideGeneralForumTopic(Parameters);
}

bool TelegramClient::HideGeneralForumTopic(
    const std::variant<long long, std::string> &ChatID) {
    Methods::hideGeneralForumTopicParameters ParametersValue(
        ChatID
    );

    return HideGeneralForumTopic(ParametersValue);
}

bool TelegramClient::LeaveChat(
    const Methods::leaveChatParameters &Parameters
) {
    Methods::leaveChat Method(*this);
    return Method.LeaveChat(Parameters);
}

bool TelegramClient::LeaveChat(
    const std::variant<long long, std::string> &ChatID) {
    Methods::leaveChatParameters ParametersValue(
        ChatID
    );

    return LeaveChat(ParametersValue);
}

bool TelegramClient::LogOut(
    const Methods::logOutParameters &Parameters
) {
    Methods::logOut Method(*this);
    return Method.LogOut(Parameters);
}

bool TelegramClient::LogOut() {
    Methods::logOutParameters ParametersValue;

    return LogOut(ParametersValue);
}

bool TelegramClient::PinChatMessage(
    const Methods::pinChatMessageParameters &Parameters
) {
    Methods::pinChatMessage Method(*this);
    return Method.PinChatMessage(Parameters);
}

bool TelegramClient::PinChatMessage(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageID) {
    Methods::pinChatMessageParameters ParametersValue(
        ChatID,
        MessageID
    );

    return PinChatMessage(ParametersValue);
}

::TelegramBotAPI::Type::Story TelegramClient::PostStory(
    const Methods::postStoryParameters &Parameters
) {
    Methods::postStory Method(*this);
    return Method.PostStory(Parameters);
}

::TelegramBotAPI::Type::Story TelegramClient::PostStory(
    const long long &ActivePeriod,
    const std::string &BusinessConnectionID,
    const std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> &Content) {
    Methods::postStoryParameters ParametersValue(
        ActivePeriod,
        BusinessConnectionID,
        Content
    );

    return PostStory(ParametersValue);
}

bool TelegramClient::PromoteChatMember(
    const Methods::promoteChatMemberParameters &Parameters
) {
    Methods::promoteChatMember Method(*this);
    return Method.PromoteChatMember(Parameters);
}

bool TelegramClient::PromoteChatMember(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::promoteChatMemberParameters ParametersValue(
        ChatID,
        UserID
    );

    return PromoteChatMember(ParametersValue);
}

bool TelegramClient::ReadBusinessMessage(
    const Methods::readBusinessMessageParameters &Parameters
) {
    Methods::readBusinessMessage Method(*this);
    return Method.ReadBusinessMessage(Parameters);
}

bool TelegramClient::ReadBusinessMessage(
    const std::string &BusinessConnectionID,
    const long long &ChatID,
    const long long &MessageID) {
    Methods::readBusinessMessageParameters ParametersValue(
        BusinessConnectionID,
        ChatID,
        MessageID
    );

    return ReadBusinessMessage(ParametersValue);
}

bool TelegramClient::RefundStarPayment(
    const Methods::refundStarPaymentParameters &Parameters
) {
    Methods::refundStarPayment Method(*this);
    return Method.RefundStarPayment(Parameters);
}

bool TelegramClient::RefundStarPayment(
    const std::string &TelegramPaymentChargeID,
    const long long &UserID) {
    Methods::refundStarPaymentParameters ParametersValue(
        TelegramPaymentChargeID,
        UserID
    );

    return RefundStarPayment(ParametersValue);
}

bool TelegramClient::RemoveBusinessAccountProfilePhoto(
    const Methods::removeBusinessAccountProfilePhotoParameters &Parameters
) {
    Methods::removeBusinessAccountProfilePhoto Method(*this);
    return Method.RemoveBusinessAccountProfilePhoto(Parameters);
}

bool TelegramClient::RemoveBusinessAccountProfilePhoto(
    const std::string &BusinessConnectionID) {
    Methods::removeBusinessAccountProfilePhotoParameters ParametersValue(
        BusinessConnectionID
    );

    return RemoveBusinessAccountProfilePhoto(ParametersValue);
}

bool TelegramClient::RemoveChatVerification(
    const Methods::removeChatVerificationParameters &Parameters
) {
    Methods::removeChatVerification Method(*this);
    return Method.RemoveChatVerification(Parameters);
}

bool TelegramClient::RemoveChatVerification(
    const std::variant<long long, std::string> &ChatID) {
    Methods::removeChatVerificationParameters ParametersValue(
        ChatID
    );

    return RemoveChatVerification(ParametersValue);
}

bool TelegramClient::RemoveMyProfilePhoto(
    const Methods::removeMyProfilePhotoParameters &Parameters
) {
    Methods::removeMyProfilePhoto Method(*this);
    return Method.RemoveMyProfilePhoto(Parameters);
}

bool TelegramClient::RemoveMyProfilePhoto() {
    Methods::removeMyProfilePhotoParameters ParametersValue;

    return RemoveMyProfilePhoto(ParametersValue);
}

bool TelegramClient::RemoveUserVerification(
    const Methods::removeUserVerificationParameters &Parameters
) {
    Methods::removeUserVerification Method(*this);
    return Method.RemoveUserVerification(Parameters);
}

bool TelegramClient::RemoveUserVerification(
    const long long &UserID) {
    Methods::removeUserVerificationParameters ParametersValue(
        UserID
    );

    return RemoveUserVerification(ParametersValue);
}

bool TelegramClient::ReopenForumTopic(
    const Methods::reopenForumTopicParameters &Parameters
) {
    Methods::reopenForumTopic Method(*this);
    return Method.ReopenForumTopic(Parameters);
}

bool TelegramClient::ReopenForumTopic(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageThreadID) {
    Methods::reopenForumTopicParameters ParametersValue(
        ChatID,
        MessageThreadID
    );

    return ReopenForumTopic(ParametersValue);
}

bool TelegramClient::ReopenGeneralForumTopic(
    const Methods::reopenGeneralForumTopicParameters &Parameters
) {
    Methods::reopenGeneralForumTopic Method(*this);
    return Method.ReopenGeneralForumTopic(Parameters);
}

bool TelegramClient::ReopenGeneralForumTopic(
    const std::variant<long long, std::string> &ChatID) {
    Methods::reopenGeneralForumTopicParameters ParametersValue(
        ChatID
    );

    return ReopenGeneralForumTopic(ParametersValue);
}

std::string TelegramClient::ReplaceManagedBotToken(
    const Methods::replaceManagedBotTokenParameters &Parameters
) {
    Methods::replaceManagedBotToken Method(*this);
    return Method.ReplaceManagedBotToken(Parameters);
}

std::string TelegramClient::ReplaceManagedBotToken(
    const long long &UserID) {
    Methods::replaceManagedBotTokenParameters ParametersValue(
        UserID
    );

    return ReplaceManagedBotToken(ParametersValue);
}

bool TelegramClient::ReplaceStickerInSet(
    const Methods::replaceStickerInSetParameters &Parameters
) {
    Methods::replaceStickerInSet Method(*this);
    return Method.ReplaceStickerInSet(Parameters);
}

bool TelegramClient::ReplaceStickerInSet(
    const std::string &Name,
    const std::string &OldSticker,
    const ::TelegramBotAPI::Type::InputSticker &Sticker,
    const long long &UserID) {
    Methods::replaceStickerInSetParameters ParametersValue(
        Name,
        OldSticker,
        Sticker,
        UserID
    );

    return ReplaceStickerInSet(ParametersValue);
}

::TelegramBotAPI::Type::Story TelegramClient::RepostStory(
    const Methods::repostStoryParameters &Parameters
) {
    Methods::repostStory Method(*this);
    return Method.RepostStory(Parameters);
}

::TelegramBotAPI::Type::Story TelegramClient::RepostStory(
    const long long &ActivePeriod,
    const std::string &BusinessConnectionID,
    const long long &FromChatID,
    const long long &FromStoryID) {
    Methods::repostStoryParameters ParametersValue(
        ActivePeriod,
        BusinessConnectionID,
        FromChatID,
        FromStoryID
    );

    return RepostStory(ParametersValue);
}

bool TelegramClient::RestrictChatMember(
    const Methods::restrictChatMemberParameters &Parameters
) {
    Methods::restrictChatMember Method(*this);
    return Method.RestrictChatMember(Parameters);
}

bool TelegramClient::RestrictChatMember(
    const std::variant<long long, std::string> &ChatID,
    const ::TelegramBotAPI::Type::ChatPermissions &Permissions,
    const long long &UserID) {
    Methods::restrictChatMemberParameters ParametersValue(
        ChatID,
        Permissions,
        UserID
    );

    return RestrictChatMember(ParametersValue);
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::RevokeChatInviteLink(
    const Methods::revokeChatInviteLinkParameters &Parameters
) {
    Methods::revokeChatInviteLink Method(*this);
    return Method.RevokeChatInviteLink(Parameters);
}

::TelegramBotAPI::Type::ChatInviteLink TelegramClient::RevokeChatInviteLink(
    const std::variant<long long, std::string> &ChatID,
    const std::string &InviteLink) {
    Methods::revokeChatInviteLinkParameters ParametersValue(
        ChatID,
        InviteLink
    );

    return RevokeChatInviteLink(ParametersValue);
}

::TelegramBotAPI::Type::PreparedInlineMessage TelegramClient::SavePreparedInlineMessage(
    const Methods::savePreparedInlineMessageParameters &Parameters
) {
    Methods::savePreparedInlineMessage Method(*this);
    return Method.SavePreparedInlineMessage(Parameters);
}

::TelegramBotAPI::Type::PreparedInlineMessage TelegramClient::SavePreparedInlineMessage(
    const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &Result,
    const long long &UserID) {
    Methods::savePreparedInlineMessageParameters ParametersValue(
        Result,
        UserID
    );

    return SavePreparedInlineMessage(ParametersValue);
}

::TelegramBotAPI::Type::PreparedKeyboardButton TelegramClient::SavePreparedKeyboardButton(
    const Methods::savePreparedKeyboardButtonParameters &Parameters
) {
    Methods::savePreparedKeyboardButton Method(*this);
    return Method.SavePreparedKeyboardButton(Parameters);
}

::TelegramBotAPI::Type::PreparedKeyboardButton TelegramClient::SavePreparedKeyboardButton(
    const ::TelegramBotAPI::Type::KeyboardButton &Button,
    const long long &UserID) {
    Methods::savePreparedKeyboardButtonParameters ParametersValue(
        Button,
        UserID
    );

    return SavePreparedKeyboardButton(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendAnimation(
    const Methods::sendAnimationParameters &Parameters
) {
    Methods::sendAnimation Method(*this);
    return Method.SendAnimation(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendAnimation(
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Animation,
    const std::variant<long long, std::string> &ChatID) {
    Methods::sendAnimationParameters ParametersValue(
        Animation,
        ChatID
    );

    return SendAnimation(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendAudio(
    const Methods::sendAudioParameters &Parameters
) {
    Methods::sendAudio Method(*this);
    return Method.SendAudio(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendAudio(
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Audio,
    const std::variant<long long, std::string> &ChatID) {
    Methods::sendAudioParameters ParametersValue(
        Audio,
        ChatID
    );

    return SendAudio(ParametersValue);
}

bool TelegramClient::SendChatAction(
    const Methods::sendChatActionParameters &Parameters
) {
    Methods::sendChatAction Method(*this);
    return Method.SendChatAction(Parameters);
}

bool TelegramClient::SendChatAction(
    const std::string &Action,
    const std::variant<long long, std::string> &ChatID) {
    Methods::sendChatActionParameters ParametersValue(
        Action,
        ChatID
    );

    return SendChatAction(ParametersValue);
}

bool TelegramClient::SendChatJoinRequestWebApp(
    const Methods::sendChatJoinRequestWebAppParameters &Parameters
) {
    Methods::sendChatJoinRequestWebApp Method(*this);
    return Method.SendChatJoinRequestWebApp(Parameters);
}

bool TelegramClient::SendChatJoinRequestWebApp(
    const std::string &ChatJoinRequestQueryID,
    const std::string &WebAppURL) {
    Methods::sendChatJoinRequestWebAppParameters ParametersValue(
        ChatJoinRequestQueryID,
        WebAppURL
    );

    return SendChatJoinRequestWebApp(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendChecklist(
    const Methods::sendChecklistParameters &Parameters
) {
    Methods::sendChecklist Method(*this);
    return Method.SendChecklist(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendChecklist(
    const std::string &BusinessConnectionID,
    const std::variant<long long, std::string> &ChatID,
    const ::TelegramBotAPI::Type::InputChecklist &Checklist) {
    Methods::sendChecklistParameters ParametersValue(
        BusinessConnectionID,
        ChatID,
        Checklist
    );

    return SendChecklist(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendContact(
    const Methods::sendContactParameters &Parameters
) {
    Methods::sendContact Method(*this);
    return Method.SendContact(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendContact(
    const std::variant<long long, std::string> &ChatID,
    const std::string &FirstName,
    const std::string &PhoneNumber) {
    Methods::sendContactParameters ParametersValue(
        ChatID,
        FirstName,
        PhoneNumber
    );

    return SendContact(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendDice(
    const Methods::sendDiceParameters &Parameters
) {
    Methods::sendDice Method(*this);
    return Method.SendDice(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendDice(
    const std::variant<long long, std::string> &ChatID) {
    Methods::sendDiceParameters ParametersValue(
        ChatID
    );

    return SendDice(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendDocument(
    const Methods::sendDocumentParameters &Parameters
) {
    Methods::sendDocument Method(*this);
    return Method.SendDocument(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendDocument(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Document) {
    Methods::sendDocumentParameters ParametersValue(
        ChatID,
        Document
    );

    return SendDocument(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendGame(
    const Methods::sendGameParameters &Parameters
) {
    Methods::sendGame Method(*this);
    return Method.SendGame(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendGame(
    const std::variant<long long, std::string> &ChatID,
    const std::string &GameShortName) {
    Methods::sendGameParameters ParametersValue(
        ChatID,
        GameShortName
    );

    return SendGame(ParametersValue);
}

bool TelegramClient::SendGift(
    const Methods::sendGiftParameters &Parameters
) {
    Methods::sendGift Method(*this);
    return Method.SendGift(Parameters);
}

bool TelegramClient::SendGift(
    const std::string &GiftID) {
    Methods::sendGiftParameters ParametersValue(
        GiftID
    );

    return SendGift(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendInvoice(
    const Methods::sendInvoiceParameters &Parameters
) {
    Methods::sendInvoice Method(*this);
    return Method.SendInvoice(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendInvoice(
    const std::variant<long long, std::string> &ChatID,
    const std::string &Currency,
    const std::string &Description,
    const std::string &Payload,
    const std::vector<::TelegramBotAPI::Type::LabeledPrice> &Prices,
    const std::string &Title) {
    Methods::sendInvoiceParameters ParametersValue(
        ChatID,
        Currency,
        Description,
        Payload,
        Prices,
        Title
    );

    return SendInvoice(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendLivePhoto(
    const Methods::sendLivePhotoParameters &Parameters
) {
    Methods::sendLivePhoto Method(*this);
    return Method.SendLivePhoto(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendLivePhoto(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &LivePhoto,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Photo) {
    Methods::sendLivePhotoParameters ParametersValue(
        ChatID,
        LivePhoto,
        Photo
    );

    return SendLivePhoto(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendLocation(
    const Methods::sendLocationParameters &Parameters
) {
    Methods::sendLocation Method(*this);
    return Method.SendLocation(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendLocation(
    const std::variant<long long, std::string> &ChatID,
    const double &Latitude,
    const double &Longitude) {
    Methods::sendLocationParameters ParametersValue(
        ChatID,
        Latitude,
        Longitude
    );

    return SendLocation(ParametersValue);
}

std::vector<::TelegramBotAPI::Type::Message> TelegramClient::SendMediaGroup(
    const Methods::sendMediaGroupParameters &Parameters
) {
    Methods::sendMediaGroup Method(*this);
    return Method.SendMediaGroup(Parameters);
}

std::vector<::TelegramBotAPI::Type::Message> TelegramClient::SendMediaGroup(
    const std::variant<long long, std::string> &ChatID,
    const std::vector<std::variant<::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo>> &Media) {
    Methods::sendMediaGroupParameters ParametersValue(
        ChatID,
        Media
    );

    return SendMediaGroup(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendMessage(
    const Methods::sendMessageParameters &Parameters
) {
    Methods::sendMessage Method(*this);
    return Method.SendMessage(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendMessage(
    const std::variant<long long, std::string> &ChatID,
    const std::string &Text) {
    Methods::sendMessageParameters ParametersValue(
        ChatID,
        Text
    );

    return SendMessage(ParametersValue);
}

bool TelegramClient::SendMessageDraft(
    const Methods::sendMessageDraftParameters &Parameters
) {
    Methods::sendMessageDraft Method(*this);
    return Method.SendMessageDraft(Parameters);
}

bool TelegramClient::SendMessageDraft(
    const long long &ChatID,
    const long long &DraftID) {
    Methods::sendMessageDraftParameters ParametersValue(
        ChatID,
        DraftID
    );

    return SendMessageDraft(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendPaidMedia(
    const Methods::sendPaidMediaParameters &Parameters
) {
    Methods::sendPaidMedia Method(*this);
    return Method.SendPaidMedia(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendPaidMedia(
    const std::variant<long long, std::string> &ChatID,
    const std::vector<std::variant<::TelegramBotAPI::Type::InputPaidMediaLivePhoto, ::TelegramBotAPI::Type::InputPaidMediaPhoto, ::TelegramBotAPI::Type::InputPaidMediaVideo>> &Media,
    const long long &StarCount) {
    Methods::sendPaidMediaParameters ParametersValue(
        ChatID,
        Media,
        StarCount
    );

    return SendPaidMedia(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendPhoto(
    const Methods::sendPhotoParameters &Parameters
) {
    Methods::sendPhoto Method(*this);
    return Method.SendPhoto(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendPhoto(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Photo) {
    Methods::sendPhotoParameters ParametersValue(
        ChatID,
        Photo
    );

    return SendPhoto(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendPoll(
    const Methods::sendPollParameters &Parameters
) {
    Methods::sendPoll Method(*this);
    return Method.SendPoll(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendPoll(
    const std::variant<long long, std::string> &ChatID,
    const std::vector<::TelegramBotAPI::Type::InputPollOption> &Options,
    const std::string &Question) {
    Methods::sendPollParameters ParametersValue(
        ChatID,
        Options,
        Question
    );

    return SendPoll(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendRichMessage(
    const Methods::sendRichMessageParameters &Parameters
) {
    Methods::sendRichMessage Method(*this);
    return Method.SendRichMessage(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendRichMessage(
    const std::variant<long long, std::string> &ChatID,
    const ::TelegramBotAPI::Type::InputRichMessage &RichMessage) {
    Methods::sendRichMessageParameters ParametersValue(
        ChatID,
        RichMessage
    );

    return SendRichMessage(ParametersValue);
}

bool TelegramClient::SendRichMessageDraft(
    const Methods::sendRichMessageDraftParameters &Parameters
) {
    Methods::sendRichMessageDraft Method(*this);
    return Method.SendRichMessageDraft(Parameters);
}

bool TelegramClient::SendRichMessageDraft(
    const long long &ChatID,
    const long long &DraftID,
    const ::TelegramBotAPI::Type::InputRichMessage &RichMessage) {
    Methods::sendRichMessageDraftParameters ParametersValue(
        ChatID,
        DraftID,
        RichMessage
    );

    return SendRichMessageDraft(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendSticker(
    const Methods::sendStickerParameters &Parameters
) {
    Methods::sendSticker Method(*this);
    return Method.SendSticker(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendSticker(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Sticker) {
    Methods::sendStickerParameters ParametersValue(
        ChatID,
        Sticker
    );

    return SendSticker(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendVenue(
    const Methods::sendVenueParameters &Parameters
) {
    Methods::sendVenue Method(*this);
    return Method.SendVenue(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendVenue(
    const std::string &Address,
    const std::variant<long long, std::string> &ChatID,
    const double &Latitude,
    const double &Longitude,
    const std::string &Title) {
    Methods::sendVenueParameters ParametersValue(
        Address,
        ChatID,
        Latitude,
        Longitude,
        Title
    );

    return SendVenue(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendVideo(
    const Methods::sendVideoParameters &Parameters
) {
    Methods::sendVideo Method(*this);
    return Method.SendVideo(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendVideo(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Video) {
    Methods::sendVideoParameters ParametersValue(
        ChatID,
        Video
    );

    return SendVideo(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendVideoNote(
    const Methods::sendVideoNoteParameters &Parameters
) {
    Methods::sendVideoNote Method(*this);
    return Method.SendVideoNote(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendVideoNote(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &VideoNote) {
    Methods::sendVideoNoteParameters ParametersValue(
        ChatID,
        VideoNote
    );

    return SendVideoNote(ParametersValue);
}

::TelegramBotAPI::Type::Message TelegramClient::SendVoice(
    const Methods::sendVoiceParameters &Parameters
) {
    Methods::sendVoice Method(*this);
    return Method.SendVoice(Parameters);
}

::TelegramBotAPI::Type::Message TelegramClient::SendVoice(
    const std::variant<long long, std::string> &ChatID,
    const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Voice) {
    Methods::sendVoiceParameters ParametersValue(
        ChatID,
        Voice
    );

    return SendVoice(ParametersValue);
}

bool TelegramClient::SetBusinessAccountBio(
    const Methods::setBusinessAccountBioParameters &Parameters
) {
    Methods::setBusinessAccountBio Method(*this);
    return Method.SetBusinessAccountBio(Parameters);
}

bool TelegramClient::SetBusinessAccountBio(
    const std::string &BusinessConnectionID) {
    Methods::setBusinessAccountBioParameters ParametersValue(
        BusinessConnectionID
    );

    return SetBusinessAccountBio(ParametersValue);
}

bool TelegramClient::SetBusinessAccountGiftSettings(
    const Methods::setBusinessAccountGiftSettingsParameters &Parameters
) {
    Methods::setBusinessAccountGiftSettings Method(*this);
    return Method.SetBusinessAccountGiftSettings(Parameters);
}

bool TelegramClient::SetBusinessAccountGiftSettings(
    const ::TelegramBotAPI::Type::AcceptedGiftTypes &AcceptedGiftTypes,
    const std::string &BusinessConnectionID,
    const bool &ShowGiftButton) {
    Methods::setBusinessAccountGiftSettingsParameters ParametersValue(
        AcceptedGiftTypes,
        BusinessConnectionID,
        ShowGiftButton
    );

    return SetBusinessAccountGiftSettings(ParametersValue);
}

bool TelegramClient::SetBusinessAccountName(
    const Methods::setBusinessAccountNameParameters &Parameters
) {
    Methods::setBusinessAccountName Method(*this);
    return Method.SetBusinessAccountName(Parameters);
}

bool TelegramClient::SetBusinessAccountName(
    const std::string &BusinessConnectionID,
    const std::string &FirstName) {
    Methods::setBusinessAccountNameParameters ParametersValue(
        BusinessConnectionID,
        FirstName
    );

    return SetBusinessAccountName(ParametersValue);
}

bool TelegramClient::SetBusinessAccountProfilePhoto(
    const Methods::setBusinessAccountProfilePhotoParameters &Parameters
) {
    Methods::setBusinessAccountProfilePhoto Method(*this);
    return Method.SetBusinessAccountProfilePhoto(Parameters);
}

bool TelegramClient::SetBusinessAccountProfilePhoto(
    const std::string &BusinessConnectionID,
    const std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> &Photo) {
    Methods::setBusinessAccountProfilePhotoParameters ParametersValue(
        BusinessConnectionID,
        Photo
    );

    return SetBusinessAccountProfilePhoto(ParametersValue);
}

bool TelegramClient::SetBusinessAccountUsername(
    const Methods::setBusinessAccountUsernameParameters &Parameters
) {
    Methods::setBusinessAccountUsername Method(*this);
    return Method.SetBusinessAccountUsername(Parameters);
}

bool TelegramClient::SetBusinessAccountUsername(
    const std::string &BusinessConnectionID) {
    Methods::setBusinessAccountUsernameParameters ParametersValue(
        BusinessConnectionID
    );

    return SetBusinessAccountUsername(ParametersValue);
}

bool TelegramClient::SetChatAdministratorCustomTitle(
    const Methods::setChatAdministratorCustomTitleParameters &Parameters
) {
    Methods::setChatAdministratorCustomTitle Method(*this);
    return Method.SetChatAdministratorCustomTitle(Parameters);
}

bool TelegramClient::SetChatAdministratorCustomTitle(
    const std::variant<long long, std::string> &ChatID,
    const std::string &CustomTitle,
    const long long &UserID) {
    Methods::setChatAdministratorCustomTitleParameters ParametersValue(
        ChatID,
        CustomTitle,
        UserID
    );

    return SetChatAdministratorCustomTitle(ParametersValue);
}

bool TelegramClient::SetChatDescription(
    const Methods::setChatDescriptionParameters &Parameters
) {
    Methods::setChatDescription Method(*this);
    return Method.SetChatDescription(Parameters);
}

bool TelegramClient::SetChatDescription(
    const std::variant<long long, std::string> &ChatID) {
    Methods::setChatDescriptionParameters ParametersValue(
        ChatID
    );

    return SetChatDescription(ParametersValue);
}

bool TelegramClient::SetChatMemberTag(
    const Methods::setChatMemberTagParameters &Parameters
) {
    Methods::setChatMemberTag Method(*this);
    return Method.SetChatMemberTag(Parameters);
}

bool TelegramClient::SetChatMemberTag(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::setChatMemberTagParameters ParametersValue(
        ChatID,
        UserID
    );

    return SetChatMemberTag(ParametersValue);
}

bool TelegramClient::SetChatMenuButton(
    const Methods::setChatMenuButtonParameters &Parameters
) {
    Methods::setChatMenuButton Method(*this);
    return Method.SetChatMenuButton(Parameters);
}

bool TelegramClient::SetChatMenuButton() {
    Methods::setChatMenuButtonParameters ParametersValue;

    return SetChatMenuButton(ParametersValue);
}

bool TelegramClient::SetChatPermissions(
    const Methods::setChatPermissionsParameters &Parameters
) {
    Methods::setChatPermissions Method(*this);
    return Method.SetChatPermissions(Parameters);
}

bool TelegramClient::SetChatPermissions(
    const std::variant<long long, std::string> &ChatID,
    const ::TelegramBotAPI::Type::ChatPermissions &Permissions) {
    Methods::setChatPermissionsParameters ParametersValue(
        ChatID,
        Permissions
    );

    return SetChatPermissions(ParametersValue);
}

bool TelegramClient::SetChatPhoto(
    const Methods::setChatPhotoParameters &Parameters
) {
    Methods::setChatPhoto Method(*this);
    return Method.SetChatPhoto(Parameters);
}

bool TelegramClient::SetChatPhoto(
    const std::variant<long long, std::string> &ChatID) {
    Methods::setChatPhotoParameters ParametersValue(
        ChatID
    );

    return SetChatPhoto(ParametersValue);
}

bool TelegramClient::SetChatStickerSet(
    const Methods::setChatStickerSetParameters &Parameters
) {
    Methods::setChatStickerSet Method(*this);
    return Method.SetChatStickerSet(Parameters);
}

bool TelegramClient::SetChatStickerSet(
    const std::variant<long long, std::string> &ChatID,
    const std::string &StickerSetName) {
    Methods::setChatStickerSetParameters ParametersValue(
        ChatID,
        StickerSetName
    );

    return SetChatStickerSet(ParametersValue);
}

bool TelegramClient::SetChatTitle(
    const Methods::setChatTitleParameters &Parameters
) {
    Methods::setChatTitle Method(*this);
    return Method.SetChatTitle(Parameters);
}

bool TelegramClient::SetChatTitle(
    const std::variant<long long, std::string> &ChatID,
    const std::string &Title) {
    Methods::setChatTitleParameters ParametersValue(
        ChatID,
        Title
    );

    return SetChatTitle(ParametersValue);
}

bool TelegramClient::SetCustomEmojiStickerSetThumbnail(
    const Methods::setCustomEmojiStickerSetThumbnailParameters &Parameters
) {
    Methods::setCustomEmojiStickerSetThumbnail Method(*this);
    return Method.SetCustomEmojiStickerSetThumbnail(Parameters);
}

bool TelegramClient::SetCustomEmojiStickerSetThumbnail(
    const std::string &Name) {
    Methods::setCustomEmojiStickerSetThumbnailParameters ParametersValue(
        Name
    );

    return SetCustomEmojiStickerSetThumbnail(ParametersValue);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::SetGameScore(
    const Methods::setGameScoreParameters &Parameters
) {
    Methods::setGameScore Method(*this);
    return Method.SetGameScore(Parameters);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::SetGameScore(
    const long long &Score,
    const long long &UserID) {
    Methods::setGameScoreParameters ParametersValue(
        Score,
        UserID
    );

    return SetGameScore(ParametersValue);
}

bool TelegramClient::SetManagedBotAccessSettings(
    const Methods::setManagedBotAccessSettingsParameters &Parameters
) {
    Methods::setManagedBotAccessSettings Method(*this);
    return Method.SetManagedBotAccessSettings(Parameters);
}

bool TelegramClient::SetManagedBotAccessSettings(
    const bool &IsAccessRestricted,
    const long long &UserID) {
    Methods::setManagedBotAccessSettingsParameters ParametersValue(
        IsAccessRestricted,
        UserID
    );

    return SetManagedBotAccessSettings(ParametersValue);
}

bool TelegramClient::SetMessageReaction(
    const Methods::setMessageReactionParameters &Parameters
) {
    Methods::setMessageReaction Method(*this);
    return Method.SetMessageReaction(Parameters);
}

bool TelegramClient::SetMessageReaction(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageID) {
    Methods::setMessageReactionParameters ParametersValue(
        ChatID,
        MessageID
    );

    return SetMessageReaction(ParametersValue);
}

bool TelegramClient::SetMyCommands(
    const Methods::setMyCommandsParameters &Parameters
) {
    Methods::setMyCommands Method(*this);
    return Method.SetMyCommands(Parameters);
}

bool TelegramClient::SetMyCommands(
    const std::vector<::TelegramBotAPI::Type::BotCommand> &Commands) {
    Methods::setMyCommandsParameters ParametersValue(
        Commands
    );

    return SetMyCommands(ParametersValue);
}

bool TelegramClient::SetMyDefaultAdministratorRights(
    const Methods::setMyDefaultAdministratorRightsParameters &Parameters
) {
    Methods::setMyDefaultAdministratorRights Method(*this);
    return Method.SetMyDefaultAdministratorRights(Parameters);
}

bool TelegramClient::SetMyDefaultAdministratorRights() {
    Methods::setMyDefaultAdministratorRightsParameters ParametersValue;

    return SetMyDefaultAdministratorRights(ParametersValue);
}

bool TelegramClient::SetMyDescription(
    const Methods::setMyDescriptionParameters &Parameters
) {
    Methods::setMyDescription Method(*this);
    return Method.SetMyDescription(Parameters);
}

bool TelegramClient::SetMyDescription() {
    Methods::setMyDescriptionParameters ParametersValue;

    return SetMyDescription(ParametersValue);
}

bool TelegramClient::SetMyName(
    const Methods::setMyNameParameters &Parameters
) {
    Methods::setMyName Method(*this);
    return Method.SetMyName(Parameters);
}

bool TelegramClient::SetMyName() {
    Methods::setMyNameParameters ParametersValue;

    return SetMyName(ParametersValue);
}

bool TelegramClient::SetMyProfilePhoto(
    const Methods::setMyProfilePhotoParameters &Parameters
) {
    Methods::setMyProfilePhoto Method(*this);
    return Method.SetMyProfilePhoto(Parameters);
}

bool TelegramClient::SetMyProfilePhoto(
    const std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> &Photo) {
    Methods::setMyProfilePhotoParameters ParametersValue(
        Photo
    );

    return SetMyProfilePhoto(ParametersValue);
}

bool TelegramClient::SetMyShortDescription(
    const Methods::setMyShortDescriptionParameters &Parameters
) {
    Methods::setMyShortDescription Method(*this);
    return Method.SetMyShortDescription(Parameters);
}

bool TelegramClient::SetMyShortDescription() {
    Methods::setMyShortDescriptionParameters ParametersValue;

    return SetMyShortDescription(ParametersValue);
}

bool TelegramClient::SetPassportDataErrors(
    const Methods::setPassportDataErrorsParameters &Parameters
) {
    Methods::setPassportDataErrors Method(*this);
    return Method.SetPassportDataErrors(Parameters);
}

bool TelegramClient::SetPassportDataErrors(
    const std::vector<std::variant<::TelegramBotAPI::Type::PassportElementErrorDataField, ::TelegramBotAPI::Type::PassportElementErrorFrontSide, ::TelegramBotAPI::Type::PassportElementErrorReverseSide, ::TelegramBotAPI::Type::PassportElementErrorSelfie, ::TelegramBotAPI::Type::PassportElementErrorFile, ::TelegramBotAPI::Type::PassportElementErrorFiles, ::TelegramBotAPI::Type::PassportElementErrorTranslationFile, ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles, ::TelegramBotAPI::Type::PassportElementErrorUnspecified>> &Errors,
    const long long &UserID) {
    Methods::setPassportDataErrorsParameters ParametersValue(
        Errors,
        UserID
    );

    return SetPassportDataErrors(ParametersValue);
}

bool TelegramClient::SetStickerEmojiList(
    const Methods::setStickerEmojiListParameters &Parameters
) {
    Methods::setStickerEmojiList Method(*this);
    return Method.SetStickerEmojiList(Parameters);
}

bool TelegramClient::SetStickerEmojiList(
    const std::vector<std::string> &EmojiList,
    const std::string &Sticker) {
    Methods::setStickerEmojiListParameters ParametersValue(
        EmojiList,
        Sticker
    );

    return SetStickerEmojiList(ParametersValue);
}

bool TelegramClient::SetStickerKeywords(
    const Methods::setStickerKeywordsParameters &Parameters
) {
    Methods::setStickerKeywords Method(*this);
    return Method.SetStickerKeywords(Parameters);
}

bool TelegramClient::SetStickerKeywords(
    const std::string &Sticker) {
    Methods::setStickerKeywordsParameters ParametersValue(
        Sticker
    );

    return SetStickerKeywords(ParametersValue);
}

bool TelegramClient::SetStickerMaskPosition(
    const Methods::setStickerMaskPositionParameters &Parameters
) {
    Methods::setStickerMaskPosition Method(*this);
    return Method.SetStickerMaskPosition(Parameters);
}

bool TelegramClient::SetStickerMaskPosition(
    const std::string &Sticker) {
    Methods::setStickerMaskPositionParameters ParametersValue(
        Sticker
    );

    return SetStickerMaskPosition(ParametersValue);
}

bool TelegramClient::SetStickerPositionInSet(
    const Methods::setStickerPositionInSetParameters &Parameters
) {
    Methods::setStickerPositionInSet Method(*this);
    return Method.SetStickerPositionInSet(Parameters);
}

bool TelegramClient::SetStickerPositionInSet(
    const long long &Position,
    const std::string &Sticker) {
    Methods::setStickerPositionInSetParameters ParametersValue(
        Position,
        Sticker
    );

    return SetStickerPositionInSet(ParametersValue);
}

bool TelegramClient::SetStickerSetThumbnail(
    const Methods::setStickerSetThumbnailParameters &Parameters
) {
    Methods::setStickerSetThumbnail Method(*this);
    return Method.SetStickerSetThumbnail(Parameters);
}

bool TelegramClient::SetStickerSetThumbnail(
    const std::string &Format,
    const std::string &Name,
    const long long &UserID) {
    Methods::setStickerSetThumbnailParameters ParametersValue(
        Format,
        Name,
        UserID
    );

    return SetStickerSetThumbnail(ParametersValue);
}

bool TelegramClient::SetStickerSetTitle(
    const Methods::setStickerSetTitleParameters &Parameters
) {
    Methods::setStickerSetTitle Method(*this);
    return Method.SetStickerSetTitle(Parameters);
}

bool TelegramClient::SetStickerSetTitle(
    const std::string &Name,
    const std::string &Title) {
    Methods::setStickerSetTitleParameters ParametersValue(
        Name,
        Title
    );

    return SetStickerSetTitle(ParametersValue);
}

bool TelegramClient::SetUserEmojiStatus(
    const Methods::setUserEmojiStatusParameters &Parameters
) {
    Methods::setUserEmojiStatus Method(*this);
    return Method.SetUserEmojiStatus(Parameters);
}

bool TelegramClient::SetUserEmojiStatus(
    const long long &UserID) {
    Methods::setUserEmojiStatusParameters ParametersValue(
        UserID
    );

    return SetUserEmojiStatus(ParametersValue);
}

bool TelegramClient::SetWebhook(
    const Methods::setWebhookParameters &Parameters
) {
    Methods::setWebhook Method(*this);
    return Method.SetWebhook(Parameters);
}

bool TelegramClient::SetWebhook(
    const std::string &URL) {
    Methods::setWebhookParameters ParametersValue(
        URL
    );

    return SetWebhook(ParametersValue);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::StopMessageLiveLocation(
    const Methods::stopMessageLiveLocationParameters &Parameters
) {
    Methods::stopMessageLiveLocation Method(*this);
    return Method.StopMessageLiveLocation(Parameters);
}

std::variant<::TelegramBotAPI::Type::Message, bool> TelegramClient::StopMessageLiveLocation() {
    Methods::stopMessageLiveLocationParameters ParametersValue;

    return StopMessageLiveLocation(ParametersValue);
}

::TelegramBotAPI::Type::Poll TelegramClient::StopPoll(
    const Methods::stopPollParameters &Parameters
) {
    Methods::stopPoll Method(*this);
    return Method.StopPoll(Parameters);
}

::TelegramBotAPI::Type::Poll TelegramClient::StopPoll(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageID) {
    Methods::stopPollParameters ParametersValue(
        ChatID,
        MessageID
    );

    return StopPoll(ParametersValue);
}

bool TelegramClient::TransferBusinessAccountStars(
    const Methods::transferBusinessAccountStarsParameters &Parameters
) {
    Methods::transferBusinessAccountStars Method(*this);
    return Method.TransferBusinessAccountStars(Parameters);
}

bool TelegramClient::TransferBusinessAccountStars(
    const std::string &BusinessConnectionID,
    const long long &StarCount) {
    Methods::transferBusinessAccountStarsParameters ParametersValue(
        BusinessConnectionID,
        StarCount
    );

    return TransferBusinessAccountStars(ParametersValue);
}

bool TelegramClient::TransferGift(
    const Methods::transferGiftParameters &Parameters
) {
    Methods::transferGift Method(*this);
    return Method.TransferGift(Parameters);
}

bool TelegramClient::TransferGift(
    const std::string &BusinessConnectionID,
    const long long &NewOwnerChatID,
    const std::string &OwnedGiftID) {
    Methods::transferGiftParameters ParametersValue(
        BusinessConnectionID,
        NewOwnerChatID,
        OwnedGiftID
    );

    return TransferGift(ParametersValue);
}

bool TelegramClient::UnbanChatMember(
    const Methods::unbanChatMemberParameters &Parameters
) {
    Methods::unbanChatMember Method(*this);
    return Method.UnbanChatMember(Parameters);
}

bool TelegramClient::UnbanChatMember(
    const std::variant<long long, std::string> &ChatID,
    const long long &UserID) {
    Methods::unbanChatMemberParameters ParametersValue(
        ChatID,
        UserID
    );

    return UnbanChatMember(ParametersValue);
}

bool TelegramClient::UnbanChatSenderChat(
    const Methods::unbanChatSenderChatParameters &Parameters
) {
    Methods::unbanChatSenderChat Method(*this);
    return Method.UnbanChatSenderChat(Parameters);
}

bool TelegramClient::UnbanChatSenderChat(
    const std::variant<long long, std::string> &ChatID,
    const long long &SenderChatID) {
    Methods::unbanChatSenderChatParameters ParametersValue(
        ChatID,
        SenderChatID
    );

    return UnbanChatSenderChat(ParametersValue);
}

bool TelegramClient::UnhideGeneralForumTopic(
    const Methods::unhideGeneralForumTopicParameters &Parameters
) {
    Methods::unhideGeneralForumTopic Method(*this);
    return Method.UnhideGeneralForumTopic(Parameters);
}

bool TelegramClient::UnhideGeneralForumTopic(
    const std::variant<long long, std::string> &ChatID) {
    Methods::unhideGeneralForumTopicParameters ParametersValue(
        ChatID
    );

    return UnhideGeneralForumTopic(ParametersValue);
}

bool TelegramClient::UnpinAllChatMessages(
    const Methods::unpinAllChatMessagesParameters &Parameters
) {
    Methods::unpinAllChatMessages Method(*this);
    return Method.UnpinAllChatMessages(Parameters);
}

bool TelegramClient::UnpinAllChatMessages(
    const std::variant<long long, std::string> &ChatID) {
    Methods::unpinAllChatMessagesParameters ParametersValue(
        ChatID
    );

    return UnpinAllChatMessages(ParametersValue);
}

bool TelegramClient::UnpinAllForumTopicMessages(
    const Methods::unpinAllForumTopicMessagesParameters &Parameters
) {
    Methods::unpinAllForumTopicMessages Method(*this);
    return Method.UnpinAllForumTopicMessages(Parameters);
}

bool TelegramClient::UnpinAllForumTopicMessages(
    const std::variant<long long, std::string> &ChatID,
    const long long &MessageThreadID) {
    Methods::unpinAllForumTopicMessagesParameters ParametersValue(
        ChatID,
        MessageThreadID
    );

    return UnpinAllForumTopicMessages(ParametersValue);
}

bool TelegramClient::UnpinAllGeneralForumTopicMessages(
    const Methods::unpinAllGeneralForumTopicMessagesParameters &Parameters
) {
    Methods::unpinAllGeneralForumTopicMessages Method(*this);
    return Method.UnpinAllGeneralForumTopicMessages(Parameters);
}

bool TelegramClient::UnpinAllGeneralForumTopicMessages(
    const std::variant<long long, std::string> &ChatID) {
    Methods::unpinAllGeneralForumTopicMessagesParameters ParametersValue(
        ChatID
    );

    return UnpinAllGeneralForumTopicMessages(ParametersValue);
}

bool TelegramClient::UnpinChatMessage(
    const Methods::unpinChatMessageParameters &Parameters
) {
    Methods::unpinChatMessage Method(*this);
    return Method.UnpinChatMessage(Parameters);
}

bool TelegramClient::UnpinChatMessage(
    const std::variant<long long, std::string> &ChatID) {
    Methods::unpinChatMessageParameters ParametersValue(
        ChatID
    );

    return UnpinChatMessage(ParametersValue);
}

bool TelegramClient::UpgradeGift(
    const Methods::upgradeGiftParameters &Parameters
) {
    Methods::upgradeGift Method(*this);
    return Method.UpgradeGift(Parameters);
}

bool TelegramClient::UpgradeGift(
    const std::string &BusinessConnectionID,
    const std::string &OwnedGiftID) {
    Methods::upgradeGiftParameters ParametersValue(
        BusinessConnectionID,
        OwnedGiftID
    );

    return UpgradeGift(ParametersValue);
}

::TelegramBotAPI::Type::File TelegramClient::UploadStickerFile(
    const Methods::uploadStickerFileParameters &Parameters
) {
    Methods::uploadStickerFile Method(*this);
    return Method.UploadStickerFile(Parameters);
}

::TelegramBotAPI::Type::File TelegramClient::UploadStickerFile(
    const std::string &StickerFormat,
    const long long &UserID) {
    Methods::uploadStickerFileParameters ParametersValue(
        StickerFormat,
        UserID
    );

    return UploadStickerFile(ParametersValue);
}

bool TelegramClient::VerifyChat(
    const Methods::verifyChatParameters &Parameters
) {
    Methods::verifyChat Method(*this);
    return Method.VerifyChat(Parameters);
}

bool TelegramClient::VerifyChat(
    const std::variant<long long, std::string> &ChatID) {
    Methods::verifyChatParameters ParametersValue(
        ChatID
    );

    return VerifyChat(ParametersValue);
}

bool TelegramClient::VerifyUser(
    const Methods::verifyUserParameters &Parameters
) {
    Methods::verifyUser Method(*this);
    return Method.VerifyUser(Parameters);
}

bool TelegramClient::VerifyUser(
    const long long &UserID) {
    Methods::verifyUserParameters ParametersValue(
        UserID
    );

    return VerifyUser(ParametersValue);
}

} // namespace TelegramBotAPI

#endif
