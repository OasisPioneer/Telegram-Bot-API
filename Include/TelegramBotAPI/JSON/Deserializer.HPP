#ifndef TELEGRAMBOTAPI_JSON_DESERIALIZER_HPP
#define TELEGRAMBOTAPI_JSON_DESERIALIZER_HPP

#include "TelegramBotAPI/Types/AcceptedGiftTypes.HPP"
#include "TelegramBotAPI/Types/AffiliateInfo.HPP"
#include "TelegramBotAPI/Types/Animation.HPP"
#include "TelegramBotAPI/Types/Audio.HPP"
#include "TelegramBotAPI/Types/BackgroundFill.HPP"
#include "TelegramBotAPI/Types/BackgroundFillFreeformGradient.HPP"
#include "TelegramBotAPI/Types/BackgroundFillGradient.HPP"
#include "TelegramBotAPI/Types/BackgroundFillSolid.HPP"
#include "TelegramBotAPI/Types/BackgroundType.HPP"
#include "TelegramBotAPI/Types/BackgroundTypeChatTheme.HPP"
#include "TelegramBotAPI/Types/BackgroundTypeFill.HPP"
#include "TelegramBotAPI/Types/BackgroundTypePattern.HPP"
#include "TelegramBotAPI/Types/BackgroundTypeWallpaper.HPP"
#include "TelegramBotAPI/Types/Birthdate.HPP"
#include "TelegramBotAPI/Types/BotAccessSettings.HPP"
#include "TelegramBotAPI/Types/BotCommand.HPP"
#include "TelegramBotAPI/Types/BotCommandScope.HPP"
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
#include "TelegramBotAPI/Types/ChatBoostSource.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourceGiftCode.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourceGiveaway.HPP"
#include "TelegramBotAPI/Types/ChatBoostSourcePremium.HPP"
#include "TelegramBotAPI/Types/ChatBoostUpdated.HPP"
#include "TelegramBotAPI/Types/ChatFullInfo.HPP"
#include "TelegramBotAPI/Types/ChatInviteLink.HPP"
#include "TelegramBotAPI/Types/ChatJoinRequest.HPP"
#include "TelegramBotAPI/Types/ChatLocation.HPP"
#include "TelegramBotAPI/Types/ChatMember.HPP"
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
#include "TelegramBotAPI/Types/ErrorResponse.HPP"
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
#include "TelegramBotAPI/Types/InlineQueryResult.HPP"
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
#include "TelegramBotAPI/Types/InputFile.HPP"
#include "TelegramBotAPI/Types/InputInvoiceMessageContent.HPP"
#include "TelegramBotAPI/Types/InputLocationMessageContent.HPP"
#include "TelegramBotAPI/Types/InputMedia.HPP"
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
#include "TelegramBotAPI/Types/InputMessageContent.HPP"
#include "TelegramBotAPI/Types/InputPaidMedia.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaPhoto.HPP"
#include "TelegramBotAPI/Types/InputPaidMediaVideo.HPP"
#include "TelegramBotAPI/Types/InputPollMedia.HPP"
#include "TelegramBotAPI/Types/InputPollOption.HPP"
#include "TelegramBotAPI/Types/InputPollOptionMedia.HPP"
#include "TelegramBotAPI/Types/InputProfilePhoto.HPP"
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
#include "TelegramBotAPI/Types/InputStoryContent.HPP"
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
#include "TelegramBotAPI/Types/MaybeInaccessibleMessage.HPP"
#include "TelegramBotAPI/Types/MenuButton.HPP"
#include "TelegramBotAPI/Types/MenuButtonCommands.HPP"
#include "TelegramBotAPI/Types/MenuButtonDefault.HPP"
#include "TelegramBotAPI/Types/MenuButtonWebApp.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/MessageAutoDeleteTimerChanged.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/MessageGenerationStopped.HPP"
#include "TelegramBotAPI/Types/MessageId.HPP"
#include "TelegramBotAPI/Types/MessageOrigin.HPP"
#include "TelegramBotAPI/Types/MessageOriginChannel.HPP"
#include "TelegramBotAPI/Types/MessageOriginChat.HPP"
#include "TelegramBotAPI/Types/MessageOriginHiddenUser.HPP"
#include "TelegramBotAPI/Types/MessageOriginUser.HPP"
#include "TelegramBotAPI/Types/MessageReactionCountUpdated.HPP"
#include "TelegramBotAPI/Types/MessageReactionUpdated.HPP"
#include "TelegramBotAPI/Types/OkResponse.HPP"
#include "TelegramBotAPI/Types/OrderInfo.HPP"
#include "TelegramBotAPI/Types/OwnedGift.HPP"
#include "TelegramBotAPI/Types/OwnedGiftRegular.HPP"
#include "TelegramBotAPI/Types/OwnedGiftUnique.HPP"
#include "TelegramBotAPI/Types/OwnedGifts.HPP"
#include "TelegramBotAPI/Types/PaidMedia.HPP"
#include "TelegramBotAPI/Types/PaidMediaInfo.HPP"
#include "TelegramBotAPI/Types/PaidMediaLivePhoto.HPP"
#include "TelegramBotAPI/Types/PaidMediaPhoto.HPP"
#include "TelegramBotAPI/Types/PaidMediaPreview.HPP"
#include "TelegramBotAPI/Types/PaidMediaPurchased.HPP"
#include "TelegramBotAPI/Types/PaidMediaVideo.HPP"
#include "TelegramBotAPI/Types/PaidMessagePriceChanged.HPP"
#include "TelegramBotAPI/Types/PassportData.HPP"
#include "TelegramBotAPI/Types/PassportElementError.HPP"
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
#include "TelegramBotAPI/Types/ReactionType.HPP"
#include "TelegramBotAPI/Types/ReactionTypeCustomEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypeEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypePaid.HPP"
#include "TelegramBotAPI/Types/RefundedPayment.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/ReplyKeyboardRemove.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include "TelegramBotAPI/Types/ResponseParameters.HPP"
#include "TelegramBotAPI/Types/RevenueWithdrawalState.HPP"
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
#include "TelegramBotAPI/Types/StoryAreaType.HPP"
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
#include "TelegramBotAPI/Types/TransactionPartner.HPP"
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
#include <boost/json.hpp>
#include <boost/system/system_error.hpp>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::JSON {

namespace Detail {

class DeserializationMismatch : public std::runtime_error
{
public:
    using std::runtime_error::runtime_error;
};

template <typename T>
T ConvertValue(const boost::json::value& Value)
{
    try
    {
        return boost::json::value_to<T>(Value);
    }
    catch (const boost::system::system_error& Error)
    {
        throw DeserializationMismatch(Error.what());
    }
}

inline void RequireObject(
    const boost::json::value& Value)
{
    if (!Value.is_object())
    {
        throw DeserializationMismatch("Expected JSON object");
    }
}

inline void RequireArray(
    const boost::json::value& Value)
{
    if (!Value.is_array())
    {
        throw DeserializationMismatch("Expected JSON array");
    }
}

} // namespace Detail

template <typename T>
struct Deserializer;

template <typename T>
T FromJson(const boost::json::value& Value)
{
    return Deserializer<T>::Deserialize(Value);
}

template <>
struct Deserializer<long long>
{
    static long long Deserialize(
        const boost::json::value& Value)
    {
        if (!Value.is_int64() && !Value.is_uint64())
        {
            throw Detail::DeserializationMismatch(
                "Expected integer"
            );
        }

        return Detail::ConvertValue<long long>(Value);
    }
};

template <>
struct Deserializer<double>
{
    static double Deserialize(
        const boost::json::value& Value)
    {
        if (!Value.is_number())
        {
            throw Detail::DeserializationMismatch(
                "Expected number"
            );
        }

        return Detail::ConvertValue<double>(Value);
    }
};

template <>
struct Deserializer<bool>
{
    static bool Deserialize(
        const boost::json::value& Value)
    {
        if (!Value.is_bool())
        {
            throw Detail::DeserializationMismatch(
                "Expected boolean"
            );
        }

        return Detail::ConvertValue<bool>(Value);
    }
};

template <>
struct Deserializer<std::string>
{
    static std::string Deserialize(
        const boost::json::value& Value)
    {
        if (!Value.is_string())
        {
            throw Detail::DeserializationMismatch(
                "Expected string"
            );
        }

        return Detail::ConvertValue<std::string>(Value);
    }
};

template <typename T>
struct Deserializer<std::optional<T>>
{
    static std::optional<T> Deserialize(
        const boost::json::value& Value)
    {
        if (Value.is_null())
        {
            return std::nullopt;
        }

        return FromJson<T>(Value);
    }
};

template <typename T>
struct Deserializer<std::shared_ptr<T>>
{
    static std::shared_ptr<T> Deserialize(
        const boost::json::value& Value)
    {
        if (Value.is_null())
        {
            return nullptr;
        }

        return std::make_shared<T>(
            FromJson<T>(Value)
        );
    }
};

template <typename T>
struct Deserializer<std::vector<T>>
{
    static std::vector<T> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireArray(Value);

        const auto& Array = Value.as_array();

        std::vector<T> Result;
        Result.reserve(Array.size());

        for (const auto& Element : Array)
        {
            Result.emplace_back(
                FromJson<T>(Element)
            );
        }

        return Result;
    }
};

template <typename... Types>
struct Deserializer<std::variant<Types...>>
{
    static std::variant<Types...> Deserialize(
        const boost::json::value& Value)
    {
        return TryAlternatives<Types...>(Value);
    }

private:
    template <typename T>
    static std::variant<Types...> TryAlternative(
        const boost::json::value& Value)
    {
        return std::variant<Types...>(
            std::in_place_type<T>,
            FromJson<T>(Value)
        );
    }

    template <typename First>
    static std::variant<Types...> TryAlternatives(
        const boost::json::value& Value)
    {
        return TryAlternative<First>(Value);
    }

    template <typename First, typename Second, typename... Rest>
    static std::variant<Types...> TryAlternatives(
        const boost::json::value& Value)
    {
        try
        {
            return TryAlternative<First>(Value);
        }
        catch (const Detail::DeserializationMismatch&)
        {
            return TryAlternatives<Second, Rest...>(Value);
        }
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::AcceptedGiftTypes>;

template <>
struct Deserializer<::TelegramBotAPI::Type::AffiliateInfo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Animation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Audio>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFillFreeformGradient>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFillGradient>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFillSolid>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypeChatTheme>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypeFill>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypePattern>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypeWallpaper>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Birthdate>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotAccessSettings>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommand>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllGroupChats>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeChat>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeChatAdministrators>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeChatMember>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeDefault>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotDescription>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotName>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotShortDescription>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotSubscriptionUpdated>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessBotRights>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessConnection>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessIntro>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessLocation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessMessagesDeleted>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessOpeningHours>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessOpeningHoursInterval>;

template <>
struct Deserializer<::TelegramBotAPI::Type::CallbackGame>;

template <>
struct Deserializer<::TelegramBotAPI::Type::CallbackQuery>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Chat>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatAdministratorRights>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBackground>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoost>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostAdded>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostRemoved>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSourceGiftCode>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSourceGiveaway>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSourcePremium>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostUpdated>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatFullInfo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatInviteLink>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatJoinRequest>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatLocation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberAdministrator>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberBanned>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberLeft>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberMember>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberOwner>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberRestricted>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberUpdated>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatOwnerChanged>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatOwnerLeft>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatPermissions>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatPhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatShared>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Checklist>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChecklistTask>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChecklistTasksAdded>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChecklistTasksDone>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChosenInlineResult>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Community>;

template <>
struct Deserializer<::TelegramBotAPI::Type::CommunityChatAdded>;

template <>
struct Deserializer<::TelegramBotAPI::Type::CommunityChatJoined>;

template <>
struct Deserializer<::TelegramBotAPI::Type::CommunityChatRemoved>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Contact>;

template <>
struct Deserializer<::TelegramBotAPI::Type::CopyTextButton>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Dice>;

template <>
struct Deserializer<::TelegramBotAPI::Type::DirectMessagePriceChanged>;

template <>
struct Deserializer<::TelegramBotAPI::Type::DirectMessagesTopic>;

template <>
struct Deserializer<::TelegramBotAPI::Type::DisabledButton>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Document>;

template <>
struct Deserializer<::TelegramBotAPI::Type::EncryptedCredentials>;

template <>
struct Deserializer<::TelegramBotAPI::Type::EncryptedPassportElement>;

template <>
struct Deserializer<::TelegramBotAPI::Type::EphemeralMessageParameters>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ExternalReplyInfo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::File>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ForceReply>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopic>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicClosed>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicCreated>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicEdited>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicReopened>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Game>;

template <>
struct Deserializer<::TelegramBotAPI::Type::GameHighScore>;

template <>
struct Deserializer<::TelegramBotAPI::Type::GeneralForumTopicHidden>;

template <>
struct Deserializer<::TelegramBotAPI::Type::GeneralForumTopicUnhidden>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Gift>;

template <>
struct Deserializer<::TelegramBotAPI::Type::GiftBackground>;

template <>
struct Deserializer<::TelegramBotAPI::Type::GiftInfo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Gifts>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Giveaway>;

template <>
struct Deserializer<::TelegramBotAPI::Type::GiveawayCompleted>;

template <>
struct Deserializer<::TelegramBotAPI::Type::GiveawayCreated>;

template <>
struct Deserializer<::TelegramBotAPI::Type::GiveawayWinners>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InaccessibleMessage>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineKeyboardButton>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineKeyboardMarkup>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQuery>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultArticle>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultAudio>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedAudio>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedDocument>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedGif>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedPhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedSticker>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedVideo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedVoice>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultContact>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultDocument>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultGame>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultGif>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultLocation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultPhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultVenue>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultVideo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultVoice>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultsButton>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputChecklist>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputChecklistTask>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputContactMessageContent>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputInvoiceMessageContent>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputLocationMessageContent>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaAnimation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaAudio>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaDocument>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaLink>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaLivePhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaLocation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaPhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaSticker>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaVenue>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaVideo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaVoiceNote>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMediaLivePhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMediaPhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMediaVideo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPollOption>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputProfilePhotoAnimated>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputProfilePhotoStatic>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlock>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockAnchor>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockAnimation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockAudio>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockBlockQuotation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockButtons>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockCollage>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockDetails>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockDivider>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockDocument>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockExpandableBlockQuotation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockFooter>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockList>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockListItem>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockMap>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockMathematicalExpression>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockParagraph>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockPhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockPreformatted>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockPullQuotation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockSectionHeading>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockSlideshow>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockTable>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockThinking>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockVideo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockVoiceNote>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichMessage>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichMessageContent>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichMessageMedia>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputSticker>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputStoryContentPhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputStoryContentVideo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputTextMessageContent>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputVenueMessageContent>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Invoice>;

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButton>;

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonPollType>;

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestChat>;

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot>;

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestUsers>;

template <>
struct Deserializer<::TelegramBotAPI::Type::LabeledPrice>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Link>;

template <>
struct Deserializer<::TelegramBotAPI::Type::LinkPreviewOptions>;

template <>
struct Deserializer<::TelegramBotAPI::Type::LivePhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Location>;

template <>
struct Deserializer<::TelegramBotAPI::Type::LocationAddress>;

template <>
struct Deserializer<::TelegramBotAPI::Type::LoginUrl>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ManagedBotCreated>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ManagedBotUpdated>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MaskPosition>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButtonCommands>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButtonDefault>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButtonWebApp>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Message>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageEntity>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageGenerationStopped>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageId>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginChannel>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginChat>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginHiddenUser>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginUser>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageReactionCountUpdated>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageReactionUpdated>;

template <>
struct Deserializer<::TelegramBotAPI::Type::OrderInfo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGiftRegular>;

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGiftUnique>;

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGifts>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaInfo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaLivePhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaPhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaPreview>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaPurchased>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaVideo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMessagePriceChanged>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportData>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorDataField>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorFile>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorFiles>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorFrontSide>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorReverseSide>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorSelfie>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorTranslationFile>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorTranslationFiles>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorUnspecified>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportFile>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PhotoSize>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Poll>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PollAnswer>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PollMedia>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PollOption>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PollOptionAdded>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PollOptionDeleted>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PreCheckoutQuery>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PreparedInlineMessage>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PreparedKeyboardButton>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ProximityAlertTriggered>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionCount>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionTypeCustomEmoji>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionTypeEmoji>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionTypePaid>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RefundedPayment>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ReplyKeyboardMarkup>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ReplyKeyboardRemove>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ReplyParameters>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ResponseParameters>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStateFailed>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStatePending>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlock>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockAnchor>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockAnimation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockAudio>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockBlockQuotation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockButtons>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockCaption>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockCollage>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockDetails>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockDivider>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockDocument>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockExpandableBlockQuotation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockFooter>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockList>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockListItem>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockMap>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockMathematicalExpression>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockParagraph>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockPhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockPreformatted>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockPullQuotation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockSectionHeading>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockSlideshow>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockTable>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockTableCell>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockThinking>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockVideo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockVoiceNote>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichMessage>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichMessageButton>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichText>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextAnchor>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextAnchorLink>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextBankCardNumber>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextBold>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextBotCommand>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextButton>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextCashtag>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextCode>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextCustomEmoji>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextDateTime>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextEmailAddress>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextHashtag>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextItalic>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextMarked>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextMathematicalExpression>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextMention>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextPhoneNumber>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextReference>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextReferenceLink>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextSpoiler>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextStrikethrough>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextSubscript>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextSuperscript>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextTextMention>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextUnderline>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextUrl>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SentGuestMessage>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SentWebAppMessage>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SharedUser>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ShippingAddress>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ShippingOption>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ShippingQuery>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StarAmount>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StarTransaction>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StarTransactions>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Sticker>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StickerSet>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Story>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryArea>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaPosition>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeLink>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeLocation>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeUniqueGift>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeWeather>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SuccessfulPayment>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostApprovalFailed>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostApproved>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostDeclined>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostInfo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostPaid>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostParameters>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostPrice>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostRefunded>;

template <>
struct Deserializer<::TelegramBotAPI::Type::SwitchInlineQueryChosenChat>;

template <>
struct Deserializer<::TelegramBotAPI::Type::TextQuote>;

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram>;

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerChat>;

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerFragment>;

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerOther>;

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerTelegramAds>;

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerTelegramApi>;

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerUser>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGift>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftBackdrop>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftBackdropColors>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftColors>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftInfo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftModel>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftSymbol>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Update>;

template <>
struct Deserializer<::TelegramBotAPI::Type::User>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UserChatBoosts>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UserProfileAudios>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UserProfilePhotos>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UserRating>;

template <>
struct Deserializer<::TelegramBotAPI::Type::UsersShared>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Venue>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Video>;

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatEnded>;

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatParticipantsInvited>;

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatScheduled>;

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatStarted>;

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoNote>;

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoQuality>;

template <>
struct Deserializer<::TelegramBotAPI::Type::Voice>;

template <>
struct Deserializer<::TelegramBotAPI::Type::WebAppData>;

template <>
struct Deserializer<::TelegramBotAPI::Type::WebAppInfo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::WebhookInfo>;

template <>
struct Deserializer<::TelegramBotAPI::Type::WriteAccessAllowed>;

template <>
struct Deserializer<::TelegramBotAPI::Type::OkResponse>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ErrorResponse>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputFile>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFill>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundType>;

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScope>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSource>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMember>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResult>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMedia>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMessageContent>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMedia>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPollMedia>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPollOptionMedia>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputProfilePhoto>;

template <>
struct Deserializer<::TelegramBotAPI::Type::InputStoryContent>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MaybeInaccessibleMessage>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButton>;

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOrigin>;

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGift>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMedia>;

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementError>;

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionType>;

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalState>;

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaType>;

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartner>;

template <>
struct Deserializer<::TelegramBotAPI::Type::AcceptedGiftTypes>
{
    static ::TelegramBotAPI::Type::AcceptedGiftTypes Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::AcceptedGiftTypes Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("unlimited_gifts"))
        {
            Result.UnlimitedGifts =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: unlimited_gifts"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("limited_gifts"))
        {
            Result.LimitedGifts =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: limited_gifts"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unique_gifts"))
        {
            Result.UniqueGifts =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: unique_gifts"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("premium_subscription"))
        {
            Result.PremiumSubscription =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: premium_subscription"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gifts_from_channels"))
        {
            Result.GiftsFromChannels =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: gifts_from_channels"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::AffiliateInfo>
{
    static ::TelegramBotAPI::Type::AffiliateInfo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::AffiliateInfo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("affiliate_user"))
        {
            Result.AffiliateUser =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("affiliate_chat"))
        {
            Result.AffiliateChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("commission_per_mille"))
        {
            Result.CommissionPerMille =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: commission_per_mille"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("amount"))
        {
            Result.Amount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: amount"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("nanostar_amount"))
        {
            Result.NanostarAmount =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Animation>
{
    static ::TelegramBotAPI::Type::Animation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Animation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: width"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: height"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: duration"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<::TelegramBotAPI::Type::PhotoSize>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_name"))
        {
            Result.FileName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mime_type"))
        {
            Result.MimeType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Audio>
{
    static ::TelegramBotAPI::Type::Audio Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Audio Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: duration"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("performer"))
        {
            Result.Performer =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_name"))
        {
            Result.FileName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mime_type"))
        {
            Result.MimeType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<::TelegramBotAPI::Type::PhotoSize>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFillFreeformGradient>
{
    static ::TelegramBotAPI::Type::BackgroundFillFreeformGradient Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BackgroundFillFreeformGradient Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("colors"))
        {
            Result.Colors =
                FromJson<std::vector<long long>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: colors"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFillGradient>
{
    static ::TelegramBotAPI::Type::BackgroundFillGradient Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BackgroundFillGradient Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("top_color"))
        {
            Result.TopColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: top_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("bottom_color"))
        {
            Result.BottomColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: bottom_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rotation_angle"))
        {
            Result.RotationAngle =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: rotation_angle"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFillSolid>
{
    static ::TelegramBotAPI::Type::BackgroundFillSolid Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BackgroundFillSolid Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("color"))
        {
            Result.Color =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: color"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypeChatTheme>
{
    static ::TelegramBotAPI::Type::BackgroundTypeChatTheme Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BackgroundTypeChatTheme Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("theme_name"))
        {
            Result.ThemeName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: theme_name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypeFill>
{
    static ::TelegramBotAPI::Type::BackgroundTypeFill Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BackgroundTypeFill Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("fill"))
        {
            Result.Fill =
                FromJson<::TelegramBotAPI::Type::BackgroundFill>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: fill"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("dark_theme_dimming"))
        {
            Result.DarkThemeDimming =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: dark_theme_dimming"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypePattern>
{
    static ::TelegramBotAPI::Type::BackgroundTypePattern Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BackgroundTypePattern Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("document"))
        {
            Result.Document =
                FromJson<::TelegramBotAPI::Type::Document>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: document"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("fill"))
        {
            Result.Fill =
                FromJson<::TelegramBotAPI::Type::BackgroundFill>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: fill"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("intensity"))
        {
            Result.Intensity =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: intensity"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_inverted"))
        {
            Result.IsInverted =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_moving"))
        {
            Result.IsMoving =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypeWallpaper>
{
    static ::TelegramBotAPI::Type::BackgroundTypeWallpaper Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BackgroundTypeWallpaper Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("document"))
        {
            Result.Document =
                FromJson<::TelegramBotAPI::Type::Document>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: document"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("dark_theme_dimming"))
        {
            Result.DarkThemeDimming =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: dark_theme_dimming"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_blurred"))
        {
            Result.IsBlurred =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_moving"))
        {
            Result.IsMoving =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Birthdate>
{
    static ::TelegramBotAPI::Type::Birthdate Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Birthdate Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("day"))
        {
            Result.Day =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: day"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("month"))
        {
            Result.Month =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: month"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("year"))
        {
            Result.Year =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotAccessSettings>
{
    static ::TelegramBotAPI::Type::BotAccessSettings Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotAccessSettings Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("is_access_restricted"))
        {
            Result.IsAccessRestricted =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_access_restricted"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("added_users"))
        {
            Result.AddedUsers =
                FromJson<std::vector<::TelegramBotAPI::Type::User>>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommand>
{
    static ::TelegramBotAPI::Type::BotCommand Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotCommand Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("command"))
        {
            Result.Command =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: command"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: description"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_ephemeral"))
        {
            Result.IsEphemeral =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators>
{
    static ::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllGroupChats>
{
    static ::TelegramBotAPI::Type::BotCommandScopeAllGroupChats Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotCommandScopeAllGroupChats Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats>
{
    static ::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeChat>
{
    static ::TelegramBotAPI::Type::BotCommandScopeChat Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotCommandScopeChat Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_id"))
        {
            Result.ChatID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat_id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeChatAdministrators>
{
    static ::TelegramBotAPI::Type::BotCommandScopeChatAdministrators Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotCommandScopeChatAdministrators Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_id"))
        {
            Result.ChatID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat_id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeChatMember>
{
    static ::TelegramBotAPI::Type::BotCommandScopeChatMember Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotCommandScopeChatMember Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_id"))
        {
            Result.ChatID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user_id"))
        {
            Result.UserID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user_id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeDefault>
{
    static ::TelegramBotAPI::Type::BotCommandScopeDefault Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotCommandScopeDefault Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotDescription>
{
    static ::TelegramBotAPI::Type::BotDescription Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotDescription Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: description"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotName>
{
    static ::TelegramBotAPI::Type::BotName Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotName Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotShortDescription>
{
    static ::TelegramBotAPI::Type::BotShortDescription Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotShortDescription Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("short_description"))
        {
            Result.ShortDescription =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: short_description"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotSubscriptionUpdated>
{
    static ::TelegramBotAPI::Type::BotSubscriptionUpdated Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BotSubscriptionUpdated Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invoice_payload"))
        {
            Result.InvoicePayload =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: invoice_payload"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("state"))
        {
            Result.State =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: state"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessBotRights>
{
    static ::TelegramBotAPI::Type::BusinessBotRights Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BusinessBotRights Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("can_reply"))
        {
            Result.CanReply =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_read_messages"))
        {
            Result.CanReadMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_delete_sent_messages"))
        {
            Result.CanDeleteSentMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_delete_all_messages"))
        {
            Result.CanDeleteAllMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_edit_name"))
        {
            Result.CanEditName =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_edit_bio"))
        {
            Result.CanEditBio =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_edit_profile_photo"))
        {
            Result.CanEditProfilePhoto =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_edit_username"))
        {
            Result.CanEditUserName =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_change_gift_settings"))
        {
            Result.CanChangeGiftSettings =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_view_gifts_and_stars"))
        {
            Result.CanViewGiftsAndStars =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_convert_gifts_to_stars"))
        {
            Result.CanConvertGiftsToStars =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_transfer_and_upgrade_gifts"))
        {
            Result.CanTransferAndUpgradeGifts =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_transfer_stars"))
        {
            Result.CanTransferStars =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_stories"))
        {
            Result.CanManageStories =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessConnection>
{
    static ::TelegramBotAPI::Type::BusinessConnection Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BusinessConnection Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user_chat_id"))
        {
            Result.UserChatID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user_chat_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rights"))
        {
            Result.Rights =
                FromJson<::TelegramBotAPI::Type::BusinessBotRights>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_enabled"))
        {
            Result.IsEnabled =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_enabled"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessIntro>
{
    static ::TelegramBotAPI::Type::BusinessIntro Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BusinessIntro Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sticker"))
        {
            Result.Sticker =
                FromJson<::TelegramBotAPI::Type::Sticker>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessLocation>
{
    static ::TelegramBotAPI::Type::BusinessLocation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BusinessLocation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("address"))
        {
            Result.Address =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: address"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::Location>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessMessagesDeleted>
{
    static ::TelegramBotAPI::Type::BusinessMessagesDeleted Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BusinessMessagesDeleted Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("business_connection_id"))
        {
            Result.BusinessConnectionID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: business_connection_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_ids"))
        {
            Result.MessageIDs =
                FromJson<std::vector<long long>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message_ids"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessOpeningHours>
{
    static ::TelegramBotAPI::Type::BusinessOpeningHours Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BusinessOpeningHours Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("time_zone_name"))
        {
            Result.TimeZoneName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: time_zone_name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("opening_hours"))
        {
            Result.OpeningHours =
                FromJson<std::vector<::TelegramBotAPI::Type::BusinessOpeningHoursInterval>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: opening_hours"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessOpeningHoursInterval>
{
    static ::TelegramBotAPI::Type::BusinessOpeningHoursInterval Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::BusinessOpeningHoursInterval Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("opening_minute"))
        {
            Result.OpeningMinute =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: opening_minute"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("closing_minute"))
        {
            Result.ClosingMinute =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: closing_minute"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CallbackGame>
{
    static ::TelegramBotAPI::Type::CallbackGame Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::CallbackGame Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CallbackQuery>
{
    static ::TelegramBotAPI::Type::CallbackQuery Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::CallbackQuery Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("from"))
        {
            Result.From =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: from"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<::TelegramBotAPI::Type::MaybeInaccessibleMessage>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("inline_message_id"))
        {
            Result.InlineMessageID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_instance"))
        {
            Result.ChatInstance =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat_instance"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("data"))
        {
            Result.Data =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("game_short_name"))
        {
            Result.GameShortName =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Chat>
{
    static ::TelegramBotAPI::Type::Chat Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Chat Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("username"))
        {
            Result.UserName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("first_name"))
        {
            Result.FirstName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_name"))
        {
            Result.LastName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_forum"))
        {
            Result.IsForum =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_direct_messages"))
        {
            Result.IsDirectMessages =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatAdministratorRights>
{
    static ::TelegramBotAPI::Type::ChatAdministratorRights Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatAdministratorRights Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("is_anonymous"))
        {
            Result.IsAnonymous =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_anonymous"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_chat"))
        {
            Result.CanManageChat =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_manage_chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_delete_messages"))
        {
            Result.CanDeleteMessages =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_delete_messages"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_video_chats"))
        {
            Result.CanManageVideoChats =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_manage_video_chats"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_restrict_members"))
        {
            Result.CanRestrictMembers =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_restrict_members"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_promote_members"))
        {
            Result.CanPromoteMembers =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_promote_members"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_change_info"))
        {
            Result.CanChangeInfo =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_change_info"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_invite_users"))
        {
            Result.CanInviteUsers =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_invite_users"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_post_stories"))
        {
            Result.CanPostStories =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_post_stories"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_edit_stories"))
        {
            Result.CanEditStories =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_edit_stories"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_delete_stories"))
        {
            Result.CanDeleteStories =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_delete_stories"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_post_messages"))
        {
            Result.CanPostMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_edit_messages"))
        {
            Result.CanEditMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_pin_messages"))
        {
            Result.CanPinMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_topics"))
        {
            Result.CanManageTopics =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_direct_messages"))
        {
            Result.CanManageDirectMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_tags"))
        {
            Result.CanManageTags =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_welcome_messages"))
        {
            Result.CanSendWelcomeMessages =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_welcome_messages"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBackground>
{
    static ::TelegramBotAPI::Type::ChatBackground Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatBackground Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<::TelegramBotAPI::Type::BackgroundType>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoost>
{
    static ::TelegramBotAPI::Type::ChatBoost Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatBoost Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("boost_id"))
        {
            Result.BoostID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: boost_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("add_date"))
        {
            Result.AddDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: add_date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("expiration_date"))
        {
            Result.ExpirationDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: expiration_date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<::TelegramBotAPI::Type::ChatBoostSource>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostAdded>
{
    static ::TelegramBotAPI::Type::ChatBoostAdded Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatBoostAdded Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("boost_count"))
        {
            Result.BoostCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: boost_count"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostRemoved>
{
    static ::TelegramBotAPI::Type::ChatBoostRemoved Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatBoostRemoved Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("boost_id"))
        {
            Result.BoostID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: boost_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("remove_date"))
        {
            Result.RemoveDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: remove_date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<::TelegramBotAPI::Type::ChatBoostSource>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSourceGiftCode>
{
    static ::TelegramBotAPI::Type::ChatBoostSourceGiftCode Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatBoostSourceGiftCode Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSourceGiveaway>
{
    static ::TelegramBotAPI::Type::ChatBoostSourceGiveaway Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatBoostSourceGiveaway Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("giveaway_message_id"))
        {
            Result.GiveawayMessageID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: giveaway_message_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prize_star_count"))
        {
            Result.PrizeStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_unclaimed"))
        {
            Result.IsUnclaimed =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSourcePremium>
{
    static ::TelegramBotAPI::Type::ChatBoostSourcePremium Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatBoostSourcePremium Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostUpdated>
{
    static ::TelegramBotAPI::Type::ChatBoostUpdated Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatBoostUpdated Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("boost"))
        {
            Result.Boost =
                FromJson<::TelegramBotAPI::Type::ChatBoost>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: boost"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatFullInfo>
{
    static ::TelegramBotAPI::Type::ChatFullInfo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatFullInfo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("username"))
        {
            Result.UserName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("first_name"))
        {
            Result.FirstName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_name"))
        {
            Result.LastName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_forum"))
        {
            Result.IsForum =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_direct_messages"))
        {
            Result.IsDirectMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("accent_color_id"))
        {
            Result.AccentColorID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: accent_color_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("max_reaction_count"))
        {
            Result.MaxReactionCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: max_reaction_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<::TelegramBotAPI::Type::ChatPhoto>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("active_usernames"))
        {
            Result.ActiveUsernames =
                FromJson<std::vector<std::string>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("birthdate"))
        {
            Result.Birthdate =
                FromJson<::TelegramBotAPI::Type::Birthdate>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("business_intro"))
        {
            Result.BusinessIntro =
                FromJson<::TelegramBotAPI::Type::BusinessIntro>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("business_location"))
        {
            Result.BusinessLocation =
                FromJson<::TelegramBotAPI::Type::BusinessLocation>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("business_opening_hours"))
        {
            Result.BusinessOpeningHours =
                FromJson<::TelegramBotAPI::Type::BusinessOpeningHours>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("personal_chat"))
        {
            Result.PersonalChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parent_chat"))
        {
            Result.ParentChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("available_reactions"))
        {
            Result.AvailableReactions =
                FromJson<std::vector<std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("background_custom_emoji_id"))
        {
            Result.BackgroundCustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("profile_accent_color_id"))
        {
            Result.ProfileAccentColorID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("profile_background_custom_emoji_id"))
        {
            Result.ProfileBackgroundCustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("emoji_status_custom_emoji_id"))
        {
            Result.EmojiStatusCustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("emoji_status_expiration_date"))
        {
            Result.EmojiStatusExpirationDate =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("bio"))
        {
            Result.Bio =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_private_forwards"))
        {
            Result.HasPrivateForwards =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_restricted_voice_and_video_messages"))
        {
            Result.HasRestrictedVoiceAndVideoMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("join_to_send_messages"))
        {
            Result.JoinToSendMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("join_by_request"))
        {
            Result.JoinByRequest =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invite_link"))
        {
            Result.InviteLink =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("pinned_message"))
        {
            Result.PinnedMessage =
                FromJson<::TelegramBotAPI::Type::Message>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("permissions"))
        {
            Result.Permissions =
                FromJson<::TelegramBotAPI::Type::ChatPermissions>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("accepted_gift_types"))
        {
            Result.AcceptedGiftTypes =
                FromJson<::TelegramBotAPI::Type::AcceptedGiftTypes>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: accepted_gift_types"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_paid_media"))
        {
            Result.CanSendPaidMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("slow_mode_delay"))
        {
            Result.SlowModeDelay =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unrestrict_boost_count"))
        {
            Result.UnrestrictBoostCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_auto_delete_time"))
        {
            Result.MessageAutoDeleteTime =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_aggressive_anti_spam_enabled"))
        {
            Result.HasAggressiveAntiSpamEnabled =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_hidden_members"))
        {
            Result.HasHiddenMembers =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_protected_content"))
        {
            Result.HasProtectedContent =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_visible_history"))
        {
            Result.HasVisibleHistory =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sticker_set_name"))
        {
            Result.StickerSetName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_set_sticker_set"))
        {
            Result.CanSetStickerSet =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("custom_emoji_sticker_set_name"))
        {
            Result.CustomEmojiStickerSetName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("linked_chat_id"))
        {
            Result.LinkedChatID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::ChatLocation>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rating"))
        {
            Result.Rating =
                FromJson<::TelegramBotAPI::Type::UserRating>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("first_profile_audio"))
        {
            Result.FirstProfileAudio =
                FromJson<::TelegramBotAPI::Type::Audio>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unique_gift_colors"))
        {
            Result.UniqueGiftColors =
                FromJson<::TelegramBotAPI::Type::UniqueGiftColors>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("paid_message_star_count"))
        {
            Result.PaidMessageStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("guard_bot"))
        {
            Result.GuardBot =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("community"))
        {
            Result.Community =
                FromJson<::TelegramBotAPI::Type::Community>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatInviteLink>
{
    static ::TelegramBotAPI::Type::ChatInviteLink Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatInviteLink Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("invite_link"))
        {
            Result.InviteLink =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: invite_link"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("creator"))
        {
            Result.Creator =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: creator"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("creates_join_request"))
        {
            Result.CreatesJoinRequest =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: creates_join_request"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_primary"))
        {
            Result.IsPrimary =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_primary"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_revoked"))
        {
            Result.IsRevoked =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_revoked"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("expire_date"))
        {
            Result.ExpireDate =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("member_limit"))
        {
            Result.MemberLimit =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("pending_join_request_count"))
        {
            Result.PendingJoinRequestCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("subscription_period"))
        {
            Result.SubscriptionPeriod =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("subscription_price"))
        {
            Result.SubscriptionPrice =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatJoinRequest>
{
    static ::TelegramBotAPI::Type::ChatJoinRequest Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatJoinRequest Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("from"))
        {
            Result.From =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: from"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user_chat_id"))
        {
            Result.UserChatID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user_chat_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("bio"))
        {
            Result.Bio =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invite_link"))
        {
            Result.InviteLink =
                FromJson<::TelegramBotAPI::Type::ChatInviteLink>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("query_id"))
        {
            Result.QueryID =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatLocation>
{
    static ::TelegramBotAPI::Type::ChatLocation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatLocation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::Location>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: location"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("address"))
        {
            Result.Address =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: address"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberAdministrator>
{
    static ::TelegramBotAPI::Type::ChatMemberAdministrator Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatMemberAdministrator Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("status"))
        {
            Result.Status =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: status"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_be_edited"))
        {
            Result.CanBeEdited =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_be_edited"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_anonymous"))
        {
            Result.IsAnonymous =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_anonymous"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_chat"))
        {
            Result.CanManageChat =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_manage_chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_delete_messages"))
        {
            Result.CanDeleteMessages =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_delete_messages"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_video_chats"))
        {
            Result.CanManageVideoChats =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_manage_video_chats"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_restrict_members"))
        {
            Result.CanRestrictMembers =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_restrict_members"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_promote_members"))
        {
            Result.CanPromoteMembers =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_promote_members"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_change_info"))
        {
            Result.CanChangeInfo =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_change_info"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_invite_users"))
        {
            Result.CanInviteUsers =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_invite_users"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_post_stories"))
        {
            Result.CanPostStories =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_post_stories"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_edit_stories"))
        {
            Result.CanEditStories =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_edit_stories"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_delete_stories"))
        {
            Result.CanDeleteStories =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_delete_stories"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_post_messages"))
        {
            Result.CanPostMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_edit_messages"))
        {
            Result.CanEditMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_pin_messages"))
        {
            Result.CanPinMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_topics"))
        {
            Result.CanManageTopics =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_direct_messages"))
        {
            Result.CanManageDirectMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_tags"))
        {
            Result.CanManageTags =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_welcome_messages"))
        {
            Result.CanSendWelcomeMessages =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_welcome_messages"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("custom_title"))
        {
            Result.CustomTitle =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberBanned>
{
    static ::TelegramBotAPI::Type::ChatMemberBanned Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatMemberBanned Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("status"))
        {
            Result.Status =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: status"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("until_date"))
        {
            Result.UntilDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: until_date"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberLeft>
{
    static ::TelegramBotAPI::Type::ChatMemberLeft Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatMemberLeft Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("status"))
        {
            Result.Status =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: status"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberMember>
{
    static ::TelegramBotAPI::Type::ChatMemberMember Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatMemberMember Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("status"))
        {
            Result.Status =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: status"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("tag"))
        {
            Result.Tag =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("until_date"))
        {
            Result.UntilDate =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberOwner>
{
    static ::TelegramBotAPI::Type::ChatMemberOwner Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatMemberOwner Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("status"))
        {
            Result.Status =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: status"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_anonymous"))
        {
            Result.IsAnonymous =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_anonymous"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("custom_title"))
        {
            Result.CustomTitle =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberRestricted>
{
    static ::TelegramBotAPI::Type::ChatMemberRestricted Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatMemberRestricted Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("status"))
        {
            Result.Status =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: status"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("tag"))
        {
            Result.Tag =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_member"))
        {
            Result.IsMember =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_member"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_messages"))
        {
            Result.CanSendMessages =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_messages"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_audios"))
        {
            Result.CanSendAudios =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_audios"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_documents"))
        {
            Result.CanSendDocuments =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_documents"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_photos"))
        {
            Result.CanSendPhotos =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_photos"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_videos"))
        {
            Result.CanSendVideos =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_videos"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_video_notes"))
        {
            Result.CanSendVideoNotes =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_video_notes"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_voice_notes"))
        {
            Result.CanSendVoiceNotes =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_voice_notes"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_polls"))
        {
            Result.CanSendPolls =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_polls"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_other_messages"))
        {
            Result.CanSendOtherMessages =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_send_other_messages"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_add_web_page_previews"))
        {
            Result.CanAddWebPagePreviews =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_add_web_page_previews"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_react_to_messages"))
        {
            Result.CanReactToMessages =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_react_to_messages"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_edit_tag"))
        {
            Result.CanEditTag =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_edit_tag"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_change_info"))
        {
            Result.CanChangeInfo =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_change_info"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_invite_users"))
        {
            Result.CanInviteUsers =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_invite_users"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_pin_messages"))
        {
            Result.CanPinMessages =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_pin_messages"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_topics"))
        {
            Result.CanManageTopics =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: can_manage_topics"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("until_date"))
        {
            Result.UntilDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: until_date"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberUpdated>
{
    static ::TelegramBotAPI::Type::ChatMemberUpdated Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatMemberUpdated Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("from"))
        {
            Result.From =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: from"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("old_chat_member"))
        {
            Result.OldChatMember =
                FromJson<::TelegramBotAPI::Type::ChatMember>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: old_chat_member"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("new_chat_member"))
        {
            Result.NewChatMember =
                FromJson<::TelegramBotAPI::Type::ChatMember>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: new_chat_member"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invite_link"))
        {
            Result.InviteLink =
                FromJson<::TelegramBotAPI::Type::ChatInviteLink>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("via_join_request"))
        {
            Result.ViaJoinRequest =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("via_chat_folder_invite_link"))
        {
            Result.ViaChatFolderInviteLink =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatOwnerChanged>
{
    static ::TelegramBotAPI::Type::ChatOwnerChanged Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatOwnerChanged Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("new_owner"))
        {
            Result.NewOwner =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: new_owner"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatOwnerLeft>
{
    static ::TelegramBotAPI::Type::ChatOwnerLeft Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatOwnerLeft Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("new_owner"))
        {
            Result.NewOwner =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatPermissions>
{
    static ::TelegramBotAPI::Type::ChatPermissions Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatPermissions Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("can_send_messages"))
        {
            Result.CanSendMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_audios"))
        {
            Result.CanSendAudios =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_documents"))
        {
            Result.CanSendDocuments =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_photos"))
        {
            Result.CanSendPhotos =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_videos"))
        {
            Result.CanSendVideos =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_video_notes"))
        {
            Result.CanSendVideoNotes =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_voice_notes"))
        {
            Result.CanSendVoiceNotes =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_polls"))
        {
            Result.CanSendPolls =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_send_other_messages"))
        {
            Result.CanSendOtherMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_add_web_page_previews"))
        {
            Result.CanAddWebPagePreviews =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_react_to_messages"))
        {
            Result.CanReactToMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_edit_tag"))
        {
            Result.CanEditTag =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_change_info"))
        {
            Result.CanChangeInfo =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_invite_users"))
        {
            Result.CanInviteUsers =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_pin_messages"))
        {
            Result.CanPinMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_topics"))
        {
            Result.CanManageTopics =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatPhoto>
{
    static ::TelegramBotAPI::Type::ChatPhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatPhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("small_file_id"))
        {
            Result.SmallFileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: small_file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("small_file_unique_id"))
        {
            Result.SmallFileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: small_file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("big_file_id"))
        {
            Result.BigFileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: big_file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("big_file_unique_id"))
        {
            Result.BigFileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: big_file_unique_id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatShared>
{
    static ::TelegramBotAPI::Type::ChatShared Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChatShared Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("request_id"))
        {
            Result.RequestID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: request_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_id"))
        {
            Result.ChatID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("username"))
        {
            Result.UserName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Checklist>
{
    static ::TelegramBotAPI::Type::Checklist Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Checklist Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title_entities"))
        {
            Result.TitleEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("tasks"))
        {
            Result.Tasks =
                FromJson<std::vector<::TelegramBotAPI::Type::ChecklistTask>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: tasks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("others_can_add_tasks"))
        {
            Result.OthersCanAddTasks =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("others_can_mark_tasks_as_done"))
        {
            Result.OthersCanMarkTasksAsDone =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChecklistTask>
{
    static ::TelegramBotAPI::Type::ChecklistTask Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChecklistTask Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text_entities"))
        {
            Result.TextEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("completed_by_user"))
        {
            Result.CompletedByUser =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("completed_by_chat"))
        {
            Result.CompletedByChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("completion_date"))
        {
            Result.CompletionDate =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChecklistTasksAdded>
{
    static ::TelegramBotAPI::Type::ChecklistTasksAdded Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChecklistTasksAdded Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("checklist_message"))
        {
            Result.ChecklistMessage =
                std::make_shared<::TelegramBotAPI::Type::Message>(FromJson<::TelegramBotAPI::Type::Message>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("tasks"))
        {
            Result.Tasks =
                FromJson<std::vector<::TelegramBotAPI::Type::ChecklistTask>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: tasks"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChecklistTasksDone>
{
    static ::TelegramBotAPI::Type::ChecklistTasksDone Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChecklistTasksDone Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("checklist_message"))
        {
            Result.ChecklistMessage =
                std::make_shared<::TelegramBotAPI::Type::Message>(FromJson<::TelegramBotAPI::Type::Message>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("marked_as_done_task_ids"))
        {
            Result.MarkedAsDoneTaskIDs =
                FromJson<std::vector<long long>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("marked_as_not_done_task_ids"))
        {
            Result.MarkedAsNotDoneTaskIDs =
                FromJson<std::vector<long long>>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChosenInlineResult>
{
    static ::TelegramBotAPI::Type::ChosenInlineResult Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ChosenInlineResult Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("result_id"))
        {
            Result.ResultID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: result_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("from"))
        {
            Result.From =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: from"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::Location>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("inline_message_id"))
        {
            Result.InlineMessageID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("query"))
        {
            Result.Query =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: query"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Community>
{
    static ::TelegramBotAPI::Type::Community Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Community Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CommunityChatAdded>
{
    static ::TelegramBotAPI::Type::CommunityChatAdded Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::CommunityChatAdded Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("community"))
        {
            Result.Community =
                FromJson<::TelegramBotAPI::Type::Community>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: community"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CommunityChatJoined>
{
    static ::TelegramBotAPI::Type::CommunityChatJoined Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::CommunityChatJoined Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("community"))
        {
            Result.Community =
                FromJson<::TelegramBotAPI::Type::Community>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: community"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CommunityChatRemoved>
{
    static ::TelegramBotAPI::Type::CommunityChatRemoved Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::CommunityChatRemoved Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Contact>
{
    static ::TelegramBotAPI::Type::Contact Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Contact Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("phone_number"))
        {
            Result.PhoneNumber =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: phone_number"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("first_name"))
        {
            Result.FirstName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: first_name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_name"))
        {
            Result.LastName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user_id"))
        {
            Result.UserID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("vcard"))
        {
            Result.Vcard =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CopyTextButton>
{
    static ::TelegramBotAPI::Type::CopyTextButton Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::CopyTextButton Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Dice>
{
    static ::TelegramBotAPI::Type::Dice Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Dice Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("emoji"))
        {
            Result.Emoji =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: emoji"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("value"))
        {
            Result.Value =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: value"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::DirectMessagePriceChanged>
{
    static ::TelegramBotAPI::Type::DirectMessagePriceChanged Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::DirectMessagePriceChanged Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("are_direct_messages_enabled"))
        {
            Result.AreDirectMessagesEnabled =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: are_direct_messages_enabled"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("direct_message_star_count"))
        {
            Result.DirectMessageStarCount =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::DirectMessagesTopic>
{
    static ::TelegramBotAPI::Type::DirectMessagesTopic Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::DirectMessagesTopic Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("topic_id"))
        {
            Result.TopicID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: topic_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::DisabledButton>
{
    static ::TelegramBotAPI::Type::DisabledButton Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::DisabledButton Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Document>
{
    static ::TelegramBotAPI::Type::Document Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Document Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<::TelegramBotAPI::Type::PhotoSize>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_name"))
        {
            Result.FileName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mime_type"))
        {
            Result.MimeType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::EncryptedCredentials>
{
    static ::TelegramBotAPI::Type::EncryptedCredentials Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::EncryptedCredentials Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("data"))
        {
            Result.Data =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: data"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("hash"))
        {
            Result.Hash =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: hash"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("secret"))
        {
            Result.Secret =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: secret"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::EncryptedPassportElement>
{
    static ::TelegramBotAPI::Type::EncryptedPassportElement Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::EncryptedPassportElement Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("data"))
        {
            Result.Data =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("phone_number"))
        {
            Result.PhoneNumber =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("email"))
        {
            Result.Email =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("files"))
        {
            Result.Files =
                FromJson<std::vector<::TelegramBotAPI::Type::PassportFile>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("front_side"))
        {
            Result.FrontSide =
                FromJson<::TelegramBotAPI::Type::PassportFile>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reverse_side"))
        {
            Result.ReverseSide =
                FromJson<::TelegramBotAPI::Type::PassportFile>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("selfie"))
        {
            Result.Selfie =
                FromJson<::TelegramBotAPI::Type::PassportFile>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("translation"))
        {
            Result.Translation =
                FromJson<std::vector<::TelegramBotAPI::Type::PassportFile>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("hash"))
        {
            Result.Hash =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: hash"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::EphemeralMessageParameters>
{
    static ::TelegramBotAPI::Type::EphemeralMessageParameters Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::EphemeralMessageParameters Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("receiver_user_id"))
        {
            Result.ReceiverUserID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: receiver_user_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("callback_query_id"))
        {
            Result.CallbackQueryID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("replace_callback_query_message"))
        {
            Result.ReplaceCallbackQueryMessage =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ExternalReplyInfo>
{
    static ::TelegramBotAPI::Type::ExternalReplyInfo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ExternalReplyInfo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("origin"))
        {
            Result.Origin =
                FromJson<::TelegramBotAPI::Type::MessageOrigin>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: origin"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_id"))
        {
            Result.MessageID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("link_preview_options"))
        {
            Result.LinkPreviewOptions =
                FromJson<::TelegramBotAPI::Type::LinkPreviewOptions>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("animation"))
        {
            Result.Animation =
                FromJson<::TelegramBotAPI::Type::Animation>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("audio"))
        {
            Result.Audio =
                FromJson<::TelegramBotAPI::Type::Audio>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("document"))
        {
            Result.Document =
                FromJson<::TelegramBotAPI::Type::Document>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("live_photo"))
        {
            Result.LivePhoto =
                FromJson<::TelegramBotAPI::Type::LivePhoto>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("paid_media"))
        {
            Result.PaidMedia =
                FromJson<::TelegramBotAPI::Type::PaidMediaInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sticker"))
        {
            Result.Sticker =
                FromJson<::TelegramBotAPI::Type::Sticker>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("story"))
        {
            Result.Story =
                FromJson<::TelegramBotAPI::Type::Story>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video"))
        {
            Result.Video =
                FromJson<::TelegramBotAPI::Type::Video>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_note"))
        {
            Result.VideoNote =
                FromJson<::TelegramBotAPI::Type::VideoNote>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("voice"))
        {
            Result.Voice =
                FromJson<::TelegramBotAPI::Type::Voice>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_media_spoiler"))
        {
            Result.HasMediaSpoiler =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("checklist"))
        {
            Result.Checklist =
                FromJson<::TelegramBotAPI::Type::Checklist>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("contact"))
        {
            Result.Contact =
                FromJson<::TelegramBotAPI::Type::Contact>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("dice"))
        {
            Result.Dice =
                FromJson<::TelegramBotAPI::Type::Dice>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("game"))
        {
            Result.Game =
                FromJson<::TelegramBotAPI::Type::Game>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("giveaway"))
        {
            Result.Giveaway =
                FromJson<::TelegramBotAPI::Type::Giveaway>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("giveaway_winners"))
        {
            Result.GiveawayWinners =
                FromJson<::TelegramBotAPI::Type::GiveawayWinners>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invoice"))
        {
            Result.Invoice =
                FromJson<::TelegramBotAPI::Type::Invoice>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::Location>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("poll"))
        {
            Result.Poll =
                FromJson<::TelegramBotAPI::Type::Poll>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("venue"))
        {
            Result.Venue =
                FromJson<::TelegramBotAPI::Type::Venue>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::File>
{
    static ::TelegramBotAPI::Type::File Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::File Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_path"))
        {
            Result.FilePath =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForceReply>
{
    static ::TelegramBotAPI::Type::ForceReply Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ForceReply Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("force_reply"))
        {
            Result.ForceReply =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: force_reply"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_field_placeholder"))
        {
            Result.InputFieldPlaceholder =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("selective"))
        {
            Result.Selective =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopic>
{
    static ::TelegramBotAPI::Type::ForumTopic Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ForumTopic Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("message_thread_id"))
        {
            Result.MessageThreadID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message_thread_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("icon_color"))
        {
            Result.IconColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: icon_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("icon_custom_emoji_id"))
        {
            Result.IconCustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_name_implicit"))
        {
            Result.IsNameImplicit =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicClosed>
{
    static ::TelegramBotAPI::Type::ForumTopicClosed Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ForumTopicClosed Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicCreated>
{
    static ::TelegramBotAPI::Type::ForumTopicCreated Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ForumTopicCreated Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("icon_color"))
        {
            Result.IconColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: icon_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("icon_custom_emoji_id"))
        {
            Result.IconCustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_name_implicit"))
        {
            Result.IsNameImplicit =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicEdited>
{
    static ::TelegramBotAPI::Type::ForumTopicEdited Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ForumTopicEdited Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("icon_custom_emoji_id"))
        {
            Result.IconCustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicReopened>
{
    static ::TelegramBotAPI::Type::ForumTopicReopened Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ForumTopicReopened Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Game>
{
    static ::TelegramBotAPI::Type::Game Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Game Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: description"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photo"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text_entities"))
        {
            Result.TextEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("animation"))
        {
            Result.Animation =
                FromJson<::TelegramBotAPI::Type::Animation>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GameHighScore>
{
    static ::TelegramBotAPI::Type::GameHighScore Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::GameHighScore Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("position"))
        {
            Result.Position =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: position"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("score"))
        {
            Result.Score =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: score"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GeneralForumTopicHidden>
{
    static ::TelegramBotAPI::Type::GeneralForumTopicHidden Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::GeneralForumTopicHidden Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GeneralForumTopicUnhidden>
{
    static ::TelegramBotAPI::Type::GeneralForumTopicUnhidden Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::GeneralForumTopicUnhidden Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Gift>
{
    static ::TelegramBotAPI::Type::Gift Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Gift Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sticker"))
        {
            Result.Sticker =
                FromJson<::TelegramBotAPI::Type::Sticker>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: sticker"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("star_count"))
        {
            Result.StarCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: star_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("upgrade_star_count"))
        {
            Result.UpgradeStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_premium"))
        {
            Result.IsPremium =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_colors"))
        {
            Result.HasColors =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("total_count"))
        {
            Result.TotalCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("remaining_count"))
        {
            Result.RemainingCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("personal_total_count"))
        {
            Result.PersonalTotalCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("personal_remaining_count"))
        {
            Result.PersonalRemainingCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("background"))
        {
            Result.Background =
                FromJson<::TelegramBotAPI::Type::GiftBackground>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unique_gift_variant_count"))
        {
            Result.UniqueGiftVariantCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("publisher_chat"))
        {
            Result.PublisherChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GiftBackground>
{
    static ::TelegramBotAPI::Type::GiftBackground Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::GiftBackground Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("center_color"))
        {
            Result.CenterColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: center_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("edge_color"))
        {
            Result.EdgeColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: edge_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text_color"))
        {
            Result.TextColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text_color"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GiftInfo>
{
    static ::TelegramBotAPI::Type::GiftInfo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::GiftInfo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("gift"))
        {
            Result.Gift =
                FromJson<::TelegramBotAPI::Type::Gift>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: gift"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("owned_gift_id"))
        {
            Result.OwnedGiftID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("convert_star_count"))
        {
            Result.ConvertStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prepaid_upgrade_star_count"))
        {
            Result.PrepaidUpgradeStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_upgrade_separate"))
        {
            Result.IsUpgradeSeparate =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_be_upgraded"))
        {
            Result.CanBeUpgraded =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("entities"))
        {
            Result.Entities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_private"))
        {
            Result.IsPrivate =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unique_gift_number"))
        {
            Result.UniqueGiftNumber =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Gifts>
{
    static ::TelegramBotAPI::Type::Gifts Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Gifts Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("gifts"))
        {
            Result.Gifts =
                FromJson<std::vector<::TelegramBotAPI::Type::Gift>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: gifts"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Giveaway>
{
    static ::TelegramBotAPI::Type::Giveaway Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Giveaway Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chats"))
        {
            Result.Chats =
                FromJson<std::vector<::TelegramBotAPI::Type::Chat>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chats"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("winners_selection_date"))
        {
            Result.WinnersSelectionDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: winners_selection_date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("winner_count"))
        {
            Result.WinnerCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: winner_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("only_new_members"))
        {
            Result.OnlyNewMembers =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_public_winners"))
        {
            Result.HasPublicWinners =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prize_description"))
        {
            Result.PrizeDescription =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("country_codes"))
        {
            Result.CountryCodes =
                FromJson<std::vector<std::string>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prize_star_count"))
        {
            Result.PrizeStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("premium_subscription_month_count"))
        {
            Result.PremiumSubscriptionMonthCount =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GiveawayCompleted>
{
    static ::TelegramBotAPI::Type::GiveawayCompleted Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::GiveawayCompleted Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("winner_count"))
        {
            Result.WinnerCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: winner_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unclaimed_prize_count"))
        {
            Result.UnclaimedPrizeCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("giveaway_message"))
        {
            Result.GiveawayMessage =
                std::make_shared<::TelegramBotAPI::Type::Message>(FromJson<::TelegramBotAPI::Type::Message>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_star_giveaway"))
        {
            Result.IsStarGiveaway =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GiveawayCreated>
{
    static ::TelegramBotAPI::Type::GiveawayCreated Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::GiveawayCreated Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("prize_star_count"))
        {
            Result.PrizeStarCount =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GiveawayWinners>
{
    static ::TelegramBotAPI::Type::GiveawayWinners Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::GiveawayWinners Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("giveaway_message_id"))
        {
            Result.GiveawayMessageID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: giveaway_message_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("winners_selection_date"))
        {
            Result.WinnersSelectionDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: winners_selection_date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("winner_count"))
        {
            Result.WinnerCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: winner_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("winners"))
        {
            Result.Winners =
                FromJson<std::vector<::TelegramBotAPI::Type::User>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: winners"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("additional_chat_count"))
        {
            Result.AdditionalChatCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prize_star_count"))
        {
            Result.PrizeStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("premium_subscription_month_count"))
        {
            Result.PremiumSubscriptionMonthCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unclaimed_prize_count"))
        {
            Result.UnclaimedPrizeCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("only_new_members"))
        {
            Result.OnlyNewMembers =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("was_refunded"))
        {
            Result.WasRefunded =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prize_description"))
        {
            Result.PrizeDescription =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InaccessibleMessage>
{
    static ::TelegramBotAPI::Type::InaccessibleMessage Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InaccessibleMessage Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_id"))
        {
            Result.MessageID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineKeyboardButton>
{
    static ::TelegramBotAPI::Type::InlineKeyboardButton Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineKeyboardButton Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("icon_custom_emoji_id"))
        {
            Result.IconCustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("style"))
        {
            Result.Style =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("callback_data"))
        {
            Result.CallbackData =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("web_app"))
        {
            Result.WebApp =
                FromJson<::TelegramBotAPI::Type::WebAppInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("login_url"))
        {
            Result.LoginURL =
                FromJson<::TelegramBotAPI::Type::LoginUrl>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("switch_inline_query"))
        {
            Result.SwitchInlineQuery =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("switch_inline_query_current_chat"))
        {
            Result.SwitchInlineQueryCurrentChat =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("switch_inline_query_chosen_chat"))
        {
            Result.SwitchInlineQueryChosenChat =
                FromJson<::TelegramBotAPI::Type::SwitchInlineQueryChosenChat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("copy_text"))
        {
            Result.CopyText =
                FromJson<::TelegramBotAPI::Type::CopyTextButton>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("callback_game"))
        {
            Result.CallbackGame =
                FromJson<::TelegramBotAPI::Type::CallbackGame>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("pay"))
        {
            Result.Pay =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("disabled"))
        {
            Result.Disabled =
                FromJson<::TelegramBotAPI::Type::DisabledButton>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineKeyboardMarkup>
{
    static ::TelegramBotAPI::Type::InlineKeyboardMarkup Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineKeyboardMarkup Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("inline_keyboard"))
        {
            Result.InlineKeyboard =
                FromJson<std::vector<std::vector<::TelegramBotAPI::Type::InlineKeyboardButton>>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: inline_keyboard"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("force_reply"))
        {
            Result.ForceReply =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQuery>
{
    static ::TelegramBotAPI::Type::InlineQuery Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQuery Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("from"))
        {
            Result.From =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: from"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("query"))
        {
            Result.Query =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: query"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("offset"))
        {
            Result.Offset =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: offset"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_type"))
        {
            Result.ChatType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::Location>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultArticle>
{
    static ::TelegramBotAPI::Type::InlineQueryResultArticle Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultArticle Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: input_message_content"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_url"))
        {
            Result.ThumbnailURL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_width"))
        {
            Result.ThumbnailWidth =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_height"))
        {
            Result.ThumbnailHeight =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultAudio>
{
    static ::TelegramBotAPI::Type::InlineQueryResultAudio Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultAudio Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("audio_url"))
        {
            Result.AudioURL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: audio_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("performer"))
        {
            Result.Performer =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("audio_duration"))
        {
            Result.AudioDuration =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedAudio>
{
    static ::TelegramBotAPI::Type::InlineQueryResultCachedAudio Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultCachedAudio Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("audio_file_id"))
        {
            Result.AudioFileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: audio_file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedDocument>
{
    static ::TelegramBotAPI::Type::InlineQueryResultCachedDocument Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultCachedDocument Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("document_file_id"))
        {
            Result.DocumentFileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: document_file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedGif>
{
    static ::TelegramBotAPI::Type::InlineQueryResultCachedGif Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultCachedGif Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gif_file_id"))
        {
            Result.GIFFileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: gif_file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif>
{
    static ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mpeg4_file_id"))
        {
            Result.Mpeg4FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: mpeg4_file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedPhoto>
{
    static ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo_file_id"))
        {
            Result.PhotoFileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photo_file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedSticker>
{
    static ::TelegramBotAPI::Type::InlineQueryResultCachedSticker Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultCachedSticker Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sticker_file_id"))
        {
            Result.StickerFileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: sticker_file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedVideo>
{
    static ::TelegramBotAPI::Type::InlineQueryResultCachedVideo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultCachedVideo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_file_id"))
        {
            Result.VideoFileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: video_file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedVoice>
{
    static ::TelegramBotAPI::Type::InlineQueryResultCachedVoice Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultCachedVoice Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("voice_file_id"))
        {
            Result.VoiceFileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: voice_file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultContact>
{
    static ::TelegramBotAPI::Type::InlineQueryResultContact Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultContact Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("phone_number"))
        {
            Result.PhoneNumber =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: phone_number"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("first_name"))
        {
            Result.FirstName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: first_name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_name"))
        {
            Result.LastName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("vcard"))
        {
            Result.Vcard =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_url"))
        {
            Result.ThumbnailURL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_width"))
        {
            Result.ThumbnailWidth =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_height"))
        {
            Result.ThumbnailHeight =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultDocument>
{
    static ::TelegramBotAPI::Type::InlineQueryResultDocument Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultDocument Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("document_url"))
        {
            Result.DocumentURL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: document_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mime_type"))
        {
            Result.MimeType =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: mime_type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_url"))
        {
            Result.ThumbnailURL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_width"))
        {
            Result.ThumbnailWidth =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_height"))
        {
            Result.ThumbnailHeight =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultGame>
{
    static ::TelegramBotAPI::Type::InlineQueryResultGame Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultGame Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("game_short_name"))
        {
            Result.GameShortName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: game_short_name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultGif>
{
    static ::TelegramBotAPI::Type::InlineQueryResultGif Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultGif Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gif_url"))
        {
            Result.GIFURL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: gif_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gif_width"))
        {
            Result.GIFWidth =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gif_height"))
        {
            Result.GIFHeight =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gif_duration"))
        {
            Result.GIFDuration =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_url"))
        {
            Result.ThumbnailURL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: thumbnail_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_mime_type"))
        {
            Result.ThumbnailMimeType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultLocation>
{
    static ::TelegramBotAPI::Type::InlineQueryResultLocation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultLocation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("latitude"))
        {
            Result.Latitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: latitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("longitude"))
        {
            Result.Longitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: longitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("horizontal_accuracy"))
        {
            Result.HorizontalAccuracy =
                FromJson<double>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("live_period"))
        {
            Result.LivePeriod =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("heading"))
        {
            Result.Heading =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("proximity_alert_radius"))
        {
            Result.ProximityAlertRadius =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_url"))
        {
            Result.ThumbnailURL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_width"))
        {
            Result.ThumbnailWidth =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_height"))
        {
            Result.ThumbnailHeight =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif>
{
    static ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mpeg4_url"))
        {
            Result.Mpeg4URL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: mpeg4_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mpeg4_width"))
        {
            Result.Mpeg4Width =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mpeg4_height"))
        {
            Result.Mpeg4Height =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mpeg4_duration"))
        {
            Result.Mpeg4Duration =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_url"))
        {
            Result.ThumbnailURL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: thumbnail_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_mime_type"))
        {
            Result.ThumbnailMimeType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultPhoto>
{
    static ::TelegramBotAPI::Type::InlineQueryResultPhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultPhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo_url"))
        {
            Result.PhotoURL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photo_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_url"))
        {
            Result.ThumbnailURL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: thumbnail_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo_width"))
        {
            Result.PhotoWidth =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo_height"))
        {
            Result.PhotoHeight =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultVenue>
{
    static ::TelegramBotAPI::Type::InlineQueryResultVenue Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultVenue Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("latitude"))
        {
            Result.Latitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: latitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("longitude"))
        {
            Result.Longitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: longitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("address"))
        {
            Result.Address =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: address"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("foursquare_id"))
        {
            Result.FoursquareID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("foursquare_type"))
        {
            Result.FoursquareType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("google_place_id"))
        {
            Result.GooglePlaceID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("google_place_type"))
        {
            Result.GooglePlaceType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_url"))
        {
            Result.ThumbnailURL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_width"))
        {
            Result.ThumbnailWidth =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_height"))
        {
            Result.ThumbnailHeight =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultVideo>
{
    static ::TelegramBotAPI::Type::InlineQueryResultVideo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultVideo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_url"))
        {
            Result.VideoURL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: video_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mime_type"))
        {
            Result.MimeType =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: mime_type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail_url"))
        {
            Result.ThumbnailURL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: thumbnail_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_width"))
        {
            Result.VideoWidth =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_height"))
        {
            Result.VideoHeight =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_duration"))
        {
            Result.VideoDuration =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultVoice>
{
    static ::TelegramBotAPI::Type::InlineQueryResultVoice Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultVoice Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("voice_url"))
        {
            Result.VoiceURL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: voice_url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("voice_duration"))
        {
            Result.VoiceDuration =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_message_content"))
        {
            Result.InputMessageContent =
                FromJson<::TelegramBotAPI::Type::InputMessageContent>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultsButton>
{
    static ::TelegramBotAPI::Type::InlineQueryResultsButton Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InlineQueryResultsButton Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("web_app"))
        {
            Result.WebApp =
                FromJson<::TelegramBotAPI::Type::WebAppInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("start_parameter"))
        {
            Result.StartParameter =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputChecklist>
{
    static ::TelegramBotAPI::Type::InputChecklist Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputChecklist Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title_entities"))
        {
            Result.TitleEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("tasks"))
        {
            Result.Tasks =
                FromJson<std::vector<::TelegramBotAPI::Type::InputChecklistTask>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: tasks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("others_can_add_tasks"))
        {
            Result.OthersCanAddTasks =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("others_can_mark_tasks_as_done"))
        {
            Result.OthersCanMarkTasksAsDone =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputChecklistTask>
{
    static ::TelegramBotAPI::Type::InputChecklistTask Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputChecklistTask Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text_entities"))
        {
            Result.TextEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputContactMessageContent>
{
    static ::TelegramBotAPI::Type::InputContactMessageContent Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputContactMessageContent Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("phone_number"))
        {
            Result.PhoneNumber =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: phone_number"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("first_name"))
        {
            Result.FirstName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: first_name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_name"))
        {
            Result.LastName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("vcard"))
        {
            Result.Vcard =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputInvoiceMessageContent>
{
    static ::TelegramBotAPI::Type::InputInvoiceMessageContent Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputInvoiceMessageContent Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: description"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("payload"))
        {
            Result.Payload =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: payload"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("provider_token"))
        {
            Result.ProviderToken =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("currency"))
        {
            Result.Currency =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: currency"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prices"))
        {
            Result.Prices =
                FromJson<std::vector<::TelegramBotAPI::Type::LabeledPrice>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: prices"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("max_tip_amount"))
        {
            Result.MaxTipAmount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("suggested_tip_amounts"))
        {
            Result.SuggestedTipAmounts =
                FromJson<std::vector<long long>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("provider_data"))
        {
            Result.ProviderData =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo_url"))
        {
            Result.PhotoURL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo_size"))
        {
            Result.PhotoSize =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo_width"))
        {
            Result.PhotoWidth =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo_height"))
        {
            Result.PhotoHeight =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("need_name"))
        {
            Result.NeedName =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("need_phone_number"))
        {
            Result.NeedPhoneNumber =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("need_email"))
        {
            Result.NeedEmail =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("need_shipping_address"))
        {
            Result.NeedShippingAddress =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("send_phone_number_to_provider"))
        {
            Result.SendPhoneNumberToProvider =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("send_email_to_provider"))
        {
            Result.SendEmailToProvider =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_flexible"))
        {
            Result.IsFlexible =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputLocationMessageContent>
{
    static ::TelegramBotAPI::Type::InputLocationMessageContent Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputLocationMessageContent Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("latitude"))
        {
            Result.Latitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: latitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("longitude"))
        {
            Result.Longitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: longitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("horizontal_accuracy"))
        {
            Result.HorizontalAccuracy =
                FromJson<double>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("live_period"))
        {
            Result.LivePeriod =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("heading"))
        {
            Result.Heading =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("proximity_alert_radius"))
        {
            Result.ProximityAlertRadius =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaAnimation>
{
    static ::TelegramBotAPI::Type::InputMediaAnimation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaAnimation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_spoiler"))
        {
            Result.HasSpoiler =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaAudio>
{
    static ::TelegramBotAPI::Type::InputMediaAudio Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaAudio Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("performer"))
        {
            Result.Performer =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaDocument>
{
    static ::TelegramBotAPI::Type::InputMediaDocument Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaDocument Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("disable_content_type_detection"))
        {
            Result.DisableContentTypeDetection =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaLink>
{
    static ::TelegramBotAPI::Type::InputMediaLink Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaLink Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: url"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaLivePhoto>
{
    static ::TelegramBotAPI::Type::InputMediaLivePhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaLivePhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photo"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_spoiler"))
        {
            Result.HasSpoiler =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaLocation>
{
    static ::TelegramBotAPI::Type::InputMediaLocation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaLocation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("latitude"))
        {
            Result.Latitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: latitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("longitude"))
        {
            Result.Longitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: longitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("horizontal_accuracy"))
        {
            Result.HorizontalAccuracy =
                FromJson<double>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaPhoto>
{
    static ::TelegramBotAPI::Type::InputMediaPhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaPhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_spoiler"))
        {
            Result.HasSpoiler =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaSticker>
{
    static ::TelegramBotAPI::Type::InputMediaSticker Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaSticker Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("emoji"))
        {
            Result.Emoji =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaVenue>
{
    static ::TelegramBotAPI::Type::InputMediaVenue Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaVenue Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("latitude"))
        {
            Result.Latitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: latitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("longitude"))
        {
            Result.Longitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: longitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("address"))
        {
            Result.Address =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: address"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("foursquare_id"))
        {
            Result.FoursquareID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("foursquare_type"))
        {
            Result.FoursquareType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("google_place_id"))
        {
            Result.GooglePlaceID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("google_place_type"))
        {
            Result.GooglePlaceType =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaVideo>
{
    static ::TelegramBotAPI::Type::InputMediaVideo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaVideo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("cover"))
        {
            Result.Cover =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("start_timestamp"))
        {
            Result.StartTimestamp =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("supports_streaming"))
        {
            Result.SupportsStreaming =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_spoiler"))
        {
            Result.HasSpoiler =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaVoiceNote>
{
    static ::TelegramBotAPI::Type::InputMediaVoiceNote Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputMediaVoiceNote Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMediaLivePhoto>
{
    static ::TelegramBotAPI::Type::InputPaidMediaLivePhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputPaidMediaLivePhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photo"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMediaPhoto>
{
    static ::TelegramBotAPI::Type::InputPaidMediaPhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputPaidMediaPhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMediaVideo>
{
    static ::TelegramBotAPI::Type::InputPaidMediaVideo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputPaidMediaVideo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("cover"))
        {
            Result.Cover =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("start_timestamp"))
        {
            Result.StartTimestamp =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("supports_streaming"))
        {
            Result.SupportsStreaming =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPollOption>
{
    static ::TelegramBotAPI::Type::InputPollOption Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputPollOption Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text_parse_mode"))
        {
            Result.TextParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text_entities"))
        {
            Result.TextEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<::TelegramBotAPI::Type::InputPollOptionMedia>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputProfilePhotoAnimated>
{
    static ::TelegramBotAPI::Type::InputProfilePhotoAnimated Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputProfilePhotoAnimated Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("animation"))
        {
            Result.Animation =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: animation"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("main_frame_timestamp"))
        {
            Result.MainFrameTimestamp =
                FromJson<double>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputProfilePhotoStatic>
{
    static ::TelegramBotAPI::Type::InputProfilePhotoStatic Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputProfilePhotoStatic Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photo"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlock>
{
    static ::TelegramBotAPI::Type::InputRichBlock Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlock Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockAnchor>
{
    static ::TelegramBotAPI::Type::InputRichBlockAnchor Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockAnchor Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockAnimation>
{
    static ::TelegramBotAPI::Type::InputRichBlockAnimation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockAnimation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("animation"))
        {
            Result.Animation =
                FromJson<::TelegramBotAPI::Type::InputMediaAnimation>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: animation"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockAudio>
{
    static ::TelegramBotAPI::Type::InputRichBlockAudio Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockAudio Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("audio"))
        {
            Result.Audio =
                FromJson<::TelegramBotAPI::Type::InputMediaAudio>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: audio"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockBlockQuotation>
{
    static ::TelegramBotAPI::Type::InputRichBlockBlockQuotation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockBlockQuotation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::InputRichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("credit"))
        {
            Result.Credit =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockButtons>
{
    static ::TelegramBotAPI::Type::InputRichBlockButtons Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockButtons Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("buttons"))
        {
            Result.Buttons =
                FromJson<std::vector<::TelegramBotAPI::Type::RichMessageButton>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: buttons"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("align"))
        {
            Result.Align =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockCollage>
{
    static ::TelegramBotAPI::Type::InputRichBlockCollage Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockCollage Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::InputRichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockDetails>
{
    static ::TelegramBotAPI::Type::InputRichBlockDetails Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockDetails Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("summary"))
        {
            Result.Summary =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: summary"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::InputRichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_open"))
        {
            Result.IsOpen =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockDivider>
{
    static ::TelegramBotAPI::Type::InputRichBlockDivider Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockDivider Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockDocument>
{
    static ::TelegramBotAPI::Type::InputRichBlockDocument Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockDocument Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("document"))
        {
            Result.Document =
                FromJson<::TelegramBotAPI::Type::InputMediaDocument>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: document"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockExpandableBlockQuotation>
{
    static ::TelegramBotAPI::Type::InputRichBlockExpandableBlockQuotation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockExpandableBlockQuotation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("credit"))
        {
            Result.Credit =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockFooter>
{
    static ::TelegramBotAPI::Type::InputRichBlockFooter Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockFooter Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockList>
{
    static ::TelegramBotAPI::Type::InputRichBlockList Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockList Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("items"))
        {
            Result.Items =
                FromJson<std::vector<::TelegramBotAPI::Type::InputRichBlockListItem>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: items"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockListItem>
{
    static ::TelegramBotAPI::Type::InputRichBlockListItem Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockListItem Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::InputRichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_checkbox"))
        {
            Result.HasCheckbox =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_checked"))
        {
            Result.IsChecked =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("value"))
        {
            Result.Value =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockMap>
{
    static ::TelegramBotAPI::Type::InputRichBlockMap Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockMap Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::Location>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: location"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("zoom"))
        {
            Result.Zoom =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockMathematicalExpression>
{
    static ::TelegramBotAPI::Type::InputRichBlockMathematicalExpression Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockMathematicalExpression Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("expression"))
        {
            Result.Expression =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: expression"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockParagraph>
{
    static ::TelegramBotAPI::Type::InputRichBlockParagraph Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockParagraph Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockPhoto>
{
    static ::TelegramBotAPI::Type::InputRichBlockPhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockPhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<::TelegramBotAPI::Type::InputMediaPhoto>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photo"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockPreformatted>
{
    static ::TelegramBotAPI::Type::InputRichBlockPreformatted Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockPreformatted Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("language"))
        {
            Result.Language =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockPullQuotation>
{
    static ::TelegramBotAPI::Type::InputRichBlockPullQuotation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockPullQuotation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("credit"))
        {
            Result.Credit =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockSectionHeading>
{
    static ::TelegramBotAPI::Type::InputRichBlockSectionHeading Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockSectionHeading Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("size"))
        {
            Result.Size =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: size"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockSlideshow>
{
    static ::TelegramBotAPI::Type::InputRichBlockSlideshow Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockSlideshow Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::InputRichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockTable>
{
    static ::TelegramBotAPI::Type::InputRichBlockTable Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockTable Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("cells"))
        {
            Result.Cells =
                FromJson<std::vector<std::vector<::TelegramBotAPI::Type::RichBlockTableCell>>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: cells"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_bordered"))
        {
            Result.IsBordered =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_striped"))
        {
            Result.IsStriped =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_compact"))
        {
            Result.IsCompact =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockThinking>
{
    static ::TelegramBotAPI::Type::InputRichBlockThinking Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockThinking Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockVideo>
{
    static ::TelegramBotAPI::Type::InputRichBlockVideo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockVideo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video"))
        {
            Result.Video =
                FromJson<::TelegramBotAPI::Type::InputMediaVideo>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: video"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockVoiceNote>
{
    static ::TelegramBotAPI::Type::InputRichBlockVoiceNote Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichBlockVoiceNote Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("voice_note"))
        {
            Result.VoiceNote =
                FromJson<::TelegramBotAPI::Type::InputMediaVoiceNote>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: voice_note"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichMessage>
{
    static ::TelegramBotAPI::Type::InputRichMessage Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichMessage Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::InputRichBlock>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("html"))
        {
            Result.HTML =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("markdown"))
        {
            Result.Markdown =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<std::vector<::TelegramBotAPI::Type::InputRichMessageMedia>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_rtl"))
        {
            Result.IsRtl =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("skip_entity_detection"))
        {
            Result.SkipEntityDetection =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichMessageContent>
{
    static ::TelegramBotAPI::Type::InputRichMessageContent Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichMessageContent Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("rich_message"))
        {
            Result.RichMessage =
                FromJson<::TelegramBotAPI::Type::InputRichMessage>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: rich_message"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichMessageMedia>
{
    static ::TelegramBotAPI::Type::InputRichMessageMedia Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputRichMessageMedia Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                ([&]() -> std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo, ::TelegramBotAPI::Type::InputMediaVoiceNote>
        {
            try
            {
                return std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo, ::TelegramBotAPI::Type::InputMediaVoiceNote>(
                    std::in_place_type<::TelegramBotAPI::Type::InputMediaAnimation>,
                    FromJson<::TelegramBotAPI::Type::InputMediaAnimation>(*FieldValue)
                );
            }
            catch (const Detail::DeserializationMismatch&)
            {
            }

            try
            {
                return std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo, ::TelegramBotAPI::Type::InputMediaVoiceNote>(
                    std::in_place_type<::TelegramBotAPI::Type::InputMediaAudio>,
                    FromJson<::TelegramBotAPI::Type::InputMediaAudio>(*FieldValue)
                );
            }
            catch (const Detail::DeserializationMismatch&)
            {
            }

            try
            {
                return std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo, ::TelegramBotAPI::Type::InputMediaVoiceNote>(
                    std::in_place_type<::TelegramBotAPI::Type::InputMediaDocument>,
                    FromJson<::TelegramBotAPI::Type::InputMediaDocument>(*FieldValue)
                );
            }
            catch (const Detail::DeserializationMismatch&)
            {
            }

            try
            {
                return std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo, ::TelegramBotAPI::Type::InputMediaVoiceNote>(
                    std::in_place_type<::TelegramBotAPI::Type::InputMediaPhoto>,
                    FromJson<::TelegramBotAPI::Type::InputMediaPhoto>(*FieldValue)
                );
            }
            catch (const Detail::DeserializationMismatch&)
            {
            }

            try
            {
                return std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo, ::TelegramBotAPI::Type::InputMediaVoiceNote>(
                    std::in_place_type<::TelegramBotAPI::Type::InputMediaVideo>,
                    FromJson<::TelegramBotAPI::Type::InputMediaVideo>(*FieldValue)
                );
            }
            catch (const Detail::DeserializationMismatch&)
            {
            }

            try
            {
                return std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo, ::TelegramBotAPI::Type::InputMediaVoiceNote>(
                    std::in_place_type<::TelegramBotAPI::Type::InputMediaVoiceNote>,
                    FromJson<::TelegramBotAPI::Type::InputMediaVoiceNote>(*FieldValue)
                );
            }
            catch (const Detail::DeserializationMismatch&)
            {
            }

            throw Detail::DeserializationMismatch(
                "No inline union alternative matched"
            );
        })();
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: media"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputSticker>
{
    static ::TelegramBotAPI::Type::InputSticker Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputSticker Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("sticker"))
        {
            Result.Sticker =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: sticker"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("format"))
        {
            Result.Format =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: format"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("emoji_list"))
        {
            Result.EmojiList =
                FromJson<std::vector<std::string>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: emoji_list"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mask_position"))
        {
            Result.MaskPosition =
                FromJson<::TelegramBotAPI::Type::MaskPosition>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("keywords"))
        {
            Result.Keywords =
                FromJson<std::vector<std::string>>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputStoryContentPhoto>
{
    static ::TelegramBotAPI::Type::InputStoryContentPhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputStoryContentPhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photo"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputStoryContentVideo>
{
    static ::TelegramBotAPI::Type::InputStoryContentVideo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputStoryContentVideo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video"))
        {
            Result.Video =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: video"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<double>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("cover_frame_timestamp"))
        {
            Result.CoverFrameTimestamp =
                FromJson<double>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_animation"))
        {
            Result.IsAnimation =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputTextMessageContent>
{
    static ::TelegramBotAPI::Type::InputTextMessageContent Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputTextMessageContent Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("message_text"))
        {
            Result.MessageText =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message_text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parse_mode"))
        {
            Result.ParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("entities"))
        {
            Result.Entities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("link_preview_options"))
        {
            Result.LinkPreviewOptions =
                FromJson<::TelegramBotAPI::Type::LinkPreviewOptions>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputVenueMessageContent>
{
    static ::TelegramBotAPI::Type::InputVenueMessageContent Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::InputVenueMessageContent Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("latitude"))
        {
            Result.Latitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: latitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("longitude"))
        {
            Result.Longitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: longitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("address"))
        {
            Result.Address =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: address"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("foursquare_id"))
        {
            Result.FoursquareID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("foursquare_type"))
        {
            Result.FoursquareType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("google_place_id"))
        {
            Result.GooglePlaceID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("google_place_type"))
        {
            Result.GooglePlaceType =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Invoice>
{
    static ::TelegramBotAPI::Type::Invoice Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Invoice Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: description"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("start_parameter"))
        {
            Result.StartParameter =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: start_parameter"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("currency"))
        {
            Result.Currency =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: currency"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("total_amount"))
        {
            Result.TotalAmount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: total_amount"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButton>
{
    static ::TelegramBotAPI::Type::KeyboardButton Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::KeyboardButton Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("icon_custom_emoji_id"))
        {
            Result.IconCustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("style"))
        {
            Result.Style =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_users"))
        {
            Result.RequestUsers =
                FromJson<::TelegramBotAPI::Type::KeyboardButtonRequestUsers>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_chat"))
        {
            Result.RequestChat =
                FromJson<::TelegramBotAPI::Type::KeyboardButtonRequestChat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_managed_bot"))
        {
            Result.RequestManagedBot =
                FromJson<::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_contact"))
        {
            Result.RequestContact =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_location"))
        {
            Result.RequestLocation =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_poll"))
        {
            Result.RequestPoll =
                FromJson<::TelegramBotAPI::Type::KeyboardButtonPollType>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("web_app"))
        {
            Result.WebApp =
                FromJson<::TelegramBotAPI::Type::WebAppInfo>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonPollType>
{
    static ::TelegramBotAPI::Type::KeyboardButtonPollType Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::KeyboardButtonPollType Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestChat>
{
    static ::TelegramBotAPI::Type::KeyboardButtonRequestChat Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::KeyboardButtonRequestChat Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("request_id"))
        {
            Result.RequestID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: request_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_is_channel"))
        {
            Result.ChatIsChannel =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat_is_channel"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_is_forum"))
        {
            Result.ChatIsForum =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_has_username"))
        {
            Result.ChatHasUserName =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_is_created"))
        {
            Result.ChatIsCreated =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user_administrator_rights"))
        {
            Result.UserAdministratorRights =
                FromJson<::TelegramBotAPI::Type::ChatAdministratorRights>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("bot_administrator_rights"))
        {
            Result.BotAdministratorRights =
                FromJson<::TelegramBotAPI::Type::ChatAdministratorRights>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("bot_is_member"))
        {
            Result.BotIsMember =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_title"))
        {
            Result.RequestTitle =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_username"))
        {
            Result.RequestUserName =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_photo"))
        {
            Result.RequestPhoto =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot>
{
    static ::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("request_id"))
        {
            Result.RequestID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: request_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("suggested_name"))
        {
            Result.SuggestedName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("suggested_username"))
        {
            Result.SuggestedUserName =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestUsers>
{
    static ::TelegramBotAPI::Type::KeyboardButtonRequestUsers Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::KeyboardButtonRequestUsers Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("request_id"))
        {
            Result.RequestID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: request_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user_is_bot"))
        {
            Result.UserIsBot =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user_is_premium"))
        {
            Result.UserIsPremium =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("max_quantity"))
        {
            Result.MaxQuantity =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_name"))
        {
            Result.RequestName =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_username"))
        {
            Result.RequestUserName =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_photo"))
        {
            Result.RequestPhoto =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::LabeledPrice>
{
    static ::TelegramBotAPI::Type::LabeledPrice Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::LabeledPrice Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("label"))
        {
            Result.Label =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: label"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("amount"))
        {
            Result.Amount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: amount"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Link>
{
    static ::TelegramBotAPI::Type::Link Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Link Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: url"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::LinkPreviewOptions>
{
    static ::TelegramBotAPI::Type::LinkPreviewOptions Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::LinkPreviewOptions Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("is_disabled"))
        {
            Result.IsDisabled =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prefer_small_media"))
        {
            Result.PreferSmallMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prefer_large_media"))
        {
            Result.PreferLargeMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_above_text"))
        {
            Result.ShowAboveText =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::LivePhoto>
{
    static ::TelegramBotAPI::Type::LivePhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::LivePhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: width"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: height"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: duration"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mime_type"))
        {
            Result.MimeType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Location>
{
    static ::TelegramBotAPI::Type::Location Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Location Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("latitude"))
        {
            Result.Latitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: latitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("longitude"))
        {
            Result.Longitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: longitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("horizontal_accuracy"))
        {
            Result.HorizontalAccuracy =
                FromJson<double>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("live_period"))
        {
            Result.LivePeriod =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("heading"))
        {
            Result.Heading =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("proximity_alert_radius"))
        {
            Result.ProximityAlertRadius =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::LocationAddress>
{
    static ::TelegramBotAPI::Type::LocationAddress Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::LocationAddress Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("country_code"))
        {
            Result.CountryCode =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: country_code"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("state"))
        {
            Result.State =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("city"))
        {
            Result.City =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("street"))
        {
            Result.Street =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::LoginUrl>
{
    static ::TelegramBotAPI::Type::LoginUrl Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::LoginUrl Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("forward_text"))
        {
            Result.ForwardText =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("bot_username"))
        {
            Result.BotUserName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_write_access"))
        {
            Result.RequestWriteAccess =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ManagedBotCreated>
{
    static ::TelegramBotAPI::Type::ManagedBotCreated Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ManagedBotCreated Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("bot"))
        {
            Result.Bot =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: bot"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ManagedBotUpdated>
{
    static ::TelegramBotAPI::Type::ManagedBotUpdated Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ManagedBotUpdated Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("bot"))
        {
            Result.Bot =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: bot"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MaskPosition>
{
    static ::TelegramBotAPI::Type::MaskPosition Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MaskPosition Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("point"))
        {
            Result.Point =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: point"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("x_shift"))
        {
            Result.XShift =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: x_shift"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("y_shift"))
        {
            Result.YShift =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: y_shift"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("scale"))
        {
            Result.Scale =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: scale"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButtonCommands>
{
    static ::TelegramBotAPI::Type::MenuButtonCommands Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MenuButtonCommands Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButtonDefault>
{
    static ::TelegramBotAPI::Type::MenuButtonDefault Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MenuButtonDefault Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButtonWebApp>
{
    static ::TelegramBotAPI::Type::MenuButtonWebApp Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MenuButtonWebApp Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("web_app"))
        {
            Result.WebApp =
                FromJson<::TelegramBotAPI::Type::WebAppInfo>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: web_app"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Message>
{
    static ::TelegramBotAPI::Type::Message Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Message Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("message_id"))
        {
            Result.MessageID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_thread_id"))
        {
            Result.MessageThreadID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("direct_messages_topic"))
        {
            Result.DirectMessagesTopic =
                FromJson<::TelegramBotAPI::Type::DirectMessagesTopic>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("from"))
        {
            Result.From =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sender_chat"))
        {
            Result.SenderChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sender_boost_count"))
        {
            Result.SenderBoostCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sender_business_bot"))
        {
            Result.SenderBusinessBot =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sender_tag"))
        {
            Result.SenderTag =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("receiver_user"))
        {
            Result.ReceiverUser =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("ephemeral_message_id"))
        {
            Result.EphemeralMessageID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("guest_query_id"))
        {
            Result.GuestQueryID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("business_connection_id"))
        {
            Result.BusinessConnectionID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("forward_origin"))
        {
            Result.ForwardOrigin =
                FromJson<::TelegramBotAPI::Type::MessageOrigin>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_topic_message"))
        {
            Result.IsTopicMessage =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_automatic_forward"))
        {
            Result.IsAutomaticForward =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_to_message"))
        {
            Result.ReplyToMessage =
                std::make_shared<::TelegramBotAPI::Type::Message>(FromJson<::TelegramBotAPI::Type::Message>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("external_reply"))
        {
            Result.ExternalReply =
                FromJson<::TelegramBotAPI::Type::ExternalReplyInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("quote"))
        {
            Result.Quote =
                FromJson<::TelegramBotAPI::Type::TextQuote>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_to_story"))
        {
            Result.ReplyToStory =
                FromJson<::TelegramBotAPI::Type::Story>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_to_checklist_task_id"))
        {
            Result.ReplyToChecklistTaskID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_to_poll_option_id"))
        {
            Result.ReplyToPollOptionID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("via_bot"))
        {
            Result.ViaBot =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("guest_bot_caller_user"))
        {
            Result.GuestBotCallerUser =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("guest_bot_caller_chat"))
        {
            Result.GuestBotCallerChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("edit_date"))
        {
            Result.EditDate =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_protected_content"))
        {
            Result.HasProtectedContent =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_from_offline"))
        {
            Result.IsFromOffline =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_paid_post"))
        {
            Result.IsPaidPost =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media_group_id"))
        {
            Result.MediaGroupID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("author_signature"))
        {
            Result.AuthorSignature =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("paid_star_count"))
        {
            Result.PaidStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("entities"))
        {
            Result.Entities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("link_preview_options"))
        {
            Result.LinkPreviewOptions =
                FromJson<::TelegramBotAPI::Type::LinkPreviewOptions>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_info"))
        {
            Result.SuggestedPostInfo =
                FromJson<::TelegramBotAPI::Type::SuggestedPostInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("effect_id"))
        {
            Result.EffectID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rich_message"))
        {
            Result.RichMessage =
                FromJson<::TelegramBotAPI::Type::RichMessage>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("animation"))
        {
            Result.Animation =
                FromJson<::TelegramBotAPI::Type::Animation>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("audio"))
        {
            Result.Audio =
                FromJson<::TelegramBotAPI::Type::Audio>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("document"))
        {
            Result.Document =
                FromJson<::TelegramBotAPI::Type::Document>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("live_photo"))
        {
            Result.LivePhoto =
                FromJson<::TelegramBotAPI::Type::LivePhoto>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("paid_media"))
        {
            Result.PaidMedia =
                FromJson<::TelegramBotAPI::Type::PaidMediaInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sticker"))
        {
            Result.Sticker =
                FromJson<::TelegramBotAPI::Type::Sticker>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("story"))
        {
            Result.Story =
                FromJson<::TelegramBotAPI::Type::Story>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video"))
        {
            Result.Video =
                FromJson<::TelegramBotAPI::Type::Video>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_note"))
        {
            Result.VideoNote =
                FromJson<::TelegramBotAPI::Type::VideoNote>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("voice"))
        {
            Result.Voice =
                FromJson<::TelegramBotAPI::Type::Voice>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption_entities"))
        {
            Result.CaptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("show_caption_above_media"))
        {
            Result.ShowCaptionAboveMedia =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_media_spoiler"))
        {
            Result.HasMediaSpoiler =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("checklist"))
        {
            Result.Checklist =
                FromJson<::TelegramBotAPI::Type::Checklist>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("contact"))
        {
            Result.Contact =
                FromJson<::TelegramBotAPI::Type::Contact>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("dice"))
        {
            Result.Dice =
                FromJson<::TelegramBotAPI::Type::Dice>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("game"))
        {
            Result.Game =
                FromJson<::TelegramBotAPI::Type::Game>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("poll"))
        {
            Result.Poll =
                FromJson<::TelegramBotAPI::Type::Poll>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("venue"))
        {
            Result.Venue =
                FromJson<::TelegramBotAPI::Type::Venue>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::Location>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("new_chat_members"))
        {
            Result.NewChatMembers =
                FromJson<std::vector<::TelegramBotAPI::Type::User>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("left_chat_member"))
        {
            Result.LeftChatMember =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_owner_left"))
        {
            Result.ChatOwnerLeft =
                FromJson<::TelegramBotAPI::Type::ChatOwnerLeft>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_owner_changed"))
        {
            Result.ChatOwnerChanged =
                FromJson<::TelegramBotAPI::Type::ChatOwnerChanged>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("new_chat_title"))
        {
            Result.NewChatTitle =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("new_chat_photo"))
        {
            Result.NewChatPhoto =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("delete_chat_photo"))
        {
            Result.DeleteChatPhoto =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("group_chat_created"))
        {
            Result.GroupChatCreated =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("supergroup_chat_created"))
        {
            Result.SupergroupChatCreated =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("channel_chat_created"))
        {
            Result.ChannelChatCreated =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_auto_delete_timer_changed"))
        {
            Result.MessageAutoDeleteTimerChanged =
                FromJson<::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("migrate_to_chat_id"))
        {
            Result.MigrateToChatID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("migrate_from_chat_id"))
        {
            Result.MigrateFromChatID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("pinned_message"))
        {
            Result.PinnedMessage =
                FromJson<::TelegramBotAPI::Type::MaybeInaccessibleMessage>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invoice"))
        {
            Result.Invoice =
                FromJson<::TelegramBotAPI::Type::Invoice>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("successful_payment"))
        {
            Result.SuccessfulPayment =
                FromJson<::TelegramBotAPI::Type::SuccessfulPayment>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("refunded_payment"))
        {
            Result.RefundedPayment =
                FromJson<::TelegramBotAPI::Type::RefundedPayment>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("users_shared"))
        {
            Result.UsersShared =
                FromJson<::TelegramBotAPI::Type::UsersShared>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_shared"))
        {
            Result.ChatShared =
                FromJson<::TelegramBotAPI::Type::ChatShared>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gift"))
        {
            Result.Gift =
                FromJson<::TelegramBotAPI::Type::GiftInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unique_gift"))
        {
            Result.UniqueGift =
                FromJson<::TelegramBotAPI::Type::UniqueGiftInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gift_upgrade_sent"))
        {
            Result.GiftUpgradeSent =
                FromJson<::TelegramBotAPI::Type::GiftInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("connected_website"))
        {
            Result.ConnectedWebsite =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("write_access_allowed"))
        {
            Result.WriteAccessAllowed =
                FromJson<::TelegramBotAPI::Type::WriteAccessAllowed>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("passport_data"))
        {
            Result.PassportData =
                FromJson<::TelegramBotAPI::Type::PassportData>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("proximity_alert_triggered"))
        {
            Result.ProximityAlertTriggered =
                FromJson<::TelegramBotAPI::Type::ProximityAlertTriggered>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("boost_added"))
        {
            Result.BoostAdded =
                FromJson<::TelegramBotAPI::Type::ChatBoostAdded>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_background_set"))
        {
            Result.ChatBackgroundSet =
                FromJson<::TelegramBotAPI::Type::ChatBackground>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("checklist_tasks_done"))
        {
            Result.ChecklistTasksDone =
                std::make_shared<::TelegramBotAPI::Type::ChecklistTasksDone>(FromJson<::TelegramBotAPI::Type::ChecklistTasksDone>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("checklist_tasks_added"))
        {
            Result.ChecklistTasksAdded =
                std::make_shared<::TelegramBotAPI::Type::ChecklistTasksAdded>(FromJson<::TelegramBotAPI::Type::ChecklistTasksAdded>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("community_chat_added"))
        {
            Result.CommunityChatAdded =
                FromJson<::TelegramBotAPI::Type::CommunityChatAdded>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("community_chat_joined"))
        {
            Result.CommunityChatJoined =
                FromJson<::TelegramBotAPI::Type::CommunityChatJoined>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("community_chat_removed"))
        {
            Result.CommunityChatRemoved =
                FromJson<::TelegramBotAPI::Type::CommunityChatRemoved>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("direct_message_price_changed"))
        {
            Result.DirectMessagePriceChanged =
                FromJson<::TelegramBotAPI::Type::DirectMessagePriceChanged>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("forum_topic_created"))
        {
            Result.ForumTopicCreated =
                FromJson<::TelegramBotAPI::Type::ForumTopicCreated>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("forum_topic_edited"))
        {
            Result.ForumTopicEdited =
                FromJson<::TelegramBotAPI::Type::ForumTopicEdited>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("forum_topic_closed"))
        {
            Result.ForumTopicClosed =
                FromJson<::TelegramBotAPI::Type::ForumTopicClosed>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("forum_topic_reopened"))
        {
            Result.ForumTopicReopened =
                FromJson<::TelegramBotAPI::Type::ForumTopicReopened>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("general_forum_topic_hidden"))
        {
            Result.GeneralForumTopicHidden =
                FromJson<::TelegramBotAPI::Type::GeneralForumTopicHidden>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("general_forum_topic_unhidden"))
        {
            Result.GeneralForumTopicUnhidden =
                FromJson<::TelegramBotAPI::Type::GeneralForumTopicUnhidden>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("giveaway_created"))
        {
            Result.GiveawayCreated =
                FromJson<::TelegramBotAPI::Type::GiveawayCreated>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("giveaway"))
        {
            Result.Giveaway =
                FromJson<::TelegramBotAPI::Type::Giveaway>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("giveaway_winners"))
        {
            Result.GiveawayWinners =
                FromJson<::TelegramBotAPI::Type::GiveawayWinners>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("giveaway_completed"))
        {
            Result.GiveawayCompleted =
                std::make_shared<::TelegramBotAPI::Type::GiveawayCompleted>(FromJson<::TelegramBotAPI::Type::GiveawayCompleted>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("managed_bot_created"))
        {
            Result.ManagedBotCreated =
                FromJson<::TelegramBotAPI::Type::ManagedBotCreated>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("paid_message_price_changed"))
        {
            Result.PaidMessagePriceChanged =
                FromJson<::TelegramBotAPI::Type::PaidMessagePriceChanged>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("poll_option_added"))
        {
            Result.PollOptionAdded =
                std::make_shared<::TelegramBotAPI::Type::PollOptionAdded>(FromJson<::TelegramBotAPI::Type::PollOptionAdded>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("poll_option_deleted"))
        {
            Result.PollOptionDeleted =
                std::make_shared<::TelegramBotAPI::Type::PollOptionDeleted>(FromJson<::TelegramBotAPI::Type::PollOptionDeleted>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_approved"))
        {
            Result.SuggestedPostApproved =
                std::make_shared<::TelegramBotAPI::Type::SuggestedPostApproved>(FromJson<::TelegramBotAPI::Type::SuggestedPostApproved>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_approval_failed"))
        {
            Result.SuggestedPostApprovalFailed =
                std::make_shared<::TelegramBotAPI::Type::SuggestedPostApprovalFailed>(FromJson<::TelegramBotAPI::Type::SuggestedPostApprovalFailed>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_declined"))
        {
            Result.SuggestedPostDeclined =
                std::make_shared<::TelegramBotAPI::Type::SuggestedPostDeclined>(FromJson<::TelegramBotAPI::Type::SuggestedPostDeclined>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_paid"))
        {
            Result.SuggestedPostPaid =
                std::make_shared<::TelegramBotAPI::Type::SuggestedPostPaid>(FromJson<::TelegramBotAPI::Type::SuggestedPostPaid>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_refunded"))
        {
            Result.SuggestedPostRefunded =
                std::make_shared<::TelegramBotAPI::Type::SuggestedPostRefunded>(FromJson<::TelegramBotAPI::Type::SuggestedPostRefunded>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_chat_scheduled"))
        {
            Result.VideoChatScheduled =
                FromJson<::TelegramBotAPI::Type::VideoChatScheduled>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_chat_started"))
        {
            Result.VideoChatStarted =
                FromJson<::TelegramBotAPI::Type::VideoChatStarted>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_chat_ended"))
        {
            Result.VideoChatEnded =
                FromJson<::TelegramBotAPI::Type::VideoChatEnded>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video_chat_participants_invited"))
        {
            Result.VideoChatParticipantsInvited =
                FromJson<::TelegramBotAPI::Type::VideoChatParticipantsInvited>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("web_app_data"))
        {
            Result.WebAppData =
                FromJson<::TelegramBotAPI::Type::WebAppData>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reply_markup"))
        {
            Result.ReplyMarkup =
                FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged>
{
    static ::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("message_auto_delete_time"))
        {
            Result.MessageAutoDeleteTime =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message_auto_delete_time"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageEntity>
{
    static ::TelegramBotAPI::Type::MessageEntity Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MessageEntity Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("offset"))
        {
            Result.Offset =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: offset"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("length"))
        {
            Result.Length =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: length"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("language"))
        {
            Result.Language =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("custom_emoji_id"))
        {
            Result.CustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unix_time"))
        {
            Result.UnixTime =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date_time_format"))
        {
            Result.DateTimeFormat =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageGenerationStopped>
{
    static ::TelegramBotAPI::Type::MessageGenerationStopped Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MessageGenerationStopped Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_thread_id"))
        {
            Result.MessageThreadID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("draft_id"))
        {
            Result.DraftID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: draft_id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageId>
{
    static ::TelegramBotAPI::Type::MessageId Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MessageId Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("message_id"))
        {
            Result.MessageID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message_id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginChannel>
{
    static ::TelegramBotAPI::Type::MessageOriginChannel Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MessageOriginChannel Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_id"))
        {
            Result.MessageID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("author_signature"))
        {
            Result.AuthorSignature =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginChat>
{
    static ::TelegramBotAPI::Type::MessageOriginChat Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MessageOriginChat Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sender_chat"))
        {
            Result.SenderChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: sender_chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("author_signature"))
        {
            Result.AuthorSignature =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginHiddenUser>
{
    static ::TelegramBotAPI::Type::MessageOriginHiddenUser Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MessageOriginHiddenUser Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sender_user_name"))
        {
            Result.SenderUserName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: sender_user_name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginUser>
{
    static ::TelegramBotAPI::Type::MessageOriginUser Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MessageOriginUser Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sender_user"))
        {
            Result.SenderUser =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: sender_user"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageReactionCountUpdated>
{
    static ::TelegramBotAPI::Type::MessageReactionCountUpdated Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MessageReactionCountUpdated Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_id"))
        {
            Result.MessageID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reactions"))
        {
            Result.Reactions =
                FromJson<std::vector<::TelegramBotAPI::Type::ReactionCount>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: reactions"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageReactionUpdated>
{
    static ::TelegramBotAPI::Type::MessageReactionUpdated Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::MessageReactionUpdated Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_id"))
        {
            Result.MessageID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("actor_chat"))
        {
            Result.ActorChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("old_reaction"))
        {
            Result.OldReaction =
                FromJson<std::vector<std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: old_reaction"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("new_reaction"))
        {
            Result.NewReaction =
                FromJson<std::vector<std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: new_reaction"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OrderInfo>
{
    static ::TelegramBotAPI::Type::OrderInfo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::OrderInfo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("phone_number"))
        {
            Result.PhoneNumber =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("email"))
        {
            Result.Email =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("shipping_address"))
        {
            Result.ShippingAddress =
                FromJson<::TelegramBotAPI::Type::ShippingAddress>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGiftRegular>
{
    static ::TelegramBotAPI::Type::OwnedGiftRegular Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::OwnedGiftRegular Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gift"))
        {
            Result.Gift =
                FromJson<::TelegramBotAPI::Type::Gift>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: gift"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("owned_gift_id"))
        {
            Result.OwnedGiftID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sender_user"))
        {
            Result.SenderUser =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("send_date"))
        {
            Result.SendDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: send_date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("entities"))
        {
            Result.Entities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_private"))
        {
            Result.IsPrivate =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_saved"))
        {
            Result.IsSaved =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_be_upgraded"))
        {
            Result.CanBeUpgraded =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("was_refunded"))
        {
            Result.WasRefunded =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("convert_star_count"))
        {
            Result.ConvertStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prepaid_upgrade_star_count"))
        {
            Result.PrepaidUpgradeStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_upgrade_separate"))
        {
            Result.IsUpgradeSeparate =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unique_gift_number"))
        {
            Result.UniqueGiftNumber =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGiftUnique>
{
    static ::TelegramBotAPI::Type::OwnedGiftUnique Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::OwnedGiftUnique Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gift"))
        {
            Result.Gift =
                FromJson<::TelegramBotAPI::Type::UniqueGift>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: gift"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("owned_gift_id"))
        {
            Result.OwnedGiftID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sender_user"))
        {
            Result.SenderUser =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("send_date"))
        {
            Result.SendDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: send_date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_saved"))
        {
            Result.IsSaved =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_be_transferred"))
        {
            Result.CanBeTransferred =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("transfer_star_count"))
        {
            Result.TransferStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("next_transfer_date"))
        {
            Result.NextTransferDate =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGifts>
{
    static ::TelegramBotAPI::Type::OwnedGifts Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::OwnedGifts Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("total_count"))
        {
            Result.TotalCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: total_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gifts"))
        {
            Result.Gifts =
                FromJson<std::vector<std::variant<::TelegramBotAPI::Type::OwnedGiftRegular, ::TelegramBotAPI::Type::OwnedGiftUnique>>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: gifts"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("next_offset"))
        {
            Result.NextOffset =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaInfo>
{
    static ::TelegramBotAPI::Type::PaidMediaInfo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PaidMediaInfo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("star_count"))
        {
            Result.StarCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: star_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("paid_media"))
        {
            Result.PaidMedia =
                FromJson<std::vector<std::variant<::TelegramBotAPI::Type::PaidMediaLivePhoto, ::TelegramBotAPI::Type::PaidMediaPhoto, ::TelegramBotAPI::Type::PaidMediaPreview, ::TelegramBotAPI::Type::PaidMediaVideo>>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: paid_media"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaLivePhoto>
{
    static ::TelegramBotAPI::Type::PaidMediaLivePhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PaidMediaLivePhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("live_photo"))
        {
            Result.LivePhoto =
                FromJson<::TelegramBotAPI::Type::LivePhoto>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: live_photo"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaPhoto>
{
    static ::TelegramBotAPI::Type::PaidMediaPhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PaidMediaPhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photo"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaPreview>
{
    static ::TelegramBotAPI::Type::PaidMediaPreview Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PaidMediaPreview Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaPurchased>
{
    static ::TelegramBotAPI::Type::PaidMediaPurchased Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PaidMediaPurchased Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("from"))
        {
            Result.From =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: from"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("paid_media_payload"))
        {
            Result.PaidMediaPayload =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: paid_media_payload"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaVideo>
{
    static ::TelegramBotAPI::Type::PaidMediaVideo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PaidMediaVideo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video"))
        {
            Result.Video =
                FromJson<::TelegramBotAPI::Type::Video>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: video"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMessagePriceChanged>
{
    static ::TelegramBotAPI::Type::PaidMessagePriceChanged Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PaidMessagePriceChanged Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("paid_message_star_count"))
        {
            Result.PaidMessageStarCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: paid_message_star_count"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportData>
{
    static ::TelegramBotAPI::Type::PassportData Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportData Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("data"))
        {
            Result.Data =
                FromJson<std::vector<::TelegramBotAPI::Type::EncryptedPassportElement>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: data"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("credentials"))
        {
            Result.Credentials =
                FromJson<::TelegramBotAPI::Type::EncryptedCredentials>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: credentials"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorDataField>
{
    static ::TelegramBotAPI::Type::PassportElementErrorDataField Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportElementErrorDataField Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("field_name"))
        {
            Result.FieldName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: field_name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("data_hash"))
        {
            Result.DataHash =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: data_hash"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorFile>
{
    static ::TelegramBotAPI::Type::PassportElementErrorFile Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportElementErrorFile Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_hash"))
        {
            Result.FileHash =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_hash"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorFiles>
{
    static ::TelegramBotAPI::Type::PassportElementErrorFiles Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportElementErrorFiles Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_hashes"))
        {
            Result.FileHashes =
                FromJson<std::vector<std::string>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_hashes"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorFrontSide>
{
    static ::TelegramBotAPI::Type::PassportElementErrorFrontSide Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportElementErrorFrontSide Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_hash"))
        {
            Result.FileHash =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_hash"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorReverseSide>
{
    static ::TelegramBotAPI::Type::PassportElementErrorReverseSide Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportElementErrorReverseSide Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_hash"))
        {
            Result.FileHash =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_hash"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorSelfie>
{
    static ::TelegramBotAPI::Type::PassportElementErrorSelfie Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportElementErrorSelfie Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_hash"))
        {
            Result.FileHash =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_hash"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorTranslationFile>
{
    static ::TelegramBotAPI::Type::PassportElementErrorTranslationFile Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportElementErrorTranslationFile Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_hash"))
        {
            Result.FileHash =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_hash"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorTranslationFiles>
{
    static ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_hashes"))
        {
            Result.FileHashes =
                FromJson<std::vector<std::string>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_hashes"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorUnspecified>
{
    static ::TelegramBotAPI::Type::PassportElementErrorUnspecified Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportElementErrorUnspecified Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: source"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("element_hash"))
        {
            Result.ElementHash =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: element_hash"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: message"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportFile>
{
    static ::TelegramBotAPI::Type::PassportFile Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PassportFile Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_size"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_date"))
        {
            Result.FileDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_date"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PhotoSize>
{
    static ::TelegramBotAPI::Type::PhotoSize Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PhotoSize Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: width"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: height"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Poll>
{
    static ::TelegramBotAPI::Type::Poll Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Poll Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("question"))
        {
            Result.Question =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: question"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("question_entities"))
        {
            Result.QuestionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("options"))
        {
            Result.Options =
                FromJson<std::vector<::TelegramBotAPI::Type::PollOption>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: options"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("total_voter_count"))
        {
            Result.TotalVoterCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: total_voter_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_closed"))
        {
            Result.IsClosed =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_closed"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_anonymous"))
        {
            Result.IsAnonymous =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_anonymous"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("allows_multiple_answers"))
        {
            Result.AllowsMultipleAnswers =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: allows_multiple_answers"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("allows_revoting"))
        {
            Result.AllowsRevoting =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: allows_revoting"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("members_only"))
        {
            Result.MembersOnly =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: members_only"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("country_codes"))
        {
            Result.CountryCodes =
                FromJson<std::vector<std::string>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("correct_option_ids"))
        {
            Result.CorrectOptionIDs =
                FromJson<std::vector<long long>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("explanation"))
        {
            Result.Explanation =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("explanation_entities"))
        {
            Result.ExplanationEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("explanation_media"))
        {
            Result.ExplanationMedia =
                FromJson<::TelegramBotAPI::Type::PollMedia>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("open_period"))
        {
            Result.OpenPeriod =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("close_date"))
        {
            Result.CloseDate =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description_entities"))
        {
            Result.DescriptionEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<::TelegramBotAPI::Type::PollMedia>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PollAnswer>
{
    static ::TelegramBotAPI::Type::PollAnswer Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PollAnswer Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("poll_id"))
        {
            Result.PollID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: poll_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("voter_chat"))
        {
            Result.VoterChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("option_ids"))
        {
            Result.OptionIDs =
                FromJson<std::vector<long long>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: option_ids"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("option_persistent_ids"))
        {
            Result.OptionPersistentIDs =
                FromJson<std::vector<std::string>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: option_persistent_ids"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PollMedia>
{
    static ::TelegramBotAPI::Type::PollMedia Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PollMedia Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("animation"))
        {
            Result.Animation =
                FromJson<::TelegramBotAPI::Type::Animation>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("audio"))
        {
            Result.Audio =
                FromJson<::TelegramBotAPI::Type::Audio>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("document"))
        {
            Result.Document =
                FromJson<::TelegramBotAPI::Type::Document>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("link"))
        {
            Result.Link =
                FromJson<::TelegramBotAPI::Type::Link>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("live_photo"))
        {
            Result.LivePhoto =
                FromJson<::TelegramBotAPI::Type::LivePhoto>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::Location>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sticker"))
        {
            Result.Sticker =
                FromJson<::TelegramBotAPI::Type::Sticker>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("venue"))
        {
            Result.Venue =
                FromJson<::TelegramBotAPI::Type::Venue>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video"))
        {
            Result.Video =
                FromJson<::TelegramBotAPI::Type::Video>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PollOption>
{
    static ::TelegramBotAPI::Type::PollOption Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PollOption Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("persistent_id"))
        {
            Result.PersistentID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: persistent_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text_entities"))
        {
            Result.TextEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("media"))
        {
            Result.Media =
                FromJson<::TelegramBotAPI::Type::PollMedia>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("voter_count"))
        {
            Result.VoterCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: voter_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("added_by_user"))
        {
            Result.AddedByUser =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("added_by_chat"))
        {
            Result.AddedByChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("addition_date"))
        {
            Result.AdditionDate =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PollOptionAdded>
{
    static ::TelegramBotAPI::Type::PollOptionAdded Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PollOptionAdded Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("poll_message"))
        {
            Result.PollMessage =
                FromJson<::TelegramBotAPI::Type::MaybeInaccessibleMessage>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("option_persistent_id"))
        {
            Result.OptionPersistentID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: option_persistent_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("option_text"))
        {
            Result.OptionText =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: option_text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("option_text_entities"))
        {
            Result.OptionTextEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PollOptionDeleted>
{
    static ::TelegramBotAPI::Type::PollOptionDeleted Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PollOptionDeleted Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("poll_message"))
        {
            Result.PollMessage =
                FromJson<::TelegramBotAPI::Type::MaybeInaccessibleMessage>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("option_persistent_id"))
        {
            Result.OptionPersistentID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: option_persistent_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("option_text"))
        {
            Result.OptionText =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: option_text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("option_text_entities"))
        {
            Result.OptionTextEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PreCheckoutQuery>
{
    static ::TelegramBotAPI::Type::PreCheckoutQuery Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PreCheckoutQuery Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("from"))
        {
            Result.From =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: from"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("currency"))
        {
            Result.Currency =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: currency"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("total_amount"))
        {
            Result.TotalAmount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: total_amount"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invoice_payload"))
        {
            Result.InvoicePayload =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: invoice_payload"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("shipping_option_id"))
        {
            Result.ShippingOptionID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("order_info"))
        {
            Result.OrderInfo =
                FromJson<::TelegramBotAPI::Type::OrderInfo>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PreparedInlineMessage>
{
    static ::TelegramBotAPI::Type::PreparedInlineMessage Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PreparedInlineMessage Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("expiration_date"))
        {
            Result.ExpirationDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: expiration_date"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PreparedKeyboardButton>
{
    static ::TelegramBotAPI::Type::PreparedKeyboardButton Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::PreparedKeyboardButton Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ProximityAlertTriggered>
{
    static ::TelegramBotAPI::Type::ProximityAlertTriggered Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ProximityAlertTriggered Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("traveler"))
        {
            Result.Traveler =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: traveler"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("watcher"))
        {
            Result.Watcher =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: watcher"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("distance"))
        {
            Result.Distance =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: distance"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionCount>
{
    static ::TelegramBotAPI::Type::ReactionCount Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ReactionCount Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<::TelegramBotAPI::Type::ReactionType>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("total_count"))
        {
            Result.TotalCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: total_count"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionTypeCustomEmoji>
{
    static ::TelegramBotAPI::Type::ReactionTypeCustomEmoji Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ReactionTypeCustomEmoji Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("custom_emoji_id"))
        {
            Result.CustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: custom_emoji_id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionTypeEmoji>
{
    static ::TelegramBotAPI::Type::ReactionTypeEmoji Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ReactionTypeEmoji Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("emoji"))
        {
            Result.Emoji =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: emoji"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionTypePaid>
{
    static ::TelegramBotAPI::Type::ReactionTypePaid Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ReactionTypePaid Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RefundedPayment>
{
    static ::TelegramBotAPI::Type::RefundedPayment Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RefundedPayment Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("currency"))
        {
            Result.Currency =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: currency"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("total_amount"))
        {
            Result.TotalAmount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: total_amount"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invoice_payload"))
        {
            Result.InvoicePayload =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: invoice_payload"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("telegram_payment_charge_id"))
        {
            Result.TelegramPaymentChargeID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: telegram_payment_charge_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("provider_payment_charge_id"))
        {
            Result.ProviderPaymentChargeID =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReplyKeyboardMarkup>
{
    static ::TelegramBotAPI::Type::ReplyKeyboardMarkup Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ReplyKeyboardMarkup Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("keyboard"))
        {
            Result.Keyboard =
                FromJson<std::vector<std::vector<::TelegramBotAPI::Type::KeyboardButton>>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: keyboard"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_persistent"))
        {
            Result.IsPersistent =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("resize_keyboard"))
        {
            Result.ResizeKeyboard =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("one_time_keyboard"))
        {
            Result.OneTimeKeyboard =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("input_field_placeholder"))
        {
            Result.InputFieldPlaceholder =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("selective"))
        {
            Result.Selective =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("force_reply"))
        {
            Result.ForceReply =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReplyKeyboardRemove>
{
    static ::TelegramBotAPI::Type::ReplyKeyboardRemove Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ReplyKeyboardRemove Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("remove_keyboard"))
        {
            Result.RemoveKeyboard =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: remove_keyboard"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("selective"))
        {
            Result.Selective =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReplyParameters>
{
    static ::TelegramBotAPI::Type::ReplyParameters Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ReplyParameters Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("message_id"))
        {
            Result.MessageID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_id"))
        {
            Result.ChatID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("ephemeral_message_id"))
        {
            Result.EphemeralMessageID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("allow_sending_without_reply"))
        {
            Result.AllowSendingWithoutReply =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("quote"))
        {
            Result.Quote =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("quote_parse_mode"))
        {
            Result.QuoteParseMode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("quote_entities"))
        {
            Result.QuoteEntities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("quote_position"))
        {
            Result.QuotePosition =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("checklist_task_id"))
        {
            Result.ChecklistTaskID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("poll_option_id"))
        {
            Result.PollOptionID =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ResponseParameters>
{
    static ::TelegramBotAPI::Type::ResponseParameters Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ResponseParameters Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("migrate_to_chat_id"))
        {
            Result.MigrateToChatID =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("retry_after"))
        {
            Result.RetryAfter =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStateFailed>
{
    static ::TelegramBotAPI::Type::RevenueWithdrawalStateFailed Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RevenueWithdrawalStateFailed Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStatePending>
{
    static ::TelegramBotAPI::Type::RevenueWithdrawalStatePending Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RevenueWithdrawalStatePending Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded>
{
    static ::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: url"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlock>
{
    static ::TelegramBotAPI::Type::RichBlock Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlock Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockAnchor>
{
    static ::TelegramBotAPI::Type::RichBlockAnchor Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockAnchor Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockAnimation>
{
    static ::TelegramBotAPI::Type::RichBlockAnimation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockAnimation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("animation"))
        {
            Result.Animation =
                FromJson<::TelegramBotAPI::Type::Animation>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: animation"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_spoiler"))
        {
            Result.HasSpoiler =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockAudio>
{
    static ::TelegramBotAPI::Type::RichBlockAudio Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockAudio Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("audio"))
        {
            Result.Audio =
                FromJson<::TelegramBotAPI::Type::Audio>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: audio"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockBlockQuotation>
{
    static ::TelegramBotAPI::Type::RichBlockBlockQuotation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockBlockQuotation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::RichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("credit"))
        {
            Result.Credit =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockButtons>
{
    static ::TelegramBotAPI::Type::RichBlockButtons Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockButtons Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("buttons"))
        {
            Result.Buttons =
                FromJson<std::vector<::TelegramBotAPI::Type::RichMessageButton>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: buttons"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("align"))
        {
            Result.Align =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockCaption>
{
    static ::TelegramBotAPI::Type::RichBlockCaption Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockCaption Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("credit"))
        {
            Result.Credit =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockCollage>
{
    static ::TelegramBotAPI::Type::RichBlockCollage Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockCollage Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::RichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockDetails>
{
    static ::TelegramBotAPI::Type::RichBlockDetails Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockDetails Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("summary"))
        {
            Result.Summary =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: summary"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::RichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_open"))
        {
            Result.IsOpen =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockDivider>
{
    static ::TelegramBotAPI::Type::RichBlockDivider Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockDivider Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockDocument>
{
    static ::TelegramBotAPI::Type::RichBlockDocument Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockDocument Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("document"))
        {
            Result.Document =
                FromJson<::TelegramBotAPI::Type::Document>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: document"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockExpandableBlockQuotation>
{
    static ::TelegramBotAPI::Type::RichBlockExpandableBlockQuotation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockExpandableBlockQuotation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("credit"))
        {
            Result.Credit =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockFooter>
{
    static ::TelegramBotAPI::Type::RichBlockFooter Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockFooter Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockList>
{
    static ::TelegramBotAPI::Type::RichBlockList Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockList Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("items"))
        {
            Result.Items =
                FromJson<std::vector<::TelegramBotAPI::Type::RichBlockListItem>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: items"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockListItem>
{
    static ::TelegramBotAPI::Type::RichBlockListItem Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockListItem Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("label"))
        {
            Result.Label =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: label"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::RichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_checkbox"))
        {
            Result.HasCheckbox =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_checked"))
        {
            Result.IsChecked =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("value"))
        {
            Result.Value =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockMap>
{
    static ::TelegramBotAPI::Type::RichBlockMap Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockMap Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::Location>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: location"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("zoom"))
        {
            Result.Zoom =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: zoom"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: width"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: height"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockMathematicalExpression>
{
    static ::TelegramBotAPI::Type::RichBlockMathematicalExpression Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockMathematicalExpression Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("expression"))
        {
            Result.Expression =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: expression"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockParagraph>
{
    static ::TelegramBotAPI::Type::RichBlockParagraph Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockParagraph Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockPhoto>
{
    static ::TelegramBotAPI::Type::RichBlockPhoto Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockPhoto Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photo"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_spoiler"))
        {
            Result.HasSpoiler =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockPreformatted>
{
    static ::TelegramBotAPI::Type::RichBlockPreformatted Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockPreformatted Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("language"))
        {
            Result.Language =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockPullQuotation>
{
    static ::TelegramBotAPI::Type::RichBlockPullQuotation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockPullQuotation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("credit"))
        {
            Result.Credit =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockSectionHeading>
{
    static ::TelegramBotAPI::Type::RichBlockSectionHeading Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockSectionHeading Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("size"))
        {
            Result.Size =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: size"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockSlideshow>
{
    static ::TelegramBotAPI::Type::RichBlockSlideshow Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockSlideshow Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::RichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockTable>
{
    static ::TelegramBotAPI::Type::RichBlockTable Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockTable Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("cells"))
        {
            Result.Cells =
                FromJson<std::vector<std::vector<::TelegramBotAPI::Type::RichBlockTableCell>>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: cells"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_bordered"))
        {
            Result.IsBordered =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_striped"))
        {
            Result.IsStriped =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_compact"))
        {
            Result.IsCompact =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockTableCell>
{
    static ::TelegramBotAPI::Type::RichBlockTableCell Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockTableCell Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_header"))
        {
            Result.IsHeader =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("colspan"))
        {
            Result.Colspan =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rowspan"))
        {
            Result.Rowspan =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("align"))
        {
            Result.Align =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: align"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("valign"))
        {
            Result.Valign =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: valign"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockThinking>
{
    static ::TelegramBotAPI::Type::RichBlockThinking Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockThinking Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockVideo>
{
    static ::TelegramBotAPI::Type::RichBlockVideo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockVideo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("video"))
        {
            Result.Video =
                FromJson<::TelegramBotAPI::Type::Video>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: video"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_spoiler"))
        {
            Result.HasSpoiler =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockVoiceNote>
{
    static ::TelegramBotAPI::Type::RichBlockVoiceNote Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichBlockVoiceNote Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("voice_note"))
        {
            Result.VoiceNote =
                FromJson<::TelegramBotAPI::Type::Voice>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: voice_note"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("caption"))
        {
            Result.Caption =
                FromJson<::TelegramBotAPI::Type::RichBlockCaption>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichMessage>
{
    static ::TelegramBotAPI::Type::RichMessage Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichMessage Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("blocks"))
        {
            Result.Blocks =
                FromJson<std::vector<::TelegramBotAPI::Type::RichBlock>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: blocks"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_rtl"))
        {
            Result.IsRtl =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichMessageButton>
{
    static ::TelegramBotAPI::Type::RichMessageButton Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichMessageButton Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("style"))
        {
            Result.Style =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("callback_data"))
        {
            Result.CallbackData =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("web_app"))
        {
            Result.WebApp =
                FromJson<::TelegramBotAPI::Type::WebAppInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("login_url"))
        {
            Result.LoginURL =
                FromJson<::TelegramBotAPI::Type::LoginUrl>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("switch_inline_query"))
        {
            Result.SwitchInlineQuery =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("switch_inline_query_current_chat"))
        {
            Result.SwitchInlineQueryCurrentChat =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("switch_inline_query_chosen_chat"))
        {
            Result.SwitchInlineQueryChosenChat =
                FromJson<::TelegramBotAPI::Type::SwitchInlineQueryChosenChat>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("copy_text"))
        {
            Result.CopyText =
                FromJson<::TelegramBotAPI::Type::CopyTextButton>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("disabled"))
        {
            Result.Disabled =
                FromJson<::TelegramBotAPI::Type::DisabledButton>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichText>
{
    static ::TelegramBotAPI::Type::RichText Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichText Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextAnchor>
{
    static ::TelegramBotAPI::Type::RichTextAnchor Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextAnchor Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextAnchorLink>
{
    static ::TelegramBotAPI::Type::RichTextAnchorLink Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextAnchorLink Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("anchor_name"))
        {
            Result.AnchorName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: anchor_name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextBankCardNumber>
{
    static ::TelegramBotAPI::Type::RichTextBankCardNumber Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextBankCardNumber Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("bank_card_number"))
        {
            Result.BankCardNumber =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: bank_card_number"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextBold>
{
    static ::TelegramBotAPI::Type::RichTextBold Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextBold Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextBotCommand>
{
    static ::TelegramBotAPI::Type::RichTextBotCommand Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextBotCommand Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("bot_command"))
        {
            Result.BotCommand =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: bot_command"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextButton>
{
    static ::TelegramBotAPI::Type::RichTextButton Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextButton Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("button"))
        {
            Result.Button =
                FromJson<::TelegramBotAPI::Type::RichMessageButton>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: button"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextCashtag>
{
    static ::TelegramBotAPI::Type::RichTextCashtag Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextCashtag Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("cashtag"))
        {
            Result.Cashtag =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: cashtag"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextCode>
{
    static ::TelegramBotAPI::Type::RichTextCode Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextCode Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextCustomEmoji>
{
    static ::TelegramBotAPI::Type::RichTextCustomEmoji Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextCustomEmoji Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("custom_emoji_id"))
        {
            Result.CustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: custom_emoji_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("alternative_text"))
        {
            Result.AlternativeText =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: alternative_text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextDateTime>
{
    static ::TelegramBotAPI::Type::RichTextDateTime Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextDateTime Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("unix_time"))
        {
            Result.UnixTime =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: unix_time"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date_time_format"))
        {
            Result.DateTimeFormat =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date_time_format"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextEmailAddress>
{
    static ::TelegramBotAPI::Type::RichTextEmailAddress Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextEmailAddress Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("email_address"))
        {
            Result.EmailAddress =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: email_address"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextHashtag>
{
    static ::TelegramBotAPI::Type::RichTextHashtag Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextHashtag Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("hashtag"))
        {
            Result.Hashtag =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: hashtag"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextItalic>
{
    static ::TelegramBotAPI::Type::RichTextItalic Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextItalic Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextMarked>
{
    static ::TelegramBotAPI::Type::RichTextMarked Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextMarked Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextMathematicalExpression>
{
    static ::TelegramBotAPI::Type::RichTextMathematicalExpression Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextMathematicalExpression Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("expression"))
        {
            Result.Expression =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: expression"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextMention>
{
    static ::TelegramBotAPI::Type::RichTextMention Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextMention Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("username"))
        {
            Result.UserName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: username"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextPhoneNumber>
{
    static ::TelegramBotAPI::Type::RichTextPhoneNumber Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextPhoneNumber Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("phone_number"))
        {
            Result.PhoneNumber =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: phone_number"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextReference>
{
    static ::TelegramBotAPI::Type::RichTextReference Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextReference Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextReferenceLink>
{
    static ::TelegramBotAPI::Type::RichTextReferenceLink Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextReferenceLink Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reference_name"))
        {
            Result.ReferenceName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: reference_name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextSpoiler>
{
    static ::TelegramBotAPI::Type::RichTextSpoiler Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextSpoiler Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextStrikethrough>
{
    static ::TelegramBotAPI::Type::RichTextStrikethrough Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextStrikethrough Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextSubscript>
{
    static ::TelegramBotAPI::Type::RichTextSubscript Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextSubscript Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextSuperscript>
{
    static ::TelegramBotAPI::Type::RichTextSuperscript Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextSuperscript Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextTextMention>
{
    static ::TelegramBotAPI::Type::RichTextTextMention Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextTextMention Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextUnderline>
{
    static ::TelegramBotAPI::Type::RichTextUnderline Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextUnderline Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextUrl>
{
    static ::TelegramBotAPI::Type::RichTextUrl Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::RichTextUrl Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<::TelegramBotAPI::Type::RichText>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: url"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SentGuestMessage>
{
    static ::TelegramBotAPI::Type::SentGuestMessage Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SentGuestMessage Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("inline_message_id"))
        {
            Result.InlineMessageID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: inline_message_id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SentWebAppMessage>
{
    static ::TelegramBotAPI::Type::SentWebAppMessage Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SentWebAppMessage Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("inline_message_id"))
        {
            Result.InlineMessageID =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SharedUser>
{
    static ::TelegramBotAPI::Type::SharedUser Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SharedUser Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("user_id"))
        {
            Result.UserID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("first_name"))
        {
            Result.FirstName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_name"))
        {
            Result.LastName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("username"))
        {
            Result.UserName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photo"))
        {
            Result.Photo =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ShippingAddress>
{
    static ::TelegramBotAPI::Type::ShippingAddress Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ShippingAddress Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("country_code"))
        {
            Result.CountryCode =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: country_code"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("state"))
        {
            Result.State =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: state"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("city"))
        {
            Result.City =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: city"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("street_line1"))
        {
            Result.StreetLine1 =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: street_line1"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("street_line2"))
        {
            Result.StreetLine2 =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: street_line2"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("post_code"))
        {
            Result.PostCode =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: post_code"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ShippingOption>
{
    static ::TelegramBotAPI::Type::ShippingOption Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ShippingOption Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("prices"))
        {
            Result.Prices =
                FromJson<std::vector<::TelegramBotAPI::Type::LabeledPrice>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: prices"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ShippingQuery>
{
    static ::TelegramBotAPI::Type::ShippingQuery Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ShippingQuery Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("from"))
        {
            Result.From =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: from"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invoice_payload"))
        {
            Result.InvoicePayload =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: invoice_payload"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("shipping_address"))
        {
            Result.ShippingAddress =
                FromJson<::TelegramBotAPI::Type::ShippingAddress>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: shipping_address"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StarAmount>
{
    static ::TelegramBotAPI::Type::StarAmount Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StarAmount Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("amount"))
        {
            Result.Amount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: amount"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("nanostar_amount"))
        {
            Result.NanostarAmount =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StarTransaction>
{
    static ::TelegramBotAPI::Type::StarTransaction Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StarTransaction Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("amount"))
        {
            Result.Amount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: amount"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("nanostar_amount"))
        {
            Result.NanostarAmount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("date"))
        {
            Result.Date =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: date"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("source"))
        {
            Result.Source =
                FromJson<::TelegramBotAPI::Type::TransactionPartner>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("receiver"))
        {
            Result.Receiver =
                FromJson<::TelegramBotAPI::Type::TransactionPartner>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StarTransactions>
{
    static ::TelegramBotAPI::Type::StarTransactions Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StarTransactions Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("transactions"))
        {
            Result.Transactions =
                FromJson<std::vector<::TelegramBotAPI::Type::StarTransaction>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: transactions"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Sticker>
{
    static ::TelegramBotAPI::Type::Sticker Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Sticker Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: width"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: height"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_animated"))
        {
            Result.IsAnimated =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_animated"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_video"))
        {
            Result.IsVideo =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_video"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<::TelegramBotAPI::Type::PhotoSize>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("emoji"))
        {
            Result.Emoji =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("set_name"))
        {
            Result.SetName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("premium_animation"))
        {
            Result.PremiumAnimation =
                FromJson<::TelegramBotAPI::Type::File>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mask_position"))
        {
            Result.MaskPosition =
                FromJson<::TelegramBotAPI::Type::MaskPosition>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("custom_emoji_id"))
        {
            Result.CustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("needs_repainting"))
        {
            Result.NeedsRepainting =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StickerSet>
{
    static ::TelegramBotAPI::Type::StickerSet Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StickerSet Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sticker_type"))
        {
            Result.StickerType =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: sticker_type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("stickers"))
        {
            Result.Stickers =
                FromJson<std::vector<::TelegramBotAPI::Type::Sticker>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: stickers"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<::TelegramBotAPI::Type::PhotoSize>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Story>
{
    static ::TelegramBotAPI::Type::Story Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Story Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryArea>
{
    static ::TelegramBotAPI::Type::StoryArea Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StoryArea Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("position"))
        {
            Result.Position =
                FromJson<::TelegramBotAPI::Type::StoryAreaPosition>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: position"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<::TelegramBotAPI::Type::StoryAreaType>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaPosition>
{
    static ::TelegramBotAPI::Type::StoryAreaPosition Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StoryAreaPosition Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("x_percentage"))
        {
            Result.XPercentage =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: x_percentage"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("y_percentage"))
        {
            Result.YPercentage =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: y_percentage"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width_percentage"))
        {
            Result.WidthPercentage =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: width_percentage"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height_percentage"))
        {
            Result.HeightPercentage =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: height_percentage"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rotation_angle"))
        {
            Result.RotationAngle =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: rotation_angle"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("corner_radius_percentage"))
        {
            Result.CornerRadiusPercentage =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: corner_radius_percentage"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeLink>
{
    static ::TelegramBotAPI::Type::StoryAreaTypeLink Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StoryAreaTypeLink Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: url"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeLocation>
{
    static ::TelegramBotAPI::Type::StoryAreaTypeLocation Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StoryAreaTypeLocation Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("latitude"))
        {
            Result.Latitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: latitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("longitude"))
        {
            Result.Longitude =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: longitude"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("address"))
        {
            Result.Address =
                FromJson<::TelegramBotAPI::Type::LocationAddress>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction>
{
    static ::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reaction_type"))
        {
            Result.ReactionType =
                FromJson<::TelegramBotAPI::Type::ReactionType>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: reaction_type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_dark"))
        {
            Result.IsDark =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_flipped"))
        {
            Result.IsFlipped =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeUniqueGift>
{
    static ::TelegramBotAPI::Type::StoryAreaTypeUniqueGift Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StoryAreaTypeUniqueGift Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeWeather>
{
    static ::TelegramBotAPI::Type::StoryAreaTypeWeather Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::StoryAreaTypeWeather Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("temperature"))
        {
            Result.Temperature =
                FromJson<double>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: temperature"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("emoji"))
        {
            Result.Emoji =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: emoji"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("background_color"))
        {
            Result.BackgroundColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: background_color"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuccessfulPayment>
{
    static ::TelegramBotAPI::Type::SuccessfulPayment Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SuccessfulPayment Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("currency"))
        {
            Result.Currency =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: currency"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("total_amount"))
        {
            Result.TotalAmount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: total_amount"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invoice_payload"))
        {
            Result.InvoicePayload =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: invoice_payload"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("subscription_expiration_date"))
        {
            Result.SubscriptionExpirationDate =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_recurring"))
        {
            Result.IsRecurring =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_first_recurring"))
        {
            Result.IsFirstRecurring =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("shipping_option_id"))
        {
            Result.ShippingOptionID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("order_info"))
        {
            Result.OrderInfo =
                FromJson<::TelegramBotAPI::Type::OrderInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("telegram_payment_charge_id"))
        {
            Result.TelegramPaymentChargeID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: telegram_payment_charge_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("provider_payment_charge_id"))
        {
            Result.ProviderPaymentChargeID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: provider_payment_charge_id"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostApprovalFailed>
{
    static ::TelegramBotAPI::Type::SuggestedPostApprovalFailed Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SuggestedPostApprovalFailed Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_message"))
        {
            Result.SuggestedPostMessage =
                std::make_shared<::TelegramBotAPI::Type::Message>(FromJson<::TelegramBotAPI::Type::Message>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("price"))
        {
            Result.Price =
                FromJson<::TelegramBotAPI::Type::SuggestedPostPrice>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: price"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostApproved>
{
    static ::TelegramBotAPI::Type::SuggestedPostApproved Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SuggestedPostApproved Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_message"))
        {
            Result.SuggestedPostMessage =
                std::make_shared<::TelegramBotAPI::Type::Message>(FromJson<::TelegramBotAPI::Type::Message>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("price"))
        {
            Result.Price =
                FromJson<::TelegramBotAPI::Type::SuggestedPostPrice>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("send_date"))
        {
            Result.SendDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: send_date"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostDeclined>
{
    static ::TelegramBotAPI::Type::SuggestedPostDeclined Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SuggestedPostDeclined Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_message"))
        {
            Result.SuggestedPostMessage =
                std::make_shared<::TelegramBotAPI::Type::Message>(FromJson<::TelegramBotAPI::Type::Message>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("comment"))
        {
            Result.Comment =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostInfo>
{
    static ::TelegramBotAPI::Type::SuggestedPostInfo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SuggestedPostInfo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("state"))
        {
            Result.State =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: state"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("price"))
        {
            Result.Price =
                FromJson<::TelegramBotAPI::Type::SuggestedPostPrice>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("send_date"))
        {
            Result.SendDate =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostPaid>
{
    static ::TelegramBotAPI::Type::SuggestedPostPaid Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SuggestedPostPaid Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_message"))
        {
            Result.SuggestedPostMessage =
                std::make_shared<::TelegramBotAPI::Type::Message>(FromJson<::TelegramBotAPI::Type::Message>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("currency"))
        {
            Result.Currency =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: currency"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("amount"))
        {
            Result.Amount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("star_amount"))
        {
            Result.StarAmount =
                FromJson<::TelegramBotAPI::Type::StarAmount>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostParameters>
{
    static ::TelegramBotAPI::Type::SuggestedPostParameters Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SuggestedPostParameters Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("price"))
        {
            Result.Price =
                FromJson<::TelegramBotAPI::Type::SuggestedPostPrice>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("send_date"))
        {
            Result.SendDate =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostPrice>
{
    static ::TelegramBotAPI::Type::SuggestedPostPrice Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SuggestedPostPrice Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("currency"))
        {
            Result.Currency =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: currency"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("amount"))
        {
            Result.Amount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: amount"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostRefunded>
{
    static ::TelegramBotAPI::Type::SuggestedPostRefunded Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SuggestedPostRefunded Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("suggested_post_message"))
        {
            Result.SuggestedPostMessage =
                std::make_shared<::TelegramBotAPI::Type::Message>(FromJson<::TelegramBotAPI::Type::Message>(*FieldValue));
        }
        if (const auto* FieldValue = ObjectValue.if_contains("reason"))
        {
            Result.Reason =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: reason"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SwitchInlineQueryChosenChat>
{
    static ::TelegramBotAPI::Type::SwitchInlineQueryChosenChat Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::SwitchInlineQueryChosenChat Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("query"))
        {
            Result.Query =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("allow_user_chats"))
        {
            Result.AllowUserChats =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("allow_bot_chats"))
        {
            Result.AllowBotChats =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("allow_group_chats"))
        {
            Result.AllowGroupChats =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("allow_channel_chats"))
        {
            Result.AllowChannelChats =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TextQuote>
{
    static ::TelegramBotAPI::Type::TextQuote Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::TextQuote Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("entities"))
        {
            Result.Entities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("position"))
        {
            Result.Position =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: position"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_manual"))
        {
            Result.IsManual =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram>
{
    static ::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sponsor_user"))
        {
            Result.SponsorUser =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("commission_per_mille"))
        {
            Result.CommissionPerMille =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: commission_per_mille"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerChat>
{
    static ::TelegramBotAPI::Type::TransactionPartnerChat Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::TransactionPartnerChat Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat"))
        {
            Result.Chat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: chat"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gift"))
        {
            Result.Gift =
                FromJson<::TelegramBotAPI::Type::Gift>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerFragment>
{
    static ::TelegramBotAPI::Type::TransactionPartnerFragment Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::TransactionPartnerFragment Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("withdrawal_state"))
        {
            Result.WithdrawalState =
                FromJson<::TelegramBotAPI::Type::RevenueWithdrawalState>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerOther>
{
    static ::TelegramBotAPI::Type::TransactionPartnerOther Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::TransactionPartnerOther Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerTelegramAds>
{
    static ::TelegramBotAPI::Type::TransactionPartnerTelegramAds Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::TransactionPartnerTelegramAds Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerTelegramApi>
{
    static ::TelegramBotAPI::Type::TransactionPartnerTelegramApi Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::TransactionPartnerTelegramApi Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("request_count"))
        {
            Result.RequestCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: request_count"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerUser>
{
    static ::TelegramBotAPI::Type::TransactionPartnerUser Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::TransactionPartnerUser Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("type"))
        {
            Result.Type =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("transaction_type"))
        {
            Result.TransactionType =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: transaction_type"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("user"))
        {
            Result.User =
                FromJson<::TelegramBotAPI::Type::User>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: user"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("affiliate"))
        {
            Result.Affiliate =
                FromJson<::TelegramBotAPI::Type::AffiliateInfo>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("invoice_payload"))
        {
            Result.InvoicePayload =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("subscription_period"))
        {
            Result.SubscriptionPeriod =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("paid_media"))
        {
            Result.PaidMedia =
                FromJson<std::vector<std::variant<::TelegramBotAPI::Type::PaidMediaLivePhoto, ::TelegramBotAPI::Type::PaidMediaPhoto, ::TelegramBotAPI::Type::PaidMediaPreview, ::TelegramBotAPI::Type::PaidMediaVideo>>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("paid_media_payload"))
        {
            Result.PaidMediaPayload =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("gift"))
        {
            Result.Gift =
                FromJson<::TelegramBotAPI::Type::Gift>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("premium_subscription_duration"))
        {
            Result.PremiumSubscriptionDuration =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGift>
{
    static ::TelegramBotAPI::Type::UniqueGift Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UniqueGift Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("gift_id"))
        {
            Result.GiftID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: gift_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("base_name"))
        {
            Result.BaseName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: base_name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("number"))
        {
            Result.Number =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: number"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("model"))
        {
            Result.Model =
                FromJson<::TelegramBotAPI::Type::UniqueGiftModel>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: model"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("symbol"))
        {
            Result.Symbol =
                FromJson<::TelegramBotAPI::Type::UniqueGiftSymbol>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: symbol"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("backdrop"))
        {
            Result.Backdrop =
                FromJson<::TelegramBotAPI::Type::UniqueGiftBackdrop>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: backdrop"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_premium"))
        {
            Result.IsPremium =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_burned"))
        {
            Result.IsBurned =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_from_blockchain"))
        {
            Result.IsFromBlockchain =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("colors"))
        {
            Result.Colors =
                FromJson<::TelegramBotAPI::Type::UniqueGiftColors>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("publisher_chat"))
        {
            Result.PublisherChat =
                FromJson<::TelegramBotAPI::Type::Chat>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftBackdrop>
{
    static ::TelegramBotAPI::Type::UniqueGiftBackdrop Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UniqueGiftBackdrop Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("colors"))
        {
            Result.Colors =
                FromJson<::TelegramBotAPI::Type::UniqueGiftBackdropColors>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: colors"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rarity_per_mille"))
        {
            Result.RarityPerMille =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: rarity_per_mille"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftBackdropColors>
{
    static ::TelegramBotAPI::Type::UniqueGiftBackdropColors Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UniqueGiftBackdropColors Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("center_color"))
        {
            Result.CenterColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: center_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("edge_color"))
        {
            Result.EdgeColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: edge_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("symbol_color"))
        {
            Result.SymbolColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: symbol_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text_color"))
        {
            Result.TextColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: text_color"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftColors>
{
    static ::TelegramBotAPI::Type::UniqueGiftColors Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UniqueGiftColors Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("model_custom_emoji_id"))
        {
            Result.ModelCustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: model_custom_emoji_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("symbol_custom_emoji_id"))
        {
            Result.SymbolCustomEmojiID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: symbol_custom_emoji_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("light_theme_main_color"))
        {
            Result.LightThemeMainColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: light_theme_main_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("light_theme_other_colors"))
        {
            Result.LightThemeOtherColors =
                FromJson<std::vector<long long>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: light_theme_other_colors"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("dark_theme_main_color"))
        {
            Result.DarkThemeMainColor =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: dark_theme_main_color"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("dark_theme_other_colors"))
        {
            Result.DarkThemeOtherColors =
                FromJson<std::vector<long long>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: dark_theme_other_colors"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftInfo>
{
    static ::TelegramBotAPI::Type::UniqueGiftInfo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UniqueGiftInfo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("gift"))
        {
            Result.Gift =
                FromJson<::TelegramBotAPI::Type::UniqueGift>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: gift"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("origin"))
        {
            Result.Origin =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: origin"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("text"))
        {
            Result.Text =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("entities"))
        {
            Result.Entities =
                FromJson<std::vector<::TelegramBotAPI::Type::MessageEntity>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_private"))
        {
            Result.IsPrivate =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_resale_currency"))
        {
            Result.LastResaleCurrency =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_resale_amount"))
        {
            Result.LastResaleAmount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("owned_gift_id"))
        {
            Result.OwnedGiftID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("transfer_star_count"))
        {
            Result.TransferStarCount =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("next_transfer_date"))
        {
            Result.NextTransferDate =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftModel>
{
    static ::TelegramBotAPI::Type::UniqueGiftModel Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UniqueGiftModel Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sticker"))
        {
            Result.Sticker =
                FromJson<::TelegramBotAPI::Type::Sticker>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: sticker"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rarity_per_mille"))
        {
            Result.RarityPerMille =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: rarity_per_mille"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rarity"))
        {
            Result.Rarity =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftSymbol>
{
    static ::TelegramBotAPI::Type::UniqueGiftSymbol Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UniqueGiftSymbol Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("name"))
        {
            Result.Name =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("sticker"))
        {
            Result.Sticker =
                FromJson<::TelegramBotAPI::Type::Sticker>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: sticker"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rarity_per_mille"))
        {
            Result.RarityPerMille =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: rarity_per_mille"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Update>
{
    static ::TelegramBotAPI::Type::Update Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Update Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("update_id"))
        {
            Result.UpdateID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: update_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message"))
        {
            Result.Message =
                FromJson<::TelegramBotAPI::Type::Message>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("edited_message"))
        {
            Result.EditedMessage =
                FromJson<::TelegramBotAPI::Type::Message>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("channel_post"))
        {
            Result.ChannelPost =
                FromJson<::TelegramBotAPI::Type::Message>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("edited_channel_post"))
        {
            Result.EditedChannelPost =
                FromJson<::TelegramBotAPI::Type::Message>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("business_connection"))
        {
            Result.BusinessConnection =
                FromJson<::TelegramBotAPI::Type::BusinessConnection>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("business_message"))
        {
            Result.BusinessMessage =
                FromJson<::TelegramBotAPI::Type::Message>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("edited_business_message"))
        {
            Result.EditedBusinessMessage =
                FromJson<::TelegramBotAPI::Type::Message>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("deleted_business_messages"))
        {
            Result.DeletedBusinessMessages =
                FromJson<::TelegramBotAPI::Type::BusinessMessagesDeleted>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("guest_message"))
        {
            Result.GuestMessage =
                FromJson<::TelegramBotAPI::Type::Message>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_reaction"))
        {
            Result.MessageReaction =
                FromJson<::TelegramBotAPI::Type::MessageReactionUpdated>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("message_reaction_count"))
        {
            Result.MessageReactionCount =
                FromJson<::TelegramBotAPI::Type::MessageReactionCountUpdated>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("inline_query"))
        {
            Result.InlineQuery =
                FromJson<::TelegramBotAPI::Type::InlineQuery>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chosen_inline_result"))
        {
            Result.ChosenInlineResult =
                FromJson<::TelegramBotAPI::Type::ChosenInlineResult>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("callback_query"))
        {
            Result.CallbackQuery =
                FromJson<::TelegramBotAPI::Type::CallbackQuery>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("shipping_query"))
        {
            Result.ShippingQuery =
                FromJson<::TelegramBotAPI::Type::ShippingQuery>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("pre_checkout_query"))
        {
            Result.PreCheckoutQuery =
                FromJson<::TelegramBotAPI::Type::PreCheckoutQuery>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("purchased_paid_media"))
        {
            Result.PurchasedPaidMedia =
                FromJson<::TelegramBotAPI::Type::PaidMediaPurchased>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("poll"))
        {
            Result.Poll =
                FromJson<::TelegramBotAPI::Type::Poll>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("poll_answer"))
        {
            Result.PollAnswer =
                FromJson<::TelegramBotAPI::Type::PollAnswer>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("my_chat_member"))
        {
            Result.MyChatMember =
                FromJson<::TelegramBotAPI::Type::ChatMemberUpdated>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_member"))
        {
            Result.ChatMember =
                FromJson<::TelegramBotAPI::Type::ChatMemberUpdated>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_join_request"))
        {
            Result.ChatJoinRequest =
                FromJson<::TelegramBotAPI::Type::ChatJoinRequest>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("chat_boost"))
        {
            Result.ChatBoost =
                FromJson<::TelegramBotAPI::Type::ChatBoostUpdated>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("removed_chat_boost"))
        {
            Result.RemovedChatBoost =
                FromJson<::TelegramBotAPI::Type::ChatBoostRemoved>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("managed_bot"))
        {
            Result.ManagedBot =
                FromJson<::TelegramBotAPI::Type::ManagedBotUpdated>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("subscription"))
        {
            Result.Subscription =
                FromJson<::TelegramBotAPI::Type::BotSubscriptionUpdated>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("stopped_message_generation"))
        {
            Result.StoppedMessageGeneration =
                FromJson<::TelegramBotAPI::Type::MessageGenerationStopped>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::User>
{
    static ::TelegramBotAPI::Type::User Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::User Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("id"))
        {
            Result.ID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_bot"))
        {
            Result.IsBot =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: is_bot"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("first_name"))
        {
            Result.FirstName =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: first_name"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_name"))
        {
            Result.LastName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("username"))
        {
            Result.UserName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("language_code"))
        {
            Result.LanguageCode =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("is_premium"))
        {
            Result.IsPremium =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("added_to_attachment_menu"))
        {
            Result.AddedToAttachmentMenu =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_join_groups"))
        {
            Result.CanJoinGroups =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_read_all_group_messages"))
        {
            Result.CanReadAllGroupMessages =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("supports_guest_queries"))
        {
            Result.SupportsGuestQueries =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("supports_inline_queries"))
        {
            Result.SupportsInlineQueries =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_connect_to_business"))
        {
            Result.CanConnectToBusiness =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_main_web_app"))
        {
            Result.HasMainWebApp =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_topics_enabled"))
        {
            Result.HasTopicsEnabled =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("allows_users_to_create_topics"))
        {
            Result.AllowsUsersToCreateTopics =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("can_manage_bots"))
        {
            Result.CanManageBots =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("supports_join_request_queries"))
        {
            Result.SupportsJoinRequestQueries =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UserChatBoosts>
{
    static ::TelegramBotAPI::Type::UserChatBoosts Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UserChatBoosts Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("boosts"))
        {
            Result.Boosts =
                FromJson<std::vector<::TelegramBotAPI::Type::ChatBoost>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: boosts"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UserProfileAudios>
{
    static ::TelegramBotAPI::Type::UserProfileAudios Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UserProfileAudios Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("total_count"))
        {
            Result.TotalCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: total_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("audios"))
        {
            Result.Audios =
                FromJson<std::vector<::TelegramBotAPI::Type::Audio>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: audios"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UserProfilePhotos>
{
    static ::TelegramBotAPI::Type::UserProfilePhotos Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UserProfilePhotos Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("total_count"))
        {
            Result.TotalCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: total_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("photos"))
        {
            Result.Photos =
                FromJson<std::vector<std::vector<::TelegramBotAPI::Type::PhotoSize>>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: photos"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UserRating>
{
    static ::TelegramBotAPI::Type::UserRating Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UserRating Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("level"))
        {
            Result.Level =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: level"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("rating"))
        {
            Result.Rating =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: rating"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("current_level_rating"))
        {
            Result.CurrentLevelRating =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: current_level_rating"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("next_level_rating"))
        {
            Result.NextLevelRating =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UsersShared>
{
    static ::TelegramBotAPI::Type::UsersShared Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::UsersShared Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("request_id"))
        {
            Result.RequestID =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: request_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("users"))
        {
            Result.Users =
                FromJson<std::vector<::TelegramBotAPI::Type::SharedUser>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: users"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Venue>
{
    static ::TelegramBotAPI::Type::Venue Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Venue Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("location"))
        {
            Result.Location =
                FromJson<::TelegramBotAPI::Type::Location>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: location"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("title"))
        {
            Result.Title =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: title"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("address"))
        {
            Result.Address =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: address"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("foursquare_id"))
        {
            Result.FoursquareID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("foursquare_type"))
        {
            Result.FoursquareType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("google_place_id"))
        {
            Result.GooglePlaceID =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("google_place_type"))
        {
            Result.GooglePlaceType =
                FromJson<std::string>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Video>
{
    static ::TelegramBotAPI::Type::Video Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Video Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: width"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: height"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: duration"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<::TelegramBotAPI::Type::PhotoSize>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("cover"))
        {
            Result.Cover =
                FromJson<std::vector<::TelegramBotAPI::Type::PhotoSize>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("start_timestamp"))
        {
            Result.StartTimestamp =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("qualities"))
        {
            Result.Qualities =
                FromJson<std::vector<::TelegramBotAPI::Type::VideoQuality>>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_name"))
        {
            Result.FileName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mime_type"))
        {
            Result.MimeType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatEnded>
{
    static ::TelegramBotAPI::Type::VideoChatEnded Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::VideoChatEnded Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: duration"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatParticipantsInvited>
{
    static ::TelegramBotAPI::Type::VideoChatParticipantsInvited Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::VideoChatParticipantsInvited Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("users"))
        {
            Result.Users =
                FromJson<std::vector<::TelegramBotAPI::Type::User>>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: users"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatScheduled>
{
    static ::TelegramBotAPI::Type::VideoChatScheduled Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::VideoChatScheduled Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("start_date"))
        {
            Result.StartDate =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: start_date"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatStarted>
{
    static ::TelegramBotAPI::Type::VideoChatStarted Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::VideoChatStarted Result{};


        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoNote>
{
    static ::TelegramBotAPI::Type::VideoNote Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::VideoNote Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("length"))
        {
            Result.Length =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: length"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: duration"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("thumbnail"))
        {
            Result.Thumbnail =
                FromJson<::TelegramBotAPI::Type::PhotoSize>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoQuality>
{
    static ::TelegramBotAPI::Type::VideoQuality Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::VideoQuality Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("width"))
        {
            Result.Width =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: width"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("height"))
        {
            Result.Height =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: height"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("codec"))
        {
            Result.Codec =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: codec"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Voice>
{
    static ::TelegramBotAPI::Type::Voice Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::Voice Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("file_id"))
        {
            Result.FileID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_unique_id"))
        {
            Result.FileUniqueID =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: file_unique_id"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("duration"))
        {
            Result.Duration =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: duration"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("mime_type"))
        {
            Result.MimeType =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("file_size"))
        {
            Result.FileSize =
                FromJson<long long>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::WebAppData>
{
    static ::TelegramBotAPI::Type::WebAppData Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::WebAppData Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("data"))
        {
            Result.Data =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: data"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("button_text"))
        {
            Result.ButtonText =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: button_text"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::WebAppInfo>
{
    static ::TelegramBotAPI::Type::WebAppInfo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::WebAppInfo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: url"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::WebhookInfo>
{
    static ::TelegramBotAPI::Type::WebhookInfo Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::WebhookInfo Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("url"))
        {
            Result.URL =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: url"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("has_custom_certificate"))
        {
            Result.HasCustomCertificate =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: has_custom_certificate"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("pending_update_count"))
        {
            Result.PendingUpdateCount =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: pending_update_count"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("ip_address"))
        {
            Result.IPAddress =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_error_date"))
        {
            Result.LastErrorDate =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_error_message"))
        {
            Result.LastErrorMessage =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("last_synchronization_error_date"))
        {
            Result.LastSynchronizationErrorDate =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("max_connections"))
        {
            Result.MaxConnections =
                FromJson<long long>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("allowed_updates"))
        {
            Result.AllowedUpdates =
                FromJson<std::vector<std::string>>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::WriteAccessAllowed>
{
    static ::TelegramBotAPI::Type::WriteAccessAllowed Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::WriteAccessAllowed Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("from_request"))
        {
            Result.FromRequest =
                FromJson<bool>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("web_app_name"))
        {
            Result.WebAppName =
                FromJson<std::string>(*FieldValue);
        }
        if (const auto* FieldValue = ObjectValue.if_contains("from_attachment_menu"))
        {
            Result.FromAttachmentMenu =
                FromJson<bool>(*FieldValue);
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OkResponse>
{
    static ::TelegramBotAPI::Type::OkResponse Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::OkResponse Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("ok"))
        {
            Result.Ok =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: ok"
            );
        }

        return Result;
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ErrorResponse>
{
    static ::TelegramBotAPI::Type::ErrorResponse Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        ::TelegramBotAPI::Type::ErrorResponse Result{};

        if (const auto* FieldValue = ObjectValue.if_contains("ok"))
        {
            Result.Ok =
                FromJson<bool>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: ok"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("error_code"))
        {
            Result.ErrorCode =
                FromJson<long long>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: error_code"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("description"))
        {
            Result.Description =
                FromJson<std::string>(*FieldValue);
        }
        else
        {
            throw Detail::DeserializationMismatch(
                "Missing required field: description"
            );
        }
        if (const auto* FieldValue = ObjectValue.if_contains("parameters"))
        {
            Result.Parameters =
                FromJson<::TelegramBotAPI::Type::ResponseParameters>(*FieldValue);
        }

        return Result;
    }
};
template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFill>
{
    static std::variant<::TelegramBotAPI::Type::BackgroundFillSolid, ::TelegramBotAPI::Type::BackgroundFillGradient, ::TelegramBotAPI::Type::BackgroundFillFreeformGradient> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "freeform_gradient")
        {
            return FromJson<::TelegramBotAPI::Type::BackgroundFillFreeformGradient>(Value);
        }

        if (Discriminator == "gradient")
        {
            return FromJson<::TelegramBotAPI::Type::BackgroundFillGradient>(Value);
        }

        if (Discriminator == "solid")
        {
            return FromJson<::TelegramBotAPI::Type::BackgroundFillSolid>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union BackgroundFill"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundType>
{
    static std::variant<::TelegramBotAPI::Type::BackgroundTypeFill, ::TelegramBotAPI::Type::BackgroundTypeWallpaper, ::TelegramBotAPI::Type::BackgroundTypePattern, ::TelegramBotAPI::Type::BackgroundTypeChatTheme> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "chat_theme")
        {
            return FromJson<::TelegramBotAPI::Type::BackgroundTypeChatTheme>(Value);
        }

        if (Discriminator == "fill")
        {
            return FromJson<::TelegramBotAPI::Type::BackgroundTypeFill>(Value);
        }

        if (Discriminator == "pattern")
        {
            return FromJson<::TelegramBotAPI::Type::BackgroundTypePattern>(Value);
        }

        if (Discriminator == "wallpaper")
        {
            return FromJson<::TelegramBotAPI::Type::BackgroundTypeWallpaper>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union BackgroundType"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScope>
{
    static std::variant<::TelegramBotAPI::Type::BotCommandScopeDefault, ::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats, ::TelegramBotAPI::Type::BotCommandScopeAllGroupChats, ::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators, ::TelegramBotAPI::Type::BotCommandScopeChat, ::TelegramBotAPI::Type::BotCommandScopeChatAdministrators, ::TelegramBotAPI::Type::BotCommandScopeChatMember> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "all_chat_administrators")
        {
            return FromJson<::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators>(Value);
        }

        if (Discriminator == "all_group_chats")
        {
            return FromJson<::TelegramBotAPI::Type::BotCommandScopeAllGroupChats>(Value);
        }

        if (Discriminator == "all_private_chats")
        {
            return FromJson<::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats>(Value);
        }

        if (Discriminator == "chat")
        {
            return FromJson<::TelegramBotAPI::Type::BotCommandScopeChat>(Value);
        }

        if (Discriminator == "chat_administrators")
        {
            return FromJson<::TelegramBotAPI::Type::BotCommandScopeChatAdministrators>(Value);
        }

        if (Discriminator == "chat_member")
        {
            return FromJson<::TelegramBotAPI::Type::BotCommandScopeChatMember>(Value);
        }

        if (Discriminator == "default")
        {
            return FromJson<::TelegramBotAPI::Type::BotCommandScopeDefault>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union BotCommandScope"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSource>
{
    static std::variant<::TelegramBotAPI::Type::ChatBoostSourcePremium, ::TelegramBotAPI::Type::ChatBoostSourceGiftCode, ::TelegramBotAPI::Type::ChatBoostSourceGiveaway> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("source");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: source"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "gift_code")
        {
            return FromJson<::TelegramBotAPI::Type::ChatBoostSourceGiftCode>(Value);
        }

        if (Discriminator == "giveaway")
        {
            return FromJson<::TelegramBotAPI::Type::ChatBoostSourceGiveaway>(Value);
        }

        if (Discriminator == "premium")
        {
            return FromJson<::TelegramBotAPI::Type::ChatBoostSourcePremium>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union ChatBoostSource"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMember>
{
    static std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("status");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: status"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "administrator")
        {
            return FromJson<::TelegramBotAPI::Type::ChatMemberAdministrator>(Value);
        }

        if (Discriminator == "creator")
        {
            return FromJson<::TelegramBotAPI::Type::ChatMemberOwner>(Value);
        }

        if (Discriminator == "kicked")
        {
            return FromJson<::TelegramBotAPI::Type::ChatMemberBanned>(Value);
        }

        if (Discriminator == "left")
        {
            return FromJson<::TelegramBotAPI::Type::ChatMemberLeft>(Value);
        }

        if (Discriminator == "member")
        {
            return FromJson<::TelegramBotAPI::Type::ChatMemberMember>(Value);
        }

        if (Discriminator == "restricted")
        {
            return FromJson<::TelegramBotAPI::Type::ChatMemberRestricted>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union ChatMember"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResult>
{
    static std::variant<::TelegramBotAPI::Type::InlineQueryResultCachedAudio, ::TelegramBotAPI::Type::InlineQueryResultCachedDocument, ::TelegramBotAPI::Type::InlineQueryResultCachedGif, ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto, ::TelegramBotAPI::Type::InlineQueryResultCachedSticker, ::TelegramBotAPI::Type::InlineQueryResultCachedVideo, ::TelegramBotAPI::Type::InlineQueryResultCachedVoice, ::TelegramBotAPI::Type::InlineQueryResultArticle, ::TelegramBotAPI::Type::InlineQueryResultAudio, ::TelegramBotAPI::Type::InlineQueryResultContact, ::TelegramBotAPI::Type::InlineQueryResultGame, ::TelegramBotAPI::Type::InlineQueryResultDocument, ::TelegramBotAPI::Type::InlineQueryResultGif, ::TelegramBotAPI::Type::InlineQueryResultLocation, ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif, ::TelegramBotAPI::Type::InlineQueryResultPhoto, ::TelegramBotAPI::Type::InlineQueryResultVenue, ::TelegramBotAPI::Type::InlineQueryResultVideo, ::TelegramBotAPI::Type::InlineQueryResultVoice> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "article")
        {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultArticle>(Value);
        }

        if (Discriminator == "contact")
        {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultContact>(Value);
        }

        if (Discriminator == "game")
        {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultGame>(Value);
        }

        if (Discriminator == "location")
        {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultLocation>(Value);
        }

        if (Discriminator == "sticker")
        {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedSticker>(Value);
        }

        if (Discriminator == "venue")
        {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultVenue>(Value);
        }

        if (Discriminator == "audio")
        {
            int MatchCount = 0;
            int MatchIndex = -1;

            if (ObjectValue.if_contains("audio_url") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 0;
            }

            if (ObjectValue.if_contains("audio_file_id") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 1;
            }

            if (MatchCount == 1)
            {
                switch (MatchIndex)
                {
                    case 0:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultAudio>(Value);
                    case 1:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedAudio>(Value);
                }
            }

            if (MatchCount > 1)
            {
                throw std::invalid_argument(
                    "Ambiguous discriminator presence union: InlineQueryResult"
                );
            }

            throw Detail::DeserializationMismatch(
                "No presence alternative matched for union InlineQueryResult"
            );
        }

        if (Discriminator == "document")
        {
            int MatchCount = 0;
            int MatchIndex = -1;

            if (ObjectValue.if_contains("document_file_id") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 0;
            }

            if (ObjectValue.if_contains("document_url") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 1;
            }

            if (MatchCount == 1)
            {
                switch (MatchIndex)
                {
                    case 0:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedDocument>(Value);
                    case 1:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultDocument>(Value);
                }
            }

            if (MatchCount > 1)
            {
                throw std::invalid_argument(
                    "Ambiguous discriminator presence union: InlineQueryResult"
                );
            }

            throw Detail::DeserializationMismatch(
                "No presence alternative matched for union InlineQueryResult"
            );
        }

        if (Discriminator == "gif")
        {
            int MatchCount = 0;
            int MatchIndex = -1;

            if (ObjectValue.if_contains("gif_file_id") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 0;
            }

            if (ObjectValue.if_contains("gif_url") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 1;
            }

            if (MatchCount == 1)
            {
                switch (MatchIndex)
                {
                    case 0:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedGif>(Value);
                    case 1:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultGif>(Value);
                }
            }

            if (MatchCount > 1)
            {
                throw std::invalid_argument(
                    "Ambiguous discriminator presence union: InlineQueryResult"
                );
            }

            throw Detail::DeserializationMismatch(
                "No presence alternative matched for union InlineQueryResult"
            );
        }

        if (Discriminator == "mpeg4_gif")
        {
            int MatchCount = 0;
            int MatchIndex = -1;

            if (ObjectValue.if_contains("mpeg4_file_id") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 0;
            }

            if (ObjectValue.if_contains("mpeg4_url") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 1;
            }

            if (MatchCount == 1)
            {
                switch (MatchIndex)
                {
                    case 0:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif>(Value);
                    case 1:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif>(Value);
                }
            }

            if (MatchCount > 1)
            {
                throw std::invalid_argument(
                    "Ambiguous discriminator presence union: InlineQueryResult"
                );
            }

            throw Detail::DeserializationMismatch(
                "No presence alternative matched for union InlineQueryResult"
            );
        }

        if (Discriminator == "photo")
        {
            int MatchCount = 0;
            int MatchIndex = -1;

            if (ObjectValue.if_contains("photo_file_id") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 0;
            }

            if (ObjectValue.if_contains("photo_url") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 1;
            }

            if (MatchCount == 1)
            {
                switch (MatchIndex)
                {
                    case 0:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedPhoto>(Value);
                    case 1:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultPhoto>(Value);
                }
            }

            if (MatchCount > 1)
            {
                throw std::invalid_argument(
                    "Ambiguous discriminator presence union: InlineQueryResult"
                );
            }

            throw Detail::DeserializationMismatch(
                "No presence alternative matched for union InlineQueryResult"
            );
        }

        if (Discriminator == "video")
        {
            int MatchCount = 0;
            int MatchIndex = -1;

            if (ObjectValue.if_contains("video_file_id") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 0;
            }

            if (ObjectValue.if_contains("video_url") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 1;
            }

            if (MatchCount == 1)
            {
                switch (MatchIndex)
                {
                    case 0:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedVideo>(Value);
                    case 1:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultVideo>(Value);
                }
            }

            if (MatchCount > 1)
            {
                throw std::invalid_argument(
                    "Ambiguous discriminator presence union: InlineQueryResult"
                );
            }

            throw Detail::DeserializationMismatch(
                "No presence alternative matched for union InlineQueryResult"
            );
        }

        if (Discriminator == "voice")
        {
            int MatchCount = 0;
            int MatchIndex = -1;

            if (ObjectValue.if_contains("voice_file_id") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 0;
            }

            if (ObjectValue.if_contains("voice_url") != nullptr)
            {
                ++MatchCount;
                MatchIndex = 1;
            }

            if (MatchCount == 1)
            {
                switch (MatchIndex)
                {
                    case 0:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedVoice>(Value);
                    case 1:
                        return FromJson<::TelegramBotAPI::Type::InlineQueryResultVoice>(Value);
                }
            }

            if (MatchCount > 1)
            {
                throw std::invalid_argument(
                    "Ambiguous discriminator presence union: InlineQueryResult"
                );
            }

            throw Detail::DeserializationMismatch(
                "No presence alternative matched for union InlineQueryResult"
            );
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union InlineQueryResult"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMedia>
{
    static std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "animation")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaAnimation>(Value);
        }

        if (Discriminator == "audio")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaAudio>(Value);
        }

        if (Discriminator == "document")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaDocument>(Value);
        }

        if (Discriminator == "live_photo")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaLivePhoto>(Value);
        }

        if (Discriminator == "photo")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaPhoto>(Value);
        }

        if (Discriminator == "video")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaVideo>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union InputMedia"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMessageContent>
{
    static std::variant<::TelegramBotAPI::Type::InputTextMessageContent, ::TelegramBotAPI::Type::InputRichMessageContent, ::TelegramBotAPI::Type::InputLocationMessageContent, ::TelegramBotAPI::Type::InputVenueMessageContent, ::TelegramBotAPI::Type::InputContactMessageContent, ::TelegramBotAPI::Type::InputInvoiceMessageContent> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        int MatchCount = 0;
        int MatchIndex = -1;

        if (ObjectValue.if_contains("message_text") != nullptr)
        {
            ++MatchCount;
            MatchIndex = 0;
        }

        if (ObjectValue.if_contains("rich_message") != nullptr)
        {
            ++MatchCount;
            MatchIndex = 1;
        }

        if (ObjectValue.if_contains("latitude") != nullptr && ObjectValue.if_contains("longitude") != nullptr)
        {
            ++MatchCount;
            MatchIndex = 2;
        }

        if (ObjectValue.if_contains("address") != nullptr && ObjectValue.if_contains("latitude") != nullptr && ObjectValue.if_contains("longitude") != nullptr && ObjectValue.if_contains("title") != nullptr)
        {
            ++MatchCount;
            MatchIndex = 3;
        }

        if (ObjectValue.if_contains("first_name") != nullptr && ObjectValue.if_contains("phone_number") != nullptr)
        {
            ++MatchCount;
            MatchIndex = 4;
        }

        if (ObjectValue.if_contains("currency") != nullptr && ObjectValue.if_contains("description") != nullptr && ObjectValue.if_contains("payload") != nullptr && ObjectValue.if_contains("prices") != nullptr && ObjectValue.if_contains("title") != nullptr)
        {
            ++MatchCount;
            MatchIndex = 5;
        }

        if (MatchCount == 1)
        {
            switch (MatchIndex)
            {
                case 0:
                    return FromJson<::TelegramBotAPI::Type::InputTextMessageContent>(Value);
                case 1:
                    return FromJson<::TelegramBotAPI::Type::InputRichMessageContent>(Value);
                case 2:
                    return FromJson<::TelegramBotAPI::Type::InputLocationMessageContent>(Value);
                case 3:
                    return FromJson<::TelegramBotAPI::Type::InputVenueMessageContent>(Value);
                case 4:
                    return FromJson<::TelegramBotAPI::Type::InputContactMessageContent>(Value);
                case 5:
                    return FromJson<::TelegramBotAPI::Type::InputInvoiceMessageContent>(Value);
            }
        }

        if (MatchCount > 1)
        {
            throw std::invalid_argument(
                "Ambiguous presence union: InputMessageContent"
            );
        }

        throw Detail::DeserializationMismatch(
            "No presence alternative matched for union InputMessageContent"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMedia>
{
    static std::variant<::TelegramBotAPI::Type::InputPaidMediaLivePhoto, ::TelegramBotAPI::Type::InputPaidMediaPhoto, ::TelegramBotAPI::Type::InputPaidMediaVideo> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "live_photo")
        {
            return FromJson<::TelegramBotAPI::Type::InputPaidMediaLivePhoto>(Value);
        }

        if (Discriminator == "photo")
        {
            return FromJson<::TelegramBotAPI::Type::InputPaidMediaPhoto>(Value);
        }

        if (Discriminator == "video")
        {
            return FromJson<::TelegramBotAPI::Type::InputPaidMediaVideo>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union InputPaidMedia"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPollMedia>
{
    static std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaLocation, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVenue, ::TelegramBotAPI::Type::InputMediaVideo> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "animation")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaAnimation>(Value);
        }

        if (Discriminator == "audio")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaAudio>(Value);
        }

        if (Discriminator == "document")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaDocument>(Value);
        }

        if (Discriminator == "live_photo")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaLivePhoto>(Value);
        }

        if (Discriminator == "location")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaLocation>(Value);
        }

        if (Discriminator == "photo")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaPhoto>(Value);
        }

        if (Discriminator == "venue")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaVenue>(Value);
        }

        if (Discriminator == "video")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaVideo>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union InputPollMedia"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPollOptionMedia>
{
    static std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaLink, ::TelegramBotAPI::Type::InputMediaLivePhoto, ::TelegramBotAPI::Type::InputMediaLocation, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaSticker, ::TelegramBotAPI::Type::InputMediaVenue, ::TelegramBotAPI::Type::InputMediaVideo> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "animation")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaAnimation>(Value);
        }

        if (Discriminator == "link")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaLink>(Value);
        }

        if (Discriminator == "live_photo")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaLivePhoto>(Value);
        }

        if (Discriminator == "location")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaLocation>(Value);
        }

        if (Discriminator == "photo")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaPhoto>(Value);
        }

        if (Discriminator == "sticker")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaSticker>(Value);
        }

        if (Discriminator == "venue")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaVenue>(Value);
        }

        if (Discriminator == "video")
        {
            return FromJson<::TelegramBotAPI::Type::InputMediaVideo>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union InputPollOptionMedia"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputProfilePhoto>
{
    static std::variant<::TelegramBotAPI::Type::InputProfilePhotoStatic, ::TelegramBotAPI::Type::InputProfilePhotoAnimated> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "animated")
        {
            return FromJson<::TelegramBotAPI::Type::InputProfilePhotoAnimated>(Value);
        }

        if (Discriminator == "static")
        {
            return FromJson<::TelegramBotAPI::Type::InputProfilePhotoStatic>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union InputProfilePhoto"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputStoryContent>
{
    static std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "photo")
        {
            return FromJson<::TelegramBotAPI::Type::InputStoryContentPhoto>(Value);
        }

        if (Discriminator == "video")
        {
            return FromJson<::TelegramBotAPI::Type::InputStoryContentVideo>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union InputStoryContent"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MaybeInaccessibleMessage>
{
    static std::variant<std::shared_ptr<::TelegramBotAPI::Type::Message>, ::TelegramBotAPI::Type::InaccessibleMessage> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* FieldValue = ObjectValue.if_contains("date");
        if (FieldValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing field-value discriminator: date"
            );
        }

        const auto NumericValue = FromJson<long long>(*FieldValue);

        if (NumericValue == 0)
        {
            return FromJson<::TelegramBotAPI::Type::InaccessibleMessage>(Value);
        }

        if (NumericValue > 0)
        {
            return FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Invalid field-value discriminator for union MaybeInaccessibleMessage"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButton>
{
    static std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "commands")
        {
            return FromJson<::TelegramBotAPI::Type::MenuButtonCommands>(Value);
        }

        if (Discriminator == "default")
        {
            return FromJson<::TelegramBotAPI::Type::MenuButtonDefault>(Value);
        }

        if (Discriminator == "web_app")
        {
            return FromJson<::TelegramBotAPI::Type::MenuButtonWebApp>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union MenuButton"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOrigin>
{
    static std::variant<::TelegramBotAPI::Type::MessageOriginUser, ::TelegramBotAPI::Type::MessageOriginHiddenUser, ::TelegramBotAPI::Type::MessageOriginChat, ::TelegramBotAPI::Type::MessageOriginChannel> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "channel")
        {
            return FromJson<::TelegramBotAPI::Type::MessageOriginChannel>(Value);
        }

        if (Discriminator == "chat")
        {
            return FromJson<::TelegramBotAPI::Type::MessageOriginChat>(Value);
        }

        if (Discriminator == "hidden_user")
        {
            return FromJson<::TelegramBotAPI::Type::MessageOriginHiddenUser>(Value);
        }

        if (Discriminator == "user")
        {
            return FromJson<::TelegramBotAPI::Type::MessageOriginUser>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union MessageOrigin"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGift>
{
    static std::variant<::TelegramBotAPI::Type::OwnedGiftRegular, ::TelegramBotAPI::Type::OwnedGiftUnique> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "regular")
        {
            return FromJson<::TelegramBotAPI::Type::OwnedGiftRegular>(Value);
        }

        if (Discriminator == "unique")
        {
            return FromJson<::TelegramBotAPI::Type::OwnedGiftUnique>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union OwnedGift"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMedia>
{
    static std::variant<::TelegramBotAPI::Type::PaidMediaLivePhoto, ::TelegramBotAPI::Type::PaidMediaPhoto, ::TelegramBotAPI::Type::PaidMediaPreview, ::TelegramBotAPI::Type::PaidMediaVideo> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "live_photo")
        {
            return FromJson<::TelegramBotAPI::Type::PaidMediaLivePhoto>(Value);
        }

        if (Discriminator == "photo")
        {
            return FromJson<::TelegramBotAPI::Type::PaidMediaPhoto>(Value);
        }

        if (Discriminator == "preview")
        {
            return FromJson<::TelegramBotAPI::Type::PaidMediaPreview>(Value);
        }

        if (Discriminator == "video")
        {
            return FromJson<::TelegramBotAPI::Type::PaidMediaVideo>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union PaidMedia"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementError>
{
    static std::variant<::TelegramBotAPI::Type::PassportElementErrorDataField, ::TelegramBotAPI::Type::PassportElementErrorFrontSide, ::TelegramBotAPI::Type::PassportElementErrorReverseSide, ::TelegramBotAPI::Type::PassportElementErrorSelfie, ::TelegramBotAPI::Type::PassportElementErrorFile, ::TelegramBotAPI::Type::PassportElementErrorFiles, ::TelegramBotAPI::Type::PassportElementErrorTranslationFile, ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles, ::TelegramBotAPI::Type::PassportElementErrorUnspecified> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("source");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: source"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "data")
        {
            return FromJson<::TelegramBotAPI::Type::PassportElementErrorDataField>(Value);
        }

        if (Discriminator == "file")
        {
            return FromJson<::TelegramBotAPI::Type::PassportElementErrorFile>(Value);
        }

        if (Discriminator == "files")
        {
            return FromJson<::TelegramBotAPI::Type::PassportElementErrorFiles>(Value);
        }

        if (Discriminator == "front_side")
        {
            return FromJson<::TelegramBotAPI::Type::PassportElementErrorFrontSide>(Value);
        }

        if (Discriminator == "reverse_side")
        {
            return FromJson<::TelegramBotAPI::Type::PassportElementErrorReverseSide>(Value);
        }

        if (Discriminator == "selfie")
        {
            return FromJson<::TelegramBotAPI::Type::PassportElementErrorSelfie>(Value);
        }

        if (Discriminator == "translation_file")
        {
            return FromJson<::TelegramBotAPI::Type::PassportElementErrorTranslationFile>(Value);
        }

        if (Discriminator == "translation_files")
        {
            return FromJson<::TelegramBotAPI::Type::PassportElementErrorTranslationFiles>(Value);
        }

        if (Discriminator == "unspecified")
        {
            return FromJson<::TelegramBotAPI::Type::PassportElementErrorUnspecified>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union PassportElementError"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionType>
{
    static std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "custom_emoji")
        {
            return FromJson<::TelegramBotAPI::Type::ReactionTypeCustomEmoji>(Value);
        }

        if (Discriminator == "emoji")
        {
            return FromJson<::TelegramBotAPI::Type::ReactionTypeEmoji>(Value);
        }

        if (Discriminator == "paid")
        {
            return FromJson<::TelegramBotAPI::Type::ReactionTypePaid>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union ReactionType"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalState>
{
    static std::variant<::TelegramBotAPI::Type::RevenueWithdrawalStatePending, ::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded, ::TelegramBotAPI::Type::RevenueWithdrawalStateFailed> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "failed")
        {
            return FromJson<::TelegramBotAPI::Type::RevenueWithdrawalStateFailed>(Value);
        }

        if (Discriminator == "pending")
        {
            return FromJson<::TelegramBotAPI::Type::RevenueWithdrawalStatePending>(Value);
        }

        if (Discriminator == "succeeded")
        {
            return FromJson<::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union RevenueWithdrawalState"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaType>
{
    static std::variant<::TelegramBotAPI::Type::StoryAreaTypeLocation, ::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction, ::TelegramBotAPI::Type::StoryAreaTypeLink, ::TelegramBotAPI::Type::StoryAreaTypeWeather, ::TelegramBotAPI::Type::StoryAreaTypeUniqueGift> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "link")
        {
            return FromJson<::TelegramBotAPI::Type::StoryAreaTypeLink>(Value);
        }

        if (Discriminator == "location")
        {
            return FromJson<::TelegramBotAPI::Type::StoryAreaTypeLocation>(Value);
        }

        if (Discriminator == "suggested_reaction")
        {
            return FromJson<::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction>(Value);
        }

        if (Discriminator == "unique_gift")
        {
            return FromJson<::TelegramBotAPI::Type::StoryAreaTypeUniqueGift>(Value);
        }

        if (Discriminator == "weather")
        {
            return FromJson<::TelegramBotAPI::Type::StoryAreaTypeWeather>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union StoryAreaType"
        );
    }
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartner>
{
    static std::variant<::TelegramBotAPI::Type::TransactionPartnerUser, ::TelegramBotAPI::Type::TransactionPartnerChat, ::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram, ::TelegramBotAPI::Type::TransactionPartnerFragment, ::TelegramBotAPI::Type::TransactionPartnerTelegramAds, ::TelegramBotAPI::Type::TransactionPartnerTelegramApi, ::TelegramBotAPI::Type::TransactionPartnerOther> Deserialize(
        const boost::json::value& Value)
    {
        Detail::RequireObject(Value);

        const auto& ObjectValue = Value.as_object();

        const auto* DiscriminatorValue = ObjectValue.if_contains("type");
        if (DiscriminatorValue == nullptr)
        {
            throw Detail::DeserializationMismatch(
                "Missing discriminator field: type"
            );
        }

        const auto Discriminator = FromJson<std::string>(*DiscriminatorValue);

        if (Discriminator == "affiliate_program")
        {
            return FromJson<::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram>(Value);
        }

        if (Discriminator == "chat")
        {
            return FromJson<::TelegramBotAPI::Type::TransactionPartnerChat>(Value);
        }

        if (Discriminator == "fragment")
        {
            return FromJson<::TelegramBotAPI::Type::TransactionPartnerFragment>(Value);
        }

        if (Discriminator == "other")
        {
            return FromJson<::TelegramBotAPI::Type::TransactionPartnerOther>(Value);
        }

        if (Discriminator == "telegram_ads")
        {
            return FromJson<::TelegramBotAPI::Type::TransactionPartnerTelegramAds>(Value);
        }

        if (Discriminator == "telegram_api")
        {
            return FromJson<::TelegramBotAPI::Type::TransactionPartnerTelegramApi>(Value);
        }

        if (Discriminator == "user")
        {
            return FromJson<::TelegramBotAPI::Type::TransactionPartnerUser>(Value);
        }

        throw Detail::DeserializationMismatch(
            "Unknown discriminator value for union TransactionPartner"
        );
    }
};
template <typename T>
T Deserialize(const boost::json::value& Value)
{
    return FromJson<T>(Value);
}

} // namespace TelegramBotAPI::JSON

#endif // TELEGRAMBOTAPI_JSON_DESERIALIZER_HPP