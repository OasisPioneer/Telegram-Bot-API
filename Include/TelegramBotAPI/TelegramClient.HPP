#ifndef TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP
#define TELEGRAMBOTAPI_TELEGRAMCLIENT_HPP

#include <chrono>
#include <string>

#include "TelegramBotAPI/JSON/Json.HPP"
#include "TelegramBotAPI/Network/HTTPClient.HPP"
#include "TelegramBotAPI/Network/HTTPResponse.HPP"
#include "TelegramBotAPI/Network/IHTTPClient.HPP"
#include "TelegramBotAPI/Network/Multipart/MultipartForm.HPP"
#include "TelegramBotAPI/TelegramAPIException.HPP"
#include "TelegramBotAPI/Types/AcceptedGiftTypes.HPP"
#include "TelegramBotAPI/Types/AffiliateInfo.HPP"
#include "TelegramBotAPI/Types/Animation.HPP"
#include "TelegramBotAPI/Types/Audio.HPP"
#include "TelegramBotAPI/Types/BackgroundFillFreeformGradient.HPP"
#include "TelegramBotAPI/Types/BackgroundFillGradient.HPP"
#include "TelegramBotAPI/Types/BackgroundFillSolid.HPP"
#include "TelegramBotAPI/Types/BackgroundTypeChatTheme.HPP"
#include "TelegramBotAPI/Types/BackgroundTypeFill.HPP"
#include "TelegramBotAPI/Types/BackgroundTypePattern.HPP"
#include "TelegramBotAPI/Types/BackgroundTypeWallpaper.HPP"
#include "TelegramBotAPI/Types/Birthdate.HPP"
#include "TelegramBotAPI/Types/BotAccessSettings.HPP"
#include "TelegramBotAPI/Types/BotCommand.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeAllChatAdministrators.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeAllGroupChats.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeAllPrivateChats.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeChat.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeChatAdministrators.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeChatMember.HPP"
#include "TelegramBotAPI/Types/BotCommandScopeDefault.HPP"
#include "TelegramBotAPI/Types/BotDescription.HPP"
#include "TelegramBotAPI/Types/BotName.HPP"
#include "TelegramBotAPI/Types/BotShortDescription.HPP"
#include "TelegramBotAPI/Types/BotSubscriptionUpdated.HPP"
#include "TelegramBotAPI/Types/BusinessBotRights.HPP"
#include "TelegramBotAPI/Types/BusinessConnection.HPP"
#include "TelegramBotAPI/Types/BusinessIntro.HPP"
#include "TelegramBotAPI/Types/BusinessLocation.HPP"
#include "TelegramBotAPI/Types/BusinessMessagesDeleted.HPP"
#include "TelegramBotAPI/Types/BusinessOpeningHours.HPP"
#include "TelegramBotAPI/Types/BusinessOpeningHoursInterval.HPP"
#include "TelegramBotAPI/Types/CallbackGame.HPP"
#include "TelegramBotAPI/Types/CallbackQuery.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ChatAdministratorRights.HPP"
#include "TelegramBotAPI/Types/ChatBackground.HPP"
#include "TelegramBotAPI/Types/ChatBoost.HPP"
#include "TelegramBotAPI/Types/ChatBoostAdded.HPP"
#include "TelegramBotAPI/Types/ChatBoostRemoved.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourceGiftCode.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourceGiveaway.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourcePremium.HPP"
#include "TelegramBotAPI/Types/ChatBoostUpdated.HPP"
#include "TelegramBotAPI/Types/ChatFullInfo.HPP"
#include "TelegramBotAPI/Types/ChatInviteLink.HPP"
#include "TelegramBotAPI/Types/ChatJoinRequest.HPP"
#include "TelegramBotAPI/Types/ChatLocation.HPP"
#include "TelegramBotAPI/Types/ChatMemberAdministrator.HPP"
#include "TelegramBotAPI/Types/ChatMemberBanned.HPP"
#include "TelegramBotAPI/Types/ChatMemberLeft.HPP"
#include "TelegramBotAPI/Types/ChatMemberMember.HPP"
#include "TelegramBotAPI/Types/ChatMemberOwner.HPP"
#include "TelegramBotAPI/Types/ChatMemberRestricted.HPP"
#include "TelegramBotAPI/Types/ChatMemberUpdated.HPP"
#include "TelegramBotAPI/Types/ChatOwnerChanged.HPP"
#include "TelegramBotAPI/Types/ChatOwnerLeft.HPP"
#include "TelegramBotAPI/Types/ChatPermissions.HPP"
#include "TelegramBotAPI/Types/ChatPhoto.HPP"
#include "TelegramBotAPI/Types/ChatShared.HPP"
#include "TelegramBotAPI/Types/Checklist.HPP"
#include "TelegramBotAPI/Types/ChecklistTask.HPP"
#include "TelegramBotAPI/Types/ChecklistTasksAdded.HPP"
#include "TelegramBotAPI/Types/ChecklistTasksDone.HPP"
#include "TelegramBotAPI/Types/ChosenInlineResult.HPP"
#include "TelegramBotAPI/Types/Community.HPP"
#include "TelegramBotAPI/Types/CommunityChatAdded.HPP"
#include "TelegramBotAPI/Types/CommunityChatJoined.HPP"
#include "TelegramBotAPI/Types/CommunityChatRemoved.HPP"
#include "TelegramBotAPI/Types/Contact.HPP"
#include "TelegramBotAPI/Types/CopyTextButton.HPP"
#include "TelegramBotAPI/Types/Dice.HPP"
#include "TelegramBotAPI/Types/DirectMessagePriceChanged.HPP"
#include "TelegramBotAPI/Types/DirectMessagesTopic.HPP"
#include "TelegramBotAPI/Types/DisabledButton.HPP"
#include "TelegramBotAPI/Types/Document.HPP"
#include "TelegramBotAPI/Types/EncryptedCredentials.HPP"
#include "TelegramBotAPI/Types/EncryptedPassportElement.HPP"
#include "TelegramBotAPI/Types/EphemeralMessageParameters.HPP"
#include "TelegramBotAPI/Types/ExternalReplyInfo.HPP"
#include "TelegramBotAPI/Types/File.HPP"
#include "TelegramBotAPI/Types/ForceReply.HPP"
#include "TelegramBotAPI/Types/ForumTopic.HPP"
#include "TelegramBotAPI/Types/ForumTopicClosed.HPP"
#include "TelegramBotAPI/Types/ForumTopicCreated.HPP"
#include "TelegramBotAPI/Types/ForumTopicEdited.HPP"
#include "TelegramBotAPI/Types/ForumTopicReopened.HPP"
#include "TelegramBotAPI/Types/Game.HPP"
#include "TelegramBotAPI/Types/GameHighScore.HPP"
#include "TelegramBotAPI/Types/GeneralForumTopicHidden.HPP"
#include "TelegramBotAPI/Types/GeneralForumTopicUnhidden.HPP"
#include "TelegramBotAPI/Types/Gift.HPP"
#include "TelegramBotAPI/Types/GiftBackground.HPP"
#include "TelegramBotAPI/Types/GiftInfo.HPP"
#include "TelegramBotAPI/Types/Gifts.HPP"
#include "TelegramBotAPI/Types/Giveaway.HPP"
#include "TelegramBotAPI/Types/GiveawayCompleted.HPP"
#include "TelegramBotAPI/Types/GiveawayCreated.HPP"
#include "TelegramBotAPI/Types/GiveawayWinners.HPP"
#include "TelegramBotAPI/Types/InaccessibleMessage.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardButton.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InlineQuery.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultArticle.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultAudio.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedAudio.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedDocument.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedGif.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedMpeg4Gif.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedPhoto.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedSticker.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedVideo.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultCachedVoice.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultContact.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultDocument.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultGame.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultGif.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultLocation.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultMpeg4Gif.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultPhoto.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultVenue.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultVideo.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultVoice.HPP"
#include "TelegramBotAPI/Types/InlineQueryResultsButton.HPP"
#include "TelegramBotAPI/Types/InputChecklist.HPP"
#include "TelegramBotAPI/Types/InputChecklistTask.HPP"
#include "TelegramBotAPI/Types/InputContactMessageContent.HPP"
#include "TelegramBotAPI/Types/InputInvoiceMessageContent.HPP"
#include "TelegramBotAPI/Types/InputLocationMessageContent.HPP"
#include "TelegramBotAPI/Types/InputMediaAnimation.HPP"
#include "TelegramBotAPI/Types/InputMediaAudio.HPP"
#include "TelegramBotAPI/Types/InputMediaDocument.HPP"
#include "TelegramBotAPI/Types/InputMediaLink.HPP"
#include "TelegramBotAPI/Types/InputMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaLocation.HPP"
#include "TelegramBotAPI/Types/InputMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputMediaSticker.HPP"
#include "TelegramBotAPI/Types/InputMediaVenue.HPP"
#include "TelegramBotAPI/Types/InputMediaVideo.HPP"
#include "TelegramBotAPI/Types/InputMediaVoiceNote.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaVideo.HPP"
#include "TelegramBotAPI/Types/InputPollOption.HPP"
#include "TelegramBotAPI/Types/InputProfilePhotoAnimated.HPP"
#include "TelegramBotAPI/Types/InputProfilePhotoStatic.HPP"
#include "TelegramBotAPI/Types/InputRichBlock.HPP"
#include "TelegramBotAPI/Types/InputRichBlockAnchor.HPP"
#include "TelegramBotAPI/Types/InputRichBlockAnimation.HPP"
#include "TelegramBotAPI/Types/InputRichBlockAudio.HPP"
#include "TelegramBotAPI/Types/InputRichBlockBlockQuotation.HPP"
#include "TelegramBotAPI/Types/InputRichBlockButtons.HPP"
#include "TelegramBotAPI/Types/InputRichBlockCollage.HPP"
#include "TelegramBotAPI/Types/InputRichBlockDetails.HPP"
#include "TelegramBotAPI/Types/InputRichBlockDivider.HPP"
#include "TelegramBotAPI/Types/InputRichBlockDocument.HPP"
#include "TelegramBotAPI/Types/InputRichBlockExpandableBlockQuotation.HPP"
#include "TelegramBotAPI/Types/InputRichBlockFooter.HPP"
#include "TelegramBotAPI/Types/InputRichBlockList.HPP"
#include "TelegramBotAPI/Types/InputRichBlockListItem.HPP"
#include "TelegramBotAPI/Types/InputRichBlockMap.HPP"
#include "TelegramBotAPI/Types/InputRichBlockMathematicalExpression.HPP"
#include "TelegramBotAPI/Types/InputRichBlockParagraph.HPP"
#include "TelegramBotAPI/Types/InputRichBlockPhoto.HPP"
#include "TelegramBotAPI/Types/InputRichBlockPreformatted.HPP"
#include "TelegramBotAPI/Types/InputRichBlockPullQuotation.HPP"
#include "TelegramBotAPI/Types/InputRichBlockSectionHeading.HPP"
#include "TelegramBotAPI/Types/InputRichBlockSlideshow.HPP"
#include "TelegramBotAPI/Types/InputRichBlockTable.HPP"
#include "TelegramBotAPI/Types/InputRichBlockThinking.HPP"
#include "TelegramBotAPI/Types/InputRichBlockVideo.HPP"
#include "TelegramBotAPI/Types/InputRichBlockVoiceNote.HPP"
#include "TelegramBotAPI/Types/InputRichMessage.HPP"
#include "TelegramBotAPI/Types/InputRichMessageContent.HPP"
#include "TelegramBotAPI/Types/InputRichMessageMedia.HPP"
#include "TelegramBotAPI/Types/InputSticker.HPP"
#include "TelegramBotAPI/Types/InputStoryContentPhoto.HPP"
#include "TelegramBotAPI/Types/InputStoryContentVideo.HPP"
#include "TelegramBotAPI/Types/InputTextMessageContent.HPP"
#include "TelegramBotAPI/Types/InputVenueMessageContent.HPP"
#include "TelegramBotAPI/Types/Invoice.HPP"
#include "TelegramBotAPI/Types/KeyboardButton.HPP"
#include "TelegramBotAPI/Types/KeyboardButtonPollType.HPP"
#include "TelegramBotAPI/Types/KeyboardButtonRequestChat.HPP"
#include "TelegramBotAPI/Types/KeyboardButtonRequestManagedBot.HPP"
#include "TelegramBotAPI/Types/KeyboardButtonRequestUsers.HPP"
#include "TelegramBotAPI/Types/LabeledPrice.HPP"
#include "TelegramBotAPI/Types/Link.HPP"
#include "TelegramBotAPI/Types/LinkPreviewOptions.HPP"
#include "TelegramBotAPI/Types/LivePhoto.HPP"
#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/LocationAddress.HPP"
#include "TelegramBotAPI/Types/LoginUrl.HPP"
#include "TelegramBotAPI/Types/ManagedBotCreated.HPP"
#include "TelegramBotAPI/Types/ManagedBotUpdated.HPP"
#include "TelegramBotAPI/Types/MaskPosition.HPP"
#include "TelegramBotAPI/Types/MenuButtonCommands.HPP"
#include "TelegramBotAPI/Types/MenuButtonDefault.HPP"
#include "TelegramBotAPI/Types/MenuButtonWebApp.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageAutoDeleteTimerChanged.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/MessageGenerationStopped.HPP"
#include "TelegramBotAPI/Types/MessageId.HPP"
#include "TelegramBotAPI/Types/MessageOriginChannel.HPP"
#include "TelegramBotAPI/Types/MessageOriginChat.HPP"
#include "TelegramBotAPI/Types/MessageOriginHiddenUser.HPP"
#include "TelegramBotAPI/Types/MessageOriginUser.HPP"
#include "TelegramBotAPI/Types/MessageReactionCountUpdated.HPP"
#include "TelegramBotAPI/Types/MessageReactionUpdated.HPP"
#include "TelegramBotAPI/Types/OrderInfo.HPP"
#include "TelegramBotAPI/Types/OwnedGiftRegular.HPP"
#include "TelegramBotAPI/Types/OwnedGiftUnique.HPP"
#include "TelegramBotAPI/Types/OwnedGifts.HPP"
#include "TelegramBotAPI/Types/PaidMediaInfo.HPP"
#include "TelegramBotAPI/Types/PaidMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/PaidMediaPhoto.HPP"
#include "TelegramBotAPI/Types/PaidMediaPreview.HPP"
#include "TelegramBotAPI/Types/PaidMediaPurchased.HPP"
#include "TelegramBotAPI/Types/PaidMediaVideo.HPP"
#include "TelegramBotAPI/Types/PaidMessagePriceChanged.HPP"
#include "TelegramBotAPI/Types/PassportData.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorDataField.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorFile.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorFiles.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorFrontSide.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorReverseSide.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorSelfie.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorTranslationFile.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorTranslationFiles.HPP"
#include "TelegramBotAPI/Types/PassportElementErrorUnspecified.HPP"
#include "TelegramBotAPI/Types/PassportFile.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include "TelegramBotAPI/Types/Poll.HPP"
#include "TelegramBotAPI/Types/PollAnswer.HPP"
#include "TelegramBotAPI/Types/PollMedia.HPP"
#include "TelegramBotAPI/Types/PollOption.HPP"
#include "TelegramBotAPI/Types/PollOptionAdded.HPP"
#include "TelegramBotAPI/Types/PollOptionDeleted.HPP"
#include "TelegramBotAPI/Types/PreCheckoutQuery.HPP"
#include "TelegramBotAPI/Types/PreparedInlineMessage.HPP"
#include "TelegramBotAPI/Types/PreparedKeyboardButton.HPP"
#include "TelegramBotAPI/Types/ProximityAlertTriggered.HPP"
#include "TelegramBotAPI/Types/ReactionCount.HPP"
#include "TelegramBotAPI/Types/ReactionTypeCustomEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypeEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypePaid.HPP"
#include "TelegramBotAPI/Types/RefundedPayment.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardRemove.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include "TelegramBotAPI/Types/ResponseParameters.HPP"
#include "TelegramBotAPI/Types/RevenueWithdrawalStateFailed.HPP"
#include "TelegramBotAPI/Types/RevenueWithdrawalStatePending.HPP"
#include "TelegramBotAPI/Types/RevenueWithdrawalStateSucceeded.HPP"
#include "TelegramBotAPI/Types/RichBlock.HPP"
#include "TelegramBotAPI/Types/RichBlockAnchor.HPP"
#include "TelegramBotAPI/Types/RichBlockAnimation.HPP"
#include "TelegramBotAPI/Types/RichBlockAudio.HPP"
#include "TelegramBotAPI/Types/RichBlockBlockQuotation.HPP"
#include "TelegramBotAPI/Types/RichBlockButtons.HPP"
#include "TelegramBotAPI/Types/RichBlockCaption.HPP"
#include "TelegramBotAPI/Types/RichBlockCollage.HPP"
#include "TelegramBotAPI/Types/RichBlockDetails.HPP"
#include "TelegramBotAPI/Types/RichBlockDivider.HPP"
#include "TelegramBotAPI/Types/RichBlockDocument.HPP"
#include "TelegramBotAPI/Types/RichBlockExpandableBlockQuotation.HPP"
#include "TelegramBotAPI/Types/RichBlockFooter.HPP"
#include "TelegramBotAPI/Types/RichBlockList.HPP"
#include "TelegramBotAPI/Types/RichBlockListItem.HPP"
#include "TelegramBotAPI/Types/RichBlockMap.HPP"
#include "TelegramBotAPI/Types/RichBlockMathematicalExpression.HPP"
#include "TelegramBotAPI/Types/RichBlockParagraph.HPP"
#include "TelegramBotAPI/Types/RichBlockPhoto.HPP"
#include "TelegramBotAPI/Types/RichBlockPreformatted.HPP"
#include "TelegramBotAPI/Types/RichBlockPullQuotation.HPP"
#include "TelegramBotAPI/Types/RichBlockSectionHeading.HPP"
#include "TelegramBotAPI/Types/RichBlockSlideshow.HPP"
#include "TelegramBotAPI/Types/RichBlockTable.HPP"
#include "TelegramBotAPI/Types/RichBlockTableCell.HPP"
#include "TelegramBotAPI/Types/RichBlockThinking.HPP"
#include "TelegramBotAPI/Types/RichBlockVideo.HPP"
#include "TelegramBotAPI/Types/RichBlockVoiceNote.HPP"
#include "TelegramBotAPI/Types/RichMessage.HPP"
#include "TelegramBotAPI/Types/RichMessageButton.HPP"
#include "TelegramBotAPI/Types/RichText.HPP"
#include "TelegramBotAPI/Types/RichTextAnchor.HPP"
#include "TelegramBotAPI/Types/RichTextAnchorLink.HPP"
#include "TelegramBotAPI/Types/RichTextBankCardNumber.HPP"
#include "TelegramBotAPI/Types/RichTextBold.HPP"
#include "TelegramBotAPI/Types/RichTextBotCommand.HPP"
#include "TelegramBotAPI/Types/RichTextButton.HPP"
#include "TelegramBotAPI/Types/RichTextCashtag.HPP"
#include "TelegramBotAPI/Types/RichTextCode.HPP"
#include "TelegramBotAPI/Types/RichTextCustomEmoji.HPP"
#include "TelegramBotAPI/Types/RichTextDateTime.HPP"
#include "TelegramBotAPI/Types/RichTextEmailAddress.HPP"
#include "TelegramBotAPI/Types/RichTextHashtag.HPP"
#include "TelegramBotAPI/Types/RichTextItalic.HPP"
#include "TelegramBotAPI/Types/RichTextMarked.HPP"
#include "TelegramBotAPI/Types/RichTextMathematicalExpression.HPP"
#include "TelegramBotAPI/Types/RichTextMention.HPP"
#include "TelegramBotAPI/Types/RichTextPhoneNumber.HPP"
#include "TelegramBotAPI/Types/RichTextReference.HPP"
#include "TelegramBotAPI/Types/RichTextReferenceLink.HPP"
#include "TelegramBotAPI/Types/RichTextSpoiler.HPP"
#include "TelegramBotAPI/Types/RichTextStrikethrough.HPP"
#include "TelegramBotAPI/Types/RichTextSubscript.HPP"
#include "TelegramBotAPI/Types/RichTextSuperscript.HPP"
#include "TelegramBotAPI/Types/RichTextTextMention.HPP"
#include "TelegramBotAPI/Types/RichTextUnderline.HPP"
#include "TelegramBotAPI/Types/RichTextUrl.HPP"
#include "TelegramBotAPI/Types/SentGuestMessage.HPP"
#include "TelegramBotAPI/Types/SentWebAppMessage.HPP"
#include "TelegramBotAPI/Types/SharedUser.HPP"
#include "TelegramBotAPI/Types/ShippingAddress.HPP"
#include "TelegramBotAPI/Types/ShippingOption.HPP"
#include "TelegramBotAPI/Types/ShippingQuery.HPP"
#include "TelegramBotAPI/Types/StarAmount.HPP"
#include "TelegramBotAPI/Types/StarTransaction.HPP"
#include "TelegramBotAPI/Types/StarTransactions.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include "TelegramBotAPI/Types/StickerSet.HPP"
#include "TelegramBotAPI/Types/Story.HPP"
#include "TelegramBotAPI/Types/StoryArea.HPP"
#include "TelegramBotAPI/Types/StoryAreaPosition.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeLink.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeLocation.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeSuggestedReaction.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeUniqueGift.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeWeather.HPP"
#include "TelegramBotAPI/Types/SuccessfulPayment.HPP"
#include "TelegramBotAPI/Types/SuggestedPostApprovalFailed.HPP"
#include "TelegramBotAPI/Types/SuggestedPostApproved.HPP"
#include "TelegramBotAPI/Types/SuggestedPostDeclined.HPP"
#include "TelegramBotAPI/Types/SuggestedPostInfo.HPP"
#include "TelegramBotAPI/Types/SuggestedPostPaid.HPP"
#include "TelegramBotAPI/Types/SuggestedPostParameters.HPP"
#include "TelegramBotAPI/Types/SuggestedPostPrice.HPP"
#include "TelegramBotAPI/Types/SuggestedPostRefunded.HPP"
#include "TelegramBotAPI/Types/SwitchInlineQueryChosenChat.HPP"
#include "TelegramBotAPI/Types/TextQuote.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerAffiliateProgram.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerChat.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerFragment.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerOther.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerTelegramAds.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerTelegramApi.HPP"
#include "TelegramBotAPI/Types/TransactionPartnerUser.HPP"
#include "TelegramBotAPI/Types/UniqueGift.HPP"
#include "TelegramBotAPI/Types/UniqueGiftBackdrop.HPP"
#include "TelegramBotAPI/Types/UniqueGiftBackdropColors.HPP"
#include "TelegramBotAPI/Types/UniqueGiftColors.HPP"
#include "TelegramBotAPI/Types/UniqueGiftInfo.HPP"
#include "TelegramBotAPI/Types/UniqueGiftModel.HPP"
#include "TelegramBotAPI/Types/UniqueGiftSymbol.HPP"
#include "TelegramBotAPI/Types/Update.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include "TelegramBotAPI/Types/UserChatBoosts.HPP"
#include "TelegramBotAPI/Types/UserProfileAudios.HPP"
#include "TelegramBotAPI/Types/UserProfilePhotos.HPP"
#include "TelegramBotAPI/Types/UserRating.HPP"
#include "TelegramBotAPI/Types/UsersShared.HPP"
#include "TelegramBotAPI/Types/Venue.HPP"
#include "TelegramBotAPI/Types/Video.HPP"
#include "TelegramBotAPI/Types/VideoChatEnded.HPP"
#include "TelegramBotAPI/Types/VideoChatParticipantsInvited.HPP"
#include "TelegramBotAPI/Types/VideoChatScheduled.HPP"
#include "TelegramBotAPI/Types/VideoChatStarted.HPP"
#include "TelegramBotAPI/Types/VideoNote.HPP"
#include "TelegramBotAPI/Types/VideoQuality.HPP"
#include "TelegramBotAPI/Types/Voice.HPP"
#include "TelegramBotAPI/Types/WebAppData.HPP"
#include "TelegramBotAPI/Types/WebAppInfo.HPP"
#include "TelegramBotAPI/Types/WebhookInfo.HPP"
#include "TelegramBotAPI/Types/WriteAccessAllowed.HPP"
#include "TelegramBotAPI/Types/OkResponse.HPP"
#include "TelegramBotAPI/Types/ErrorResponse.HPP"
#include "TelegramBotAPI/Types/InputFile.HPP"

namespace TelegramBotAPI::Methods {
    struct addStickerToSetParameters;
    class addStickerToSet;
    struct answerCallbackQueryParameters;
    class answerCallbackQuery;
    struct answerChatJoinRequestQueryParameters;
    class answerChatJoinRequestQuery;
    struct answerGuestQueryParameters;
    class answerGuestQuery;
    struct answerInlineQueryParameters;
    class answerInlineQuery;
    struct answerPreCheckoutQueryParameters;
    class answerPreCheckoutQuery;
    struct answerShippingQueryParameters;
    class answerShippingQuery;
    struct answerWebAppQueryParameters;
    class answerWebAppQuery;
    struct approveChatJoinRequestParameters;
    class approveChatJoinRequest;
    struct approveSuggestedPostParameters;
    class approveSuggestedPost;
    struct banChatMemberParameters;
    class banChatMember;
    struct banChatSenderChatParameters;
    class banChatSenderChat;
    struct closeParameters;
    class close;
    struct closeForumTopicParameters;
    class closeForumTopic;
    struct closeGeneralForumTopicParameters;
    class closeGeneralForumTopic;
    struct convertGiftToStarsParameters;
    class convertGiftToStars;
    struct copyMessageParameters;
    class copyMessage;
    struct copyMessagesParameters;
    class copyMessages;
    struct createChatInviteLinkParameters;
    class createChatInviteLink;
    struct createChatSubscriptionInviteLinkParameters;
    class createChatSubscriptionInviteLink;
    struct createForumTopicParameters;
    class createForumTopic;
    struct createInvoiceLinkParameters;
    class createInvoiceLink;
    struct createNewStickerSetParameters;
    class createNewStickerSet;
    struct declineChatJoinRequestParameters;
    class declineChatJoinRequest;
    struct declineSuggestedPostParameters;
    class declineSuggestedPost;
    struct deleteAllMessageReactionsParameters;
    class deleteAllMessageReactions;
    struct deleteBusinessMessagesParameters;
    class deleteBusinessMessages;
    struct deleteChatPhotoParameters;
    class deleteChatPhoto;
    struct deleteChatStickerSetParameters;
    class deleteChatStickerSet;
    struct deleteEphemeralMessageParameters;
    class deleteEphemeralMessage;
    struct deleteForumTopicParameters;
    class deleteForumTopic;
    struct deleteMessageParameters;
    class deleteMessage;
    struct deleteMessageReactionParameters;
    class deleteMessageReaction;
    struct deleteMessagesParameters;
    class deleteMessages;
    struct deleteMyCommandsParameters;
    class deleteMyCommands;
    struct deleteStickerFromSetParameters;
    class deleteStickerFromSet;
    struct deleteStickerSetParameters;
    class deleteStickerSet;
    struct deleteStoryParameters;
    class deleteStory;
    struct deleteWebhookParameters;
    class deleteWebhook;
    struct editChatInviteLinkParameters;
    class editChatInviteLink;
    struct editChatSubscriptionInviteLinkParameters;
    class editChatSubscriptionInviteLink;
    struct editEphemeralMessageCaptionParameters;
    class editEphemeralMessageCaption;
    struct editEphemeralMessageMediaParameters;
    class editEphemeralMessageMedia;
    struct editEphemeralMessageReplyMarkupParameters;
    class editEphemeralMessageReplyMarkup;
    struct editEphemeralMessageTextParameters;
    class editEphemeralMessageText;
    struct editForumTopicParameters;
    class editForumTopic;
    struct editGeneralForumTopicParameters;
    class editGeneralForumTopic;
    struct editMessageCaptionParameters;
    class editMessageCaption;
    struct editMessageChecklistParameters;
    class editMessageChecklist;
    struct editMessageLiveLocationParameters;
    class editMessageLiveLocation;
    struct editMessageMediaParameters;
    class editMessageMedia;
    struct editMessageReplyMarkupParameters;
    class editMessageReplyMarkup;
    struct editMessageTextParameters;
    class editMessageText;
    struct editStoryParameters;
    class editStory;
    struct editUserStarSubscriptionParameters;
    class editUserStarSubscription;
    struct exportChatInviteLinkParameters;
    class exportChatInviteLink;
    struct forwardMessageParameters;
    class forwardMessage;
    struct forwardMessagesParameters;
    class forwardMessages;
    struct getAvailableGiftsParameters;
    class getAvailableGifts;
    struct getBusinessAccountGiftsParameters;
    class getBusinessAccountGifts;
    struct getBusinessAccountStarBalanceParameters;
    class getBusinessAccountStarBalance;
    struct getBusinessConnectionParameters;
    class getBusinessConnection;
    struct getChatParameters;
    class getChat;
    struct getChatAdministratorsParameters;
    class getChatAdministrators;
    struct getChatGiftsParameters;
    class getChatGifts;
    struct getChatMemberParameters;
    class getChatMember;
    struct getChatMemberCountParameters;
    class getChatMemberCount;
    struct getChatMenuButtonParameters;
    class getChatMenuButton;
    struct getCustomEmojiStickersParameters;
    class getCustomEmojiStickers;
    struct getFileParameters;
    class getFile;
    struct getForumTopicIconStickersParameters;
    class getForumTopicIconStickers;
    struct getGameHighScoresParameters;
    class getGameHighScores;
    struct getManagedBotAccessSettingsParameters;
    class getManagedBotAccessSettings;
    struct getManagedBotTokenParameters;
    class getManagedBotToken;
    struct getMeParameters;
    class getMe;
    struct getMyCommandsParameters;
    class getMyCommands;
    struct getMyDefaultAdministratorRightsParameters;
    class getMyDefaultAdministratorRights;
    struct getMyDescriptionParameters;
    class getMyDescription;
    struct getMyNameParameters;
    class getMyName;
    struct getMyShortDescriptionParameters;
    class getMyShortDescription;
    struct getMyStarBalanceParameters;
    class getMyStarBalance;
    struct getStarTransactionsParameters;
    class getStarTransactions;
    struct getStickerSetParameters;
    class getStickerSet;
    struct getUpdatesParameters;
    class getUpdates;
    struct getUserChatBoostsParameters;
    class getUserChatBoosts;
    struct getUserGiftsParameters;
    class getUserGifts;
    struct getUserPersonalChatMessagesParameters;
    class getUserPersonalChatMessages;
    struct getUserProfileAudiosParameters;
    class getUserProfileAudios;
    struct getUserProfilePhotosParameters;
    class getUserProfilePhotos;
    struct getWebhookInfoParameters;
    class getWebhookInfo;
    struct giftPremiumSubscriptionParameters;
    class giftPremiumSubscription;
    struct hideGeneralForumTopicParameters;
    class hideGeneralForumTopic;
    struct leaveChatParameters;
    class leaveChat;
    struct logOutParameters;
    class logOut;
    struct pinChatMessageParameters;
    class pinChatMessage;
    struct postStoryParameters;
    class postStory;
    struct promoteChatMemberParameters;
    class promoteChatMember;
    struct readBusinessMessageParameters;
    class readBusinessMessage;
    struct refundStarPaymentParameters;
    class refundStarPayment;
    struct removeBusinessAccountProfilePhotoParameters;
    class removeBusinessAccountProfilePhoto;
    struct removeChatVerificationParameters;
    class removeChatVerification;
    struct removeMyProfilePhotoParameters;
    class removeMyProfilePhoto;
    struct removeUserVerificationParameters;
    class removeUserVerification;
    struct reopenForumTopicParameters;
    class reopenForumTopic;
    struct reopenGeneralForumTopicParameters;
    class reopenGeneralForumTopic;
    struct replaceManagedBotTokenParameters;
    class replaceManagedBotToken;
    struct replaceStickerInSetParameters;
    class replaceStickerInSet;
    struct repostStoryParameters;
    class repostStory;
    struct restrictChatMemberParameters;
    class restrictChatMember;
    struct revokeChatInviteLinkParameters;
    class revokeChatInviteLink;
    struct savePreparedInlineMessageParameters;
    class savePreparedInlineMessage;
    struct savePreparedKeyboardButtonParameters;
    class savePreparedKeyboardButton;
    struct sendAnimationParameters;
    class sendAnimation;
    struct sendAudioParameters;
    class sendAudio;
    struct sendChatActionParameters;
    class sendChatAction;
    struct sendChatJoinRequestWebAppParameters;
    class sendChatJoinRequestWebApp;
    struct sendChecklistParameters;
    class sendChecklist;
    struct sendContactParameters;
    class sendContact;
    struct sendDiceParameters;
    class sendDice;
    struct sendDocumentParameters;
    class sendDocument;
    struct sendGameParameters;
    class sendGame;
    struct sendGiftParameters;
    class sendGift;
    struct sendInvoiceParameters;
    class sendInvoice;
    struct sendLivePhotoParameters;
    class sendLivePhoto;
    struct sendLocationParameters;
    class sendLocation;
    struct sendMediaGroupParameters;
    class sendMediaGroup;
    struct sendMessageParameters;
    class sendMessage;
    struct sendMessageDraftParameters;
    class sendMessageDraft;
    struct sendPaidMediaParameters;
    class sendPaidMedia;
    struct sendPhotoParameters;
    class sendPhoto;
    struct sendPollParameters;
    class sendPoll;
    struct sendRichMessageParameters;
    class sendRichMessage;
    struct sendRichMessageDraftParameters;
    class sendRichMessageDraft;
    struct sendStickerParameters;
    class sendSticker;
    struct sendVenueParameters;
    class sendVenue;
    struct sendVideoParameters;
    class sendVideo;
    struct sendVideoNoteParameters;
    class sendVideoNote;
    struct sendVoiceParameters;
    class sendVoice;
    struct setBusinessAccountBioParameters;
    class setBusinessAccountBio;
    struct setBusinessAccountGiftSettingsParameters;
    class setBusinessAccountGiftSettings;
    struct setBusinessAccountNameParameters;
    class setBusinessAccountName;
    struct setBusinessAccountProfilePhotoParameters;
    class setBusinessAccountProfilePhoto;
    struct setBusinessAccountUsernameParameters;
    class setBusinessAccountUsername;
    struct setChatAdministratorCustomTitleParameters;
    class setChatAdministratorCustomTitle;
    struct setChatDescriptionParameters;
    class setChatDescription;
    struct setChatMemberTagParameters;
    class setChatMemberTag;
    struct setChatMenuButtonParameters;
    class setChatMenuButton;
    struct setChatPermissionsParameters;
    class setChatPermissions;
    struct setChatPhotoParameters;
    class setChatPhoto;
    struct setChatStickerSetParameters;
    class setChatStickerSet;
    struct setChatTitleParameters;
    class setChatTitle;
    struct setCustomEmojiStickerSetThumbnailParameters;
    class setCustomEmojiStickerSetThumbnail;
    struct setGameScoreParameters;
    class setGameScore;
    struct setManagedBotAccessSettingsParameters;
    class setManagedBotAccessSettings;
    struct setMessageReactionParameters;
    class setMessageReaction;
    struct setMyCommandsParameters;
    class setMyCommands;
    struct setMyDefaultAdministratorRightsParameters;
    class setMyDefaultAdministratorRights;
    struct setMyDescriptionParameters;
    class setMyDescription;
    struct setMyNameParameters;
    class setMyName;
    struct setMyProfilePhotoParameters;
    class setMyProfilePhoto;
    struct setMyShortDescriptionParameters;
    class setMyShortDescription;
    struct setPassportDataErrorsParameters;
    class setPassportDataErrors;
    struct setStickerEmojiListParameters;
    class setStickerEmojiList;
    struct setStickerKeywordsParameters;
    class setStickerKeywords;
    struct setStickerMaskPositionParameters;
    class setStickerMaskPosition;
    struct setStickerPositionInSetParameters;
    class setStickerPositionInSet;
    struct setStickerSetThumbnailParameters;
    class setStickerSetThumbnail;
    struct setStickerSetTitleParameters;
    class setStickerSetTitle;
    struct setUserEmojiStatusParameters;
    class setUserEmojiStatus;
    struct setWebhookParameters;
    class setWebhook;
    struct stopMessageLiveLocationParameters;
    class stopMessageLiveLocation;
    struct stopPollParameters;
    class stopPoll;
    struct transferBusinessAccountStarsParameters;
    class transferBusinessAccountStars;
    struct transferGiftParameters;
    class transferGift;
    struct unbanChatMemberParameters;
    class unbanChatMember;
    struct unbanChatSenderChatParameters;
    class unbanChatSenderChat;
    struct unhideGeneralForumTopicParameters;
    class unhideGeneralForumTopic;
    struct unpinAllChatMessagesParameters;
    class unpinAllChatMessages;
    struct unpinAllForumTopicMessagesParameters;
    class unpinAllForumTopicMessages;
    struct unpinAllGeneralForumTopicMessagesParameters;
    class unpinAllGeneralForumTopicMessages;
    struct unpinChatMessageParameters;
    class unpinChatMessage;
    struct upgradeGiftParameters;
    class upgradeGift;
    struct uploadStickerFileParameters;
    class uploadStickerFile;
    struct verifyChatParameters;
    class verifyChat;
    struct verifyUserParameters;
    class verifyUser;
} // namespace TelegramBotAPI::Methods

namespace TelegramBotAPI {
    class TelegramClient {
        friend class Methods::addStickerToSet;
        friend class Methods::answerCallbackQuery;
        friend class Methods::answerChatJoinRequestQuery;
        friend class Methods::answerGuestQuery;
        friend class Methods::answerInlineQuery;
        friend class Methods::answerPreCheckoutQuery;
        friend class Methods::answerShippingQuery;
        friend class Methods::answerWebAppQuery;
        friend class Methods::approveChatJoinRequest;
        friend class Methods::approveSuggestedPost;
        friend class Methods::banChatMember;
        friend class Methods::banChatSenderChat;
        friend class Methods::close;
        friend class Methods::closeForumTopic;
        friend class Methods::closeGeneralForumTopic;
        friend class Methods::convertGiftToStars;
        friend class Methods::copyMessage;
        friend class Methods::copyMessages;
        friend class Methods::createChatInviteLink;
        friend class Methods::createChatSubscriptionInviteLink;
        friend class Methods::createForumTopic;
        friend class Methods::createInvoiceLink;
        friend class Methods::createNewStickerSet;
        friend class Methods::declineChatJoinRequest;
        friend class Methods::declineSuggestedPost;
        friend class Methods::deleteAllMessageReactions;
        friend class Methods::deleteBusinessMessages;
        friend class Methods::deleteChatPhoto;
        friend class Methods::deleteChatStickerSet;
        friend class Methods::deleteEphemeralMessage;
        friend class Methods::deleteForumTopic;
        friend class Methods::deleteMessage;
        friend class Methods::deleteMessageReaction;
        friend class Methods::deleteMessages;
        friend class Methods::deleteMyCommands;
        friend class Methods::deleteStickerFromSet;
        friend class Methods::deleteStickerSet;
        friend class Methods::deleteStory;
        friend class Methods::deleteWebhook;
        friend class Methods::editChatInviteLink;
        friend class Methods::editChatSubscriptionInviteLink;
        friend class Methods::editEphemeralMessageCaption;
        friend class Methods::editEphemeralMessageMedia;
        friend class Methods::editEphemeralMessageReplyMarkup;
        friend class Methods::editEphemeralMessageText;
        friend class Methods::editForumTopic;
        friend class Methods::editGeneralForumTopic;
        friend class Methods::editMessageCaption;
        friend class Methods::editMessageChecklist;
        friend class Methods::editMessageLiveLocation;
        friend class Methods::editMessageMedia;
        friend class Methods::editMessageReplyMarkup;
        friend class Methods::editMessageText;
        friend class Methods::editStory;
        friend class Methods::editUserStarSubscription;
        friend class Methods::exportChatInviteLink;
        friend class Methods::forwardMessage;
        friend class Methods::forwardMessages;
        friend class Methods::getAvailableGifts;
        friend class Methods::getBusinessAccountGifts;
        friend class Methods::getBusinessAccountStarBalance;
        friend class Methods::getBusinessConnection;
        friend class Methods::getChat;
        friend class Methods::getChatAdministrators;
        friend class Methods::getChatGifts;
        friend class Methods::getChatMember;
        friend class Methods::getChatMemberCount;
        friend class Methods::getChatMenuButton;
        friend class Methods::getCustomEmojiStickers;
        friend class Methods::getFile;
        friend class Methods::getForumTopicIconStickers;
        friend class Methods::getGameHighScores;
        friend class Methods::getManagedBotAccessSettings;
        friend class Methods::getManagedBotToken;
        friend class Methods::getMe;
        friend class Methods::getMyCommands;
        friend class Methods::getMyDefaultAdministratorRights;
        friend class Methods::getMyDescription;
        friend class Methods::getMyName;
        friend class Methods::getMyShortDescription;
        friend class Methods::getMyStarBalance;
        friend class Methods::getStarTransactions;
        friend class Methods::getStickerSet;
        friend class Methods::getUpdates;
        friend class Methods::getUserChatBoosts;
        friend class Methods::getUserGifts;
        friend class Methods::getUserPersonalChatMessages;
        friend class Methods::getUserProfileAudios;
        friend class Methods::getUserProfilePhotos;
        friend class Methods::getWebhookInfo;
        friend class Methods::giftPremiumSubscription;
        friend class Methods::hideGeneralForumTopic;
        friend class Methods::leaveChat;
        friend class Methods::logOut;
        friend class Methods::pinChatMessage;
        friend class Methods::postStory;
        friend class Methods::promoteChatMember;
        friend class Methods::readBusinessMessage;
        friend class Methods::refundStarPayment;
        friend class Methods::removeBusinessAccountProfilePhoto;
        friend class Methods::removeChatVerification;
        friend class Methods::removeMyProfilePhoto;
        friend class Methods::removeUserVerification;
        friend class Methods::reopenForumTopic;
        friend class Methods::reopenGeneralForumTopic;
        friend class Methods::replaceManagedBotToken;
        friend class Methods::replaceStickerInSet;
        friend class Methods::repostStory;
        friend class Methods::restrictChatMember;
        friend class Methods::revokeChatInviteLink;
        friend class Methods::savePreparedInlineMessage;
        friend class Methods::savePreparedKeyboardButton;
        friend class Methods::sendAnimation;
        friend class Methods::sendAudio;
        friend class Methods::sendChatAction;
        friend class Methods::sendChatJoinRequestWebApp;
        friend class Methods::sendChecklist;
        friend class Methods::sendContact;
        friend class Methods::sendDice;
        friend class Methods::sendDocument;
        friend class Methods::sendGame;
        friend class Methods::sendGift;
        friend class Methods::sendInvoice;
        friend class Methods::sendLivePhoto;
        friend class Methods::sendLocation;
        friend class Methods::sendMediaGroup;
        friend class Methods::sendMessage;
        friend class Methods::sendMessageDraft;
        friend class Methods::sendPaidMedia;
        friend class Methods::sendPhoto;
        friend class Methods::sendPoll;
        friend class Methods::sendRichMessage;
        friend class Methods::sendRichMessageDraft;
        friend class Methods::sendSticker;
        friend class Methods::sendVenue;
        friend class Methods::sendVideo;
        friend class Methods::sendVideoNote;
        friend class Methods::sendVoice;
        friend class Methods::setBusinessAccountBio;
        friend class Methods::setBusinessAccountGiftSettings;
        friend class Methods::setBusinessAccountName;
        friend class Methods::setBusinessAccountProfilePhoto;
        friend class Methods::setBusinessAccountUsername;
        friend class Methods::setChatAdministratorCustomTitle;
        friend class Methods::setChatDescription;
        friend class Methods::setChatMemberTag;
        friend class Methods::setChatMenuButton;
        friend class Methods::setChatPermissions;
        friend class Methods::setChatPhoto;
        friend class Methods::setChatStickerSet;
        friend class Methods::setChatTitle;
        friend class Methods::setCustomEmojiStickerSetThumbnail;
        friend class Methods::setGameScore;
        friend class Methods::setManagedBotAccessSettings;
        friend class Methods::setMessageReaction;
        friend class Methods::setMyCommands;
        friend class Methods::setMyDefaultAdministratorRights;
        friend class Methods::setMyDescription;
        friend class Methods::setMyName;
        friend class Methods::setMyProfilePhoto;
        friend class Methods::setMyShortDescription;
        friend class Methods::setPassportDataErrors;
        friend class Methods::setStickerEmojiList;
        friend class Methods::setStickerKeywords;
        friend class Methods::setStickerMaskPosition;
        friend class Methods::setStickerPositionInSet;
        friend class Methods::setStickerSetThumbnail;
        friend class Methods::setStickerSetTitle;
        friend class Methods::setUserEmojiStatus;
        friend class Methods::setWebhook;
        friend class Methods::stopMessageLiveLocation;
        friend class Methods::stopPoll;
        friend class Methods::transferBusinessAccountStars;
        friend class Methods::transferGift;
        friend class Methods::unbanChatMember;
        friend class Methods::unbanChatSenderChat;
        friend class Methods::unhideGeneralForumTopic;
        friend class Methods::unpinAllChatMessages;
        friend class Methods::unpinAllForumTopicMessages;
        friend class Methods::unpinAllGeneralForumTopicMessages;
        friend class Methods::unpinChatMessage;
        friend class Methods::upgradeGift;
        friend class Methods::uploadStickerFile;
        friend class Methods::verifyChat;
        friend class Methods::verifyUser;

    public:
        explicit TelegramClient(const std::string &BotToken);

        TelegramClient(const std::string &BotToken,
                       const std::string &APIURL);

        TelegramClient(const std::string   &BotToken,
                       std::chrono::seconds Timeout);

        TelegramClient(const std::string   &BotToken,
                       const std::string   &APIURL,
                       std::chrono::seconds Timeout);

        TelegramClient(const std::string    &BotToken,
                       Network::IHTTPClient &HTTPClient);

        TelegramClient(const std::string    &BotToken,
                       const std::string    &APIURL,
                       Network::IHTTPClient &HTTPClient);

        bool AddStickerToSet(
            const Methods::addStickerToSetParameters &Parameters);

        bool AddStickerToSet(
            const std::string &Name,
            const ::TelegramBotAPI::Type::InputSticker &Sticker,
            const long long &UserID);

        bool AnswerCallbackQuery(
            const Methods::answerCallbackQueryParameters &Parameters);

        bool AnswerCallbackQuery(
            const std::string &CallbackQueryID);

        bool AnswerChatJoinRequestQuery(
            const Methods::answerChatJoinRequestQueryParameters &Parameters);

        bool AnswerChatJoinRequestQuery(
            const std::string &ChatJoinRequestQueryID,
            const std::string &Result);

        ::TelegramBotAPI::Type::SentGuestMessage AnswerGuestQuery(
            const Methods::answerGuestQueryParameters &Parameters);

        ::TelegramBotAPI::Type::SentGuestMessage AnswerGuestQuery(
            const std::string &GuestQueryID,
            const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &Result);

        bool AnswerInlineQuery(
            const Methods::answerInlineQueryParameters &Parameters);

        bool AnswerInlineQuery(
            const std::string &InlineQueryID,
            const std::vector<std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice>> &Results);

        bool AnswerPreCheckoutQuery(
            const Methods::answerPreCheckoutQueryParameters &Parameters);

        bool AnswerPreCheckoutQuery(
            const bool &Ok,
            const std::string &PreCheckoutQueryID);

        bool AnswerShippingQuery(
            const Methods::answerShippingQueryParameters &Parameters);

        bool AnswerShippingQuery(
            const bool &Ok,
            const std::string &ShippingQueryID);

        ::TelegramBotAPI::Type::SentWebAppMessage AnswerWebAppQuery(
            const Methods::answerWebAppQueryParameters &Parameters);

        ::TelegramBotAPI::Type::SentWebAppMessage AnswerWebAppQuery(
            const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &Result,
            const std::string &WebAppQueryID);

        bool ApproveChatJoinRequest(
            const Methods::approveChatJoinRequestParameters &Parameters);

        bool ApproveChatJoinRequest(
            const std::variant<long long, std::string> &ChatID,
            const long long &UserID);

        bool ApproveSuggestedPost(
            const Methods::approveSuggestedPostParameters &Parameters);

        bool ApproveSuggestedPost(
            const long long &ChatID,
            const long long &MessageID);

        bool BanChatMember(
            const Methods::banChatMemberParameters &Parameters);

        bool BanChatMember(
            const std::variant<long long, std::string> &ChatID,
            const long long &UserID);

        bool BanChatSenderChat(
            const Methods::banChatSenderChatParameters &Parameters);

        bool BanChatSenderChat(
            const std::variant<long long, std::string> &ChatID,
            const long long &SenderChatID);

        bool Close(
            const Methods::closeParameters &Parameters);

        bool Close();

        bool CloseForumTopic(
            const Methods::closeForumTopicParameters &Parameters);

        bool CloseForumTopic(
            const std::variant<long long, std::string> &ChatID,
            const long long &MessageThreadID);

        bool CloseGeneralForumTopic(
            const Methods::closeGeneralForumTopicParameters &Parameters);

        bool CloseGeneralForumTopic(
            const std::variant<long long, std::string> &ChatID);

        bool ConvertGiftToStars(
            const Methods::convertGiftToStarsParameters &Parameters);

        bool ConvertGiftToStars(
            const std::string &BusinessConnectionID,
            const std::string &OwnedGiftID);

        ::TelegramBotAPI::Type::MessageId CopyMessage(
            const Methods::copyMessageParameters &Parameters);

        ::TelegramBotAPI::Type::MessageId CopyMessage(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<long long, std::string> &FromChatID,
            const long long &MessageID);

        std::vector<::TelegramBotAPI::Type::MessageId> CopyMessages(
            const Methods::copyMessagesParameters &Parameters);

        std::vector<::TelegramBotAPI::Type::MessageId> CopyMessages(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<long long, std::string> &FromChatID,
            const std::vector<long long> &MessageIDs);

        ::TelegramBotAPI::Type::ChatInviteLink CreateChatInviteLink(
            const Methods::createChatInviteLinkParameters &Parameters);

        ::TelegramBotAPI::Type::ChatInviteLink CreateChatInviteLink(
            const std::variant<long long, std::string> &ChatID);

        ::TelegramBotAPI::Type::ChatInviteLink CreateChatSubscriptionInviteLink(
            const Methods::createChatSubscriptionInviteLinkParameters &Parameters);

        ::TelegramBotAPI::Type::ChatInviteLink CreateChatSubscriptionInviteLink(
            const std::variant<long long, std::string> &ChatID,
            const long long &SubscriptionPeriod,
            const long long &SubscriptionPrice);

        ::TelegramBotAPI::Type::ForumTopic CreateForumTopic(
            const Methods::createForumTopicParameters &Parameters);

        ::TelegramBotAPI::Type::ForumTopic CreateForumTopic(
            const std::variant<long long, std::string> &ChatID,
            const std::string &Name);

        std::string CreateInvoiceLink(
            const Methods::createInvoiceLinkParameters &Parameters);

        std::string CreateInvoiceLink(
            const std::string &Currency,
            const std::string &Description,
            const std::string &Payload,
            const std::vector<::TelegramBotAPI::Type::LabeledPrice> &Prices,
            const std::string &Title);

        bool CreateNewStickerSet(
            const Methods::createNewStickerSetParameters &Parameters);

        bool CreateNewStickerSet(
            const std::string &Name,
            const std::vector<::TelegramBotAPI::Type::InputSticker> &Stickers,
            const std::string &Title,
            const long long &UserID);

        bool DeclineChatJoinRequest(
            const Methods::declineChatJoinRequestParameters &Parameters);

        bool DeclineChatJoinRequest(
            const std::variant<long long, std::string> &ChatID,
            const long long &UserID);

        bool DeclineSuggestedPost(
            const Methods::declineSuggestedPostParameters &Parameters);

        bool DeclineSuggestedPost(
            const long long &ChatID,
            const long long &MessageID);

        bool DeleteAllMessageReactions(
            const Methods::deleteAllMessageReactionsParameters &Parameters);

        bool DeleteAllMessageReactions(
            const std::variant<long long, std::string> &ChatID);

        bool DeleteBusinessMessages(
            const Methods::deleteBusinessMessagesParameters &Parameters);

        bool DeleteBusinessMessages(
            const std::string &BusinessConnectionID,
            const std::vector<long long> &MessageIDs);

        bool DeleteChatPhoto(
            const Methods::deleteChatPhotoParameters &Parameters);

        bool DeleteChatPhoto(
            const std::variant<long long, std::string> &ChatID);

        bool DeleteChatStickerSet(
            const Methods::deleteChatStickerSetParameters &Parameters);

        bool DeleteChatStickerSet(
            const std::variant<long long, std::string> &ChatID);

        bool DeleteEphemeralMessage(
            const Methods::deleteEphemeralMessageParameters &Parameters);

        bool DeleteEphemeralMessage(
            const std::variant<long long, std::string> &ChatID,
            const long long &EphemeralMessageID,
            const long long &ReceiverUserID);

        bool DeleteForumTopic(
            const Methods::deleteForumTopicParameters &Parameters);

        bool DeleteForumTopic(
            const std::variant<long long, std::string> &ChatID,
            const long long &MessageThreadID);

        bool DeleteMessage(
            const Methods::deleteMessageParameters &Parameters);

        bool DeleteMessage(
            const std::variant<long long, std::string> &ChatID,
            const long long &MessageID);

        bool DeleteMessageReaction(
            const Methods::deleteMessageReactionParameters &Parameters);

        bool DeleteMessageReaction(
            const std::variant<long long, std::string> &ChatID,
            const long long &MessageID);

        bool DeleteMessages(
            const Methods::deleteMessagesParameters &Parameters);

        bool DeleteMessages(
            const std::variant<long long, std::string> &ChatID,
            const std::vector<long long> &MessageIDs);

        bool DeleteMyCommands(
            const Methods::deleteMyCommandsParameters &Parameters);

        bool DeleteMyCommands();

        bool DeleteStickerFromSet(
            const Methods::deleteStickerFromSetParameters &Parameters);

        bool DeleteStickerFromSet(
            const std::string &Sticker);

        bool DeleteStickerSet(
            const Methods::deleteStickerSetParameters &Parameters);

        bool DeleteStickerSet(
            const std::string &Name);

        bool DeleteStory(
            const Methods::deleteStoryParameters &Parameters);

        bool DeleteStory(
            const std::string &BusinessConnectionID,
            const long long &StoryID);

        bool DeleteWebhook(
            const Methods::deleteWebhookParameters &Parameters);

        bool DeleteWebhook();

        ::TelegramBotAPI::Type::ChatInviteLink EditChatInviteLink(
            const Methods::editChatInviteLinkParameters &Parameters);

        ::TelegramBotAPI::Type::ChatInviteLink EditChatInviteLink(
            const std::variant<long long, std::string> &ChatID,
            const std::string &InviteLink);

        ::TelegramBotAPI::Type::ChatInviteLink EditChatSubscriptionInviteLink(
            const Methods::editChatSubscriptionInviteLinkParameters &Parameters);

        ::TelegramBotAPI::Type::ChatInviteLink EditChatSubscriptionInviteLink(
            const std::variant<long long, std::string> &ChatID,
            const std::string &InviteLink);

        bool EditEphemeralMessageCaption(
            const Methods::editEphemeralMessageCaptionParameters &Parameters);

        bool EditEphemeralMessageCaption(
            const std::variant<long long, std::string> &ChatID,
            const long long &EphemeralMessageID,
            const long long &ReceiverUserID);

        bool EditEphemeralMessageMedia(
            const Methods::editEphemeralMessageMediaParameters &Parameters);

        bool EditEphemeralMessageMedia(
            const std::variant<long long, std::string> &ChatID,
            const long long &EphemeralMessageID,
            const std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> &Media,
            const long long &ReceiverUserID);

        bool EditEphemeralMessageReplyMarkup(
            const Methods::editEphemeralMessageReplyMarkupParameters &Parameters);

        bool EditEphemeralMessageReplyMarkup(
            const std::variant<long long, std::string> &ChatID,
            const long long &EphemeralMessageID,
            const long long &ReceiverUserID);

        bool EditEphemeralMessageText(
            const Methods::editEphemeralMessageTextParameters &Parameters);

        bool EditEphemeralMessageText(
            const std::variant<long long, std::string> &ChatID,
            const long long &EphemeralMessageID,
            const long long &ReceiverUserID);

        bool EditForumTopic(
            const Methods::editForumTopicParameters &Parameters);

        bool EditForumTopic(
            const std::variant<long long, std::string> &ChatID,
            const long long &MessageThreadID);

        bool EditGeneralForumTopic(
            const Methods::editGeneralForumTopicParameters &Parameters);

        bool EditGeneralForumTopic(
            const std::variant<long long, std::string> &ChatID,
            const std::string &Name);

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageCaption(
            const Methods::editMessageCaptionParameters &Parameters);

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageCaption();

        ::TelegramBotAPI::Type::Message EditMessageChecklist(
            const Methods::editMessageChecklistParameters &Parameters);

        ::TelegramBotAPI::Type::Message EditMessageChecklist(
            const std::string &BusinessConnectionID,
            const std::variant<long long, std::string> &ChatID,
            const ::TelegramBotAPI::Type::InputChecklist &Checklist,
            const long long &MessageID);

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageLiveLocation(
            const Methods::editMessageLiveLocationParameters &Parameters);

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageLiveLocation(
            const double &Latitude,
            const double &Longitude);

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageMedia(
            const Methods::editMessageMediaParameters &Parameters);

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageMedia(
            const std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> &Media);

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageReplyMarkup(
            const Methods::editMessageReplyMarkupParameters &Parameters);

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageReplyMarkup();

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageText(
            const Methods::editMessageTextParameters &Parameters);

        std::variant<::TelegramBotAPI::Type::Message, bool> EditMessageText();

        ::TelegramBotAPI::Type::Story EditStory(
            const Methods::editStoryParameters &Parameters);

        ::TelegramBotAPI::Type::Story EditStory(
            const std::string &BusinessConnectionID,
            const std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> &Content,
            const long long &StoryID);

        bool EditUserStarSubscription(
            const Methods::editUserStarSubscriptionParameters &Parameters);

        bool EditUserStarSubscription(
            const bool &IsCanceled,
            const std::string &TelegramPaymentChargeID,
            const long long &UserID);

        std::string ExportChatInviteLink(
            const Methods::exportChatInviteLinkParameters &Parameters);

        std::string ExportChatInviteLink(
            const std::variant<long long, std::string> &ChatID);

        ::TelegramBotAPI::Type::Message ForwardMessage(
            const Methods::forwardMessageParameters &Parameters);

        ::TelegramBotAPI::Type::Message ForwardMessage(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<long long, std::string> &FromChatID,
            const long long &MessageID);

        std::vector<::TelegramBotAPI::Type::MessageId> ForwardMessages(
            const Methods::forwardMessagesParameters &Parameters);

        std::vector<::TelegramBotAPI::Type::MessageId> ForwardMessages(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<long long, std::string> &FromChatID,
            const std::vector<long long> &MessageIDs);

        ::TelegramBotAPI::Type::Gifts GetAvailableGifts(
            const Methods::getAvailableGiftsParameters &Parameters);

        ::TelegramBotAPI::Type::Gifts GetAvailableGifts();

        ::TelegramBotAPI::Type::OwnedGifts GetBusinessAccountGifts(
            const Methods::getBusinessAccountGiftsParameters &Parameters);

        ::TelegramBotAPI::Type::OwnedGifts GetBusinessAccountGifts(
            const std::string &BusinessConnectionID);

        ::TelegramBotAPI::Type::StarAmount GetBusinessAccountStarBalance(
            const Methods::getBusinessAccountStarBalanceParameters &Parameters);

        ::TelegramBotAPI::Type::StarAmount GetBusinessAccountStarBalance(
            const std::string &BusinessConnectionID);

        ::TelegramBotAPI::Type::BusinessConnection GetBusinessConnection(
            const Methods::getBusinessConnectionParameters &Parameters);

        ::TelegramBotAPI::Type::BusinessConnection GetBusinessConnection(
            const std::string &BusinessConnectionID);

        ::TelegramBotAPI::Type::ChatFullInfo GetChat(
            const Methods::getChatParameters &Parameters);

        ::TelegramBotAPI::Type::ChatFullInfo GetChat(
            const std::variant<long long, std::string> &ChatID);

        std::vector<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>> GetChatAdministrators(
            const Methods::getChatAdministratorsParameters &Parameters);

        std::vector<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>> GetChatAdministrators(
            const std::variant<long long, std::string> &ChatID);

        ::TelegramBotAPI::Type::OwnedGifts GetChatGifts(
            const Methods::getChatGiftsParameters &Parameters);

        ::TelegramBotAPI::Type::OwnedGifts GetChatGifts(
            const std::variant<long long, std::string> &ChatID);

        std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned> GetChatMember(
            const Methods::getChatMemberParameters &Parameters);

        std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned> GetChatMember(
            const std::variant<long long, std::string> &ChatID,
            const long long &UserID);

        long long GetChatMemberCount(
            const Methods::getChatMemberCountParameters &Parameters);

        long long GetChatMemberCount(
            const std::variant<long long, std::string> &ChatID);

        std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault> GetChatMenuButton(
            const Methods::getChatMenuButtonParameters &Parameters);

        std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault> GetChatMenuButton();

        std::vector<::TelegramBotAPI::Type::Sticker> GetCustomEmojiStickers(
            const Methods::getCustomEmojiStickersParameters &Parameters);

        std::vector<::TelegramBotAPI::Type::Sticker> GetCustomEmojiStickers(
            const std::vector<std::string> &CustomEmojiIDs);

        ::TelegramBotAPI::Type::File GetFile(
            const Methods::getFileParameters &Parameters);

        ::TelegramBotAPI::Type::File GetFile(
            const std::string &FileID);

        std::vector<::TelegramBotAPI::Type::Sticker> GetForumTopicIconStickers(
            const Methods::getForumTopicIconStickersParameters &Parameters);

        std::vector<::TelegramBotAPI::Type::Sticker> GetForumTopicIconStickers();

        std::vector<::TelegramBotAPI::Type::GameHighScore> GetGameHighScores(
            const Methods::getGameHighScoresParameters &Parameters);

        std::vector<::TelegramBotAPI::Type::GameHighScore> GetGameHighScores(
            const long long &UserID);

        ::TelegramBotAPI::Type::BotAccessSettings GetManagedBotAccessSettings(
            const Methods::getManagedBotAccessSettingsParameters &Parameters);

        ::TelegramBotAPI::Type::BotAccessSettings GetManagedBotAccessSettings(
            const long long &UserID);

        std::string GetManagedBotToken(
            const Methods::getManagedBotTokenParameters &Parameters);

        std::string GetManagedBotToken(
            const long long &UserID);

        ::TelegramBotAPI::Type::User GetMe(
            const Methods::getMeParameters &Parameters);

        ::TelegramBotAPI::Type::User GetMe();

        std::vector<::TelegramBotAPI::Type::BotCommand> GetMyCommands(
            const Methods::getMyCommandsParameters &Parameters);

        std::vector<::TelegramBotAPI::Type::BotCommand> GetMyCommands();

        ::TelegramBotAPI::Type::ChatAdministratorRights GetMyDefaultAdministratorRights(
            const Methods::getMyDefaultAdministratorRightsParameters &Parameters);

        ::TelegramBotAPI::Type::ChatAdministratorRights GetMyDefaultAdministratorRights();

        ::TelegramBotAPI::Type::BotDescription GetMyDescription(
            const Methods::getMyDescriptionParameters &Parameters);

        ::TelegramBotAPI::Type::BotDescription GetMyDescription();

        ::TelegramBotAPI::Type::BotName GetMyName(
            const Methods::getMyNameParameters &Parameters);

        ::TelegramBotAPI::Type::BotName GetMyName();

        ::TelegramBotAPI::Type::BotShortDescription GetMyShortDescription(
            const Methods::getMyShortDescriptionParameters &Parameters);

        ::TelegramBotAPI::Type::BotShortDescription GetMyShortDescription();

        ::TelegramBotAPI::Type::StarAmount GetMyStarBalance(
            const Methods::getMyStarBalanceParameters &Parameters);

        ::TelegramBotAPI::Type::StarAmount GetMyStarBalance();

        ::TelegramBotAPI::Type::StarTransactions GetStarTransactions(
            const Methods::getStarTransactionsParameters &Parameters);

        ::TelegramBotAPI::Type::StarTransactions GetStarTransactions();

        ::TelegramBotAPI::Type::StickerSet GetStickerSet(
            const Methods::getStickerSetParameters &Parameters);

        ::TelegramBotAPI::Type::StickerSet GetStickerSet(
            const std::string &Name);

        std::vector<::TelegramBotAPI::Type::Update> GetUpdates(
            const Methods::getUpdatesParameters &Parameters);

        std::vector<::TelegramBotAPI::Type::Update> GetUpdates();

        ::TelegramBotAPI::Type::UserChatBoosts GetUserChatBoosts(
            const Methods::getUserChatBoostsParameters &Parameters);

        ::TelegramBotAPI::Type::UserChatBoosts GetUserChatBoosts(
            const std::variant<long long, std::string> &ChatID,
            const long long &UserID);

        ::TelegramBotAPI::Type::OwnedGifts GetUserGifts(
            const Methods::getUserGiftsParameters &Parameters);

        ::TelegramBotAPI::Type::OwnedGifts GetUserGifts(
            const long long &UserID);

        std::vector<::TelegramBotAPI::Type::Message> GetUserPersonalChatMessages(
            const Methods::getUserPersonalChatMessagesParameters &Parameters);

        std::vector<::TelegramBotAPI::Type::Message> GetUserPersonalChatMessages(
            const long long &Limit,
            const long long &UserID);

        ::TelegramBotAPI::Type::UserProfileAudios GetUserProfileAudios(
            const Methods::getUserProfileAudiosParameters &Parameters);

        ::TelegramBotAPI::Type::UserProfileAudios GetUserProfileAudios(
            const long long &UserID);

        ::TelegramBotAPI::Type::UserProfilePhotos GetUserProfilePhotos(
            const Methods::getUserProfilePhotosParameters &Parameters);

        ::TelegramBotAPI::Type::UserProfilePhotos GetUserProfilePhotos(
            const long long &UserID);

        ::TelegramBotAPI::Type::WebhookInfo GetWebhookInfo(
            const Methods::getWebhookInfoParameters &Parameters);

        ::TelegramBotAPI::Type::WebhookInfo GetWebhookInfo();

        bool GiftPremiumSubscription(
            const Methods::giftPremiumSubscriptionParameters &Parameters);

        bool GiftPremiumSubscription(
            const long long &MonthCount,
            const long long &StarCount,
            const long long &UserID);

        bool HideGeneralForumTopic(
            const Methods::hideGeneralForumTopicParameters &Parameters);

        bool HideGeneralForumTopic(
            const std::variant<long long, std::string> &ChatID);

        bool LeaveChat(
            const Methods::leaveChatParameters &Parameters);

        bool LeaveChat(
            const std::variant<long long, std::string> &ChatID);

        bool LogOut(
            const Methods::logOutParameters &Parameters);

        bool LogOut();

        bool PinChatMessage(
            const Methods::pinChatMessageParameters &Parameters);

        bool PinChatMessage(
            const std::variant<long long, std::string> &ChatID,
            const long long &MessageID);

        ::TelegramBotAPI::Type::Story PostStory(
            const Methods::postStoryParameters &Parameters);

        ::TelegramBotAPI::Type::Story PostStory(
            const long long &ActivePeriod,
            const std::string &BusinessConnectionID,
            const std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> &Content);

        bool PromoteChatMember(
            const Methods::promoteChatMemberParameters &Parameters);

        bool PromoteChatMember(
            const std::variant<long long, std::string> &ChatID,
            const long long &UserID);

        bool ReadBusinessMessage(
            const Methods::readBusinessMessageParameters &Parameters);

        bool ReadBusinessMessage(
            const std::string &BusinessConnectionID,
            const long long &ChatID,
            const long long &MessageID);

        bool RefundStarPayment(
            const Methods::refundStarPaymentParameters &Parameters);

        bool RefundStarPayment(
            const std::string &TelegramPaymentChargeID,
            const long long &UserID);

        bool RemoveBusinessAccountProfilePhoto(
            const Methods::removeBusinessAccountProfilePhotoParameters &Parameters);

        bool RemoveBusinessAccountProfilePhoto(
            const std::string &BusinessConnectionID);

        bool RemoveChatVerification(
            const Methods::removeChatVerificationParameters &Parameters);

        bool RemoveChatVerification(
            const std::variant<long long, std::string> &ChatID);

        bool RemoveMyProfilePhoto(
            const Methods::removeMyProfilePhotoParameters &Parameters);

        bool RemoveMyProfilePhoto();

        bool RemoveUserVerification(
            const Methods::removeUserVerificationParameters &Parameters);

        bool RemoveUserVerification(
            const long long &UserID);

        bool ReopenForumTopic(
            const Methods::reopenForumTopicParameters &Parameters);

        bool ReopenForumTopic(
            const std::variant<long long, std::string> &ChatID,
            const long long &MessageThreadID);

        bool ReopenGeneralForumTopic(
            const Methods::reopenGeneralForumTopicParameters &Parameters);

        bool ReopenGeneralForumTopic(
            const std::variant<long long, std::string> &ChatID);

        std::string ReplaceManagedBotToken(
            const Methods::replaceManagedBotTokenParameters &Parameters);

        std::string ReplaceManagedBotToken(
            const long long &UserID);

        bool ReplaceStickerInSet(
            const Methods::replaceStickerInSetParameters &Parameters);

        bool ReplaceStickerInSet(
            const std::string &Name,
            const std::string &OldSticker,
            const ::TelegramBotAPI::Type::InputSticker &Sticker,
            const long long &UserID);

        ::TelegramBotAPI::Type::Story RepostStory(
            const Methods::repostStoryParameters &Parameters);

        ::TelegramBotAPI::Type::Story RepostStory(
            const long long &ActivePeriod,
            const std::string &BusinessConnectionID,
            const long long &FromChatID,
            const long long &FromStoryID);

        bool RestrictChatMember(
            const Methods::restrictChatMemberParameters &Parameters);

        bool RestrictChatMember(
            const std::variant<long long, std::string> &ChatID,
            const ::TelegramBotAPI::Type::ChatPermissions &Permissions,
            const long long &UserID);

        ::TelegramBotAPI::Type::ChatInviteLink RevokeChatInviteLink(
            const Methods::revokeChatInviteLinkParameters &Parameters);

        ::TelegramBotAPI::Type::ChatInviteLink RevokeChatInviteLink(
            const std::variant<long long, std::string> &ChatID,
            const std::string &InviteLink);

        ::TelegramBotAPI::Type::PreparedInlineMessage SavePreparedInlineMessage(
            const Methods::savePreparedInlineMessageParameters &Parameters);

        ::TelegramBotAPI::Type::PreparedInlineMessage SavePreparedInlineMessage(
            const std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> &Result,
            const long long &UserID);

        ::TelegramBotAPI::Type::PreparedKeyboardButton SavePreparedKeyboardButton(
            const Methods::savePreparedKeyboardButtonParameters &Parameters);

        ::TelegramBotAPI::Type::PreparedKeyboardButton SavePreparedKeyboardButton(
            const ::TelegramBotAPI::Type::KeyboardButton &Button,
            const long long &UserID);

        ::TelegramBotAPI::Type::Message SendAnimation(
            const Methods::sendAnimationParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendAnimation(
            const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Animation,
            const std::variant<long long, std::string> &ChatID);

        ::TelegramBotAPI::Type::Message SendAudio(
            const Methods::sendAudioParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendAudio(
            const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Audio,
            const std::variant<long long, std::string> &ChatID);

        bool SendChatAction(
            const Methods::sendChatActionParameters &Parameters);

        bool SendChatAction(
            const std::string &Action,
            const std::variant<long long, std::string> &ChatID);

        bool SendChatJoinRequestWebApp(
            const Methods::sendChatJoinRequestWebAppParameters &Parameters);

        bool SendChatJoinRequestWebApp(
            const std::string &ChatJoinRequestQueryID,
            const std::string &WebAppURL);

        ::TelegramBotAPI::Type::Message SendChecklist(
            const Methods::sendChecklistParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendChecklist(
            const std::string &BusinessConnectionID,
            const std::variant<long long, std::string> &ChatID,
            const ::TelegramBotAPI::Type::InputChecklist &Checklist);

        ::TelegramBotAPI::Type::Message SendContact(
            const Methods::sendContactParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendContact(
            const std::variant<long long, std::string> &ChatID,
            const std::string &FirstName,
            const std::string &PhoneNumber);

        ::TelegramBotAPI::Type::Message SendDice(
            const Methods::sendDiceParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendDice(
            const std::variant<long long, std::string> &ChatID);

        ::TelegramBotAPI::Type::Message SendDocument(
            const Methods::sendDocumentParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendDocument(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Document);

        ::TelegramBotAPI::Type::Message SendGame(
            const Methods::sendGameParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendGame(
            const std::variant<long long, std::string> &ChatID,
            const std::string &GameShortName);

        bool SendGift(
            const Methods::sendGiftParameters &Parameters);

        bool SendGift(
            const std::string &GiftID);

        ::TelegramBotAPI::Type::Message SendInvoice(
            const Methods::sendInvoiceParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendInvoice(
            const std::variant<long long, std::string> &ChatID,
            const std::string &Currency,
            const std::string &Description,
            const std::string &Payload,
            const std::vector<::TelegramBotAPI::Type::LabeledPrice> &Prices,
            const std::string &Title);

        ::TelegramBotAPI::Type::Message SendLivePhoto(
            const Methods::sendLivePhotoParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendLivePhoto(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &LivePhoto,
            const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Photo);

        ::TelegramBotAPI::Type::Message SendLocation(
            const Methods::sendLocationParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendLocation(
            const std::variant<long long, std::string> &ChatID,
            const double &Latitude,
            const double &Longitude);

        std::vector<::TelegramBotAPI::Type::Message> SendMediaGroup(
            const Methods::sendMediaGroupParameters &Parameters);

        std::vector<::TelegramBotAPI::Type::Message> SendMediaGroup(
            const std::variant<long long, std::string> &ChatID,
            const std::vector<std::variant<::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo>> &Media);

        ::TelegramBotAPI::Type::Message SendMessage(
            const Methods::sendMessageParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendMessage(
            const std::variant<long long, std::string> &ChatID,
            const std::string &Text);

        bool SendMessageDraft(
            const Methods::sendMessageDraftParameters &Parameters);

        bool SendMessageDraft(
            const long long &ChatID,
            const long long &DraftID);

        ::TelegramBotAPI::Type::Message SendPaidMedia(
            const Methods::sendPaidMediaParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendPaidMedia(
            const std::variant<long long, std::string> &ChatID,
            const std::vector<std::variant<::TelegramBotAPI::Type::InputPaidMediaLivePhoto, ::TelegramBotAPI::Type::InputPaidMediaPhoto, ::TelegramBotAPI::Type::InputPaidMediaVideo>> &Media,
            const long long &StarCount);

        ::TelegramBotAPI::Type::Message SendPhoto(
            const Methods::sendPhotoParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendPhoto(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Photo);

        ::TelegramBotAPI::Type::Message SendPoll(
            const Methods::sendPollParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendPoll(
            const std::variant<long long, std::string> &ChatID,
            const std::vector<::TelegramBotAPI::Type::InputPollOption> &Options,
            const std::string &Question);

        ::TelegramBotAPI::Type::Message SendRichMessage(
            const Methods::sendRichMessageParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendRichMessage(
            const std::variant<long long, std::string> &ChatID,
            const ::TelegramBotAPI::Type::InputRichMessage &RichMessage);

        bool SendRichMessageDraft(
            const Methods::sendRichMessageDraftParameters &Parameters);

        bool SendRichMessageDraft(
            const long long &ChatID,
            const long long &DraftID,
            const ::TelegramBotAPI::Type::InputRichMessage &RichMessage);

        ::TelegramBotAPI::Type::Message SendSticker(
            const Methods::sendStickerParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendSticker(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Sticker);

        ::TelegramBotAPI::Type::Message SendVenue(
            const Methods::sendVenueParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendVenue(
            const std::string &Address,
            const std::variant<long long, std::string> &ChatID,
            const double &Latitude,
            const double &Longitude,
            const std::string &Title);

        ::TelegramBotAPI::Type::Message SendVideo(
            const Methods::sendVideoParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendVideo(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Video);

        ::TelegramBotAPI::Type::Message SendVideoNote(
            const Methods::sendVideoNoteParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendVideoNote(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &VideoNote);

        ::TelegramBotAPI::Type::Message SendVoice(
            const Methods::sendVoiceParameters &Parameters);

        ::TelegramBotAPI::Type::Message SendVoice(
            const std::variant<long long, std::string> &ChatID,
            const std::variant<::TelegramBotAPI::Type::InputFile, std::string> &Voice);

        bool SetBusinessAccountBio(
            const Methods::setBusinessAccountBioParameters &Parameters);

        bool SetBusinessAccountBio(
            const std::string &BusinessConnectionID);

        bool SetBusinessAccountGiftSettings(
            const Methods::setBusinessAccountGiftSettingsParameters &Parameters);

        bool SetBusinessAccountGiftSettings(
            const ::TelegramBotAPI::Type::AcceptedGiftTypes &AcceptedGiftTypes,
            const std::string &BusinessConnectionID,
            const bool &ShowGiftButton);

        bool SetBusinessAccountName(
            const Methods::setBusinessAccountNameParameters &Parameters);

        bool SetBusinessAccountName(
            const std::string &BusinessConnectionID,
            const std::string &FirstName);

        bool SetBusinessAccountProfilePhoto(
            const Methods::setBusinessAccountProfilePhotoParameters &Parameters);

        bool SetBusinessAccountProfilePhoto(
            const std::string &BusinessConnectionID,
            const std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> &Photo);

        bool SetBusinessAccountUsername(
            const Methods::setBusinessAccountUsernameParameters &Parameters);

        bool SetBusinessAccountUsername(
            const std::string &BusinessConnectionID);

        bool SetChatAdministratorCustomTitle(
            const Methods::setChatAdministratorCustomTitleParameters &Parameters);

        bool SetChatAdministratorCustomTitle(
            const std::variant<long long, std::string> &ChatID,
            const std::string &CustomTitle,
            const long long &UserID);

        bool SetChatDescription(
            const Methods::setChatDescriptionParameters &Parameters);

        bool SetChatDescription(
            const std::variant<long long, std::string> &ChatID);

        bool SetChatMemberTag(
            const Methods::setChatMemberTagParameters &Parameters);

        bool SetChatMemberTag(
            const std::variant<long long, std::string> &ChatID,
            const long long &UserID);

        bool SetChatMenuButton(
            const Methods::setChatMenuButtonParameters &Parameters);

        bool SetChatMenuButton();

        bool SetChatPermissions(
            const Methods::setChatPermissionsParameters &Parameters);

        bool SetChatPermissions(
            const std::variant<long long, std::string> &ChatID,
            const ::TelegramBotAPI::Type::ChatPermissions &Permissions);

        bool SetChatPhoto(
            const Methods::setChatPhotoParameters &Parameters);

        bool SetChatPhoto(
            const std::variant<long long, std::string> &ChatID);

        bool SetChatStickerSet(
            const Methods::setChatStickerSetParameters &Parameters);

        bool SetChatStickerSet(
            const std::variant<long long, std::string> &ChatID,
            const std::string &StickerSetName);

        bool SetChatTitle(
            const Methods::setChatTitleParameters &Parameters);

        bool SetChatTitle(
            const std::variant<long long, std::string> &ChatID,
            const std::string &Title);

        bool SetCustomEmojiStickerSetThumbnail(
            const Methods::setCustomEmojiStickerSetThumbnailParameters &Parameters);

        bool SetCustomEmojiStickerSetThumbnail(
            const std::string &Name);

        std::variant<::TelegramBotAPI::Type::Message, bool> SetGameScore(
            const Methods::setGameScoreParameters &Parameters);

        std::variant<::TelegramBotAPI::Type::Message, bool> SetGameScore(
            const long long &Score,
            const long long &UserID);

        bool SetManagedBotAccessSettings(
            const Methods::setManagedBotAccessSettingsParameters &Parameters);

        bool SetManagedBotAccessSettings(
            const bool &IsAccessRestricted,
            const long long &UserID);

        bool SetMessageReaction(
            const Methods::setMessageReactionParameters &Parameters);

        bool SetMessageReaction(
            const std::variant<long long, std::string> &ChatID,
            const long long &MessageID);

        bool SetMyCommands(
            const Methods::setMyCommandsParameters &Parameters);

        bool SetMyCommands(
            const std::vector<::TelegramBotAPI::Type::BotCommand> &Commands);

        bool SetMyDefaultAdministratorRights(
            const Methods::setMyDefaultAdministratorRightsParameters &Parameters);

        bool SetMyDefaultAdministratorRights();

        bool SetMyDescription(
            const Methods::setMyDescriptionParameters &Parameters);

        bool SetMyDescription();

        bool SetMyName(
            const Methods::setMyNameParameters &Parameters);

        bool SetMyName();

        bool SetMyProfilePhoto(
            const Methods::setMyProfilePhotoParameters &Parameters);

        bool SetMyProfilePhoto(
            const std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> &Photo);

        bool SetMyShortDescription(
            const Methods::setMyShortDescriptionParameters &Parameters);

        bool SetMyShortDescription();

        bool SetPassportDataErrors(
            const Methods::setPassportDataErrorsParameters &Parameters);

        bool SetPassportDataErrors(
            const std::vector<std::variant<::TelegramBotAPI::Type::PassportElementErrorDataField, ::TelegramBotAPI::Type::PassportElementErrorFrontSide, ::TelegramBotAPI::Type::PassportElementErrorReverseSide, ::TelegramBotAPI::Type::PassportElementErrorSelfie, ::TelegramBotAPI::Type::PassportElementErrorFile, ::TelegramBotAPI::Type::PassportElementErrorFiles, ::TelegramBotAPI::Type::PassportElementErrorTranslationFile, ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles, ::TelegramBotAPI::Type::PassportElementErrorUnspecified>> &Errors,
            const long long &UserID);

        bool SetStickerEmojiList(
            const Methods::setStickerEmojiListParameters &Parameters);

        bool SetStickerEmojiList(
            const std::vector<std::string> &EmojiList,
            const std::string &Sticker);

        bool SetStickerKeywords(
            const Methods::setStickerKeywordsParameters &Parameters);

        bool SetStickerKeywords(
            const std::string &Sticker);

        bool SetStickerMaskPosition(
            const Methods::setStickerMaskPositionParameters &Parameters);

        bool SetStickerMaskPosition(
            const std::string &Sticker);

        bool SetStickerPositionInSet(
            const Methods::setStickerPositionInSetParameters &Parameters);

        bool SetStickerPositionInSet(
            const long long &Position,
            const std::string &Sticker);

        bool SetStickerSetThumbnail(
            const Methods::setStickerSetThumbnailParameters &Parameters);

        bool SetStickerSetThumbnail(
            const std::string &Format,
            const std::string &Name,
            const long long &UserID);

        bool SetStickerSetTitle(
            const Methods::setStickerSetTitleParameters &Parameters);

        bool SetStickerSetTitle(
            const std::string &Name,
            const std::string &Title);

        bool SetUserEmojiStatus(
            const Methods::setUserEmojiStatusParameters &Parameters);

        bool SetUserEmojiStatus(
            const long long &UserID);

        bool SetWebhook(
            const Methods::setWebhookParameters &Parameters);

        bool SetWebhook(
            const std::string &URL);

        std::variant<::TelegramBotAPI::Type::Message, bool> StopMessageLiveLocation(
            const Methods::stopMessageLiveLocationParameters &Parameters);

        std::variant<::TelegramBotAPI::Type::Message, bool> StopMessageLiveLocation();

        ::TelegramBotAPI::Type::Poll StopPoll(
            const Methods::stopPollParameters &Parameters);

        ::TelegramBotAPI::Type::Poll StopPoll(
            const std::variant<long long, std::string> &ChatID,
            const long long &MessageID);

        bool TransferBusinessAccountStars(
            const Methods::transferBusinessAccountStarsParameters &Parameters);

        bool TransferBusinessAccountStars(
            const std::string &BusinessConnectionID,
            const long long &StarCount);

        bool TransferGift(
            const Methods::transferGiftParameters &Parameters);

        bool TransferGift(
            const std::string &BusinessConnectionID,
            const long long &NewOwnerChatID,
            const std::string &OwnedGiftID);

        bool UnbanChatMember(
            const Methods::unbanChatMemberParameters &Parameters);

        bool UnbanChatMember(
            const std::variant<long long, std::string> &ChatID,
            const long long &UserID);

        bool UnbanChatSenderChat(
            const Methods::unbanChatSenderChatParameters &Parameters);

        bool UnbanChatSenderChat(
            const std::variant<long long, std::string> &ChatID,
            const long long &SenderChatID);

        bool UnhideGeneralForumTopic(
            const Methods::unhideGeneralForumTopicParameters &Parameters);

        bool UnhideGeneralForumTopic(
            const std::variant<long long, std::string> &ChatID);

        bool UnpinAllChatMessages(
            const Methods::unpinAllChatMessagesParameters &Parameters);

        bool UnpinAllChatMessages(
            const std::variant<long long, std::string> &ChatID);

        bool UnpinAllForumTopicMessages(
            const Methods::unpinAllForumTopicMessagesParameters &Parameters);

        bool UnpinAllForumTopicMessages(
            const std::variant<long long, std::string> &ChatID,
            const long long &MessageThreadID);

        bool UnpinAllGeneralForumTopicMessages(
            const Methods::unpinAllGeneralForumTopicMessagesParameters &Parameters);

        bool UnpinAllGeneralForumTopicMessages(
            const std::variant<long long, std::string> &ChatID);

        bool UnpinChatMessage(
            const Methods::unpinChatMessageParameters &Parameters);

        bool UnpinChatMessage(
            const std::variant<long long, std::string> &ChatID);

        bool UpgradeGift(
            const Methods::upgradeGiftParameters &Parameters);

        bool UpgradeGift(
            const std::string &BusinessConnectionID,
            const std::string &OwnedGiftID);

        ::TelegramBotAPI::Type::File UploadStickerFile(
            const Methods::uploadStickerFileParameters &Parameters);

        ::TelegramBotAPI::Type::File UploadStickerFile(
            const std::string &StickerFormat,
            const long long &UserID);

        bool VerifyChat(
            const Methods::verifyChatParameters &Parameters);

        bool VerifyChat(
            const std::variant<long long, std::string> &ChatID);

        bool VerifyUser(
            const Methods::verifyUserParameters &Parameters);

        bool VerifyUser(
            const long long &UserID);

    private:
        std::string BotToken;
        std::string APIURL;

        Network::HTTPClient   DefaultHTTPClient;
        Network::IHTTPClient *HTTPClient;

        Network::HTTPResponse
        PerformRequest(const std::string  &Method,
                       const JSON::Object &Parameters);

        Network::HTTPResponse PerformMultipartRequest(
            const std::string                       &Method,
            const Network::Multipart::MultipartForm &Form);

        template <typename ReturnType>
        ReturnType ParseResponse(
            const Network::HTTPResponse &Response);

        template <typename ReturnType>
        ReturnType Call(const std::string &Method);

        template <typename ReturnType>
        ReturnType Call(
            const std::string  &Method,
            const JSON::Object &Parameters);

        template <typename ReturnType>
        ReturnType CallMultipart(
            const std::string                       &Method,
            const Network::Multipart::MultipartForm &Form);
    };
} // namespace TelegramBotAPI

#include "TelegramBotAPI/TelegramClient.TPP"

#endif
