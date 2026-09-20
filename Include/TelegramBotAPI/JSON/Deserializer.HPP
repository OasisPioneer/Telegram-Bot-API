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
#include <exception>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::JSON {

template <typename T>
struct Deserializer;

template <typename T>
T FromJson(
    const boost::json::value &Value
) {
    return Deserializer<T>::Deserialize(Value);
}

template <typename T>
T FromJson(
    const boost::json::value *Value
) {
    if (Value == nullptr) {
        throw std::invalid_argument(
            "Cannot deserialize from null JSON value pointer"
        );
    }

    return FromJson<T>(*Value);
}

template <>
struct Deserializer<bool> {
    static bool Deserialize(const boost::json::value &Value) {
        return boost::json::value_to<bool>(Value);
    }
};

template <>
struct Deserializer<long long> {
    static long long Deserialize(const boost::json::value &Value) {
        return boost::json::value_to<long long>(Value);
    }
};

template <>
struct Deserializer<double> {
    static double Deserialize(const boost::json::value &Value) {
        return boost::json::value_to<double>(Value);
    }
};

template <>
struct Deserializer<std::string> {
    static std::string Deserialize(const boost::json::value &Value) {
        return boost::json::value_to<std::string>(Value);
    }
};

template <typename T>
struct Deserializer<std::optional<T>> {
    static std::optional<T> Deserialize(
        const boost::json::value &Value
    ) {
        if (Value.is_null()) {
            return std::nullopt;
        }

        return FromJson<T>(Value);
    }
};

template <typename T>
struct Deserializer<std::vector<T>> {
    static std::vector<T> Deserialize(
        const boost::json::value &Value
    ) {
        const auto &Array = Value.as_array();
        std::vector<T> Result;
        Result.reserve(Array.size());

        for (const auto &Element : Array) {
            Result.push_back(FromJson<T>(Element));
        }

        return Result;
    }
};

template <typename... Types>
struct Deserializer<std::variant<Types...>> {
    static std::variant<Types...> Deserialize(
        const boost::json::value &Value
    ) {
        return TryDeserialize<Types...>(Value);
    }

private:
    template <typename First>
    static std::variant<Types...> TryDeserialize(
        const boost::json::value &Value
    ) {
        return FromJson<First>(Value);
    }

    template <typename First, typename Second, typename... Rest>
    static std::variant<Types...> TryDeserialize(
        const boost::json::value &Value
    ) {
        try {
            return FromJson<First>(Value);
        } catch (...) {
            return TryDeserialize<Second, Rest...>(Value);
        }
    }
};

template <typename T>
struct Deserializer<std::shared_ptr<T>> {
    static std::shared_ptr<T> Deserialize(
        const boost::json::value &Value
    ) {
        return std::make_shared<T>(FromJson<T>(Value));
    }
};

/* Deserializer specializations */

template <>
struct Deserializer<::TelegramBotAPI::Type::AcceptedGiftTypes> {
    static ::TelegramBotAPI::Type::AcceptedGiftTypes Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::AffiliateInfo> {
    static ::TelegramBotAPI::Type::AffiliateInfo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Animation> {
    static ::TelegramBotAPI::Type::Animation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Audio> {
    static ::TelegramBotAPI::Type::Audio Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFillFreeformGradient> {
    static ::TelegramBotAPI::Type::BackgroundFillFreeformGradient Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFillGradient> {
    static ::TelegramBotAPI::Type::BackgroundFillGradient Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFillSolid> {
    static ::TelegramBotAPI::Type::BackgroundFillSolid Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypeChatTheme> {
    static ::TelegramBotAPI::Type::BackgroundTypeChatTheme Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypeFill> {
    static ::TelegramBotAPI::Type::BackgroundTypeFill Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypePattern> {
    static ::TelegramBotAPI::Type::BackgroundTypePattern Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundTypeWallpaper> {
    static ::TelegramBotAPI::Type::BackgroundTypeWallpaper Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Birthdate> {
    static ::TelegramBotAPI::Type::Birthdate Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotAccessSettings> {
    static ::TelegramBotAPI::Type::BotAccessSettings Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommand> {
    static ::TelegramBotAPI::Type::BotCommand Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators> {
    static ::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllGroupChats> {
    static ::TelegramBotAPI::Type::BotCommandScopeAllGroupChats Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats> {
    static ::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeChat> {
    static ::TelegramBotAPI::Type::BotCommandScopeChat Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeChatAdministrators> {
    static ::TelegramBotAPI::Type::BotCommandScopeChatAdministrators Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeChatMember> {
    static ::TelegramBotAPI::Type::BotCommandScopeChatMember Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScopeDefault> {
    static ::TelegramBotAPI::Type::BotCommandScopeDefault Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotDescription> {
    static ::TelegramBotAPI::Type::BotDescription Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotName> {
    static ::TelegramBotAPI::Type::BotName Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotShortDescription> {
    static ::TelegramBotAPI::Type::BotShortDescription Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotSubscriptionUpdated> {
    static ::TelegramBotAPI::Type::BotSubscriptionUpdated Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessBotRights> {
    static ::TelegramBotAPI::Type::BusinessBotRights Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessConnection> {
    static ::TelegramBotAPI::Type::BusinessConnection Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessIntro> {
    static ::TelegramBotAPI::Type::BusinessIntro Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessLocation> {
    static ::TelegramBotAPI::Type::BusinessLocation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessMessagesDeleted> {
    static ::TelegramBotAPI::Type::BusinessMessagesDeleted Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessOpeningHours> {
    static ::TelegramBotAPI::Type::BusinessOpeningHours Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BusinessOpeningHoursInterval> {
    static ::TelegramBotAPI::Type::BusinessOpeningHoursInterval Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CallbackGame> {
    static ::TelegramBotAPI::Type::CallbackGame Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CallbackQuery> {
    static ::TelegramBotAPI::Type::CallbackQuery Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Chat> {
    static ::TelegramBotAPI::Type::Chat Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatAdministratorRights> {
    static ::TelegramBotAPI::Type::ChatAdministratorRights Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBackground> {
    static ::TelegramBotAPI::Type::ChatBackground Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoost> {
    static ::TelegramBotAPI::Type::ChatBoost Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostAdded> {
    static ::TelegramBotAPI::Type::ChatBoostAdded Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostRemoved> {
    static ::TelegramBotAPI::Type::ChatBoostRemoved Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSourceGiftCode> {
    static ::TelegramBotAPI::Type::ChatBoostSourceGiftCode Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSourceGiveaway> {
    static ::TelegramBotAPI::Type::ChatBoostSourceGiveaway Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSourcePremium> {
    static ::TelegramBotAPI::Type::ChatBoostSourcePremium Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostUpdated> {
    static ::TelegramBotAPI::Type::ChatBoostUpdated Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatFullInfo> {
    static ::TelegramBotAPI::Type::ChatFullInfo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatInviteLink> {
    static ::TelegramBotAPI::Type::ChatInviteLink Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatJoinRequest> {
    static ::TelegramBotAPI::Type::ChatJoinRequest Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatLocation> {
    static ::TelegramBotAPI::Type::ChatLocation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberAdministrator> {
    static ::TelegramBotAPI::Type::ChatMemberAdministrator Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberBanned> {
    static ::TelegramBotAPI::Type::ChatMemberBanned Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberLeft> {
    static ::TelegramBotAPI::Type::ChatMemberLeft Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberMember> {
    static ::TelegramBotAPI::Type::ChatMemberMember Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberOwner> {
    static ::TelegramBotAPI::Type::ChatMemberOwner Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberRestricted> {
    static ::TelegramBotAPI::Type::ChatMemberRestricted Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMemberUpdated> {
    static ::TelegramBotAPI::Type::ChatMemberUpdated Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatOwnerChanged> {
    static ::TelegramBotAPI::Type::ChatOwnerChanged Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatOwnerLeft> {
    static ::TelegramBotAPI::Type::ChatOwnerLeft Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatPermissions> {
    static ::TelegramBotAPI::Type::ChatPermissions Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatPhoto> {
    static ::TelegramBotAPI::Type::ChatPhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatShared> {
    static ::TelegramBotAPI::Type::ChatShared Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Checklist> {
    static ::TelegramBotAPI::Type::Checklist Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChecklistTask> {
    static ::TelegramBotAPI::Type::ChecklistTask Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChecklistTasksAdded> {
    static ::TelegramBotAPI::Type::ChecklistTasksAdded Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChecklistTasksDone> {
    static ::TelegramBotAPI::Type::ChecklistTasksDone Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChosenInlineResult> {
    static ::TelegramBotAPI::Type::ChosenInlineResult Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Community> {
    static ::TelegramBotAPI::Type::Community Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CommunityChatAdded> {
    static ::TelegramBotAPI::Type::CommunityChatAdded Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CommunityChatJoined> {
    static ::TelegramBotAPI::Type::CommunityChatJoined Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CommunityChatRemoved> {
    static ::TelegramBotAPI::Type::CommunityChatRemoved Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Contact> {
    static ::TelegramBotAPI::Type::Contact Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::CopyTextButton> {
    static ::TelegramBotAPI::Type::CopyTextButton Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Dice> {
    static ::TelegramBotAPI::Type::Dice Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::DirectMessagePriceChanged> {
    static ::TelegramBotAPI::Type::DirectMessagePriceChanged Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::DirectMessagesTopic> {
    static ::TelegramBotAPI::Type::DirectMessagesTopic Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::DisabledButton> {
    static ::TelegramBotAPI::Type::DisabledButton Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Document> {
    static ::TelegramBotAPI::Type::Document Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::EncryptedCredentials> {
    static ::TelegramBotAPI::Type::EncryptedCredentials Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::EncryptedPassportElement> {
    static ::TelegramBotAPI::Type::EncryptedPassportElement Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::EphemeralMessageParameters> {
    static ::TelegramBotAPI::Type::EphemeralMessageParameters Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ExternalReplyInfo> {
    static ::TelegramBotAPI::Type::ExternalReplyInfo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::File> {
    static ::TelegramBotAPI::Type::File Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForceReply> {
    static ::TelegramBotAPI::Type::ForceReply Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopic> {
    static ::TelegramBotAPI::Type::ForumTopic Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicClosed> {
    static ::TelegramBotAPI::Type::ForumTopicClosed Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicCreated> {
    static ::TelegramBotAPI::Type::ForumTopicCreated Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicEdited> {
    static ::TelegramBotAPI::Type::ForumTopicEdited Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ForumTopicReopened> {
    static ::TelegramBotAPI::Type::ForumTopicReopened Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Game> {
    static ::TelegramBotAPI::Type::Game Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GameHighScore> {
    static ::TelegramBotAPI::Type::GameHighScore Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GeneralForumTopicHidden> {
    static ::TelegramBotAPI::Type::GeneralForumTopicHidden Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GeneralForumTopicUnhidden> {
    static ::TelegramBotAPI::Type::GeneralForumTopicUnhidden Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Gift> {
    static ::TelegramBotAPI::Type::Gift Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GiftBackground> {
    static ::TelegramBotAPI::Type::GiftBackground Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GiftInfo> {
    static ::TelegramBotAPI::Type::GiftInfo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Gifts> {
    static ::TelegramBotAPI::Type::Gifts Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Giveaway> {
    static ::TelegramBotAPI::Type::Giveaway Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GiveawayCompleted> {
    static ::TelegramBotAPI::Type::GiveawayCompleted Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GiveawayCreated> {
    static ::TelegramBotAPI::Type::GiveawayCreated Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::GiveawayWinners> {
    static ::TelegramBotAPI::Type::GiveawayWinners Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InaccessibleMessage> {
    static ::TelegramBotAPI::Type::InaccessibleMessage Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineKeyboardButton> {
    static ::TelegramBotAPI::Type::InlineKeyboardButton Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineKeyboardMarkup> {
    static ::TelegramBotAPI::Type::InlineKeyboardMarkup Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQuery> {
    static ::TelegramBotAPI::Type::InlineQuery Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultArticle> {
    static ::TelegramBotAPI::Type::InlineQueryResultArticle Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultAudio> {
    static ::TelegramBotAPI::Type::InlineQueryResultAudio Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedAudio> {
    static ::TelegramBotAPI::Type::InlineQueryResultCachedAudio Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedDocument> {
    static ::TelegramBotAPI::Type::InlineQueryResultCachedDocument Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedGif> {
    static ::TelegramBotAPI::Type::InlineQueryResultCachedGif Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif> {
    static ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedPhoto> {
    static ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedSticker> {
    static ::TelegramBotAPI::Type::InlineQueryResultCachedSticker Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedVideo> {
    static ::TelegramBotAPI::Type::InlineQueryResultCachedVideo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedVoice> {
    static ::TelegramBotAPI::Type::InlineQueryResultCachedVoice Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultContact> {
    static ::TelegramBotAPI::Type::InlineQueryResultContact Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultDocument> {
    static ::TelegramBotAPI::Type::InlineQueryResultDocument Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultGame> {
    static ::TelegramBotAPI::Type::InlineQueryResultGame Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultGif> {
    static ::TelegramBotAPI::Type::InlineQueryResultGif Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultLocation> {
    static ::TelegramBotAPI::Type::InlineQueryResultLocation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif> {
    static ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultPhoto> {
    static ::TelegramBotAPI::Type::InlineQueryResultPhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultVenue> {
    static ::TelegramBotAPI::Type::InlineQueryResultVenue Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultVideo> {
    static ::TelegramBotAPI::Type::InlineQueryResultVideo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultVoice> {
    static ::TelegramBotAPI::Type::InlineQueryResultVoice Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResultsButton> {
    static ::TelegramBotAPI::Type::InlineQueryResultsButton Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputChecklist> {
    static ::TelegramBotAPI::Type::InputChecklist Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputChecklistTask> {
    static ::TelegramBotAPI::Type::InputChecklistTask Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputContactMessageContent> {
    static ::TelegramBotAPI::Type::InputContactMessageContent Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputInvoiceMessageContent> {
    static ::TelegramBotAPI::Type::InputInvoiceMessageContent Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputLocationMessageContent> {
    static ::TelegramBotAPI::Type::InputLocationMessageContent Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaAnimation> {
    static ::TelegramBotAPI::Type::InputMediaAnimation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaAudio> {
    static ::TelegramBotAPI::Type::InputMediaAudio Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaDocument> {
    static ::TelegramBotAPI::Type::InputMediaDocument Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaLink> {
    static ::TelegramBotAPI::Type::InputMediaLink Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaLivePhoto> {
    static ::TelegramBotAPI::Type::InputMediaLivePhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaLocation> {
    static ::TelegramBotAPI::Type::InputMediaLocation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaPhoto> {
    static ::TelegramBotAPI::Type::InputMediaPhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaSticker> {
    static ::TelegramBotAPI::Type::InputMediaSticker Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaVenue> {
    static ::TelegramBotAPI::Type::InputMediaVenue Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaVideo> {
    static ::TelegramBotAPI::Type::InputMediaVideo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMediaVoiceNote> {
    static ::TelegramBotAPI::Type::InputMediaVoiceNote Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMediaLivePhoto> {
    static ::TelegramBotAPI::Type::InputPaidMediaLivePhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMediaPhoto> {
    static ::TelegramBotAPI::Type::InputPaidMediaPhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMediaVideo> {
    static ::TelegramBotAPI::Type::InputPaidMediaVideo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPollOption> {
    static ::TelegramBotAPI::Type::InputPollOption Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputProfilePhotoAnimated> {
    static ::TelegramBotAPI::Type::InputProfilePhotoAnimated Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputProfilePhotoStatic> {
    static ::TelegramBotAPI::Type::InputProfilePhotoStatic Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlock> {
    static ::TelegramBotAPI::Type::InputRichBlock Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockAnchor> {
    static ::TelegramBotAPI::Type::InputRichBlockAnchor Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockAnimation> {
    static ::TelegramBotAPI::Type::InputRichBlockAnimation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockAudio> {
    static ::TelegramBotAPI::Type::InputRichBlockAudio Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockBlockQuotation> {
    static ::TelegramBotAPI::Type::InputRichBlockBlockQuotation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockButtons> {
    static ::TelegramBotAPI::Type::InputRichBlockButtons Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockCollage> {
    static ::TelegramBotAPI::Type::InputRichBlockCollage Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockDetails> {
    static ::TelegramBotAPI::Type::InputRichBlockDetails Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockDivider> {
    static ::TelegramBotAPI::Type::InputRichBlockDivider Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockDocument> {
    static ::TelegramBotAPI::Type::InputRichBlockDocument Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockExpandableBlockQuotation> {
    static ::TelegramBotAPI::Type::InputRichBlockExpandableBlockQuotation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockFooter> {
    static ::TelegramBotAPI::Type::InputRichBlockFooter Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockList> {
    static ::TelegramBotAPI::Type::InputRichBlockList Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockListItem> {
    static ::TelegramBotAPI::Type::InputRichBlockListItem Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockMap> {
    static ::TelegramBotAPI::Type::InputRichBlockMap Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockMathematicalExpression> {
    static ::TelegramBotAPI::Type::InputRichBlockMathematicalExpression Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockParagraph> {
    static ::TelegramBotAPI::Type::InputRichBlockParagraph Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockPhoto> {
    static ::TelegramBotAPI::Type::InputRichBlockPhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockPreformatted> {
    static ::TelegramBotAPI::Type::InputRichBlockPreformatted Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockPullQuotation> {
    static ::TelegramBotAPI::Type::InputRichBlockPullQuotation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockSectionHeading> {
    static ::TelegramBotAPI::Type::InputRichBlockSectionHeading Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockSlideshow> {
    static ::TelegramBotAPI::Type::InputRichBlockSlideshow Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockTable> {
    static ::TelegramBotAPI::Type::InputRichBlockTable Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockThinking> {
    static ::TelegramBotAPI::Type::InputRichBlockThinking Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockVideo> {
    static ::TelegramBotAPI::Type::InputRichBlockVideo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichBlockVoiceNote> {
    static ::TelegramBotAPI::Type::InputRichBlockVoiceNote Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichMessage> {
    static ::TelegramBotAPI::Type::InputRichMessage Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichMessageContent> {
    static ::TelegramBotAPI::Type::InputRichMessageContent Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputRichMessageMedia> {
    static ::TelegramBotAPI::Type::InputRichMessageMedia Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputSticker> {
    static ::TelegramBotAPI::Type::InputSticker Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputStoryContentPhoto> {
    static ::TelegramBotAPI::Type::InputStoryContentPhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputStoryContentVideo> {
    static ::TelegramBotAPI::Type::InputStoryContentVideo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputTextMessageContent> {
    static ::TelegramBotAPI::Type::InputTextMessageContent Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputVenueMessageContent> {
    static ::TelegramBotAPI::Type::InputVenueMessageContent Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Invoice> {
    static ::TelegramBotAPI::Type::Invoice Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButton> {
    static ::TelegramBotAPI::Type::KeyboardButton Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonPollType> {
    static ::TelegramBotAPI::Type::KeyboardButtonPollType Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestChat> {
    static ::TelegramBotAPI::Type::KeyboardButtonRequestChat Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot> {
    static ::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestUsers> {
    static ::TelegramBotAPI::Type::KeyboardButtonRequestUsers Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::LabeledPrice> {
    static ::TelegramBotAPI::Type::LabeledPrice Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Link> {
    static ::TelegramBotAPI::Type::Link Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::LinkPreviewOptions> {
    static ::TelegramBotAPI::Type::LinkPreviewOptions Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::LivePhoto> {
    static ::TelegramBotAPI::Type::LivePhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Location> {
    static ::TelegramBotAPI::Type::Location Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::LocationAddress> {
    static ::TelegramBotAPI::Type::LocationAddress Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::LoginUrl> {
    static ::TelegramBotAPI::Type::LoginUrl Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ManagedBotCreated> {
    static ::TelegramBotAPI::Type::ManagedBotCreated Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ManagedBotUpdated> {
    static ::TelegramBotAPI::Type::ManagedBotUpdated Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MaskPosition> {
    static ::TelegramBotAPI::Type::MaskPosition Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButtonCommands> {
    static ::TelegramBotAPI::Type::MenuButtonCommands Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButtonDefault> {
    static ::TelegramBotAPI::Type::MenuButtonDefault Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButtonWebApp> {
    static ::TelegramBotAPI::Type::MenuButtonWebApp Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Message> {
    static ::TelegramBotAPI::Type::Message Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged> {
    static ::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageEntity> {
    static ::TelegramBotAPI::Type::MessageEntity Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageGenerationStopped> {
    static ::TelegramBotAPI::Type::MessageGenerationStopped Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageId> {
    static ::TelegramBotAPI::Type::MessageId Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginChannel> {
    static ::TelegramBotAPI::Type::MessageOriginChannel Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginChat> {
    static ::TelegramBotAPI::Type::MessageOriginChat Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginHiddenUser> {
    static ::TelegramBotAPI::Type::MessageOriginHiddenUser Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOriginUser> {
    static ::TelegramBotAPI::Type::MessageOriginUser Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageReactionCountUpdated> {
    static ::TelegramBotAPI::Type::MessageReactionCountUpdated Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageReactionUpdated> {
    static ::TelegramBotAPI::Type::MessageReactionUpdated Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OrderInfo> {
    static ::TelegramBotAPI::Type::OrderInfo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGiftRegular> {
    static ::TelegramBotAPI::Type::OwnedGiftRegular Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGiftUnique> {
    static ::TelegramBotAPI::Type::OwnedGiftUnique Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGifts> {
    static ::TelegramBotAPI::Type::OwnedGifts Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaInfo> {
    static ::TelegramBotAPI::Type::PaidMediaInfo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaLivePhoto> {
    static ::TelegramBotAPI::Type::PaidMediaLivePhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaPhoto> {
    static ::TelegramBotAPI::Type::PaidMediaPhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaPreview> {
    static ::TelegramBotAPI::Type::PaidMediaPreview Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaPurchased> {
    static ::TelegramBotAPI::Type::PaidMediaPurchased Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMediaVideo> {
    static ::TelegramBotAPI::Type::PaidMediaVideo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMessagePriceChanged> {
    static ::TelegramBotAPI::Type::PaidMessagePriceChanged Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportData> {
    static ::TelegramBotAPI::Type::PassportData Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorDataField> {
    static ::TelegramBotAPI::Type::PassportElementErrorDataField Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorFile> {
    static ::TelegramBotAPI::Type::PassportElementErrorFile Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorFiles> {
    static ::TelegramBotAPI::Type::PassportElementErrorFiles Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorFrontSide> {
    static ::TelegramBotAPI::Type::PassportElementErrorFrontSide Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorReverseSide> {
    static ::TelegramBotAPI::Type::PassportElementErrorReverseSide Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorSelfie> {
    static ::TelegramBotAPI::Type::PassportElementErrorSelfie Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorTranslationFile> {
    static ::TelegramBotAPI::Type::PassportElementErrorTranslationFile Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorTranslationFiles> {
    static ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementErrorUnspecified> {
    static ::TelegramBotAPI::Type::PassportElementErrorUnspecified Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportFile> {
    static ::TelegramBotAPI::Type::PassportFile Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PhotoSize> {
    static ::TelegramBotAPI::Type::PhotoSize Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Poll> {
    static ::TelegramBotAPI::Type::Poll Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PollAnswer> {
    static ::TelegramBotAPI::Type::PollAnswer Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PollMedia> {
    static ::TelegramBotAPI::Type::PollMedia Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PollOption> {
    static ::TelegramBotAPI::Type::PollOption Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PollOptionAdded> {
    static ::TelegramBotAPI::Type::PollOptionAdded Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PollOptionDeleted> {
    static ::TelegramBotAPI::Type::PollOptionDeleted Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PreCheckoutQuery> {
    static ::TelegramBotAPI::Type::PreCheckoutQuery Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PreparedInlineMessage> {
    static ::TelegramBotAPI::Type::PreparedInlineMessage Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PreparedKeyboardButton> {
    static ::TelegramBotAPI::Type::PreparedKeyboardButton Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ProximityAlertTriggered> {
    static ::TelegramBotAPI::Type::ProximityAlertTriggered Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionCount> {
    static ::TelegramBotAPI::Type::ReactionCount Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionTypeCustomEmoji> {
    static ::TelegramBotAPI::Type::ReactionTypeCustomEmoji Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionTypeEmoji> {
    static ::TelegramBotAPI::Type::ReactionTypeEmoji Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionTypePaid> {
    static ::TelegramBotAPI::Type::ReactionTypePaid Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RefundedPayment> {
    static ::TelegramBotAPI::Type::RefundedPayment Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReplyKeyboardMarkup> {
    static ::TelegramBotAPI::Type::ReplyKeyboardMarkup Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReplyKeyboardRemove> {
    static ::TelegramBotAPI::Type::ReplyKeyboardRemove Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReplyParameters> {
    static ::TelegramBotAPI::Type::ReplyParameters Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ResponseParameters> {
    static ::TelegramBotAPI::Type::ResponseParameters Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStateFailed> {
    static ::TelegramBotAPI::Type::RevenueWithdrawalStateFailed Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStatePending> {
    static ::TelegramBotAPI::Type::RevenueWithdrawalStatePending Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded> {
    static ::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlock> {
    static ::TelegramBotAPI::Type::RichBlock Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockAnchor> {
    static ::TelegramBotAPI::Type::RichBlockAnchor Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockAnimation> {
    static ::TelegramBotAPI::Type::RichBlockAnimation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockAudio> {
    static ::TelegramBotAPI::Type::RichBlockAudio Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockBlockQuotation> {
    static ::TelegramBotAPI::Type::RichBlockBlockQuotation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockButtons> {
    static ::TelegramBotAPI::Type::RichBlockButtons Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockCaption> {
    static ::TelegramBotAPI::Type::RichBlockCaption Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockCollage> {
    static ::TelegramBotAPI::Type::RichBlockCollage Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockDetails> {
    static ::TelegramBotAPI::Type::RichBlockDetails Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockDivider> {
    static ::TelegramBotAPI::Type::RichBlockDivider Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockDocument> {
    static ::TelegramBotAPI::Type::RichBlockDocument Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockExpandableBlockQuotation> {
    static ::TelegramBotAPI::Type::RichBlockExpandableBlockQuotation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockFooter> {
    static ::TelegramBotAPI::Type::RichBlockFooter Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockList> {
    static ::TelegramBotAPI::Type::RichBlockList Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockListItem> {
    static ::TelegramBotAPI::Type::RichBlockListItem Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockMap> {
    static ::TelegramBotAPI::Type::RichBlockMap Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockMathematicalExpression> {
    static ::TelegramBotAPI::Type::RichBlockMathematicalExpression Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockParagraph> {
    static ::TelegramBotAPI::Type::RichBlockParagraph Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockPhoto> {
    static ::TelegramBotAPI::Type::RichBlockPhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockPreformatted> {
    static ::TelegramBotAPI::Type::RichBlockPreformatted Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockPullQuotation> {
    static ::TelegramBotAPI::Type::RichBlockPullQuotation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockSectionHeading> {
    static ::TelegramBotAPI::Type::RichBlockSectionHeading Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockSlideshow> {
    static ::TelegramBotAPI::Type::RichBlockSlideshow Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockTable> {
    static ::TelegramBotAPI::Type::RichBlockTable Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockTableCell> {
    static ::TelegramBotAPI::Type::RichBlockTableCell Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockThinking> {
    static ::TelegramBotAPI::Type::RichBlockThinking Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockVideo> {
    static ::TelegramBotAPI::Type::RichBlockVideo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichBlockVoiceNote> {
    static ::TelegramBotAPI::Type::RichBlockVoiceNote Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichMessage> {
    static ::TelegramBotAPI::Type::RichMessage Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichMessageButton> {
    static ::TelegramBotAPI::Type::RichMessageButton Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichText> {
    static ::TelegramBotAPI::Type::RichText Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextAnchor> {
    static ::TelegramBotAPI::Type::RichTextAnchor Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextAnchorLink> {
    static ::TelegramBotAPI::Type::RichTextAnchorLink Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextBankCardNumber> {
    static ::TelegramBotAPI::Type::RichTextBankCardNumber Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextBold> {
    static ::TelegramBotAPI::Type::RichTextBold Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextBotCommand> {
    static ::TelegramBotAPI::Type::RichTextBotCommand Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextButton> {
    static ::TelegramBotAPI::Type::RichTextButton Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextCashtag> {
    static ::TelegramBotAPI::Type::RichTextCashtag Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextCode> {
    static ::TelegramBotAPI::Type::RichTextCode Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextCustomEmoji> {
    static ::TelegramBotAPI::Type::RichTextCustomEmoji Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextDateTime> {
    static ::TelegramBotAPI::Type::RichTextDateTime Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextEmailAddress> {
    static ::TelegramBotAPI::Type::RichTextEmailAddress Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextHashtag> {
    static ::TelegramBotAPI::Type::RichTextHashtag Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextItalic> {
    static ::TelegramBotAPI::Type::RichTextItalic Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextMarked> {
    static ::TelegramBotAPI::Type::RichTextMarked Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextMathematicalExpression> {
    static ::TelegramBotAPI::Type::RichTextMathematicalExpression Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextMention> {
    static ::TelegramBotAPI::Type::RichTextMention Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextPhoneNumber> {
    static ::TelegramBotAPI::Type::RichTextPhoneNumber Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextReference> {
    static ::TelegramBotAPI::Type::RichTextReference Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextReferenceLink> {
    static ::TelegramBotAPI::Type::RichTextReferenceLink Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextSpoiler> {
    static ::TelegramBotAPI::Type::RichTextSpoiler Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextStrikethrough> {
    static ::TelegramBotAPI::Type::RichTextStrikethrough Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextSubscript> {
    static ::TelegramBotAPI::Type::RichTextSubscript Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextSuperscript> {
    static ::TelegramBotAPI::Type::RichTextSuperscript Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextTextMention> {
    static ::TelegramBotAPI::Type::RichTextTextMention Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextUnderline> {
    static ::TelegramBotAPI::Type::RichTextUnderline Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RichTextUrl> {
    static ::TelegramBotAPI::Type::RichTextUrl Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SentGuestMessage> {
    static ::TelegramBotAPI::Type::SentGuestMessage Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SentWebAppMessage> {
    static ::TelegramBotAPI::Type::SentWebAppMessage Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SharedUser> {
    static ::TelegramBotAPI::Type::SharedUser Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ShippingAddress> {
    static ::TelegramBotAPI::Type::ShippingAddress Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ShippingOption> {
    static ::TelegramBotAPI::Type::ShippingOption Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ShippingQuery> {
    static ::TelegramBotAPI::Type::ShippingQuery Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StarAmount> {
    static ::TelegramBotAPI::Type::StarAmount Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StarTransaction> {
    static ::TelegramBotAPI::Type::StarTransaction Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StarTransactions> {
    static ::TelegramBotAPI::Type::StarTransactions Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Sticker> {
    static ::TelegramBotAPI::Type::Sticker Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StickerSet> {
    static ::TelegramBotAPI::Type::StickerSet Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Story> {
    static ::TelegramBotAPI::Type::Story Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryArea> {
    static ::TelegramBotAPI::Type::StoryArea Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaPosition> {
    static ::TelegramBotAPI::Type::StoryAreaPosition Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeLink> {
    static ::TelegramBotAPI::Type::StoryAreaTypeLink Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeLocation> {
    static ::TelegramBotAPI::Type::StoryAreaTypeLocation Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction> {
    static ::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeUniqueGift> {
    static ::TelegramBotAPI::Type::StoryAreaTypeUniqueGift Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaTypeWeather> {
    static ::TelegramBotAPI::Type::StoryAreaTypeWeather Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuccessfulPayment> {
    static ::TelegramBotAPI::Type::SuccessfulPayment Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostApprovalFailed> {
    static ::TelegramBotAPI::Type::SuggestedPostApprovalFailed Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostApproved> {
    static ::TelegramBotAPI::Type::SuggestedPostApproved Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostDeclined> {
    static ::TelegramBotAPI::Type::SuggestedPostDeclined Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostInfo> {
    static ::TelegramBotAPI::Type::SuggestedPostInfo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostPaid> {
    static ::TelegramBotAPI::Type::SuggestedPostPaid Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostParameters> {
    static ::TelegramBotAPI::Type::SuggestedPostParameters Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostPrice> {
    static ::TelegramBotAPI::Type::SuggestedPostPrice Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SuggestedPostRefunded> {
    static ::TelegramBotAPI::Type::SuggestedPostRefunded Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::SwitchInlineQueryChosenChat> {
    static ::TelegramBotAPI::Type::SwitchInlineQueryChosenChat Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TextQuote> {
    static ::TelegramBotAPI::Type::TextQuote Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram> {
    static ::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerChat> {
    static ::TelegramBotAPI::Type::TransactionPartnerChat Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerFragment> {
    static ::TelegramBotAPI::Type::TransactionPartnerFragment Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerOther> {
    static ::TelegramBotAPI::Type::TransactionPartnerOther Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerTelegramAds> {
    static ::TelegramBotAPI::Type::TransactionPartnerTelegramAds Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerTelegramApi> {
    static ::TelegramBotAPI::Type::TransactionPartnerTelegramApi Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartnerUser> {
    static ::TelegramBotAPI::Type::TransactionPartnerUser Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGift> {
    static ::TelegramBotAPI::Type::UniqueGift Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftBackdrop> {
    static ::TelegramBotAPI::Type::UniqueGiftBackdrop Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftBackdropColors> {
    static ::TelegramBotAPI::Type::UniqueGiftBackdropColors Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftColors> {
    static ::TelegramBotAPI::Type::UniqueGiftColors Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftInfo> {
    static ::TelegramBotAPI::Type::UniqueGiftInfo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftModel> {
    static ::TelegramBotAPI::Type::UniqueGiftModel Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UniqueGiftSymbol> {
    static ::TelegramBotAPI::Type::UniqueGiftSymbol Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Update> {
    static ::TelegramBotAPI::Type::Update Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::User> {
    static ::TelegramBotAPI::Type::User Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UserChatBoosts> {
    static ::TelegramBotAPI::Type::UserChatBoosts Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UserProfileAudios> {
    static ::TelegramBotAPI::Type::UserProfileAudios Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UserProfilePhotos> {
    static ::TelegramBotAPI::Type::UserProfilePhotos Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UserRating> {
    static ::TelegramBotAPI::Type::UserRating Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::UsersShared> {
    static ::TelegramBotAPI::Type::UsersShared Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Venue> {
    static ::TelegramBotAPI::Type::Venue Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Video> {
    static ::TelegramBotAPI::Type::Video Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatEnded> {
    static ::TelegramBotAPI::Type::VideoChatEnded Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatParticipantsInvited> {
    static ::TelegramBotAPI::Type::VideoChatParticipantsInvited Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatScheduled> {
    static ::TelegramBotAPI::Type::VideoChatScheduled Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoChatStarted> {
    static ::TelegramBotAPI::Type::VideoChatStarted Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoNote> {
    static ::TelegramBotAPI::Type::VideoNote Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::VideoQuality> {
    static ::TelegramBotAPI::Type::VideoQuality Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::Voice> {
    static ::TelegramBotAPI::Type::Voice Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::WebAppData> {
    static ::TelegramBotAPI::Type::WebAppData Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::WebAppInfo> {
    static ::TelegramBotAPI::Type::WebAppInfo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::WebhookInfo> {
    static ::TelegramBotAPI::Type::WebhookInfo Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::WriteAccessAllowed> {
    static ::TelegramBotAPI::Type::WriteAccessAllowed Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OkResponse> {
    static ::TelegramBotAPI::Type::OkResponse Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ErrorResponse> {
    static ::TelegramBotAPI::Type::ErrorResponse Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundFill> {
    static ::TelegramBotAPI::Type::BackgroundFill Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BackgroundType> {
    static ::TelegramBotAPI::Type::BackgroundType Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::BotCommandScope> {
    static ::TelegramBotAPI::Type::BotCommandScope Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatBoostSource> {
    static ::TelegramBotAPI::Type::ChatBoostSource Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ChatMember> {
    static ::TelegramBotAPI::Type::ChatMember Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InlineQueryResult> {
    static ::TelegramBotAPI::Type::InlineQueryResult Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMedia> {
    static ::TelegramBotAPI::Type::InputMedia Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputMessageContent> {
    static ::TelegramBotAPI::Type::InputMessageContent Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPaidMedia> {
    static ::TelegramBotAPI::Type::InputPaidMedia Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPollMedia> {
    static ::TelegramBotAPI::Type::InputPollMedia Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputPollOptionMedia> {
    static ::TelegramBotAPI::Type::InputPollOptionMedia Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputProfilePhoto> {
    static ::TelegramBotAPI::Type::InputProfilePhoto Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::InputStoryContent> {
    static ::TelegramBotAPI::Type::InputStoryContent Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MaybeInaccessibleMessage> {
    static ::TelegramBotAPI::Type::MaybeInaccessibleMessage Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MenuButton> {
    static ::TelegramBotAPI::Type::MenuButton Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::MessageOrigin> {
    static ::TelegramBotAPI::Type::MessageOrigin Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::OwnedGift> {
    static ::TelegramBotAPI::Type::OwnedGift Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PaidMedia> {
    static ::TelegramBotAPI::Type::PaidMedia Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::PassportElementError> {
    static ::TelegramBotAPI::Type::PassportElementError Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::ReactionType> {
    static ::TelegramBotAPI::Type::ReactionType Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalState> {
    static ::TelegramBotAPI::Type::RevenueWithdrawalState Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::StoryAreaType> {
    static ::TelegramBotAPI::Type::StoryAreaType Deserialize(
        const boost::json::value &Value
    );
};

template <>
struct Deserializer<::TelegramBotAPI::Type::TransactionPartner> {
    static ::TelegramBotAPI::Type::TransactionPartner Deserialize(
        const boost::json::value &Value
    );
};

/* Object deserializers */

inline ::TelegramBotAPI::Type::AcceptedGiftTypes Deserializer<::TelegramBotAPI::Type::AcceptedGiftTypes>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::AcceptedGiftTypes Result{};

    Result.UnlimitedGifts = boost::json::value_to<bool>(ObjectValue.at("unlimited_gifts"));
    Result.LimitedGifts = boost::json::value_to<bool>(ObjectValue.at("limited_gifts"));
    Result.UniqueGifts = boost::json::value_to<bool>(ObjectValue.at("unique_gifts"));
    Result.PremiumSubscription = boost::json::value_to<bool>(ObjectValue.at("premium_subscription"));
    Result.GiftsFromChannels = boost::json::value_to<bool>(ObjectValue.at("gifts_from_channels"));

    return Result;
}

inline ::TelegramBotAPI::Type::AffiliateInfo Deserializer<::TelegramBotAPI::Type::AffiliateInfo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::AffiliateInfo Result{};

    if (ObjectValue.if_contains("affiliate_user")) {
        Result.AffiliateUser = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("affiliate_user"));
    }
    if (ObjectValue.if_contains("affiliate_chat")) {
        Result.AffiliateChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("affiliate_chat"));
    }
    Result.CommissionPerMille = boost::json::value_to<long long>(ObjectValue.at("commission_per_mille"));
    Result.Amount = boost::json::value_to<long long>(ObjectValue.at("amount"));
    if (ObjectValue.if_contains("nanostar_amount")) {
        Result.NanostarAmount = boost::json::value_to<long long>(ObjectValue.at("nanostar_amount"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Animation Deserializer<::TelegramBotAPI::Type::Animation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Animation Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = FromJson<::TelegramBotAPI::Type::PhotoSize>(ObjectValue.at("thumbnail"));
    }
    if (ObjectValue.if_contains("file_name")) {
        Result.FileName = boost::json::value_to<std::string>(ObjectValue.at("file_name"));
    }
    if (ObjectValue.if_contains("mime_type")) {
        Result.MimeType = boost::json::value_to<std::string>(ObjectValue.at("mime_type"));
    }
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Audio Deserializer<::TelegramBotAPI::Type::Audio>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Audio Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    if (ObjectValue.if_contains("performer")) {
        Result.Performer = boost::json::value_to<std::string>(ObjectValue.at("performer"));
    }
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("file_name")) {
        Result.FileName = boost::json::value_to<std::string>(ObjectValue.at("file_name"));
    }
    if (ObjectValue.if_contains("mime_type")) {
        Result.MimeType = boost::json::value_to<std::string>(ObjectValue.at("mime_type"));
    }
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = FromJson<::TelegramBotAPI::Type::PhotoSize>(ObjectValue.at("thumbnail"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::BackgroundFillFreeformGradient Deserializer<::TelegramBotAPI::Type::BackgroundFillFreeformGradient>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BackgroundFillFreeformGradient Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Colors = boost::json::value_to<std::vector<long long>>(ObjectValue.at("colors"));

    return Result;
}

inline ::TelegramBotAPI::Type::BackgroundFillGradient Deserializer<::TelegramBotAPI::Type::BackgroundFillGradient>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BackgroundFillGradient Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.TopColor = boost::json::value_to<long long>(ObjectValue.at("top_color"));
    Result.BottomColor = boost::json::value_to<long long>(ObjectValue.at("bottom_color"));
    Result.RotationAngle = boost::json::value_to<long long>(ObjectValue.at("rotation_angle"));

    return Result;
}

inline ::TelegramBotAPI::Type::BackgroundFillSolid Deserializer<::TelegramBotAPI::Type::BackgroundFillSolid>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BackgroundFillSolid Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Color = boost::json::value_to<long long>(ObjectValue.at("color"));

    return Result;
}

inline ::TelegramBotAPI::Type::BackgroundTypeChatTheme Deserializer<::TelegramBotAPI::Type::BackgroundTypeChatTheme>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BackgroundTypeChatTheme Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ThemeName = boost::json::value_to<std::string>(ObjectValue.at("theme_name"));

    return Result;
}

inline ::TelegramBotAPI::Type::BackgroundTypeFill Deserializer<::TelegramBotAPI::Type::BackgroundTypeFill>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BackgroundTypeFill Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Fill = FromJson<::TelegramBotAPI::Type::BackgroundFill>(ObjectValue.at("fill"));
    Result.DarkThemeDimming = boost::json::value_to<long long>(ObjectValue.at("dark_theme_dimming"));

    return Result;
}

inline ::TelegramBotAPI::Type::BackgroundTypePattern Deserializer<::TelegramBotAPI::Type::BackgroundTypePattern>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BackgroundTypePattern Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Document = FromJson<::TelegramBotAPI::Type::Document>(ObjectValue.at("document"));
    Result.Fill = FromJson<::TelegramBotAPI::Type::BackgroundFill>(ObjectValue.at("fill"));
    Result.Intensity = boost::json::value_to<long long>(ObjectValue.at("intensity"));
    if (ObjectValue.if_contains("is_inverted")) {
        Result.IsInverted = boost::json::value_to<bool>(ObjectValue.at("is_inverted"));
    }
    if (ObjectValue.if_contains("is_moving")) {
        Result.IsMoving = boost::json::value_to<bool>(ObjectValue.at("is_moving"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::BackgroundTypeWallpaper Deserializer<::TelegramBotAPI::Type::BackgroundTypeWallpaper>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BackgroundTypeWallpaper Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Document = FromJson<::TelegramBotAPI::Type::Document>(ObjectValue.at("document"));
    Result.DarkThemeDimming = boost::json::value_to<long long>(ObjectValue.at("dark_theme_dimming"));
    if (ObjectValue.if_contains("is_blurred")) {
        Result.IsBlurred = boost::json::value_to<bool>(ObjectValue.at("is_blurred"));
    }
    if (ObjectValue.if_contains("is_moving")) {
        Result.IsMoving = boost::json::value_to<bool>(ObjectValue.at("is_moving"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Birthdate Deserializer<::TelegramBotAPI::Type::Birthdate>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Birthdate Result{};

    Result.Day = boost::json::value_to<long long>(ObjectValue.at("day"));
    Result.Month = boost::json::value_to<long long>(ObjectValue.at("month"));
    if (ObjectValue.if_contains("year")) {
        Result.Year = boost::json::value_to<long long>(ObjectValue.at("year"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::BotAccessSettings Deserializer<::TelegramBotAPI::Type::BotAccessSettings>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotAccessSettings Result{};

    Result.IsAccessRestricted = boost::json::value_to<bool>(ObjectValue.at("is_access_restricted"));
    if (ObjectValue.if_contains("added_users")) {
        Result.AddedUsers = ([&]() { std::vector<::TelegramBotAPI::Type::User> Result; for (const auto &Item : ObjectValue.at("added_users").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::User>(Item)); } return Result; })();
    }

    return Result;
}

inline ::TelegramBotAPI::Type::BotCommand Deserializer<::TelegramBotAPI::Type::BotCommand>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotCommand Result{};

    Result.Command = boost::json::value_to<std::string>(ObjectValue.at("command"));
    Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    if (ObjectValue.if_contains("is_ephemeral")) {
        Result.IsEphemeral = boost::json::value_to<bool>(ObjectValue.at("is_ephemeral"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::BotCommandScopeAllGroupChats Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllGroupChats>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotCommandScopeAllGroupChats Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats Deserializer<::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::BotCommandScopeChat Deserializer<::TelegramBotAPI::Type::BotCommandScopeChat>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotCommandScopeChat Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ChatID = boost::json::value_to<long long>(ObjectValue.at("chat_id"));

    return Result;
}

inline ::TelegramBotAPI::Type::BotCommandScopeChatAdministrators Deserializer<::TelegramBotAPI::Type::BotCommandScopeChatAdministrators>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotCommandScopeChatAdministrators Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ChatID = boost::json::value_to<long long>(ObjectValue.at("chat_id"));

    return Result;
}

inline ::TelegramBotAPI::Type::BotCommandScopeChatMember Deserializer<::TelegramBotAPI::Type::BotCommandScopeChatMember>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotCommandScopeChatMember Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ChatID = boost::json::value_to<long long>(ObjectValue.at("chat_id"));
    Result.UserID = boost::json::value_to<long long>(ObjectValue.at("user_id"));

    return Result;
}

inline ::TelegramBotAPI::Type::BotCommandScopeDefault Deserializer<::TelegramBotAPI::Type::BotCommandScopeDefault>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotCommandScopeDefault Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::BotDescription Deserializer<::TelegramBotAPI::Type::BotDescription>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotDescription Result{};

    Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));

    return Result;
}

inline ::TelegramBotAPI::Type::BotName Deserializer<::TelegramBotAPI::Type::BotName>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotName Result{};

    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));

    return Result;
}

inline ::TelegramBotAPI::Type::BotShortDescription Deserializer<::TelegramBotAPI::Type::BotShortDescription>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotShortDescription Result{};

    Result.ShortDescription = boost::json::value_to<std::string>(ObjectValue.at("short_description"));

    return Result;
}

inline ::TelegramBotAPI::Type::BotSubscriptionUpdated Deserializer<::TelegramBotAPI::Type::BotSubscriptionUpdated>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BotSubscriptionUpdated Result{};

    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    Result.InvoicePayload = boost::json::value_to<std::string>(ObjectValue.at("invoice_payload"));
    Result.State = boost::json::value_to<std::string>(ObjectValue.at("state"));

    return Result;
}

inline ::TelegramBotAPI::Type::BusinessBotRights Deserializer<::TelegramBotAPI::Type::BusinessBotRights>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BusinessBotRights Result{};

    if (ObjectValue.if_contains("can_reply")) {
        Result.CanReply = boost::json::value_to<bool>(ObjectValue.at("can_reply"));
    }
    if (ObjectValue.if_contains("can_read_messages")) {
        Result.CanReadMessages = boost::json::value_to<bool>(ObjectValue.at("can_read_messages"));
    }
    if (ObjectValue.if_contains("can_delete_sent_messages")) {
        Result.CanDeleteSentMessages = boost::json::value_to<bool>(ObjectValue.at("can_delete_sent_messages"));
    }
    if (ObjectValue.if_contains("can_delete_all_messages")) {
        Result.CanDeleteAllMessages = boost::json::value_to<bool>(ObjectValue.at("can_delete_all_messages"));
    }
    if (ObjectValue.if_contains("can_edit_name")) {
        Result.CanEditName = boost::json::value_to<bool>(ObjectValue.at("can_edit_name"));
    }
    if (ObjectValue.if_contains("can_edit_bio")) {
        Result.CanEditBio = boost::json::value_to<bool>(ObjectValue.at("can_edit_bio"));
    }
    if (ObjectValue.if_contains("can_edit_profile_photo")) {
        Result.CanEditProfilePhoto = boost::json::value_to<bool>(ObjectValue.at("can_edit_profile_photo"));
    }
    if (ObjectValue.if_contains("can_edit_username")) {
        Result.CanEditUserName = boost::json::value_to<bool>(ObjectValue.at("can_edit_username"));
    }
    if (ObjectValue.if_contains("can_change_gift_settings")) {
        Result.CanChangeGiftSettings = boost::json::value_to<bool>(ObjectValue.at("can_change_gift_settings"));
    }
    if (ObjectValue.if_contains("can_view_gifts_and_stars")) {
        Result.CanViewGiftsAndStars = boost::json::value_to<bool>(ObjectValue.at("can_view_gifts_and_stars"));
    }
    if (ObjectValue.if_contains("can_convert_gifts_to_stars")) {
        Result.CanConvertGiftsToStars = boost::json::value_to<bool>(ObjectValue.at("can_convert_gifts_to_stars"));
    }
    if (ObjectValue.if_contains("can_transfer_and_upgrade_gifts")) {
        Result.CanTransferAndUpgradeGifts = boost::json::value_to<bool>(ObjectValue.at("can_transfer_and_upgrade_gifts"));
    }
    if (ObjectValue.if_contains("can_transfer_stars")) {
        Result.CanTransferStars = boost::json::value_to<bool>(ObjectValue.at("can_transfer_stars"));
    }
    if (ObjectValue.if_contains("can_manage_stories")) {
        Result.CanManageStories = boost::json::value_to<bool>(ObjectValue.at("can_manage_stories"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::BusinessConnection Deserializer<::TelegramBotAPI::Type::BusinessConnection>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BusinessConnection Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    Result.UserChatID = boost::json::value_to<long long>(ObjectValue.at("user_chat_id"));
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    if (ObjectValue.if_contains("rights")) {
        Result.Rights = FromJson<::TelegramBotAPI::Type::BusinessBotRights>(ObjectValue.at("rights"));
    }
    Result.IsEnabled = boost::json::value_to<bool>(ObjectValue.at("is_enabled"));

    return Result;
}

inline ::TelegramBotAPI::Type::BusinessIntro Deserializer<::TelegramBotAPI::Type::BusinessIntro>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BusinessIntro Result{};

    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("message")) {
        Result.Message = boost::json::value_to<std::string>(ObjectValue.at("message"));
    }
    if (ObjectValue.if_contains("sticker")) {
        Result.Sticker = FromJson<::TelegramBotAPI::Type::Sticker>(ObjectValue.at("sticker"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::BusinessLocation Deserializer<::TelegramBotAPI::Type::BusinessLocation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BusinessLocation Result{};

    Result.Address = boost::json::value_to<std::string>(ObjectValue.at("address"));
    if (ObjectValue.if_contains("location")) {
        Result.Location = FromJson<::TelegramBotAPI::Type::Location>(ObjectValue.at("location"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::BusinessMessagesDeleted Deserializer<::TelegramBotAPI::Type::BusinessMessagesDeleted>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BusinessMessagesDeleted Result{};

    Result.BusinessConnectionID = boost::json::value_to<std::string>(ObjectValue.at("business_connection_id"));
    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.MessageIDs = boost::json::value_to<std::vector<long long>>(ObjectValue.at("message_ids"));

    return Result;
}

inline ::TelegramBotAPI::Type::BusinessOpeningHours Deserializer<::TelegramBotAPI::Type::BusinessOpeningHours>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BusinessOpeningHours Result{};

    Result.TimeZoneName = boost::json::value_to<std::string>(ObjectValue.at("time_zone_name"));
    Result.OpeningHours = ([&]() { std::vector<::TelegramBotAPI::Type::BusinessOpeningHoursInterval> Result; for (const auto &Item : ObjectValue.at("opening_hours").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::BusinessOpeningHoursInterval>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::BusinessOpeningHoursInterval Deserializer<::TelegramBotAPI::Type::BusinessOpeningHoursInterval>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::BusinessOpeningHoursInterval Result{};

    Result.OpeningMinute = boost::json::value_to<long long>(ObjectValue.at("opening_minute"));
    Result.ClosingMinute = boost::json::value_to<long long>(ObjectValue.at("closing_minute"));

    return Result;
}

inline ::TelegramBotAPI::Type::CallbackGame Deserializer<::TelegramBotAPI::Type::CallbackGame>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::CallbackGame Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::CallbackQuery Deserializer<::TelegramBotAPI::Type::CallbackQuery>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::CallbackQuery Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.From = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("from"));
    if (ObjectValue.if_contains("message")) {
        Result.Message = FromJson<::TelegramBotAPI::Type::MaybeInaccessibleMessage>(ObjectValue.at("message"));
    }
    if (ObjectValue.if_contains("inline_message_id")) {
        Result.InlineMessageID = boost::json::value_to<std::string>(ObjectValue.at("inline_message_id"));
    }
    Result.ChatInstance = boost::json::value_to<std::string>(ObjectValue.at("chat_instance"));
    if (ObjectValue.if_contains("data")) {
        Result.Data = boost::json::value_to<std::string>(ObjectValue.at("data"));
    }
    if (ObjectValue.if_contains("game_short_name")) {
        Result.GameShortName = boost::json::value_to<std::string>(ObjectValue.at("game_short_name"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Chat Deserializer<::TelegramBotAPI::Type::Chat>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Chat Result{};

    Result.ID = boost::json::value_to<long long>(ObjectValue.at("id"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("username")) {
        Result.UserName = boost::json::value_to<std::string>(ObjectValue.at("username"));
    }
    if (ObjectValue.if_contains("first_name")) {
        Result.FirstName = boost::json::value_to<std::string>(ObjectValue.at("first_name"));
    }
    if (ObjectValue.if_contains("last_name")) {
        Result.LastName = boost::json::value_to<std::string>(ObjectValue.at("last_name"));
    }
    if (ObjectValue.if_contains("is_forum")) {
        Result.IsForum = boost::json::value_to<bool>(ObjectValue.at("is_forum"));
    }
    if (ObjectValue.if_contains("is_direct_messages")) {
        Result.IsDirectMessages = boost::json::value_to<bool>(ObjectValue.at("is_direct_messages"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatAdministratorRights Deserializer<::TelegramBotAPI::Type::ChatAdministratorRights>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatAdministratorRights Result{};

    Result.IsAnonymous = boost::json::value_to<bool>(ObjectValue.at("is_anonymous"));
    Result.CanManageChat = boost::json::value_to<bool>(ObjectValue.at("can_manage_chat"));
    Result.CanDeleteMessages = boost::json::value_to<bool>(ObjectValue.at("can_delete_messages"));
    Result.CanManageVideoChats = boost::json::value_to<bool>(ObjectValue.at("can_manage_video_chats"));
    Result.CanRestrictMembers = boost::json::value_to<bool>(ObjectValue.at("can_restrict_members"));
    Result.CanPromoteMembers = boost::json::value_to<bool>(ObjectValue.at("can_promote_members"));
    Result.CanChangeInfo = boost::json::value_to<bool>(ObjectValue.at("can_change_info"));
    Result.CanInviteUsers = boost::json::value_to<bool>(ObjectValue.at("can_invite_users"));
    Result.CanPostStories = boost::json::value_to<bool>(ObjectValue.at("can_post_stories"));
    Result.CanEditStories = boost::json::value_to<bool>(ObjectValue.at("can_edit_stories"));
    Result.CanDeleteStories = boost::json::value_to<bool>(ObjectValue.at("can_delete_stories"));
    if (ObjectValue.if_contains("can_post_messages")) {
        Result.CanPostMessages = boost::json::value_to<bool>(ObjectValue.at("can_post_messages"));
    }
    if (ObjectValue.if_contains("can_edit_messages")) {
        Result.CanEditMessages = boost::json::value_to<bool>(ObjectValue.at("can_edit_messages"));
    }
    if (ObjectValue.if_contains("can_pin_messages")) {
        Result.CanPinMessages = boost::json::value_to<bool>(ObjectValue.at("can_pin_messages"));
    }
    if (ObjectValue.if_contains("can_manage_topics")) {
        Result.CanManageTopics = boost::json::value_to<bool>(ObjectValue.at("can_manage_topics"));
    }
    if (ObjectValue.if_contains("can_manage_direct_messages")) {
        Result.CanManageDirectMessages = boost::json::value_to<bool>(ObjectValue.at("can_manage_direct_messages"));
    }
    if (ObjectValue.if_contains("can_manage_tags")) {
        Result.CanManageTags = boost::json::value_to<bool>(ObjectValue.at("can_manage_tags"));
    }
    Result.CanSendWelcomeMessages = boost::json::value_to<bool>(ObjectValue.at("can_send_welcome_messages"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatBackground Deserializer<::TelegramBotAPI::Type::ChatBackground>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatBackground Result{};

    Result.Type = FromJson<::TelegramBotAPI::Type::BackgroundType>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatBoost Deserializer<::TelegramBotAPI::Type::ChatBoost>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatBoost Result{};

    Result.BoostID = boost::json::value_to<std::string>(ObjectValue.at("boost_id"));
    Result.AddDate = boost::json::value_to<long long>(ObjectValue.at("add_date"));
    Result.ExpirationDate = boost::json::value_to<long long>(ObjectValue.at("expiration_date"));
    Result.Source = FromJson<::TelegramBotAPI::Type::ChatBoostSource>(ObjectValue.at("source"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatBoostAdded Deserializer<::TelegramBotAPI::Type::ChatBoostAdded>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatBoostAdded Result{};

    Result.BoostCount = boost::json::value_to<long long>(ObjectValue.at("boost_count"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatBoostRemoved Deserializer<::TelegramBotAPI::Type::ChatBoostRemoved>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatBoostRemoved Result{};

    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.BoostID = boost::json::value_to<std::string>(ObjectValue.at("boost_id"));
    Result.RemoveDate = boost::json::value_to<long long>(ObjectValue.at("remove_date"));
    Result.Source = FromJson<::TelegramBotAPI::Type::ChatBoostSource>(ObjectValue.at("source"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatBoostSourceGiftCode Deserializer<::TelegramBotAPI::Type::ChatBoostSourceGiftCode>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatBoostSourceGiftCode Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatBoostSourceGiveaway Deserializer<::TelegramBotAPI::Type::ChatBoostSourceGiveaway>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatBoostSourceGiveaway Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.GiveawayMessageID = boost::json::value_to<long long>(ObjectValue.at("giveaway_message_id"));
    if (ObjectValue.if_contains("user")) {
        Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    }
    if (ObjectValue.if_contains("prize_star_count")) {
        Result.PrizeStarCount = boost::json::value_to<long long>(ObjectValue.at("prize_star_count"));
    }
    if (ObjectValue.if_contains("is_unclaimed")) {
        Result.IsUnclaimed = boost::json::value_to<bool>(ObjectValue.at("is_unclaimed"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatBoostSourcePremium Deserializer<::TelegramBotAPI::Type::ChatBoostSourcePremium>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatBoostSourcePremium Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatBoostUpdated Deserializer<::TelegramBotAPI::Type::ChatBoostUpdated>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatBoostUpdated Result{};

    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.Boost = FromJson<::TelegramBotAPI::Type::ChatBoost>(ObjectValue.at("boost"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatFullInfo Deserializer<::TelegramBotAPI::Type::ChatFullInfo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatFullInfo Result{};

    Result.ID = boost::json::value_to<long long>(ObjectValue.at("id"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("username")) {
        Result.UserName = boost::json::value_to<std::string>(ObjectValue.at("username"));
    }
    if (ObjectValue.if_contains("first_name")) {
        Result.FirstName = boost::json::value_to<std::string>(ObjectValue.at("first_name"));
    }
    if (ObjectValue.if_contains("last_name")) {
        Result.LastName = boost::json::value_to<std::string>(ObjectValue.at("last_name"));
    }
    if (ObjectValue.if_contains("is_forum")) {
        Result.IsForum = boost::json::value_to<bool>(ObjectValue.at("is_forum"));
    }
    if (ObjectValue.if_contains("is_direct_messages")) {
        Result.IsDirectMessages = boost::json::value_to<bool>(ObjectValue.at("is_direct_messages"));
    }
    Result.AccentColorID = boost::json::value_to<long long>(ObjectValue.at("accent_color_id"));
    Result.MaxReactionCount = boost::json::value_to<long long>(ObjectValue.at("max_reaction_count"));
    if (ObjectValue.if_contains("photo")) {
        Result.Photo = FromJson<::TelegramBotAPI::Type::ChatPhoto>(ObjectValue.at("photo"));
    }
    if (ObjectValue.if_contains("active_usernames")) {
        Result.ActiveUsernames = boost::json::value_to<std::vector<std::string>>(ObjectValue.at("active_usernames"));
    }
    if (ObjectValue.if_contains("birthdate")) {
        Result.Birthdate = FromJson<::TelegramBotAPI::Type::Birthdate>(ObjectValue.at("birthdate"));
    }
    if (ObjectValue.if_contains("business_intro")) {
        Result.BusinessIntro = FromJson<::TelegramBotAPI::Type::BusinessIntro>(ObjectValue.at("business_intro"));
    }
    if (ObjectValue.if_contains("business_location")) {
        Result.BusinessLocation = FromJson<::TelegramBotAPI::Type::BusinessLocation>(ObjectValue.at("business_location"));
    }
    if (ObjectValue.if_contains("business_opening_hours")) {
        Result.BusinessOpeningHours = FromJson<::TelegramBotAPI::Type::BusinessOpeningHours>(ObjectValue.at("business_opening_hours"));
    }
    if (ObjectValue.if_contains("personal_chat")) {
        Result.PersonalChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("personal_chat"));
    }
    if (ObjectValue.if_contains("parent_chat")) {
        Result.ParentChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("parent_chat"));
    }
    if (ObjectValue.if_contains("available_reactions")) {
        Result.AvailableReactions = ([&]() { std::vector<std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>> Result; for (const auto &Item : ObjectValue.at("available_reactions").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::ReactionType>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("background_custom_emoji_id")) {
        Result.BackgroundCustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("background_custom_emoji_id"));
    }
    if (ObjectValue.if_contains("profile_accent_color_id")) {
        Result.ProfileAccentColorID = boost::json::value_to<long long>(ObjectValue.at("profile_accent_color_id"));
    }
    if (ObjectValue.if_contains("profile_background_custom_emoji_id")) {
        Result.ProfileBackgroundCustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("profile_background_custom_emoji_id"));
    }
    if (ObjectValue.if_contains("emoji_status_custom_emoji_id")) {
        Result.EmojiStatusCustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("emoji_status_custom_emoji_id"));
    }
    if (ObjectValue.if_contains("emoji_status_expiration_date")) {
        Result.EmojiStatusExpirationDate = boost::json::value_to<long long>(ObjectValue.at("emoji_status_expiration_date"));
    }
    if (ObjectValue.if_contains("bio")) {
        Result.Bio = boost::json::value_to<std::string>(ObjectValue.at("bio"));
    }
    if (ObjectValue.if_contains("has_private_forwards")) {
        Result.HasPrivateForwards = boost::json::value_to<bool>(ObjectValue.at("has_private_forwards"));
    }
    if (ObjectValue.if_contains("has_restricted_voice_and_video_messages")) {
        Result.HasRestrictedVoiceAndVideoMessages = boost::json::value_to<bool>(ObjectValue.at("has_restricted_voice_and_video_messages"));
    }
    if (ObjectValue.if_contains("join_to_send_messages")) {
        Result.JoinToSendMessages = boost::json::value_to<bool>(ObjectValue.at("join_to_send_messages"));
    }
    if (ObjectValue.if_contains("join_by_request")) {
        Result.JoinByRequest = boost::json::value_to<bool>(ObjectValue.at("join_by_request"));
    }
    if (ObjectValue.if_contains("description")) {
        Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    }
    if (ObjectValue.if_contains("invite_link")) {
        Result.InviteLink = boost::json::value_to<std::string>(ObjectValue.at("invite_link"));
    }
    if (ObjectValue.if_contains("pinned_message")) {
        Result.PinnedMessage = FromJson<::TelegramBotAPI::Type::Message>(ObjectValue.at("pinned_message"));
    }
    if (ObjectValue.if_contains("permissions")) {
        Result.Permissions = FromJson<::TelegramBotAPI::Type::ChatPermissions>(ObjectValue.at("permissions"));
    }
    Result.AcceptedGiftTypes = FromJson<::TelegramBotAPI::Type::AcceptedGiftTypes>(ObjectValue.at("accepted_gift_types"));
    if (ObjectValue.if_contains("can_send_paid_media")) {
        Result.CanSendPaidMedia = boost::json::value_to<bool>(ObjectValue.at("can_send_paid_media"));
    }
    if (ObjectValue.if_contains("slow_mode_delay")) {
        Result.SlowModeDelay = boost::json::value_to<long long>(ObjectValue.at("slow_mode_delay"));
    }
    if (ObjectValue.if_contains("unrestrict_boost_count")) {
        Result.UnrestrictBoostCount = boost::json::value_to<long long>(ObjectValue.at("unrestrict_boost_count"));
    }
    if (ObjectValue.if_contains("message_auto_delete_time")) {
        Result.MessageAutoDeleteTime = boost::json::value_to<long long>(ObjectValue.at("message_auto_delete_time"));
    }
    if (ObjectValue.if_contains("has_aggressive_anti_spam_enabled")) {
        Result.HasAggressiveAntiSpamEnabled = boost::json::value_to<bool>(ObjectValue.at("has_aggressive_anti_spam_enabled"));
    }
    if (ObjectValue.if_contains("has_hidden_members")) {
        Result.HasHiddenMembers = boost::json::value_to<bool>(ObjectValue.at("has_hidden_members"));
    }
    if (ObjectValue.if_contains("has_protected_content")) {
        Result.HasProtectedContent = boost::json::value_to<bool>(ObjectValue.at("has_protected_content"));
    }
    if (ObjectValue.if_contains("has_visible_history")) {
        Result.HasVisibleHistory = boost::json::value_to<bool>(ObjectValue.at("has_visible_history"));
    }
    if (ObjectValue.if_contains("sticker_set_name")) {
        Result.StickerSetName = boost::json::value_to<std::string>(ObjectValue.at("sticker_set_name"));
    }
    if (ObjectValue.if_contains("can_set_sticker_set")) {
        Result.CanSetStickerSet = boost::json::value_to<bool>(ObjectValue.at("can_set_sticker_set"));
    }
    if (ObjectValue.if_contains("custom_emoji_sticker_set_name")) {
        Result.CustomEmojiStickerSetName = boost::json::value_to<std::string>(ObjectValue.at("custom_emoji_sticker_set_name"));
    }
    if (ObjectValue.if_contains("linked_chat_id")) {
        Result.LinkedChatID = boost::json::value_to<long long>(ObjectValue.at("linked_chat_id"));
    }
    if (ObjectValue.if_contains("location")) {
        Result.Location = FromJson<::TelegramBotAPI::Type::ChatLocation>(ObjectValue.at("location"));
    }
    if (ObjectValue.if_contains("rating")) {
        Result.Rating = FromJson<::TelegramBotAPI::Type::UserRating>(ObjectValue.at("rating"));
    }
    if (ObjectValue.if_contains("first_profile_audio")) {
        Result.FirstProfileAudio = FromJson<::TelegramBotAPI::Type::Audio>(ObjectValue.at("first_profile_audio"));
    }
    if (ObjectValue.if_contains("unique_gift_colors")) {
        Result.UniqueGiftColors = FromJson<::TelegramBotAPI::Type::UniqueGiftColors>(ObjectValue.at("unique_gift_colors"));
    }
    if (ObjectValue.if_contains("paid_message_star_count")) {
        Result.PaidMessageStarCount = boost::json::value_to<long long>(ObjectValue.at("paid_message_star_count"));
    }
    if (ObjectValue.if_contains("guard_bot")) {
        Result.GuardBot = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("guard_bot"));
    }
    if (ObjectValue.if_contains("community")) {
        Result.Community = FromJson<::TelegramBotAPI::Type::Community>(ObjectValue.at("community"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatInviteLink Deserializer<::TelegramBotAPI::Type::ChatInviteLink>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatInviteLink Result{};

    Result.InviteLink = boost::json::value_to<std::string>(ObjectValue.at("invite_link"));
    Result.Creator = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("creator"));
    Result.CreatesJoinRequest = boost::json::value_to<bool>(ObjectValue.at("creates_join_request"));
    Result.IsPrimary = boost::json::value_to<bool>(ObjectValue.at("is_primary"));
    Result.IsRevoked = boost::json::value_to<bool>(ObjectValue.at("is_revoked"));
    if (ObjectValue.if_contains("name")) {
        Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));
    }
    if (ObjectValue.if_contains("expire_date")) {
        Result.ExpireDate = boost::json::value_to<long long>(ObjectValue.at("expire_date"));
    }
    if (ObjectValue.if_contains("member_limit")) {
        Result.MemberLimit = boost::json::value_to<long long>(ObjectValue.at("member_limit"));
    }
    if (ObjectValue.if_contains("pending_join_request_count")) {
        Result.PendingJoinRequestCount = boost::json::value_to<long long>(ObjectValue.at("pending_join_request_count"));
    }
    if (ObjectValue.if_contains("subscription_period")) {
        Result.SubscriptionPeriod = boost::json::value_to<long long>(ObjectValue.at("subscription_period"));
    }
    if (ObjectValue.if_contains("subscription_price")) {
        Result.SubscriptionPrice = boost::json::value_to<long long>(ObjectValue.at("subscription_price"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatJoinRequest Deserializer<::TelegramBotAPI::Type::ChatJoinRequest>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatJoinRequest Result{};

    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.From = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("from"));
    Result.UserChatID = boost::json::value_to<long long>(ObjectValue.at("user_chat_id"));
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    if (ObjectValue.if_contains("bio")) {
        Result.Bio = boost::json::value_to<std::string>(ObjectValue.at("bio"));
    }
    if (ObjectValue.if_contains("invite_link")) {
        Result.InviteLink = FromJson<::TelegramBotAPI::Type::ChatInviteLink>(ObjectValue.at("invite_link"));
    }
    if (ObjectValue.if_contains("query_id")) {
        Result.QueryID = boost::json::value_to<std::string>(ObjectValue.at("query_id"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatLocation Deserializer<::TelegramBotAPI::Type::ChatLocation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatLocation Result{};

    Result.Location = FromJson<::TelegramBotAPI::Type::Location>(ObjectValue.at("location"));
    Result.Address = boost::json::value_to<std::string>(ObjectValue.at("address"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatMemberAdministrator Deserializer<::TelegramBotAPI::Type::ChatMemberAdministrator>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatMemberAdministrator Result{};

    Result.Status = boost::json::value_to<std::string>(ObjectValue.at("status"));
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    Result.CanBeEdited = boost::json::value_to<bool>(ObjectValue.at("can_be_edited"));
    Result.IsAnonymous = boost::json::value_to<bool>(ObjectValue.at("is_anonymous"));
    Result.CanManageChat = boost::json::value_to<bool>(ObjectValue.at("can_manage_chat"));
    Result.CanDeleteMessages = boost::json::value_to<bool>(ObjectValue.at("can_delete_messages"));
    Result.CanManageVideoChats = boost::json::value_to<bool>(ObjectValue.at("can_manage_video_chats"));
    Result.CanRestrictMembers = boost::json::value_to<bool>(ObjectValue.at("can_restrict_members"));
    Result.CanPromoteMembers = boost::json::value_to<bool>(ObjectValue.at("can_promote_members"));
    Result.CanChangeInfo = boost::json::value_to<bool>(ObjectValue.at("can_change_info"));
    Result.CanInviteUsers = boost::json::value_to<bool>(ObjectValue.at("can_invite_users"));
    Result.CanPostStories = boost::json::value_to<bool>(ObjectValue.at("can_post_stories"));
    Result.CanEditStories = boost::json::value_to<bool>(ObjectValue.at("can_edit_stories"));
    Result.CanDeleteStories = boost::json::value_to<bool>(ObjectValue.at("can_delete_stories"));
    if (ObjectValue.if_contains("can_post_messages")) {
        Result.CanPostMessages = boost::json::value_to<bool>(ObjectValue.at("can_post_messages"));
    }
    if (ObjectValue.if_contains("can_edit_messages")) {
        Result.CanEditMessages = boost::json::value_to<bool>(ObjectValue.at("can_edit_messages"));
    }
    if (ObjectValue.if_contains("can_pin_messages")) {
        Result.CanPinMessages = boost::json::value_to<bool>(ObjectValue.at("can_pin_messages"));
    }
    if (ObjectValue.if_contains("can_manage_topics")) {
        Result.CanManageTopics = boost::json::value_to<bool>(ObjectValue.at("can_manage_topics"));
    }
    if (ObjectValue.if_contains("can_manage_direct_messages")) {
        Result.CanManageDirectMessages = boost::json::value_to<bool>(ObjectValue.at("can_manage_direct_messages"));
    }
    if (ObjectValue.if_contains("can_manage_tags")) {
        Result.CanManageTags = boost::json::value_to<bool>(ObjectValue.at("can_manage_tags"));
    }
    Result.CanSendWelcomeMessages = boost::json::value_to<bool>(ObjectValue.at("can_send_welcome_messages"));
    if (ObjectValue.if_contains("custom_title")) {
        Result.CustomTitle = boost::json::value_to<std::string>(ObjectValue.at("custom_title"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatMemberBanned Deserializer<::TelegramBotAPI::Type::ChatMemberBanned>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatMemberBanned Result{};

    Result.Status = boost::json::value_to<std::string>(ObjectValue.at("status"));
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    Result.UntilDate = boost::json::value_to<long long>(ObjectValue.at("until_date"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatMemberLeft Deserializer<::TelegramBotAPI::Type::ChatMemberLeft>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatMemberLeft Result{};

    Result.Status = boost::json::value_to<std::string>(ObjectValue.at("status"));
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatMemberMember Deserializer<::TelegramBotAPI::Type::ChatMemberMember>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatMemberMember Result{};

    Result.Status = boost::json::value_to<std::string>(ObjectValue.at("status"));
    if (ObjectValue.if_contains("tag")) {
        Result.Tag = boost::json::value_to<std::string>(ObjectValue.at("tag"));
    }
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    if (ObjectValue.if_contains("until_date")) {
        Result.UntilDate = boost::json::value_to<long long>(ObjectValue.at("until_date"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatMemberOwner Deserializer<::TelegramBotAPI::Type::ChatMemberOwner>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatMemberOwner Result{};

    Result.Status = boost::json::value_to<std::string>(ObjectValue.at("status"));
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    Result.IsAnonymous = boost::json::value_to<bool>(ObjectValue.at("is_anonymous"));
    if (ObjectValue.if_contains("custom_title")) {
        Result.CustomTitle = boost::json::value_to<std::string>(ObjectValue.at("custom_title"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatMemberRestricted Deserializer<::TelegramBotAPI::Type::ChatMemberRestricted>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatMemberRestricted Result{};

    Result.Status = boost::json::value_to<std::string>(ObjectValue.at("status"));
    if (ObjectValue.if_contains("tag")) {
        Result.Tag = boost::json::value_to<std::string>(ObjectValue.at("tag"));
    }
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    Result.IsMember = boost::json::value_to<bool>(ObjectValue.at("is_member"));
    Result.CanSendMessages = boost::json::value_to<bool>(ObjectValue.at("can_send_messages"));
    Result.CanSendAudios = boost::json::value_to<bool>(ObjectValue.at("can_send_audios"));
    Result.CanSendDocuments = boost::json::value_to<bool>(ObjectValue.at("can_send_documents"));
    Result.CanSendPhotos = boost::json::value_to<bool>(ObjectValue.at("can_send_photos"));
    Result.CanSendVideos = boost::json::value_to<bool>(ObjectValue.at("can_send_videos"));
    Result.CanSendVideoNotes = boost::json::value_to<bool>(ObjectValue.at("can_send_video_notes"));
    Result.CanSendVoiceNotes = boost::json::value_to<bool>(ObjectValue.at("can_send_voice_notes"));
    Result.CanSendPolls = boost::json::value_to<bool>(ObjectValue.at("can_send_polls"));
    Result.CanSendOtherMessages = boost::json::value_to<bool>(ObjectValue.at("can_send_other_messages"));
    Result.CanAddWebPagePreviews = boost::json::value_to<bool>(ObjectValue.at("can_add_web_page_previews"));
    Result.CanReactToMessages = boost::json::value_to<bool>(ObjectValue.at("can_react_to_messages"));
    Result.CanEditTag = boost::json::value_to<bool>(ObjectValue.at("can_edit_tag"));
    Result.CanChangeInfo = boost::json::value_to<bool>(ObjectValue.at("can_change_info"));
    Result.CanInviteUsers = boost::json::value_to<bool>(ObjectValue.at("can_invite_users"));
    Result.CanPinMessages = boost::json::value_to<bool>(ObjectValue.at("can_pin_messages"));
    Result.CanManageTopics = boost::json::value_to<bool>(ObjectValue.at("can_manage_topics"));
    Result.UntilDate = boost::json::value_to<long long>(ObjectValue.at("until_date"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatMemberUpdated Deserializer<::TelegramBotAPI::Type::ChatMemberUpdated>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatMemberUpdated Result{};

    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.From = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("from"));
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    Result.OldChatMember = FromJson<::TelegramBotAPI::Type::ChatMember>(ObjectValue.at("old_chat_member"));
    Result.NewChatMember = FromJson<::TelegramBotAPI::Type::ChatMember>(ObjectValue.at("new_chat_member"));
    if (ObjectValue.if_contains("invite_link")) {
        Result.InviteLink = FromJson<::TelegramBotAPI::Type::ChatInviteLink>(ObjectValue.at("invite_link"));
    }
    if (ObjectValue.if_contains("via_join_request")) {
        Result.ViaJoinRequest = boost::json::value_to<bool>(ObjectValue.at("via_join_request"));
    }
    if (ObjectValue.if_contains("via_chat_folder_invite_link")) {
        Result.ViaChatFolderInviteLink = boost::json::value_to<bool>(ObjectValue.at("via_chat_folder_invite_link"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatOwnerChanged Deserializer<::TelegramBotAPI::Type::ChatOwnerChanged>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatOwnerChanged Result{};

    Result.NewOwner = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("new_owner"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatOwnerLeft Deserializer<::TelegramBotAPI::Type::ChatOwnerLeft>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatOwnerLeft Result{};

    if (ObjectValue.if_contains("new_owner")) {
        Result.NewOwner = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("new_owner"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatPermissions Deserializer<::TelegramBotAPI::Type::ChatPermissions>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatPermissions Result{};

    if (ObjectValue.if_contains("can_send_messages")) {
        Result.CanSendMessages = boost::json::value_to<bool>(ObjectValue.at("can_send_messages"));
    }
    if (ObjectValue.if_contains("can_send_audios")) {
        Result.CanSendAudios = boost::json::value_to<bool>(ObjectValue.at("can_send_audios"));
    }
    if (ObjectValue.if_contains("can_send_documents")) {
        Result.CanSendDocuments = boost::json::value_to<bool>(ObjectValue.at("can_send_documents"));
    }
    if (ObjectValue.if_contains("can_send_photos")) {
        Result.CanSendPhotos = boost::json::value_to<bool>(ObjectValue.at("can_send_photos"));
    }
    if (ObjectValue.if_contains("can_send_videos")) {
        Result.CanSendVideos = boost::json::value_to<bool>(ObjectValue.at("can_send_videos"));
    }
    if (ObjectValue.if_contains("can_send_video_notes")) {
        Result.CanSendVideoNotes = boost::json::value_to<bool>(ObjectValue.at("can_send_video_notes"));
    }
    if (ObjectValue.if_contains("can_send_voice_notes")) {
        Result.CanSendVoiceNotes = boost::json::value_to<bool>(ObjectValue.at("can_send_voice_notes"));
    }
    if (ObjectValue.if_contains("can_send_polls")) {
        Result.CanSendPolls = boost::json::value_to<bool>(ObjectValue.at("can_send_polls"));
    }
    if (ObjectValue.if_contains("can_send_other_messages")) {
        Result.CanSendOtherMessages = boost::json::value_to<bool>(ObjectValue.at("can_send_other_messages"));
    }
    if (ObjectValue.if_contains("can_add_web_page_previews")) {
        Result.CanAddWebPagePreviews = boost::json::value_to<bool>(ObjectValue.at("can_add_web_page_previews"));
    }
    if (ObjectValue.if_contains("can_react_to_messages")) {
        Result.CanReactToMessages = boost::json::value_to<bool>(ObjectValue.at("can_react_to_messages"));
    }
    if (ObjectValue.if_contains("can_edit_tag")) {
        Result.CanEditTag = boost::json::value_to<bool>(ObjectValue.at("can_edit_tag"));
    }
    if (ObjectValue.if_contains("can_change_info")) {
        Result.CanChangeInfo = boost::json::value_to<bool>(ObjectValue.at("can_change_info"));
    }
    if (ObjectValue.if_contains("can_invite_users")) {
        Result.CanInviteUsers = boost::json::value_to<bool>(ObjectValue.at("can_invite_users"));
    }
    if (ObjectValue.if_contains("can_pin_messages")) {
        Result.CanPinMessages = boost::json::value_to<bool>(ObjectValue.at("can_pin_messages"));
    }
    if (ObjectValue.if_contains("can_manage_topics")) {
        Result.CanManageTopics = boost::json::value_to<bool>(ObjectValue.at("can_manage_topics"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChatPhoto Deserializer<::TelegramBotAPI::Type::ChatPhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatPhoto Result{};

    Result.SmallFileID = boost::json::value_to<std::string>(ObjectValue.at("small_file_id"));
    Result.SmallFileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("small_file_unique_id"));
    Result.BigFileID = boost::json::value_to<std::string>(ObjectValue.at("big_file_id"));
    Result.BigFileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("big_file_unique_id"));

    return Result;
}

inline ::TelegramBotAPI::Type::ChatShared Deserializer<::TelegramBotAPI::Type::ChatShared>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChatShared Result{};

    Result.RequestID = boost::json::value_to<long long>(ObjectValue.at("request_id"));
    Result.ChatID = boost::json::value_to<long long>(ObjectValue.at("chat_id"));
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("username")) {
        Result.UserName = boost::json::value_to<std::string>(ObjectValue.at("username"));
    }
    if (ObjectValue.if_contains("photo")) {
        Result.Photo = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("photo").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Checklist Deserializer<::TelegramBotAPI::Type::Checklist>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Checklist Result{};

    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    if (ObjectValue.if_contains("title_entities")) {
        Result.TitleEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("title_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    Result.Tasks = ([&]() { std::vector<::TelegramBotAPI::Type::ChecklistTask> Result; for (const auto &Item : ObjectValue.at("tasks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::ChecklistTask>(Item)); } return Result; })();
    if (ObjectValue.if_contains("others_can_add_tasks")) {
        Result.OthersCanAddTasks = boost::json::value_to<bool>(ObjectValue.at("others_can_add_tasks"));
    }
    if (ObjectValue.if_contains("others_can_mark_tasks_as_done")) {
        Result.OthersCanMarkTasksAsDone = boost::json::value_to<bool>(ObjectValue.at("others_can_mark_tasks_as_done"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChecklistTask Deserializer<::TelegramBotAPI::Type::ChecklistTask>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChecklistTask Result{};

    Result.ID = boost::json::value_to<long long>(ObjectValue.at("id"));
    Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("text_entities")) {
        Result.TextEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("text_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("completed_by_user")) {
        Result.CompletedByUser = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("completed_by_user"));
    }
    if (ObjectValue.if_contains("completed_by_chat")) {
        Result.CompletedByChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("completed_by_chat"));
    }
    if (ObjectValue.if_contains("completion_date")) {
        Result.CompletionDate = boost::json::value_to<long long>(ObjectValue.at("completion_date"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChecklistTasksAdded Deserializer<::TelegramBotAPI::Type::ChecklistTasksAdded>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChecklistTasksAdded Result{};

    if (ObjectValue.if_contains("checklist_message")) {
        Result.ChecklistMessage = FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(ObjectValue.at("checklist_message"));
    }
    Result.Tasks = ([&]() { std::vector<::TelegramBotAPI::Type::ChecklistTask> Result; for (const auto &Item : ObjectValue.at("tasks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::ChecklistTask>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::ChecklistTasksDone Deserializer<::TelegramBotAPI::Type::ChecklistTasksDone>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChecklistTasksDone Result{};

    if (ObjectValue.if_contains("checklist_message")) {
        Result.ChecklistMessage = FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(ObjectValue.at("checklist_message"));
    }
    if (ObjectValue.if_contains("marked_as_done_task_ids")) {
        Result.MarkedAsDoneTaskIDs = boost::json::value_to<std::vector<long long>>(ObjectValue.at("marked_as_done_task_ids"));
    }
    if (ObjectValue.if_contains("marked_as_not_done_task_ids")) {
        Result.MarkedAsNotDoneTaskIDs = boost::json::value_to<std::vector<long long>>(ObjectValue.at("marked_as_not_done_task_ids"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ChosenInlineResult Deserializer<::TelegramBotAPI::Type::ChosenInlineResult>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ChosenInlineResult Result{};

    Result.ResultID = boost::json::value_to<std::string>(ObjectValue.at("result_id"));
    Result.From = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("from"));
    if (ObjectValue.if_contains("location")) {
        Result.Location = FromJson<::TelegramBotAPI::Type::Location>(ObjectValue.at("location"));
    }
    if (ObjectValue.if_contains("inline_message_id")) {
        Result.InlineMessageID = boost::json::value_to<std::string>(ObjectValue.at("inline_message_id"));
    }
    Result.Query = boost::json::value_to<std::string>(ObjectValue.at("query"));

    return Result;
}

inline ::TelegramBotAPI::Type::Community Deserializer<::TelegramBotAPI::Type::Community>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Community Result{};

    Result.ID = boost::json::value_to<long long>(ObjectValue.at("id"));
    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));

    return Result;
}

inline ::TelegramBotAPI::Type::CommunityChatAdded Deserializer<::TelegramBotAPI::Type::CommunityChatAdded>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::CommunityChatAdded Result{};

    Result.Community = FromJson<::TelegramBotAPI::Type::Community>(ObjectValue.at("community"));

    return Result;
}

inline ::TelegramBotAPI::Type::CommunityChatJoined Deserializer<::TelegramBotAPI::Type::CommunityChatJoined>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::CommunityChatJoined Result{};

    Result.Community = FromJson<::TelegramBotAPI::Type::Community>(ObjectValue.at("community"));

    return Result;
}

inline ::TelegramBotAPI::Type::CommunityChatRemoved Deserializer<::TelegramBotAPI::Type::CommunityChatRemoved>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::CommunityChatRemoved Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::Contact Deserializer<::TelegramBotAPI::Type::Contact>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Contact Result{};

    Result.PhoneNumber = boost::json::value_to<std::string>(ObjectValue.at("phone_number"));
    Result.FirstName = boost::json::value_to<std::string>(ObjectValue.at("first_name"));
    if (ObjectValue.if_contains("last_name")) {
        Result.LastName = boost::json::value_to<std::string>(ObjectValue.at("last_name"));
    }
    if (ObjectValue.if_contains("user_id")) {
        Result.UserID = boost::json::value_to<long long>(ObjectValue.at("user_id"));
    }
    if (ObjectValue.if_contains("vcard")) {
        Result.Vcard = boost::json::value_to<std::string>(ObjectValue.at("vcard"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::CopyTextButton Deserializer<::TelegramBotAPI::Type::CopyTextButton>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::CopyTextButton Result{};

    Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::Dice Deserializer<::TelegramBotAPI::Type::Dice>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Dice Result{};

    Result.Emoji = boost::json::value_to<std::string>(ObjectValue.at("emoji"));
    Result.Value = boost::json::value_to<long long>(ObjectValue.at("value"));

    return Result;
}

inline ::TelegramBotAPI::Type::DirectMessagePriceChanged Deserializer<::TelegramBotAPI::Type::DirectMessagePriceChanged>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::DirectMessagePriceChanged Result{};

    Result.AreDirectMessagesEnabled = boost::json::value_to<bool>(ObjectValue.at("are_direct_messages_enabled"));
    if (ObjectValue.if_contains("direct_message_star_count")) {
        Result.DirectMessageStarCount = boost::json::value_to<long long>(ObjectValue.at("direct_message_star_count"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::DirectMessagesTopic Deserializer<::TelegramBotAPI::Type::DirectMessagesTopic>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::DirectMessagesTopic Result{};

    Result.TopicID = boost::json::value_to<long long>(ObjectValue.at("topic_id"));
    if (ObjectValue.if_contains("user")) {
        Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::DisabledButton Deserializer<::TelegramBotAPI::Type::DisabledButton>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::DisabledButton Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::Document Deserializer<::TelegramBotAPI::Type::Document>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Document Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = FromJson<::TelegramBotAPI::Type::PhotoSize>(ObjectValue.at("thumbnail"));
    }
    if (ObjectValue.if_contains("file_name")) {
        Result.FileName = boost::json::value_to<std::string>(ObjectValue.at("file_name"));
    }
    if (ObjectValue.if_contains("mime_type")) {
        Result.MimeType = boost::json::value_to<std::string>(ObjectValue.at("mime_type"));
    }
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::EncryptedCredentials Deserializer<::TelegramBotAPI::Type::EncryptedCredentials>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::EncryptedCredentials Result{};

    Result.Data = boost::json::value_to<std::string>(ObjectValue.at("data"));
    Result.Hash = boost::json::value_to<std::string>(ObjectValue.at("hash"));
    Result.Secret = boost::json::value_to<std::string>(ObjectValue.at("secret"));

    return Result;
}

inline ::TelegramBotAPI::Type::EncryptedPassportElement Deserializer<::TelegramBotAPI::Type::EncryptedPassportElement>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::EncryptedPassportElement Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    if (ObjectValue.if_contains("data")) {
        Result.Data = boost::json::value_to<std::string>(ObjectValue.at("data"));
    }
    if (ObjectValue.if_contains("phone_number")) {
        Result.PhoneNumber = boost::json::value_to<std::string>(ObjectValue.at("phone_number"));
    }
    if (ObjectValue.if_contains("email")) {
        Result.Email = boost::json::value_to<std::string>(ObjectValue.at("email"));
    }
    if (ObjectValue.if_contains("files")) {
        Result.Files = ([&]() { std::vector<::TelegramBotAPI::Type::PassportFile> Result; for (const auto &Item : ObjectValue.at("files").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PassportFile>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("front_side")) {
        Result.FrontSide = FromJson<::TelegramBotAPI::Type::PassportFile>(ObjectValue.at("front_side"));
    }
    if (ObjectValue.if_contains("reverse_side")) {
        Result.ReverseSide = FromJson<::TelegramBotAPI::Type::PassportFile>(ObjectValue.at("reverse_side"));
    }
    if (ObjectValue.if_contains("selfie")) {
        Result.Selfie = FromJson<::TelegramBotAPI::Type::PassportFile>(ObjectValue.at("selfie"));
    }
    if (ObjectValue.if_contains("translation")) {
        Result.Translation = ([&]() { std::vector<::TelegramBotAPI::Type::PassportFile> Result; for (const auto &Item : ObjectValue.at("translation").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PassportFile>(Item)); } return Result; })();
    }
    Result.Hash = boost::json::value_to<std::string>(ObjectValue.at("hash"));

    return Result;
}

inline ::TelegramBotAPI::Type::EphemeralMessageParameters Deserializer<::TelegramBotAPI::Type::EphemeralMessageParameters>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::EphemeralMessageParameters Result{};

    Result.ReceiverUserID = boost::json::value_to<long long>(ObjectValue.at("receiver_user_id"));
    if (ObjectValue.if_contains("callback_query_id")) {
        Result.CallbackQueryID = boost::json::value_to<std::string>(ObjectValue.at("callback_query_id"));
    }
    if (ObjectValue.if_contains("replace_callback_query_message")) {
        Result.ReplaceCallbackQueryMessage = boost::json::value_to<bool>(ObjectValue.at("replace_callback_query_message"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ExternalReplyInfo Deserializer<::TelegramBotAPI::Type::ExternalReplyInfo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ExternalReplyInfo Result{};

    Result.Origin = FromJson<::TelegramBotAPI::Type::MessageOrigin>(ObjectValue.at("origin"));
    if (ObjectValue.if_contains("chat")) {
        Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    }
    if (ObjectValue.if_contains("message_id")) {
        Result.MessageID = boost::json::value_to<long long>(ObjectValue.at("message_id"));
    }
    if (ObjectValue.if_contains("link_preview_options")) {
        Result.LinkPreviewOptions = FromJson<::TelegramBotAPI::Type::LinkPreviewOptions>(ObjectValue.at("link_preview_options"));
    }
    if (ObjectValue.if_contains("animation")) {
        Result.Animation = FromJson<::TelegramBotAPI::Type::Animation>(ObjectValue.at("animation"));
    }
    if (ObjectValue.if_contains("audio")) {
        Result.Audio = FromJson<::TelegramBotAPI::Type::Audio>(ObjectValue.at("audio"));
    }
    if (ObjectValue.if_contains("document")) {
        Result.Document = FromJson<::TelegramBotAPI::Type::Document>(ObjectValue.at("document"));
    }
    if (ObjectValue.if_contains("live_photo")) {
        Result.LivePhoto = FromJson<::TelegramBotAPI::Type::LivePhoto>(ObjectValue.at("live_photo"));
    }
    if (ObjectValue.if_contains("paid_media")) {
        Result.PaidMedia = FromJson<::TelegramBotAPI::Type::PaidMediaInfo>(ObjectValue.at("paid_media"));
    }
    if (ObjectValue.if_contains("photo")) {
        Result.Photo = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("photo").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("sticker")) {
        Result.Sticker = FromJson<::TelegramBotAPI::Type::Sticker>(ObjectValue.at("sticker"));
    }
    if (ObjectValue.if_contains("story")) {
        Result.Story = FromJson<::TelegramBotAPI::Type::Story>(ObjectValue.at("story"));
    }
    if (ObjectValue.if_contains("video")) {
        Result.Video = FromJson<::TelegramBotAPI::Type::Video>(ObjectValue.at("video"));
    }
    if (ObjectValue.if_contains("video_note")) {
        Result.VideoNote = FromJson<::TelegramBotAPI::Type::VideoNote>(ObjectValue.at("video_note"));
    }
    if (ObjectValue.if_contains("voice")) {
        Result.Voice = FromJson<::TelegramBotAPI::Type::Voice>(ObjectValue.at("voice"));
    }
    if (ObjectValue.if_contains("has_media_spoiler")) {
        Result.HasMediaSpoiler = boost::json::value_to<bool>(ObjectValue.at("has_media_spoiler"));
    }
    if (ObjectValue.if_contains("checklist")) {
        Result.Checklist = FromJson<::TelegramBotAPI::Type::Checklist>(ObjectValue.at("checklist"));
    }
    if (ObjectValue.if_contains("contact")) {
        Result.Contact = FromJson<::TelegramBotAPI::Type::Contact>(ObjectValue.at("contact"));
    }
    if (ObjectValue.if_contains("dice")) {
        Result.Dice = FromJson<::TelegramBotAPI::Type::Dice>(ObjectValue.at("dice"));
    }
    if (ObjectValue.if_contains("game")) {
        Result.Game = FromJson<::TelegramBotAPI::Type::Game>(ObjectValue.at("game"));
    }
    if (ObjectValue.if_contains("giveaway")) {
        Result.Giveaway = FromJson<::TelegramBotAPI::Type::Giveaway>(ObjectValue.at("giveaway"));
    }
    if (ObjectValue.if_contains("giveaway_winners")) {
        Result.GiveawayWinners = FromJson<::TelegramBotAPI::Type::GiveawayWinners>(ObjectValue.at("giveaway_winners"));
    }
    if (ObjectValue.if_contains("invoice")) {
        Result.Invoice = FromJson<::TelegramBotAPI::Type::Invoice>(ObjectValue.at("invoice"));
    }
    if (ObjectValue.if_contains("location")) {
        Result.Location = FromJson<::TelegramBotAPI::Type::Location>(ObjectValue.at("location"));
    }
    if (ObjectValue.if_contains("poll")) {
        Result.Poll = FromJson<::TelegramBotAPI::Type::Poll>(ObjectValue.at("poll"));
    }
    if (ObjectValue.if_contains("venue")) {
        Result.Venue = FromJson<::TelegramBotAPI::Type::Venue>(ObjectValue.at("venue"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::File Deserializer<::TelegramBotAPI::Type::File>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::File Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }
    if (ObjectValue.if_contains("file_path")) {
        Result.FilePath = boost::json::value_to<std::string>(ObjectValue.at("file_path"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ForceReply Deserializer<::TelegramBotAPI::Type::ForceReply>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ForceReply Result{};

    Result.ForceReply = boost::json::value_to<bool>(ObjectValue.at("force_reply"));
    if (ObjectValue.if_contains("input_field_placeholder")) {
        Result.InputFieldPlaceholder = boost::json::value_to<std::string>(ObjectValue.at("input_field_placeholder"));
    }
    if (ObjectValue.if_contains("selective")) {
        Result.Selective = boost::json::value_to<bool>(ObjectValue.at("selective"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ForumTopic Deserializer<::TelegramBotAPI::Type::ForumTopic>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ForumTopic Result{};

    Result.MessageThreadID = boost::json::value_to<long long>(ObjectValue.at("message_thread_id"));
    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));
    Result.IconColor = boost::json::value_to<long long>(ObjectValue.at("icon_color"));
    if (ObjectValue.if_contains("icon_custom_emoji_id")) {
        Result.IconCustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("icon_custom_emoji_id"));
    }
    if (ObjectValue.if_contains("is_name_implicit")) {
        Result.IsNameImplicit = boost::json::value_to<bool>(ObjectValue.at("is_name_implicit"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ForumTopicClosed Deserializer<::TelegramBotAPI::Type::ForumTopicClosed>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ForumTopicClosed Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::ForumTopicCreated Deserializer<::TelegramBotAPI::Type::ForumTopicCreated>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ForumTopicCreated Result{};

    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));
    Result.IconColor = boost::json::value_to<long long>(ObjectValue.at("icon_color"));
    if (ObjectValue.if_contains("icon_custom_emoji_id")) {
        Result.IconCustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("icon_custom_emoji_id"));
    }
    if (ObjectValue.if_contains("is_name_implicit")) {
        Result.IsNameImplicit = boost::json::value_to<bool>(ObjectValue.at("is_name_implicit"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ForumTopicEdited Deserializer<::TelegramBotAPI::Type::ForumTopicEdited>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ForumTopicEdited Result{};

    if (ObjectValue.if_contains("name")) {
        Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));
    }
    if (ObjectValue.if_contains("icon_custom_emoji_id")) {
        Result.IconCustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("icon_custom_emoji_id"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ForumTopicReopened Deserializer<::TelegramBotAPI::Type::ForumTopicReopened>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ForumTopicReopened Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::Game Deserializer<::TelegramBotAPI::Type::Game>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Game Result{};

    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    Result.Photo = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("photo").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();
    if (ObjectValue.if_contains("text")) {
        Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    }
    if (ObjectValue.if_contains("text_entities")) {
        Result.TextEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("text_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("animation")) {
        Result.Animation = FromJson<::TelegramBotAPI::Type::Animation>(ObjectValue.at("animation"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::GameHighScore Deserializer<::TelegramBotAPI::Type::GameHighScore>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::GameHighScore Result{};

    Result.Position = boost::json::value_to<long long>(ObjectValue.at("position"));
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    Result.Score = boost::json::value_to<long long>(ObjectValue.at("score"));

    return Result;
}

inline ::TelegramBotAPI::Type::GeneralForumTopicHidden Deserializer<::TelegramBotAPI::Type::GeneralForumTopicHidden>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::GeneralForumTopicHidden Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::GeneralForumTopicUnhidden Deserializer<::TelegramBotAPI::Type::GeneralForumTopicUnhidden>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::GeneralForumTopicUnhidden Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::Gift Deserializer<::TelegramBotAPI::Type::Gift>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Gift Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Sticker = FromJson<::TelegramBotAPI::Type::Sticker>(ObjectValue.at("sticker"));
    Result.StarCount = boost::json::value_to<long long>(ObjectValue.at("star_count"));
    if (ObjectValue.if_contains("upgrade_star_count")) {
        Result.UpgradeStarCount = boost::json::value_to<long long>(ObjectValue.at("upgrade_star_count"));
    }
    if (ObjectValue.if_contains("is_premium")) {
        Result.IsPremium = boost::json::value_to<bool>(ObjectValue.at("is_premium"));
    }
    if (ObjectValue.if_contains("has_colors")) {
        Result.HasColors = boost::json::value_to<bool>(ObjectValue.at("has_colors"));
    }
    if (ObjectValue.if_contains("total_count")) {
        Result.TotalCount = boost::json::value_to<long long>(ObjectValue.at("total_count"));
    }
    if (ObjectValue.if_contains("remaining_count")) {
        Result.RemainingCount = boost::json::value_to<long long>(ObjectValue.at("remaining_count"));
    }
    if (ObjectValue.if_contains("personal_total_count")) {
        Result.PersonalTotalCount = boost::json::value_to<long long>(ObjectValue.at("personal_total_count"));
    }
    if (ObjectValue.if_contains("personal_remaining_count")) {
        Result.PersonalRemainingCount = boost::json::value_to<long long>(ObjectValue.at("personal_remaining_count"));
    }
    if (ObjectValue.if_contains("background")) {
        Result.Background = FromJson<::TelegramBotAPI::Type::GiftBackground>(ObjectValue.at("background"));
    }
    if (ObjectValue.if_contains("unique_gift_variant_count")) {
        Result.UniqueGiftVariantCount = boost::json::value_to<long long>(ObjectValue.at("unique_gift_variant_count"));
    }
    if (ObjectValue.if_contains("publisher_chat")) {
        Result.PublisherChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("publisher_chat"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::GiftBackground Deserializer<::TelegramBotAPI::Type::GiftBackground>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::GiftBackground Result{};

    Result.CenterColor = boost::json::value_to<long long>(ObjectValue.at("center_color"));
    Result.EdgeColor = boost::json::value_to<long long>(ObjectValue.at("edge_color"));
    Result.TextColor = boost::json::value_to<long long>(ObjectValue.at("text_color"));

    return Result;
}

inline ::TelegramBotAPI::Type::GiftInfo Deserializer<::TelegramBotAPI::Type::GiftInfo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::GiftInfo Result{};

    Result.Gift = FromJson<::TelegramBotAPI::Type::Gift>(ObjectValue.at("gift"));
    if (ObjectValue.if_contains("owned_gift_id")) {
        Result.OwnedGiftID = boost::json::value_to<std::string>(ObjectValue.at("owned_gift_id"));
    }
    if (ObjectValue.if_contains("convert_star_count")) {
        Result.ConvertStarCount = boost::json::value_to<long long>(ObjectValue.at("convert_star_count"));
    }
    if (ObjectValue.if_contains("prepaid_upgrade_star_count")) {
        Result.PrepaidUpgradeStarCount = boost::json::value_to<long long>(ObjectValue.at("prepaid_upgrade_star_count"));
    }
    if (ObjectValue.if_contains("is_upgrade_separate")) {
        Result.IsUpgradeSeparate = boost::json::value_to<bool>(ObjectValue.at("is_upgrade_separate"));
    }
    if (ObjectValue.if_contains("can_be_upgraded")) {
        Result.CanBeUpgraded = boost::json::value_to<bool>(ObjectValue.at("can_be_upgraded"));
    }
    if (ObjectValue.if_contains("text")) {
        Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    }
    if (ObjectValue.if_contains("entities")) {
        Result.Entities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("is_private")) {
        Result.IsPrivate = boost::json::value_to<bool>(ObjectValue.at("is_private"));
    }
    if (ObjectValue.if_contains("unique_gift_number")) {
        Result.UniqueGiftNumber = boost::json::value_to<long long>(ObjectValue.at("unique_gift_number"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Gifts Deserializer<::TelegramBotAPI::Type::Gifts>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Gifts Result{};

    Result.Gifts = ([&]() { std::vector<::TelegramBotAPI::Type::Gift> Result; for (const auto &Item : ObjectValue.at("gifts").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::Gift>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::Giveaway Deserializer<::TelegramBotAPI::Type::Giveaway>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Giveaway Result{};

    Result.Chats = ([&]() { std::vector<::TelegramBotAPI::Type::Chat> Result; for (const auto &Item : ObjectValue.at("chats").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::Chat>(Item)); } return Result; })();
    Result.WinnersSelectionDate = boost::json::value_to<long long>(ObjectValue.at("winners_selection_date"));
    Result.WinnerCount = boost::json::value_to<long long>(ObjectValue.at("winner_count"));
    if (ObjectValue.if_contains("only_new_members")) {
        Result.OnlyNewMembers = boost::json::value_to<bool>(ObjectValue.at("only_new_members"));
    }
    if (ObjectValue.if_contains("has_public_winners")) {
        Result.HasPublicWinners = boost::json::value_to<bool>(ObjectValue.at("has_public_winners"));
    }
    if (ObjectValue.if_contains("prize_description")) {
        Result.PrizeDescription = boost::json::value_to<std::string>(ObjectValue.at("prize_description"));
    }
    if (ObjectValue.if_contains("country_codes")) {
        Result.CountryCodes = boost::json::value_to<std::vector<std::string>>(ObjectValue.at("country_codes"));
    }
    if (ObjectValue.if_contains("prize_star_count")) {
        Result.PrizeStarCount = boost::json::value_to<long long>(ObjectValue.at("prize_star_count"));
    }
    if (ObjectValue.if_contains("premium_subscription_month_count")) {
        Result.PremiumSubscriptionMonthCount = boost::json::value_to<long long>(ObjectValue.at("premium_subscription_month_count"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::GiveawayCompleted Deserializer<::TelegramBotAPI::Type::GiveawayCompleted>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::GiveawayCompleted Result{};

    Result.WinnerCount = boost::json::value_to<long long>(ObjectValue.at("winner_count"));
    if (ObjectValue.if_contains("unclaimed_prize_count")) {
        Result.UnclaimedPrizeCount = boost::json::value_to<long long>(ObjectValue.at("unclaimed_prize_count"));
    }
    if (ObjectValue.if_contains("giveaway_message")) {
        Result.GiveawayMessage = FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(ObjectValue.at("giveaway_message"));
    }
    if (ObjectValue.if_contains("is_star_giveaway")) {
        Result.IsStarGiveaway = boost::json::value_to<bool>(ObjectValue.at("is_star_giveaway"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::GiveawayCreated Deserializer<::TelegramBotAPI::Type::GiveawayCreated>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::GiveawayCreated Result{};

    if (ObjectValue.if_contains("prize_star_count")) {
        Result.PrizeStarCount = boost::json::value_to<long long>(ObjectValue.at("prize_star_count"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::GiveawayWinners Deserializer<::TelegramBotAPI::Type::GiveawayWinners>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::GiveawayWinners Result{};

    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.GiveawayMessageID = boost::json::value_to<long long>(ObjectValue.at("giveaway_message_id"));
    Result.WinnersSelectionDate = boost::json::value_to<long long>(ObjectValue.at("winners_selection_date"));
    Result.WinnerCount = boost::json::value_to<long long>(ObjectValue.at("winner_count"));
    Result.Winners = ([&]() { std::vector<::TelegramBotAPI::Type::User> Result; for (const auto &Item : ObjectValue.at("winners").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::User>(Item)); } return Result; })();
    if (ObjectValue.if_contains("additional_chat_count")) {
        Result.AdditionalChatCount = boost::json::value_to<long long>(ObjectValue.at("additional_chat_count"));
    }
    if (ObjectValue.if_contains("prize_star_count")) {
        Result.PrizeStarCount = boost::json::value_to<long long>(ObjectValue.at("prize_star_count"));
    }
    if (ObjectValue.if_contains("premium_subscription_month_count")) {
        Result.PremiumSubscriptionMonthCount = boost::json::value_to<long long>(ObjectValue.at("premium_subscription_month_count"));
    }
    if (ObjectValue.if_contains("unclaimed_prize_count")) {
        Result.UnclaimedPrizeCount = boost::json::value_to<long long>(ObjectValue.at("unclaimed_prize_count"));
    }
    if (ObjectValue.if_contains("only_new_members")) {
        Result.OnlyNewMembers = boost::json::value_to<bool>(ObjectValue.at("only_new_members"));
    }
    if (ObjectValue.if_contains("was_refunded")) {
        Result.WasRefunded = boost::json::value_to<bool>(ObjectValue.at("was_refunded"));
    }
    if (ObjectValue.if_contains("prize_description")) {
        Result.PrizeDescription = boost::json::value_to<std::string>(ObjectValue.at("prize_description"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InaccessibleMessage Deserializer<::TelegramBotAPI::Type::InaccessibleMessage>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InaccessibleMessage Result{};

    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.MessageID = boost::json::value_to<long long>(ObjectValue.at("message_id"));
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));

    return Result;
}

inline ::TelegramBotAPI::Type::InlineKeyboardButton Deserializer<::TelegramBotAPI::Type::InlineKeyboardButton>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineKeyboardButton Result{};

    Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("icon_custom_emoji_id")) {
        Result.IconCustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("icon_custom_emoji_id"));
    }
    if (ObjectValue.if_contains("style")) {
        Result.Style = boost::json::value_to<std::string>(ObjectValue.at("style"));
    }
    if (ObjectValue.if_contains("url")) {
        Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));
    }
    if (ObjectValue.if_contains("callback_data")) {
        Result.CallbackData = boost::json::value_to<std::string>(ObjectValue.at("callback_data"));
    }
    if (ObjectValue.if_contains("web_app")) {
        Result.WebApp = FromJson<::TelegramBotAPI::Type::WebAppInfo>(ObjectValue.at("web_app"));
    }
    if (ObjectValue.if_contains("login_url")) {
        Result.LoginURL = FromJson<::TelegramBotAPI::Type::LoginUrl>(ObjectValue.at("login_url"));
    }
    if (ObjectValue.if_contains("switch_inline_query")) {
        Result.SwitchInlineQuery = boost::json::value_to<std::string>(ObjectValue.at("switch_inline_query"));
    }
    if (ObjectValue.if_contains("switch_inline_query_current_chat")) {
        Result.SwitchInlineQueryCurrentChat = boost::json::value_to<std::string>(ObjectValue.at("switch_inline_query_current_chat"));
    }
    if (ObjectValue.if_contains("switch_inline_query_chosen_chat")) {
        Result.SwitchInlineQueryChosenChat = FromJson<::TelegramBotAPI::Type::SwitchInlineQueryChosenChat>(ObjectValue.at("switch_inline_query_chosen_chat"));
    }
    if (ObjectValue.if_contains("copy_text")) {
        Result.CopyText = FromJson<::TelegramBotAPI::Type::CopyTextButton>(ObjectValue.at("copy_text"));
    }
    if (ObjectValue.if_contains("callback_game")) {
        Result.CallbackGame = FromJson<::TelegramBotAPI::Type::CallbackGame>(ObjectValue.at("callback_game"));
    }
    if (ObjectValue.if_contains("pay")) {
        Result.Pay = boost::json::value_to<bool>(ObjectValue.at("pay"));
    }
    if (ObjectValue.if_contains("disabled")) {
        Result.Disabled = FromJson<::TelegramBotAPI::Type::DisabledButton>(ObjectValue.at("disabled"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineKeyboardMarkup Deserializer<::TelegramBotAPI::Type::InlineKeyboardMarkup>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineKeyboardMarkup Result{};

    Result.InlineKeyboard = ([&]() { std::vector<std::vector<::TelegramBotAPI::Type::InlineKeyboardButton>> Result; for (const auto &Item : ObjectValue.at("inline_keyboard").as_array()) { Result.push_back(([&]() { std::vector<::TelegramBotAPI::Type::InlineKeyboardButton> Result; for (const auto &Item : Item.as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::InlineKeyboardButton>(Item)); } return Result; })()); } return Result; })();
    if (ObjectValue.if_contains("force_reply")) {
        Result.ForceReply = boost::json::value_to<bool>(ObjectValue.at("force_reply"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQuery Deserializer<::TelegramBotAPI::Type::InlineQuery>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQuery Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.From = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("from"));
    Result.Query = boost::json::value_to<std::string>(ObjectValue.at("query"));
    Result.Offset = boost::json::value_to<std::string>(ObjectValue.at("offset"));
    if (ObjectValue.if_contains("chat_type")) {
        Result.ChatType = boost::json::value_to<std::string>(ObjectValue.at("chat_type"));
    }
    if (ObjectValue.if_contains("location")) {
        Result.Location = FromJson<::TelegramBotAPI::Type::Location>(ObjectValue.at("location"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultArticle Deserializer<::TelegramBotAPI::Type::InlineQueryResultArticle>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultArticle Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("url")) {
        Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));
    }
    if (ObjectValue.if_contains("description")) {
        Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    }
    if (ObjectValue.if_contains("thumbnail_url")) {
        Result.ThumbnailURL = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_url"));
    }
    if (ObjectValue.if_contains("thumbnail_width")) {
        Result.ThumbnailWidth = boost::json::value_to<long long>(ObjectValue.at("thumbnail_width"));
    }
    if (ObjectValue.if_contains("thumbnail_height")) {
        Result.ThumbnailHeight = boost::json::value_to<long long>(ObjectValue.at("thumbnail_height"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultAudio Deserializer<::TelegramBotAPI::Type::InlineQueryResultAudio>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultAudio Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.AudioURL = boost::json::value_to<std::string>(ObjectValue.at("audio_url"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("performer")) {
        Result.Performer = boost::json::value_to<std::string>(ObjectValue.at("performer"));
    }
    if (ObjectValue.if_contains("audio_duration")) {
        Result.AudioDuration = boost::json::value_to<long long>(ObjectValue.at("audio_duration"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultCachedAudio Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedAudio>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultCachedAudio Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.AudioFileID = boost::json::value_to<std::string>(ObjectValue.at("audio_file_id"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultCachedDocument Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedDocument>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultCachedDocument Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.DocumentFileID = boost::json::value_to<std::string>(ObjectValue.at("document_file_id"));
    if (ObjectValue.if_contains("description")) {
        Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultCachedGif Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedGif>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultCachedGif Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.GIFFileID = boost::json::value_to<std::string>(ObjectValue.at("gif_file_id"));
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Mpeg4FileID = boost::json::value_to<std::string>(ObjectValue.at("mpeg4_file_id"));
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedPhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultCachedPhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.PhotoFileID = boost::json::value_to<std::string>(ObjectValue.at("photo_file_id"));
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("description")) {
        Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultCachedSticker Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedSticker>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultCachedSticker Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.StickerFileID = boost::json::value_to<std::string>(ObjectValue.at("sticker_file_id"));
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultCachedVideo Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedVideo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultCachedVideo Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.VideoFileID = boost::json::value_to<std::string>(ObjectValue.at("video_file_id"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    if (ObjectValue.if_contains("description")) {
        Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultCachedVoice Deserializer<::TelegramBotAPI::Type::InlineQueryResultCachedVoice>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultCachedVoice Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.VoiceFileID = boost::json::value_to<std::string>(ObjectValue.at("voice_file_id"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultContact Deserializer<::TelegramBotAPI::Type::InlineQueryResultContact>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultContact Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.PhoneNumber = boost::json::value_to<std::string>(ObjectValue.at("phone_number"));
    Result.FirstName = boost::json::value_to<std::string>(ObjectValue.at("first_name"));
    if (ObjectValue.if_contains("last_name")) {
        Result.LastName = boost::json::value_to<std::string>(ObjectValue.at("last_name"));
    }
    if (ObjectValue.if_contains("vcard")) {
        Result.Vcard = boost::json::value_to<std::string>(ObjectValue.at("vcard"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }
    if (ObjectValue.if_contains("thumbnail_url")) {
        Result.ThumbnailURL = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_url"));
    }
    if (ObjectValue.if_contains("thumbnail_width")) {
        Result.ThumbnailWidth = boost::json::value_to<long long>(ObjectValue.at("thumbnail_width"));
    }
    if (ObjectValue.if_contains("thumbnail_height")) {
        Result.ThumbnailHeight = boost::json::value_to<long long>(ObjectValue.at("thumbnail_height"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultDocument Deserializer<::TelegramBotAPI::Type::InlineQueryResultDocument>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultDocument Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    Result.DocumentURL = boost::json::value_to<std::string>(ObjectValue.at("document_url"));
    Result.MimeType = boost::json::value_to<std::string>(ObjectValue.at("mime_type"));
    if (ObjectValue.if_contains("description")) {
        Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }
    if (ObjectValue.if_contains("thumbnail_url")) {
        Result.ThumbnailURL = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_url"));
    }
    if (ObjectValue.if_contains("thumbnail_width")) {
        Result.ThumbnailWidth = boost::json::value_to<long long>(ObjectValue.at("thumbnail_width"));
    }
    if (ObjectValue.if_contains("thumbnail_height")) {
        Result.ThumbnailHeight = boost::json::value_to<long long>(ObjectValue.at("thumbnail_height"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultGame Deserializer<::TelegramBotAPI::Type::InlineQueryResultGame>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultGame Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.GameShortName = boost::json::value_to<std::string>(ObjectValue.at("game_short_name"));
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultGif Deserializer<::TelegramBotAPI::Type::InlineQueryResultGif>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultGif Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.GIFURL = boost::json::value_to<std::string>(ObjectValue.at("gif_url"));
    if (ObjectValue.if_contains("gif_width")) {
        Result.GIFWidth = boost::json::value_to<long long>(ObjectValue.at("gif_width"));
    }
    if (ObjectValue.if_contains("gif_height")) {
        Result.GIFHeight = boost::json::value_to<long long>(ObjectValue.at("gif_height"));
    }
    if (ObjectValue.if_contains("gif_duration")) {
        Result.GIFDuration = boost::json::value_to<long long>(ObjectValue.at("gif_duration"));
    }
    Result.ThumbnailURL = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_url"));
    if (ObjectValue.if_contains("thumbnail_mime_type")) {
        Result.ThumbnailMimeType = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_mime_type"));
    }
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultLocation Deserializer<::TelegramBotAPI::Type::InlineQueryResultLocation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultLocation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Latitude = boost::json::value_to<double>(ObjectValue.at("latitude"));
    Result.Longitude = boost::json::value_to<double>(ObjectValue.at("longitude"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    if (ObjectValue.if_contains("horizontal_accuracy")) {
        Result.HorizontalAccuracy = boost::json::value_to<double>(ObjectValue.at("horizontal_accuracy"));
    }
    if (ObjectValue.if_contains("live_period")) {
        Result.LivePeriod = boost::json::value_to<long long>(ObjectValue.at("live_period"));
    }
    if (ObjectValue.if_contains("heading")) {
        Result.Heading = boost::json::value_to<long long>(ObjectValue.at("heading"));
    }
    if (ObjectValue.if_contains("proximity_alert_radius")) {
        Result.ProximityAlertRadius = boost::json::value_to<long long>(ObjectValue.at("proximity_alert_radius"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }
    if (ObjectValue.if_contains("thumbnail_url")) {
        Result.ThumbnailURL = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_url"));
    }
    if (ObjectValue.if_contains("thumbnail_width")) {
        Result.ThumbnailWidth = boost::json::value_to<long long>(ObjectValue.at("thumbnail_width"));
    }
    if (ObjectValue.if_contains("thumbnail_height")) {
        Result.ThumbnailHeight = boost::json::value_to<long long>(ObjectValue.at("thumbnail_height"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif Deserializer<::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Mpeg4URL = boost::json::value_to<std::string>(ObjectValue.at("mpeg4_url"));
    if (ObjectValue.if_contains("mpeg4_width")) {
        Result.Mpeg4Width = boost::json::value_to<long long>(ObjectValue.at("mpeg4_width"));
    }
    if (ObjectValue.if_contains("mpeg4_height")) {
        Result.Mpeg4Height = boost::json::value_to<long long>(ObjectValue.at("mpeg4_height"));
    }
    if (ObjectValue.if_contains("mpeg4_duration")) {
        Result.Mpeg4Duration = boost::json::value_to<long long>(ObjectValue.at("mpeg4_duration"));
    }
    Result.ThumbnailURL = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_url"));
    if (ObjectValue.if_contains("thumbnail_mime_type")) {
        Result.ThumbnailMimeType = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_mime_type"));
    }
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultPhoto Deserializer<::TelegramBotAPI::Type::InlineQueryResultPhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultPhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.PhotoURL = boost::json::value_to<std::string>(ObjectValue.at("photo_url"));
    Result.ThumbnailURL = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_url"));
    if (ObjectValue.if_contains("photo_width")) {
        Result.PhotoWidth = boost::json::value_to<long long>(ObjectValue.at("photo_width"));
    }
    if (ObjectValue.if_contains("photo_height")) {
        Result.PhotoHeight = boost::json::value_to<long long>(ObjectValue.at("photo_height"));
    }
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }
    if (ObjectValue.if_contains("description")) {
        Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultVenue Deserializer<::TelegramBotAPI::Type::InlineQueryResultVenue>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultVenue Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Latitude = boost::json::value_to<double>(ObjectValue.at("latitude"));
    Result.Longitude = boost::json::value_to<double>(ObjectValue.at("longitude"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.Address = boost::json::value_to<std::string>(ObjectValue.at("address"));
    if (ObjectValue.if_contains("foursquare_id")) {
        Result.FoursquareID = boost::json::value_to<std::string>(ObjectValue.at("foursquare_id"));
    }
    if (ObjectValue.if_contains("foursquare_type")) {
        Result.FoursquareType = boost::json::value_to<std::string>(ObjectValue.at("foursquare_type"));
    }
    if (ObjectValue.if_contains("google_place_id")) {
        Result.GooglePlaceID = boost::json::value_to<std::string>(ObjectValue.at("google_place_id"));
    }
    if (ObjectValue.if_contains("google_place_type")) {
        Result.GooglePlaceType = boost::json::value_to<std::string>(ObjectValue.at("google_place_type"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }
    if (ObjectValue.if_contains("thumbnail_url")) {
        Result.ThumbnailURL = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_url"));
    }
    if (ObjectValue.if_contains("thumbnail_width")) {
        Result.ThumbnailWidth = boost::json::value_to<long long>(ObjectValue.at("thumbnail_width"));
    }
    if (ObjectValue.if_contains("thumbnail_height")) {
        Result.ThumbnailHeight = boost::json::value_to<long long>(ObjectValue.at("thumbnail_height"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultVideo Deserializer<::TelegramBotAPI::Type::InlineQueryResultVideo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultVideo Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.VideoURL = boost::json::value_to<std::string>(ObjectValue.at("video_url"));
    Result.MimeType = boost::json::value_to<std::string>(ObjectValue.at("mime_type"));
    Result.ThumbnailURL = boost::json::value_to<std::string>(ObjectValue.at("thumbnail_url"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("video_width")) {
        Result.VideoWidth = boost::json::value_to<long long>(ObjectValue.at("video_width"));
    }
    if (ObjectValue.if_contains("video_height")) {
        Result.VideoHeight = boost::json::value_to<long long>(ObjectValue.at("video_height"));
    }
    if (ObjectValue.if_contains("video_duration")) {
        Result.VideoDuration = boost::json::value_to<long long>(ObjectValue.at("video_duration"));
    }
    if (ObjectValue.if_contains("description")) {
        Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultVoice Deserializer<::TelegramBotAPI::Type::InlineQueryResultVoice>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultVoice Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.VoiceURL = boost::json::value_to<std::string>(ObjectValue.at("voice_url"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("voice_duration")) {
        Result.VoiceDuration = boost::json::value_to<long long>(ObjectValue.at("voice_duration"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }
    if (ObjectValue.if_contains("input_message_content")) {
        Result.InputMessageContent = FromJson<::TelegramBotAPI::Type::InputMessageContent>(ObjectValue.at("input_message_content"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InlineQueryResultsButton Deserializer<::TelegramBotAPI::Type::InlineQueryResultsButton>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InlineQueryResultsButton Result{};

    Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("web_app")) {
        Result.WebApp = FromJson<::TelegramBotAPI::Type::WebAppInfo>(ObjectValue.at("web_app"));
    }
    if (ObjectValue.if_contains("start_parameter")) {
        Result.StartParameter = boost::json::value_to<std::string>(ObjectValue.at("start_parameter"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputChecklist Deserializer<::TelegramBotAPI::Type::InputChecklist>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputChecklist Result{};

    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("title_entities")) {
        Result.TitleEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("title_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    Result.Tasks = ([&]() { std::vector<::TelegramBotAPI::Type::InputChecklistTask> Result; for (const auto &Item : ObjectValue.at("tasks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::InputChecklistTask>(Item)); } return Result; })();
    if (ObjectValue.if_contains("others_can_add_tasks")) {
        Result.OthersCanAddTasks = boost::json::value_to<bool>(ObjectValue.at("others_can_add_tasks"));
    }
    if (ObjectValue.if_contains("others_can_mark_tasks_as_done")) {
        Result.OthersCanMarkTasksAsDone = boost::json::value_to<bool>(ObjectValue.at("others_can_mark_tasks_as_done"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputChecklistTask Deserializer<::TelegramBotAPI::Type::InputChecklistTask>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputChecklistTask Result{};

    Result.ID = boost::json::value_to<long long>(ObjectValue.at("id"));
    Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("text_entities")) {
        Result.TextEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("text_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputContactMessageContent Deserializer<::TelegramBotAPI::Type::InputContactMessageContent>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputContactMessageContent Result{};

    Result.PhoneNumber = boost::json::value_to<std::string>(ObjectValue.at("phone_number"));
    Result.FirstName = boost::json::value_to<std::string>(ObjectValue.at("first_name"));
    if (ObjectValue.if_contains("last_name")) {
        Result.LastName = boost::json::value_to<std::string>(ObjectValue.at("last_name"));
    }
    if (ObjectValue.if_contains("vcard")) {
        Result.Vcard = boost::json::value_to<std::string>(ObjectValue.at("vcard"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputInvoiceMessageContent Deserializer<::TelegramBotAPI::Type::InputInvoiceMessageContent>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputInvoiceMessageContent Result{};

    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    Result.Payload = boost::json::value_to<std::string>(ObjectValue.at("payload"));
    if (ObjectValue.if_contains("provider_token")) {
        Result.ProviderToken = boost::json::value_to<std::string>(ObjectValue.at("provider_token"));
    }
    Result.Currency = boost::json::value_to<std::string>(ObjectValue.at("currency"));
    Result.Prices = ([&]() { std::vector<::TelegramBotAPI::Type::LabeledPrice> Result; for (const auto &Item : ObjectValue.at("prices").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::LabeledPrice>(Item)); } return Result; })();
    if (ObjectValue.if_contains("max_tip_amount")) {
        Result.MaxTipAmount = boost::json::value_to<long long>(ObjectValue.at("max_tip_amount"));
    }
    if (ObjectValue.if_contains("suggested_tip_amounts")) {
        Result.SuggestedTipAmounts = boost::json::value_to<std::vector<long long>>(ObjectValue.at("suggested_tip_amounts"));
    }
    if (ObjectValue.if_contains("provider_data")) {
        Result.ProviderData = boost::json::value_to<std::string>(ObjectValue.at("provider_data"));
    }
    if (ObjectValue.if_contains("photo_url")) {
        Result.PhotoURL = boost::json::value_to<std::string>(ObjectValue.at("photo_url"));
    }
    if (ObjectValue.if_contains("photo_size")) {
        Result.PhotoSize = boost::json::value_to<long long>(ObjectValue.at("photo_size"));
    }
    if (ObjectValue.if_contains("photo_width")) {
        Result.PhotoWidth = boost::json::value_to<long long>(ObjectValue.at("photo_width"));
    }
    if (ObjectValue.if_contains("photo_height")) {
        Result.PhotoHeight = boost::json::value_to<long long>(ObjectValue.at("photo_height"));
    }
    if (ObjectValue.if_contains("need_name")) {
        Result.NeedName = boost::json::value_to<bool>(ObjectValue.at("need_name"));
    }
    if (ObjectValue.if_contains("need_phone_number")) {
        Result.NeedPhoneNumber = boost::json::value_to<bool>(ObjectValue.at("need_phone_number"));
    }
    if (ObjectValue.if_contains("need_email")) {
        Result.NeedEmail = boost::json::value_to<bool>(ObjectValue.at("need_email"));
    }
    if (ObjectValue.if_contains("need_shipping_address")) {
        Result.NeedShippingAddress = boost::json::value_to<bool>(ObjectValue.at("need_shipping_address"));
    }
    if (ObjectValue.if_contains("send_phone_number_to_provider")) {
        Result.SendPhoneNumberToProvider = boost::json::value_to<bool>(ObjectValue.at("send_phone_number_to_provider"));
    }
    if (ObjectValue.if_contains("send_email_to_provider")) {
        Result.SendEmailToProvider = boost::json::value_to<bool>(ObjectValue.at("send_email_to_provider"));
    }
    if (ObjectValue.if_contains("is_flexible")) {
        Result.IsFlexible = boost::json::value_to<bool>(ObjectValue.at("is_flexible"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputLocationMessageContent Deserializer<::TelegramBotAPI::Type::InputLocationMessageContent>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputLocationMessageContent Result{};

    Result.Latitude = boost::json::value_to<double>(ObjectValue.at("latitude"));
    Result.Longitude = boost::json::value_to<double>(ObjectValue.at("longitude"));
    if (ObjectValue.if_contains("horizontal_accuracy")) {
        Result.HorizontalAccuracy = boost::json::value_to<double>(ObjectValue.at("horizontal_accuracy"));
    }
    if (ObjectValue.if_contains("live_period")) {
        Result.LivePeriod = boost::json::value_to<long long>(ObjectValue.at("live_period"));
    }
    if (ObjectValue.if_contains("heading")) {
        Result.Heading = boost::json::value_to<long long>(ObjectValue.at("heading"));
    }
    if (ObjectValue.if_contains("proximity_alert_radius")) {
        Result.ProximityAlertRadius = boost::json::value_to<long long>(ObjectValue.at("proximity_alert_radius"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaAnimation Deserializer<::TelegramBotAPI::Type::InputMediaAnimation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaAnimation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = boost::json::value_to<std::string>(ObjectValue.at("thumbnail"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("width")) {
        Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    }
    if (ObjectValue.if_contains("height")) {
        Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    }
    if (ObjectValue.if_contains("duration")) {
        Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    }
    if (ObjectValue.if_contains("has_spoiler")) {
        Result.HasSpoiler = boost::json::value_to<bool>(ObjectValue.at("has_spoiler"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaAudio Deserializer<::TelegramBotAPI::Type::InputMediaAudio>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaAudio Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = boost::json::value_to<std::string>(ObjectValue.at("thumbnail"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("duration")) {
        Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    }
    if (ObjectValue.if_contains("performer")) {
        Result.Performer = boost::json::value_to<std::string>(ObjectValue.at("performer"));
    }
    if (ObjectValue.if_contains("title")) {
        Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaDocument Deserializer<::TelegramBotAPI::Type::InputMediaDocument>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaDocument Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = boost::json::value_to<std::string>(ObjectValue.at("thumbnail"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("disable_content_type_detection")) {
        Result.DisableContentTypeDetection = boost::json::value_to<bool>(ObjectValue.at("disable_content_type_detection"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaLink Deserializer<::TelegramBotAPI::Type::InputMediaLink>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaLink Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaLivePhoto Deserializer<::TelegramBotAPI::Type::InputMediaLivePhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaLivePhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));
    Result.Photo = boost::json::value_to<std::string>(ObjectValue.at("photo"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("has_spoiler")) {
        Result.HasSpoiler = boost::json::value_to<bool>(ObjectValue.at("has_spoiler"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaLocation Deserializer<::TelegramBotAPI::Type::InputMediaLocation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaLocation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Latitude = boost::json::value_to<double>(ObjectValue.at("latitude"));
    Result.Longitude = boost::json::value_to<double>(ObjectValue.at("longitude"));
    if (ObjectValue.if_contains("horizontal_accuracy")) {
        Result.HorizontalAccuracy = boost::json::value_to<double>(ObjectValue.at("horizontal_accuracy"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaPhoto Deserializer<::TelegramBotAPI::Type::InputMediaPhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaPhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("has_spoiler")) {
        Result.HasSpoiler = boost::json::value_to<bool>(ObjectValue.at("has_spoiler"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaSticker Deserializer<::TelegramBotAPI::Type::InputMediaSticker>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaSticker Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));
    if (ObjectValue.if_contains("emoji")) {
        Result.Emoji = boost::json::value_to<std::string>(ObjectValue.at("emoji"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaVenue Deserializer<::TelegramBotAPI::Type::InputMediaVenue>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaVenue Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Latitude = boost::json::value_to<double>(ObjectValue.at("latitude"));
    Result.Longitude = boost::json::value_to<double>(ObjectValue.at("longitude"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.Address = boost::json::value_to<std::string>(ObjectValue.at("address"));
    if (ObjectValue.if_contains("foursquare_id")) {
        Result.FoursquareID = boost::json::value_to<std::string>(ObjectValue.at("foursquare_id"));
    }
    if (ObjectValue.if_contains("foursquare_type")) {
        Result.FoursquareType = boost::json::value_to<std::string>(ObjectValue.at("foursquare_type"));
    }
    if (ObjectValue.if_contains("google_place_id")) {
        Result.GooglePlaceID = boost::json::value_to<std::string>(ObjectValue.at("google_place_id"));
    }
    if (ObjectValue.if_contains("google_place_type")) {
        Result.GooglePlaceType = boost::json::value_to<std::string>(ObjectValue.at("google_place_type"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaVideo Deserializer<::TelegramBotAPI::Type::InputMediaVideo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaVideo Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = boost::json::value_to<std::string>(ObjectValue.at("thumbnail"));
    }
    if (ObjectValue.if_contains("cover")) {
        Result.Cover = boost::json::value_to<std::string>(ObjectValue.at("cover"));
    }
    if (ObjectValue.if_contains("start_timestamp")) {
        Result.StartTimestamp = boost::json::value_to<long long>(ObjectValue.at("start_timestamp"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("width")) {
        Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    }
    if (ObjectValue.if_contains("height")) {
        Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    }
    if (ObjectValue.if_contains("duration")) {
        Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    }
    if (ObjectValue.if_contains("supports_streaming")) {
        Result.SupportsStreaming = boost::json::value_to<bool>(ObjectValue.at("supports_streaming"));
    }
    if (ObjectValue.if_contains("has_spoiler")) {
        Result.HasSpoiler = boost::json::value_to<bool>(ObjectValue.at("has_spoiler"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputMediaVoiceNote Deserializer<::TelegramBotAPI::Type::InputMediaVoiceNote>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputMediaVoiceNote Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("duration")) {
        Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputPaidMediaLivePhoto Deserializer<::TelegramBotAPI::Type::InputPaidMediaLivePhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputPaidMediaLivePhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));
    Result.Photo = boost::json::value_to<std::string>(ObjectValue.at("photo"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputPaidMediaPhoto Deserializer<::TelegramBotAPI::Type::InputPaidMediaPhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputPaidMediaPhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputPaidMediaVideo Deserializer<::TelegramBotAPI::Type::InputPaidMediaVideo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputPaidMediaVideo Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Media = boost::json::value_to<std::string>(ObjectValue.at("media"));
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = boost::json::value_to<std::string>(ObjectValue.at("thumbnail"));
    }
    if (ObjectValue.if_contains("cover")) {
        Result.Cover = boost::json::value_to<std::string>(ObjectValue.at("cover"));
    }
    if (ObjectValue.if_contains("start_timestamp")) {
        Result.StartTimestamp = boost::json::value_to<long long>(ObjectValue.at("start_timestamp"));
    }
    if (ObjectValue.if_contains("width")) {
        Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    }
    if (ObjectValue.if_contains("height")) {
        Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    }
    if (ObjectValue.if_contains("duration")) {
        Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    }
    if (ObjectValue.if_contains("supports_streaming")) {
        Result.SupportsStreaming = boost::json::value_to<bool>(ObjectValue.at("supports_streaming"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputPollOption Deserializer<::TelegramBotAPI::Type::InputPollOption>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputPollOption Result{};

    Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("text_parse_mode")) {
        Result.TextParseMode = boost::json::value_to<std::string>(ObjectValue.at("text_parse_mode"));
    }
    if (ObjectValue.if_contains("text_entities")) {
        Result.TextEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("text_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("media")) {
        Result.Media = FromJson<::TelegramBotAPI::Type::InputPollOptionMedia>(ObjectValue.at("media"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputProfilePhotoAnimated Deserializer<::TelegramBotAPI::Type::InputProfilePhotoAnimated>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputProfilePhotoAnimated Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Animation = boost::json::value_to<std::string>(ObjectValue.at("animation"));
    if (ObjectValue.if_contains("main_frame_timestamp")) {
        Result.MainFrameTimestamp = boost::json::value_to<double>(ObjectValue.at("main_frame_timestamp"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputProfilePhotoStatic Deserializer<::TelegramBotAPI::Type::InputProfilePhotoStatic>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputProfilePhotoStatic Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Photo = boost::json::value_to<std::string>(ObjectValue.at("photo"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlock Deserializer<::TelegramBotAPI::Type::InputRichBlock>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlock Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockAnchor Deserializer<::TelegramBotAPI::Type::InputRichBlockAnchor>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockAnchor Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockAnimation Deserializer<::TelegramBotAPI::Type::InputRichBlockAnimation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockAnimation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Animation = FromJson<::TelegramBotAPI::Type::InputMediaAnimation>(ObjectValue.at("animation"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockAudio Deserializer<::TelegramBotAPI::Type::InputRichBlockAudio>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockAudio Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Audio = FromJson<::TelegramBotAPI::Type::InputMediaAudio>(ObjectValue.at("audio"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockBlockQuotation Deserializer<::TelegramBotAPI::Type::InputRichBlockBlockQuotation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockBlockQuotation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::InputRichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::InputRichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("credit")) {
        Result.Credit = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("credit"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockButtons Deserializer<::TelegramBotAPI::Type::InputRichBlockButtons>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockButtons Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Buttons = ([&]() { std::vector<::TelegramBotAPI::Type::RichMessageButton> Result; for (const auto &Item : ObjectValue.at("buttons").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichMessageButton>(Item)); } return Result; })();
    if (ObjectValue.if_contains("align")) {
        Result.Align = boost::json::value_to<std::string>(ObjectValue.at("align"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockCollage Deserializer<::TelegramBotAPI::Type::InputRichBlockCollage>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockCollage Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::InputRichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::InputRichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockDetails Deserializer<::TelegramBotAPI::Type::InputRichBlockDetails>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockDetails Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Summary = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("summary"));
    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::InputRichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::InputRichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("is_open")) {
        Result.IsOpen = boost::json::value_to<bool>(ObjectValue.at("is_open"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockDivider Deserializer<::TelegramBotAPI::Type::InputRichBlockDivider>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockDivider Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockDocument Deserializer<::TelegramBotAPI::Type::InputRichBlockDocument>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockDocument Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Document = FromJson<::TelegramBotAPI::Type::InputMediaDocument>(ObjectValue.at("document"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockExpandableBlockQuotation Deserializer<::TelegramBotAPI::Type::InputRichBlockExpandableBlockQuotation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockExpandableBlockQuotation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("credit")) {
        Result.Credit = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("credit"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockFooter Deserializer<::TelegramBotAPI::Type::InputRichBlockFooter>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockFooter Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockList Deserializer<::TelegramBotAPI::Type::InputRichBlockList>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockList Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Items = ([&]() { std::vector<::TelegramBotAPI::Type::InputRichBlockListItem> Result; for (const auto &Item : ObjectValue.at("items").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::InputRichBlockListItem>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockListItem Deserializer<::TelegramBotAPI::Type::InputRichBlockListItem>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockListItem Result{};

    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::InputRichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::InputRichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("has_checkbox")) {
        Result.HasCheckbox = boost::json::value_to<bool>(ObjectValue.at("has_checkbox"));
    }
    if (ObjectValue.if_contains("is_checked")) {
        Result.IsChecked = boost::json::value_to<bool>(ObjectValue.at("is_checked"));
    }
    if (ObjectValue.if_contains("value")) {
        Result.Value = boost::json::value_to<long long>(ObjectValue.at("value"));
    }
    if (ObjectValue.if_contains("type")) {
        Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockMap Deserializer<::TelegramBotAPI::Type::InputRichBlockMap>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockMap Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Location = FromJson<::TelegramBotAPI::Type::Location>(ObjectValue.at("location"));
    if (ObjectValue.if_contains("zoom")) {
        Result.Zoom = boost::json::value_to<long long>(ObjectValue.at("zoom"));
    }
    if (ObjectValue.if_contains("width")) {
        Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    }
    if (ObjectValue.if_contains("height")) {
        Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockMathematicalExpression Deserializer<::TelegramBotAPI::Type::InputRichBlockMathematicalExpression>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockMathematicalExpression Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Expression = boost::json::value_to<std::string>(ObjectValue.at("expression"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockParagraph Deserializer<::TelegramBotAPI::Type::InputRichBlockParagraph>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockParagraph Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockPhoto Deserializer<::TelegramBotAPI::Type::InputRichBlockPhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockPhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Photo = FromJson<::TelegramBotAPI::Type::InputMediaPhoto>(ObjectValue.at("photo"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockPreformatted Deserializer<::TelegramBotAPI::Type::InputRichBlockPreformatted>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockPreformatted Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("language")) {
        Result.Language = boost::json::value_to<std::string>(ObjectValue.at("language"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockPullQuotation Deserializer<::TelegramBotAPI::Type::InputRichBlockPullQuotation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockPullQuotation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("credit")) {
        Result.Credit = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("credit"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockSectionHeading Deserializer<::TelegramBotAPI::Type::InputRichBlockSectionHeading>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockSectionHeading Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.Size = boost::json::value_to<long long>(ObjectValue.at("size"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockSlideshow Deserializer<::TelegramBotAPI::Type::InputRichBlockSlideshow>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockSlideshow Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::InputRichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::InputRichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockTable Deserializer<::TelegramBotAPI::Type::InputRichBlockTable>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockTable Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Cells = ([&]() { std::vector<std::vector<::TelegramBotAPI::Type::RichBlockTableCell>> Result; for (const auto &Item : ObjectValue.at("cells").as_array()) { Result.push_back(([&]() { std::vector<::TelegramBotAPI::Type::RichBlockTableCell> Result; for (const auto &Item : Item.as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichBlockTableCell>(Item)); } return Result; })()); } return Result; })();
    if (ObjectValue.if_contains("is_bordered")) {
        Result.IsBordered = boost::json::value_to<bool>(ObjectValue.at("is_bordered"));
    }
    if (ObjectValue.if_contains("is_striped")) {
        Result.IsStriped = boost::json::value_to<bool>(ObjectValue.at("is_striped"));
    }
    if (ObjectValue.if_contains("is_compact")) {
        Result.IsCompact = boost::json::value_to<bool>(ObjectValue.at("is_compact"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockThinking Deserializer<::TelegramBotAPI::Type::InputRichBlockThinking>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockThinking Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockVideo Deserializer<::TelegramBotAPI::Type::InputRichBlockVideo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockVideo Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Video = FromJson<::TelegramBotAPI::Type::InputMediaVideo>(ObjectValue.at("video"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichBlockVoiceNote Deserializer<::TelegramBotAPI::Type::InputRichBlockVoiceNote>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichBlockVoiceNote Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.VoiceNote = FromJson<::TelegramBotAPI::Type::InputMediaVoiceNote>(ObjectValue.at("voice_note"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichMessage Deserializer<::TelegramBotAPI::Type::InputRichMessage>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichMessage Result{};

    if (ObjectValue.if_contains("blocks")) {
        Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::InputRichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::InputRichBlock>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("html")) {
        Result.HTML = boost::json::value_to<std::string>(ObjectValue.at("html"));
    }
    if (ObjectValue.if_contains("markdown")) {
        Result.Markdown = boost::json::value_to<std::string>(ObjectValue.at("markdown"));
    }
    if (ObjectValue.if_contains("media")) {
        Result.Media = ([&]() { std::vector<::TelegramBotAPI::Type::InputRichMessageMedia> Result; for (const auto &Item : ObjectValue.at("media").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::InputRichMessageMedia>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("is_rtl")) {
        Result.IsRtl = boost::json::value_to<bool>(ObjectValue.at("is_rtl"));
    }
    if (ObjectValue.if_contains("skip_entity_detection")) {
        Result.SkipEntityDetection = boost::json::value_to<bool>(ObjectValue.at("skip_entity_detection"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichMessageContent Deserializer<::TelegramBotAPI::Type::InputRichMessageContent>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichMessageContent Result{};

    Result.RichMessage = FromJson<::TelegramBotAPI::Type::InputRichMessage>(ObjectValue.at("rich_message"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputRichMessageMedia Deserializer<::TelegramBotAPI::Type::InputRichMessageMedia>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputRichMessageMedia Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Media = ([&]() -> std::variant<::TelegramBotAPI::Type::InputMediaAnimation, ::TelegramBotAPI::Type::InputMediaAudio, ::TelegramBotAPI::Type::InputMediaDocument, ::TelegramBotAPI::Type::InputMediaPhoto, ::TelegramBotAPI::Type::InputMediaVideo, ::TelegramBotAPI::Type::InputMediaVoiceNote> { std::exception_ptr LastError; try { return FromJson<::TelegramBotAPI::Type::InputMediaAnimation>(ObjectValue.at("media")); } catch (...) { LastError = std::current_exception(); } try { return FromJson<::TelegramBotAPI::Type::InputMediaAudio>(ObjectValue.at("media")); } catch (...) { try { return FromJson<::TelegramBotAPI::Type::InputMediaDocument>(ObjectValue.at("media")); } catch (...) { try { return FromJson<::TelegramBotAPI::Type::InputMediaPhoto>(ObjectValue.at("media")); } catch (...) { try { return FromJson<::TelegramBotAPI::Type::InputMediaVideo>(ObjectValue.at("media")); } catch (...) { try { return FromJson<::TelegramBotAPI::Type::InputMediaVoiceNote>(ObjectValue.at("media")); } catch (...) { } } } } }  if (LastError) { std::rethrow_exception(LastError); } throw std::invalid_argument("Unable to deserialize inline union"); })();

    return Result;
}

inline ::TelegramBotAPI::Type::InputSticker Deserializer<::TelegramBotAPI::Type::InputSticker>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputSticker Result{};

    Result.Sticker = boost::json::value_to<std::string>(ObjectValue.at("sticker"));
    Result.Format = boost::json::value_to<std::string>(ObjectValue.at("format"));
    Result.EmojiList = boost::json::value_to<std::vector<std::string>>(ObjectValue.at("emoji_list"));
    if (ObjectValue.if_contains("mask_position")) {
        Result.MaskPosition = FromJson<::TelegramBotAPI::Type::MaskPosition>(ObjectValue.at("mask_position"));
    }
    if (ObjectValue.if_contains("keywords")) {
        Result.Keywords = boost::json::value_to<std::vector<std::string>>(ObjectValue.at("keywords"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputStoryContentPhoto Deserializer<::TelegramBotAPI::Type::InputStoryContentPhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputStoryContentPhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Photo = boost::json::value_to<std::string>(ObjectValue.at("photo"));

    return Result;
}

inline ::TelegramBotAPI::Type::InputStoryContentVideo Deserializer<::TelegramBotAPI::Type::InputStoryContentVideo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputStoryContentVideo Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Video = boost::json::value_to<std::string>(ObjectValue.at("video"));
    if (ObjectValue.if_contains("duration")) {
        Result.Duration = boost::json::value_to<double>(ObjectValue.at("duration"));
    }
    if (ObjectValue.if_contains("cover_frame_timestamp")) {
        Result.CoverFrameTimestamp = boost::json::value_to<double>(ObjectValue.at("cover_frame_timestamp"));
    }
    if (ObjectValue.if_contains("is_animation")) {
        Result.IsAnimation = boost::json::value_to<bool>(ObjectValue.at("is_animation"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputTextMessageContent Deserializer<::TelegramBotAPI::Type::InputTextMessageContent>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputTextMessageContent Result{};

    Result.MessageText = boost::json::value_to<std::string>(ObjectValue.at("message_text"));
    if (ObjectValue.if_contains("parse_mode")) {
        Result.ParseMode = boost::json::value_to<std::string>(ObjectValue.at("parse_mode"));
    }
    if (ObjectValue.if_contains("entities")) {
        Result.Entities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("link_preview_options")) {
        Result.LinkPreviewOptions = FromJson<::TelegramBotAPI::Type::LinkPreviewOptions>(ObjectValue.at("link_preview_options"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::InputVenueMessageContent Deserializer<::TelegramBotAPI::Type::InputVenueMessageContent>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::InputVenueMessageContent Result{};

    Result.Latitude = boost::json::value_to<double>(ObjectValue.at("latitude"));
    Result.Longitude = boost::json::value_to<double>(ObjectValue.at("longitude"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.Address = boost::json::value_to<std::string>(ObjectValue.at("address"));
    if (ObjectValue.if_contains("foursquare_id")) {
        Result.FoursquareID = boost::json::value_to<std::string>(ObjectValue.at("foursquare_id"));
    }
    if (ObjectValue.if_contains("foursquare_type")) {
        Result.FoursquareType = boost::json::value_to<std::string>(ObjectValue.at("foursquare_type"));
    }
    if (ObjectValue.if_contains("google_place_id")) {
        Result.GooglePlaceID = boost::json::value_to<std::string>(ObjectValue.at("google_place_id"));
    }
    if (ObjectValue.if_contains("google_place_type")) {
        Result.GooglePlaceType = boost::json::value_to<std::string>(ObjectValue.at("google_place_type"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Invoice Deserializer<::TelegramBotAPI::Type::Invoice>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Invoice Result{};

    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    Result.StartParameter = boost::json::value_to<std::string>(ObjectValue.at("start_parameter"));
    Result.Currency = boost::json::value_to<std::string>(ObjectValue.at("currency"));
    Result.TotalAmount = boost::json::value_to<long long>(ObjectValue.at("total_amount"));

    return Result;
}

inline ::TelegramBotAPI::Type::KeyboardButton Deserializer<::TelegramBotAPI::Type::KeyboardButton>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::KeyboardButton Result{};

    Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("icon_custom_emoji_id")) {
        Result.IconCustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("icon_custom_emoji_id"));
    }
    if (ObjectValue.if_contains("style")) {
        Result.Style = boost::json::value_to<std::string>(ObjectValue.at("style"));
    }
    if (ObjectValue.if_contains("request_users")) {
        Result.RequestUsers = FromJson<::TelegramBotAPI::Type::KeyboardButtonRequestUsers>(ObjectValue.at("request_users"));
    }
    if (ObjectValue.if_contains("request_chat")) {
        Result.RequestChat = FromJson<::TelegramBotAPI::Type::KeyboardButtonRequestChat>(ObjectValue.at("request_chat"));
    }
    if (ObjectValue.if_contains("request_managed_bot")) {
        Result.RequestManagedBot = FromJson<::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot>(ObjectValue.at("request_managed_bot"));
    }
    if (ObjectValue.if_contains("request_contact")) {
        Result.RequestContact = boost::json::value_to<bool>(ObjectValue.at("request_contact"));
    }
    if (ObjectValue.if_contains("request_location")) {
        Result.RequestLocation = boost::json::value_to<bool>(ObjectValue.at("request_location"));
    }
    if (ObjectValue.if_contains("request_poll")) {
        Result.RequestPoll = FromJson<::TelegramBotAPI::Type::KeyboardButtonPollType>(ObjectValue.at("request_poll"));
    }
    if (ObjectValue.if_contains("web_app")) {
        Result.WebApp = FromJson<::TelegramBotAPI::Type::WebAppInfo>(ObjectValue.at("web_app"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::KeyboardButtonPollType Deserializer<::TelegramBotAPI::Type::KeyboardButtonPollType>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::KeyboardButtonPollType Result{};

    if (ObjectValue.if_contains("type")) {
        Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::KeyboardButtonRequestChat Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestChat>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::KeyboardButtonRequestChat Result{};

    Result.RequestID = boost::json::value_to<long long>(ObjectValue.at("request_id"));
    Result.ChatIsChannel = boost::json::value_to<bool>(ObjectValue.at("chat_is_channel"));
    if (ObjectValue.if_contains("chat_is_forum")) {
        Result.ChatIsForum = boost::json::value_to<bool>(ObjectValue.at("chat_is_forum"));
    }
    if (ObjectValue.if_contains("chat_has_username")) {
        Result.ChatHasUserName = boost::json::value_to<bool>(ObjectValue.at("chat_has_username"));
    }
    if (ObjectValue.if_contains("chat_is_created")) {
        Result.ChatIsCreated = boost::json::value_to<bool>(ObjectValue.at("chat_is_created"));
    }
    if (ObjectValue.if_contains("user_administrator_rights")) {
        Result.UserAdministratorRights = FromJson<::TelegramBotAPI::Type::ChatAdministratorRights>(ObjectValue.at("user_administrator_rights"));
    }
    if (ObjectValue.if_contains("bot_administrator_rights")) {
        Result.BotAdministratorRights = FromJson<::TelegramBotAPI::Type::ChatAdministratorRights>(ObjectValue.at("bot_administrator_rights"));
    }
    if (ObjectValue.if_contains("bot_is_member")) {
        Result.BotIsMember = boost::json::value_to<bool>(ObjectValue.at("bot_is_member"));
    }
    if (ObjectValue.if_contains("request_title")) {
        Result.RequestTitle = boost::json::value_to<bool>(ObjectValue.at("request_title"));
    }
    if (ObjectValue.if_contains("request_username")) {
        Result.RequestUserName = boost::json::value_to<bool>(ObjectValue.at("request_username"));
    }
    if (ObjectValue.if_contains("request_photo")) {
        Result.RequestPhoto = boost::json::value_to<bool>(ObjectValue.at("request_photo"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot Result{};

    Result.RequestID = boost::json::value_to<long long>(ObjectValue.at("request_id"));
    if (ObjectValue.if_contains("suggested_name")) {
        Result.SuggestedName = boost::json::value_to<std::string>(ObjectValue.at("suggested_name"));
    }
    if (ObjectValue.if_contains("suggested_username")) {
        Result.SuggestedUserName = boost::json::value_to<std::string>(ObjectValue.at("suggested_username"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::KeyboardButtonRequestUsers Deserializer<::TelegramBotAPI::Type::KeyboardButtonRequestUsers>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::KeyboardButtonRequestUsers Result{};

    Result.RequestID = boost::json::value_to<long long>(ObjectValue.at("request_id"));
    if (ObjectValue.if_contains("user_is_bot")) {
        Result.UserIsBot = boost::json::value_to<bool>(ObjectValue.at("user_is_bot"));
    }
    if (ObjectValue.if_contains("user_is_premium")) {
        Result.UserIsPremium = boost::json::value_to<bool>(ObjectValue.at("user_is_premium"));
    }
    if (ObjectValue.if_contains("max_quantity")) {
        Result.MaxQuantity = boost::json::value_to<long long>(ObjectValue.at("max_quantity"));
    }
    if (ObjectValue.if_contains("request_name")) {
        Result.RequestName = boost::json::value_to<bool>(ObjectValue.at("request_name"));
    }
    if (ObjectValue.if_contains("request_username")) {
        Result.RequestUserName = boost::json::value_to<bool>(ObjectValue.at("request_username"));
    }
    if (ObjectValue.if_contains("request_photo")) {
        Result.RequestPhoto = boost::json::value_to<bool>(ObjectValue.at("request_photo"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::LabeledPrice Deserializer<::TelegramBotAPI::Type::LabeledPrice>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::LabeledPrice Result{};

    Result.Label = boost::json::value_to<std::string>(ObjectValue.at("label"));
    Result.Amount = boost::json::value_to<long long>(ObjectValue.at("amount"));

    return Result;
}

inline ::TelegramBotAPI::Type::Link Deserializer<::TelegramBotAPI::Type::Link>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Link Result{};

    Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));

    return Result;
}

inline ::TelegramBotAPI::Type::LinkPreviewOptions Deserializer<::TelegramBotAPI::Type::LinkPreviewOptions>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::LinkPreviewOptions Result{};

    if (ObjectValue.if_contains("is_disabled")) {
        Result.IsDisabled = boost::json::value_to<bool>(ObjectValue.at("is_disabled"));
    }
    if (ObjectValue.if_contains("url")) {
        Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));
    }
    if (ObjectValue.if_contains("prefer_small_media")) {
        Result.PreferSmallMedia = boost::json::value_to<bool>(ObjectValue.at("prefer_small_media"));
    }
    if (ObjectValue.if_contains("prefer_large_media")) {
        Result.PreferLargeMedia = boost::json::value_to<bool>(ObjectValue.at("prefer_large_media"));
    }
    if (ObjectValue.if_contains("show_above_text")) {
        Result.ShowAboveText = boost::json::value_to<bool>(ObjectValue.at("show_above_text"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::LivePhoto Deserializer<::TelegramBotAPI::Type::LivePhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::LivePhoto Result{};

    if (ObjectValue.if_contains("photo")) {
        Result.Photo = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("photo").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();
    }
    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    if (ObjectValue.if_contains("mime_type")) {
        Result.MimeType = boost::json::value_to<std::string>(ObjectValue.at("mime_type"));
    }
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Location Deserializer<::TelegramBotAPI::Type::Location>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Location Result{};

    Result.Latitude = boost::json::value_to<double>(ObjectValue.at("latitude"));
    Result.Longitude = boost::json::value_to<double>(ObjectValue.at("longitude"));
    if (ObjectValue.if_contains("horizontal_accuracy")) {
        Result.HorizontalAccuracy = boost::json::value_to<double>(ObjectValue.at("horizontal_accuracy"));
    }
    if (ObjectValue.if_contains("live_period")) {
        Result.LivePeriod = boost::json::value_to<long long>(ObjectValue.at("live_period"));
    }
    if (ObjectValue.if_contains("heading")) {
        Result.Heading = boost::json::value_to<long long>(ObjectValue.at("heading"));
    }
    if (ObjectValue.if_contains("proximity_alert_radius")) {
        Result.ProximityAlertRadius = boost::json::value_to<long long>(ObjectValue.at("proximity_alert_radius"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::LocationAddress Deserializer<::TelegramBotAPI::Type::LocationAddress>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::LocationAddress Result{};

    Result.CountryCode = boost::json::value_to<std::string>(ObjectValue.at("country_code"));
    if (ObjectValue.if_contains("state")) {
        Result.State = boost::json::value_to<std::string>(ObjectValue.at("state"));
    }
    if (ObjectValue.if_contains("city")) {
        Result.City = boost::json::value_to<std::string>(ObjectValue.at("city"));
    }
    if (ObjectValue.if_contains("street")) {
        Result.Street = boost::json::value_to<std::string>(ObjectValue.at("street"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::LoginUrl Deserializer<::TelegramBotAPI::Type::LoginUrl>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::LoginUrl Result{};

    Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));
    if (ObjectValue.if_contains("forward_text")) {
        Result.ForwardText = boost::json::value_to<std::string>(ObjectValue.at("forward_text"));
    }
    if (ObjectValue.if_contains("bot_username")) {
        Result.BotUserName = boost::json::value_to<std::string>(ObjectValue.at("bot_username"));
    }
    if (ObjectValue.if_contains("request_write_access")) {
        Result.RequestWriteAccess = boost::json::value_to<bool>(ObjectValue.at("request_write_access"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ManagedBotCreated Deserializer<::TelegramBotAPI::Type::ManagedBotCreated>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ManagedBotCreated Result{};

    Result.Bot = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("bot"));

    return Result;
}

inline ::TelegramBotAPI::Type::ManagedBotUpdated Deserializer<::TelegramBotAPI::Type::ManagedBotUpdated>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ManagedBotUpdated Result{};

    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    Result.Bot = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("bot"));

    return Result;
}

inline ::TelegramBotAPI::Type::MaskPosition Deserializer<::TelegramBotAPI::Type::MaskPosition>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MaskPosition Result{};

    Result.Point = boost::json::value_to<std::string>(ObjectValue.at("point"));
    Result.XShift = boost::json::value_to<double>(ObjectValue.at("x_shift"));
    Result.YShift = boost::json::value_to<double>(ObjectValue.at("y_shift"));
    Result.Scale = boost::json::value_to<double>(ObjectValue.at("scale"));

    return Result;
}

inline ::TelegramBotAPI::Type::MenuButtonCommands Deserializer<::TelegramBotAPI::Type::MenuButtonCommands>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MenuButtonCommands Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::MenuButtonDefault Deserializer<::TelegramBotAPI::Type::MenuButtonDefault>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MenuButtonDefault Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::MenuButtonWebApp Deserializer<::TelegramBotAPI::Type::MenuButtonWebApp>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MenuButtonWebApp Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    Result.WebApp = FromJson<::TelegramBotAPI::Type::WebAppInfo>(ObjectValue.at("web_app"));

    return Result;
}

inline ::TelegramBotAPI::Type::Message Deserializer<::TelegramBotAPI::Type::Message>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Message Result{};

    Result.MessageID = boost::json::value_to<long long>(ObjectValue.at("message_id"));
    if (ObjectValue.if_contains("message_thread_id")) {
        Result.MessageThreadID = boost::json::value_to<long long>(ObjectValue.at("message_thread_id"));
    }
    if (ObjectValue.if_contains("direct_messages_topic")) {
        Result.DirectMessagesTopic = FromJson<::TelegramBotAPI::Type::DirectMessagesTopic>(ObjectValue.at("direct_messages_topic"));
    }
    if (ObjectValue.if_contains("from")) {
        Result.From = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("from"));
    }
    if (ObjectValue.if_contains("sender_chat")) {
        Result.SenderChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("sender_chat"));
    }
    if (ObjectValue.if_contains("sender_boost_count")) {
        Result.SenderBoostCount = boost::json::value_to<long long>(ObjectValue.at("sender_boost_count"));
    }
    if (ObjectValue.if_contains("sender_business_bot")) {
        Result.SenderBusinessBot = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("sender_business_bot"));
    }
    if (ObjectValue.if_contains("sender_tag")) {
        Result.SenderTag = boost::json::value_to<std::string>(ObjectValue.at("sender_tag"));
    }
    if (ObjectValue.if_contains("receiver_user")) {
        Result.ReceiverUser = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("receiver_user"));
    }
    if (ObjectValue.if_contains("ephemeral_message_id")) {
        Result.EphemeralMessageID = boost::json::value_to<long long>(ObjectValue.at("ephemeral_message_id"));
    }
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    if (ObjectValue.if_contains("guest_query_id")) {
        Result.GuestQueryID = boost::json::value_to<std::string>(ObjectValue.at("guest_query_id"));
    }
    if (ObjectValue.if_contains("business_connection_id")) {
        Result.BusinessConnectionID = boost::json::value_to<std::string>(ObjectValue.at("business_connection_id"));
    }
    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    if (ObjectValue.if_contains("forward_origin")) {
        Result.ForwardOrigin = FromJson<::TelegramBotAPI::Type::MessageOrigin>(ObjectValue.at("forward_origin"));
    }
    if (ObjectValue.if_contains("is_topic_message")) {
        Result.IsTopicMessage = boost::json::value_to<bool>(ObjectValue.at("is_topic_message"));
    }
    if (ObjectValue.if_contains("is_automatic_forward")) {
        Result.IsAutomaticForward = boost::json::value_to<bool>(ObjectValue.at("is_automatic_forward"));
    }
    if (ObjectValue.if_contains("reply_to_message")) {
        Result.ReplyToMessage = FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(ObjectValue.at("reply_to_message"));
    }
    if (ObjectValue.if_contains("external_reply")) {
        Result.ExternalReply = FromJson<::TelegramBotAPI::Type::ExternalReplyInfo>(ObjectValue.at("external_reply"));
    }
    if (ObjectValue.if_contains("quote")) {
        Result.Quote = FromJson<::TelegramBotAPI::Type::TextQuote>(ObjectValue.at("quote"));
    }
    if (ObjectValue.if_contains("reply_to_story")) {
        Result.ReplyToStory = FromJson<::TelegramBotAPI::Type::Story>(ObjectValue.at("reply_to_story"));
    }
    if (ObjectValue.if_contains("reply_to_checklist_task_id")) {
        Result.ReplyToChecklistTaskID = boost::json::value_to<long long>(ObjectValue.at("reply_to_checklist_task_id"));
    }
    if (ObjectValue.if_contains("reply_to_poll_option_id")) {
        Result.ReplyToPollOptionID = boost::json::value_to<std::string>(ObjectValue.at("reply_to_poll_option_id"));
    }
    if (ObjectValue.if_contains("via_bot")) {
        Result.ViaBot = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("via_bot"));
    }
    if (ObjectValue.if_contains("guest_bot_caller_user")) {
        Result.GuestBotCallerUser = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("guest_bot_caller_user"));
    }
    if (ObjectValue.if_contains("guest_bot_caller_chat")) {
        Result.GuestBotCallerChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("guest_bot_caller_chat"));
    }
    if (ObjectValue.if_contains("edit_date")) {
        Result.EditDate = boost::json::value_to<long long>(ObjectValue.at("edit_date"));
    }
    if (ObjectValue.if_contains("has_protected_content")) {
        Result.HasProtectedContent = boost::json::value_to<bool>(ObjectValue.at("has_protected_content"));
    }
    if (ObjectValue.if_contains("is_from_offline")) {
        Result.IsFromOffline = boost::json::value_to<bool>(ObjectValue.at("is_from_offline"));
    }
    if (ObjectValue.if_contains("is_paid_post")) {
        Result.IsPaidPost = boost::json::value_to<bool>(ObjectValue.at("is_paid_post"));
    }
    if (ObjectValue.if_contains("media_group_id")) {
        Result.MediaGroupID = boost::json::value_to<std::string>(ObjectValue.at("media_group_id"));
    }
    if (ObjectValue.if_contains("author_signature")) {
        Result.AuthorSignature = boost::json::value_to<std::string>(ObjectValue.at("author_signature"));
    }
    if (ObjectValue.if_contains("paid_star_count")) {
        Result.PaidStarCount = boost::json::value_to<long long>(ObjectValue.at("paid_star_count"));
    }
    if (ObjectValue.if_contains("text")) {
        Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    }
    if (ObjectValue.if_contains("entities")) {
        Result.Entities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("link_preview_options")) {
        Result.LinkPreviewOptions = FromJson<::TelegramBotAPI::Type::LinkPreviewOptions>(ObjectValue.at("link_preview_options"));
    }
    if (ObjectValue.if_contains("suggested_post_info")) {
        Result.SuggestedPostInfo = FromJson<::TelegramBotAPI::Type::SuggestedPostInfo>(ObjectValue.at("suggested_post_info"));
    }
    if (ObjectValue.if_contains("effect_id")) {
        Result.EffectID = boost::json::value_to<std::string>(ObjectValue.at("effect_id"));
    }
    if (ObjectValue.if_contains("rich_message")) {
        Result.RichMessage = FromJson<::TelegramBotAPI::Type::RichMessage>(ObjectValue.at("rich_message"));
    }
    if (ObjectValue.if_contains("animation")) {
        Result.Animation = FromJson<::TelegramBotAPI::Type::Animation>(ObjectValue.at("animation"));
    }
    if (ObjectValue.if_contains("audio")) {
        Result.Audio = FromJson<::TelegramBotAPI::Type::Audio>(ObjectValue.at("audio"));
    }
    if (ObjectValue.if_contains("document")) {
        Result.Document = FromJson<::TelegramBotAPI::Type::Document>(ObjectValue.at("document"));
    }
    if (ObjectValue.if_contains("live_photo")) {
        Result.LivePhoto = FromJson<::TelegramBotAPI::Type::LivePhoto>(ObjectValue.at("live_photo"));
    }
    if (ObjectValue.if_contains("paid_media")) {
        Result.PaidMedia = FromJson<::TelegramBotAPI::Type::PaidMediaInfo>(ObjectValue.at("paid_media"));
    }
    if (ObjectValue.if_contains("photo")) {
        Result.Photo = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("photo").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("sticker")) {
        Result.Sticker = FromJson<::TelegramBotAPI::Type::Sticker>(ObjectValue.at("sticker"));
    }
    if (ObjectValue.if_contains("story")) {
        Result.Story = FromJson<::TelegramBotAPI::Type::Story>(ObjectValue.at("story"));
    }
    if (ObjectValue.if_contains("video")) {
        Result.Video = FromJson<::TelegramBotAPI::Type::Video>(ObjectValue.at("video"));
    }
    if (ObjectValue.if_contains("video_note")) {
        Result.VideoNote = FromJson<::TelegramBotAPI::Type::VideoNote>(ObjectValue.at("video_note"));
    }
    if (ObjectValue.if_contains("voice")) {
        Result.Voice = FromJson<::TelegramBotAPI::Type::Voice>(ObjectValue.at("voice"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = boost::json::value_to<std::string>(ObjectValue.at("caption"));
    }
    if (ObjectValue.if_contains("caption_entities")) {
        Result.CaptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("caption_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("show_caption_above_media")) {
        Result.ShowCaptionAboveMedia = boost::json::value_to<bool>(ObjectValue.at("show_caption_above_media"));
    }
    if (ObjectValue.if_contains("has_media_spoiler")) {
        Result.HasMediaSpoiler = boost::json::value_to<bool>(ObjectValue.at("has_media_spoiler"));
    }
    if (ObjectValue.if_contains("checklist")) {
        Result.Checklist = FromJson<::TelegramBotAPI::Type::Checklist>(ObjectValue.at("checklist"));
    }
    if (ObjectValue.if_contains("contact")) {
        Result.Contact = FromJson<::TelegramBotAPI::Type::Contact>(ObjectValue.at("contact"));
    }
    if (ObjectValue.if_contains("dice")) {
        Result.Dice = FromJson<::TelegramBotAPI::Type::Dice>(ObjectValue.at("dice"));
    }
    if (ObjectValue.if_contains("game")) {
        Result.Game = FromJson<::TelegramBotAPI::Type::Game>(ObjectValue.at("game"));
    }
    if (ObjectValue.if_contains("poll")) {
        Result.Poll = FromJson<::TelegramBotAPI::Type::Poll>(ObjectValue.at("poll"));
    }
    if (ObjectValue.if_contains("venue")) {
        Result.Venue = FromJson<::TelegramBotAPI::Type::Venue>(ObjectValue.at("venue"));
    }
    if (ObjectValue.if_contains("location")) {
        Result.Location = FromJson<::TelegramBotAPI::Type::Location>(ObjectValue.at("location"));
    }
    if (ObjectValue.if_contains("new_chat_members")) {
        Result.NewChatMembers = ([&]() { std::vector<::TelegramBotAPI::Type::User> Result; for (const auto &Item : ObjectValue.at("new_chat_members").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::User>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("left_chat_member")) {
        Result.LeftChatMember = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("left_chat_member"));
    }
    if (ObjectValue.if_contains("chat_owner_left")) {
        Result.ChatOwnerLeft = FromJson<::TelegramBotAPI::Type::ChatOwnerLeft>(ObjectValue.at("chat_owner_left"));
    }
    if (ObjectValue.if_contains("chat_owner_changed")) {
        Result.ChatOwnerChanged = FromJson<::TelegramBotAPI::Type::ChatOwnerChanged>(ObjectValue.at("chat_owner_changed"));
    }
    if (ObjectValue.if_contains("new_chat_title")) {
        Result.NewChatTitle = boost::json::value_to<std::string>(ObjectValue.at("new_chat_title"));
    }
    if (ObjectValue.if_contains("new_chat_photo")) {
        Result.NewChatPhoto = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("new_chat_photo").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("delete_chat_photo")) {
        Result.DeleteChatPhoto = boost::json::value_to<bool>(ObjectValue.at("delete_chat_photo"));
    }
    if (ObjectValue.if_contains("group_chat_created")) {
        Result.GroupChatCreated = boost::json::value_to<bool>(ObjectValue.at("group_chat_created"));
    }
    if (ObjectValue.if_contains("supergroup_chat_created")) {
        Result.SupergroupChatCreated = boost::json::value_to<bool>(ObjectValue.at("supergroup_chat_created"));
    }
    if (ObjectValue.if_contains("channel_chat_created")) {
        Result.ChannelChatCreated = boost::json::value_to<bool>(ObjectValue.at("channel_chat_created"));
    }
    if (ObjectValue.if_contains("message_auto_delete_timer_changed")) {
        Result.MessageAutoDeleteTimerChanged = FromJson<::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged>(ObjectValue.at("message_auto_delete_timer_changed"));
    }
    if (ObjectValue.if_contains("migrate_to_chat_id")) {
        Result.MigrateToChatID = boost::json::value_to<long long>(ObjectValue.at("migrate_to_chat_id"));
    }
    if (ObjectValue.if_contains("migrate_from_chat_id")) {
        Result.MigrateFromChatID = boost::json::value_to<long long>(ObjectValue.at("migrate_from_chat_id"));
    }
    if (ObjectValue.if_contains("pinned_message")) {
        Result.PinnedMessage = FromJson<::TelegramBotAPI::Type::MaybeInaccessibleMessage>(ObjectValue.at("pinned_message"));
    }
    if (ObjectValue.if_contains("invoice")) {
        Result.Invoice = FromJson<::TelegramBotAPI::Type::Invoice>(ObjectValue.at("invoice"));
    }
    if (ObjectValue.if_contains("successful_payment")) {
        Result.SuccessfulPayment = FromJson<::TelegramBotAPI::Type::SuccessfulPayment>(ObjectValue.at("successful_payment"));
    }
    if (ObjectValue.if_contains("refunded_payment")) {
        Result.RefundedPayment = FromJson<::TelegramBotAPI::Type::RefundedPayment>(ObjectValue.at("refunded_payment"));
    }
    if (ObjectValue.if_contains("users_shared")) {
        Result.UsersShared = FromJson<::TelegramBotAPI::Type::UsersShared>(ObjectValue.at("users_shared"));
    }
    if (ObjectValue.if_contains("chat_shared")) {
        Result.ChatShared = FromJson<::TelegramBotAPI::Type::ChatShared>(ObjectValue.at("chat_shared"));
    }
    if (ObjectValue.if_contains("gift")) {
        Result.Gift = FromJson<::TelegramBotAPI::Type::GiftInfo>(ObjectValue.at("gift"));
    }
    if (ObjectValue.if_contains("unique_gift")) {
        Result.UniqueGift = FromJson<::TelegramBotAPI::Type::UniqueGiftInfo>(ObjectValue.at("unique_gift"));
    }
    if (ObjectValue.if_contains("gift_upgrade_sent")) {
        Result.GiftUpgradeSent = FromJson<::TelegramBotAPI::Type::GiftInfo>(ObjectValue.at("gift_upgrade_sent"));
    }
    if (ObjectValue.if_contains("connected_website")) {
        Result.ConnectedWebsite = boost::json::value_to<std::string>(ObjectValue.at("connected_website"));
    }
    if (ObjectValue.if_contains("write_access_allowed")) {
        Result.WriteAccessAllowed = FromJson<::TelegramBotAPI::Type::WriteAccessAllowed>(ObjectValue.at("write_access_allowed"));
    }
    if (ObjectValue.if_contains("passport_data")) {
        Result.PassportData = FromJson<::TelegramBotAPI::Type::PassportData>(ObjectValue.at("passport_data"));
    }
    if (ObjectValue.if_contains("proximity_alert_triggered")) {
        Result.ProximityAlertTriggered = FromJson<::TelegramBotAPI::Type::ProximityAlertTriggered>(ObjectValue.at("proximity_alert_triggered"));
    }
    if (ObjectValue.if_contains("boost_added")) {
        Result.BoostAdded = FromJson<::TelegramBotAPI::Type::ChatBoostAdded>(ObjectValue.at("boost_added"));
    }
    if (ObjectValue.if_contains("chat_background_set")) {
        Result.ChatBackgroundSet = FromJson<::TelegramBotAPI::Type::ChatBackground>(ObjectValue.at("chat_background_set"));
    }
    if (ObjectValue.if_contains("checklist_tasks_done")) {
        Result.ChecklistTasksDone = FromJson<std::shared_ptr<::TelegramBotAPI::Type::ChecklistTasksDone>>(ObjectValue.at("checklist_tasks_done"));
    }
    if (ObjectValue.if_contains("checklist_tasks_added")) {
        Result.ChecklistTasksAdded = FromJson<std::shared_ptr<::TelegramBotAPI::Type::ChecklistTasksAdded>>(ObjectValue.at("checklist_tasks_added"));
    }
    if (ObjectValue.if_contains("community_chat_added")) {
        Result.CommunityChatAdded = FromJson<::TelegramBotAPI::Type::CommunityChatAdded>(ObjectValue.at("community_chat_added"));
    }
    if (ObjectValue.if_contains("community_chat_joined")) {
        Result.CommunityChatJoined = FromJson<::TelegramBotAPI::Type::CommunityChatJoined>(ObjectValue.at("community_chat_joined"));
    }
    if (ObjectValue.if_contains("community_chat_removed")) {
        Result.CommunityChatRemoved = FromJson<::TelegramBotAPI::Type::CommunityChatRemoved>(ObjectValue.at("community_chat_removed"));
    }
    if (ObjectValue.if_contains("direct_message_price_changed")) {
        Result.DirectMessagePriceChanged = FromJson<::TelegramBotAPI::Type::DirectMessagePriceChanged>(ObjectValue.at("direct_message_price_changed"));
    }
    if (ObjectValue.if_contains("forum_topic_created")) {
        Result.ForumTopicCreated = FromJson<::TelegramBotAPI::Type::ForumTopicCreated>(ObjectValue.at("forum_topic_created"));
    }
    if (ObjectValue.if_contains("forum_topic_edited")) {
        Result.ForumTopicEdited = FromJson<::TelegramBotAPI::Type::ForumTopicEdited>(ObjectValue.at("forum_topic_edited"));
    }
    if (ObjectValue.if_contains("forum_topic_closed")) {
        Result.ForumTopicClosed = FromJson<::TelegramBotAPI::Type::ForumTopicClosed>(ObjectValue.at("forum_topic_closed"));
    }
    if (ObjectValue.if_contains("forum_topic_reopened")) {
        Result.ForumTopicReopened = FromJson<::TelegramBotAPI::Type::ForumTopicReopened>(ObjectValue.at("forum_topic_reopened"));
    }
    if (ObjectValue.if_contains("general_forum_topic_hidden")) {
        Result.GeneralForumTopicHidden = FromJson<::TelegramBotAPI::Type::GeneralForumTopicHidden>(ObjectValue.at("general_forum_topic_hidden"));
    }
    if (ObjectValue.if_contains("general_forum_topic_unhidden")) {
        Result.GeneralForumTopicUnhidden = FromJson<::TelegramBotAPI::Type::GeneralForumTopicUnhidden>(ObjectValue.at("general_forum_topic_unhidden"));
    }
    if (ObjectValue.if_contains("giveaway_created")) {
        Result.GiveawayCreated = FromJson<::TelegramBotAPI::Type::GiveawayCreated>(ObjectValue.at("giveaway_created"));
    }
    if (ObjectValue.if_contains("giveaway")) {
        Result.Giveaway = FromJson<::TelegramBotAPI::Type::Giveaway>(ObjectValue.at("giveaway"));
    }
    if (ObjectValue.if_contains("giveaway_winners")) {
        Result.GiveawayWinners = FromJson<::TelegramBotAPI::Type::GiveawayWinners>(ObjectValue.at("giveaway_winners"));
    }
    if (ObjectValue.if_contains("giveaway_completed")) {
        Result.GiveawayCompleted = FromJson<std::shared_ptr<::TelegramBotAPI::Type::GiveawayCompleted>>(ObjectValue.at("giveaway_completed"));
    }
    if (ObjectValue.if_contains("managed_bot_created")) {
        Result.ManagedBotCreated = FromJson<::TelegramBotAPI::Type::ManagedBotCreated>(ObjectValue.at("managed_bot_created"));
    }
    if (ObjectValue.if_contains("paid_message_price_changed")) {
        Result.PaidMessagePriceChanged = FromJson<::TelegramBotAPI::Type::PaidMessagePriceChanged>(ObjectValue.at("paid_message_price_changed"));
    }
    if (ObjectValue.if_contains("poll_option_added")) {
        Result.PollOptionAdded = FromJson<std::shared_ptr<::TelegramBotAPI::Type::PollOptionAdded>>(ObjectValue.at("poll_option_added"));
    }
    if (ObjectValue.if_contains("poll_option_deleted")) {
        Result.PollOptionDeleted = FromJson<std::shared_ptr<::TelegramBotAPI::Type::PollOptionDeleted>>(ObjectValue.at("poll_option_deleted"));
    }
    if (ObjectValue.if_contains("suggested_post_approved")) {
        Result.SuggestedPostApproved = FromJson<std::shared_ptr<::TelegramBotAPI::Type::SuggestedPostApproved>>(ObjectValue.at("suggested_post_approved"));
    }
    if (ObjectValue.if_contains("suggested_post_approval_failed")) {
        Result.SuggestedPostApprovalFailed = FromJson<std::shared_ptr<::TelegramBotAPI::Type::SuggestedPostApprovalFailed>>(ObjectValue.at("suggested_post_approval_failed"));
    }
    if (ObjectValue.if_contains("suggested_post_declined")) {
        Result.SuggestedPostDeclined = FromJson<std::shared_ptr<::TelegramBotAPI::Type::SuggestedPostDeclined>>(ObjectValue.at("suggested_post_declined"));
    }
    if (ObjectValue.if_contains("suggested_post_paid")) {
        Result.SuggestedPostPaid = FromJson<std::shared_ptr<::TelegramBotAPI::Type::SuggestedPostPaid>>(ObjectValue.at("suggested_post_paid"));
    }
    if (ObjectValue.if_contains("suggested_post_refunded")) {
        Result.SuggestedPostRefunded = FromJson<std::shared_ptr<::TelegramBotAPI::Type::SuggestedPostRefunded>>(ObjectValue.at("suggested_post_refunded"));
    }
    if (ObjectValue.if_contains("video_chat_scheduled")) {
        Result.VideoChatScheduled = FromJson<::TelegramBotAPI::Type::VideoChatScheduled>(ObjectValue.at("video_chat_scheduled"));
    }
    if (ObjectValue.if_contains("video_chat_started")) {
        Result.VideoChatStarted = FromJson<::TelegramBotAPI::Type::VideoChatStarted>(ObjectValue.at("video_chat_started"));
    }
    if (ObjectValue.if_contains("video_chat_ended")) {
        Result.VideoChatEnded = FromJson<::TelegramBotAPI::Type::VideoChatEnded>(ObjectValue.at("video_chat_ended"));
    }
    if (ObjectValue.if_contains("video_chat_participants_invited")) {
        Result.VideoChatParticipantsInvited = FromJson<::TelegramBotAPI::Type::VideoChatParticipantsInvited>(ObjectValue.at("video_chat_participants_invited"));
    }
    if (ObjectValue.if_contains("web_app_data")) {
        Result.WebAppData = FromJson<::TelegramBotAPI::Type::WebAppData>(ObjectValue.at("web_app_data"));
    }
    if (ObjectValue.if_contains("reply_markup")) {
        Result.ReplyMarkup = FromJson<::TelegramBotAPI::Type::InlineKeyboardMarkup>(ObjectValue.at("reply_markup"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged Deserializer<::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MessageAutoDeleteTimerChanged Result{};

    Result.MessageAutoDeleteTime = boost::json::value_to<long long>(ObjectValue.at("message_auto_delete_time"));

    return Result;
}

inline ::TelegramBotAPI::Type::MessageEntity Deserializer<::TelegramBotAPI::Type::MessageEntity>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MessageEntity Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Offset = boost::json::value_to<long long>(ObjectValue.at("offset"));
    Result.Length = boost::json::value_to<long long>(ObjectValue.at("length"));
    if (ObjectValue.if_contains("url")) {
        Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));
    }
    if (ObjectValue.if_contains("user")) {
        Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    }
    if (ObjectValue.if_contains("language")) {
        Result.Language = boost::json::value_to<std::string>(ObjectValue.at("language"));
    }
    if (ObjectValue.if_contains("custom_emoji_id")) {
        Result.CustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("custom_emoji_id"));
    }
    if (ObjectValue.if_contains("unix_time")) {
        Result.UnixTime = boost::json::value_to<long long>(ObjectValue.at("unix_time"));
    }
    if (ObjectValue.if_contains("date_time_format")) {
        Result.DateTimeFormat = boost::json::value_to<std::string>(ObjectValue.at("date_time_format"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::MessageGenerationStopped Deserializer<::TelegramBotAPI::Type::MessageGenerationStopped>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MessageGenerationStopped Result{};

    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    if (ObjectValue.if_contains("message_thread_id")) {
        Result.MessageThreadID = boost::json::value_to<long long>(ObjectValue.at("message_thread_id"));
    }
    Result.DraftID = boost::json::value_to<long long>(ObjectValue.at("draft_id"));

    return Result;
}

inline ::TelegramBotAPI::Type::MessageId Deserializer<::TelegramBotAPI::Type::MessageId>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MessageId Result{};

    Result.MessageID = boost::json::value_to<long long>(ObjectValue.at("message_id"));

    return Result;
}

inline ::TelegramBotAPI::Type::MessageOriginChannel Deserializer<::TelegramBotAPI::Type::MessageOriginChannel>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MessageOriginChannel Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.MessageID = boost::json::value_to<long long>(ObjectValue.at("message_id"));
    if (ObjectValue.if_contains("author_signature")) {
        Result.AuthorSignature = boost::json::value_to<std::string>(ObjectValue.at("author_signature"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::MessageOriginChat Deserializer<::TelegramBotAPI::Type::MessageOriginChat>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MessageOriginChat Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    Result.SenderChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("sender_chat"));
    if (ObjectValue.if_contains("author_signature")) {
        Result.AuthorSignature = boost::json::value_to<std::string>(ObjectValue.at("author_signature"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::MessageOriginHiddenUser Deserializer<::TelegramBotAPI::Type::MessageOriginHiddenUser>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MessageOriginHiddenUser Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    Result.SenderUserName = boost::json::value_to<std::string>(ObjectValue.at("sender_user_name"));

    return Result;
}

inline ::TelegramBotAPI::Type::MessageOriginUser Deserializer<::TelegramBotAPI::Type::MessageOriginUser>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MessageOriginUser Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    Result.SenderUser = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("sender_user"));

    return Result;
}

inline ::TelegramBotAPI::Type::MessageReactionCountUpdated Deserializer<::TelegramBotAPI::Type::MessageReactionCountUpdated>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MessageReactionCountUpdated Result{};

    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.MessageID = boost::json::value_to<long long>(ObjectValue.at("message_id"));
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    Result.Reactions = ([&]() { std::vector<::TelegramBotAPI::Type::ReactionCount> Result; for (const auto &Item : ObjectValue.at("reactions").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::ReactionCount>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::MessageReactionUpdated Deserializer<::TelegramBotAPI::Type::MessageReactionUpdated>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::MessageReactionUpdated Result{};

    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.MessageID = boost::json::value_to<long long>(ObjectValue.at("message_id"));
    if (ObjectValue.if_contains("user")) {
        Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    }
    if (ObjectValue.if_contains("actor_chat")) {
        Result.ActorChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("actor_chat"));
    }
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    Result.OldReaction = ([&]() { std::vector<std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>> Result; for (const auto &Item : ObjectValue.at("old_reaction").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::ReactionType>(Item)); } return Result; })();
    Result.NewReaction = ([&]() { std::vector<std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>> Result; for (const auto &Item : ObjectValue.at("new_reaction").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::ReactionType>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::OrderInfo Deserializer<::TelegramBotAPI::Type::OrderInfo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::OrderInfo Result{};

    if (ObjectValue.if_contains("name")) {
        Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));
    }
    if (ObjectValue.if_contains("phone_number")) {
        Result.PhoneNumber = boost::json::value_to<std::string>(ObjectValue.at("phone_number"));
    }
    if (ObjectValue.if_contains("email")) {
        Result.Email = boost::json::value_to<std::string>(ObjectValue.at("email"));
    }
    if (ObjectValue.if_contains("shipping_address")) {
        Result.ShippingAddress = FromJson<::TelegramBotAPI::Type::ShippingAddress>(ObjectValue.at("shipping_address"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::OwnedGiftRegular Deserializer<::TelegramBotAPI::Type::OwnedGiftRegular>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::OwnedGiftRegular Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Gift = FromJson<::TelegramBotAPI::Type::Gift>(ObjectValue.at("gift"));
    if (ObjectValue.if_contains("owned_gift_id")) {
        Result.OwnedGiftID = boost::json::value_to<std::string>(ObjectValue.at("owned_gift_id"));
    }
    if (ObjectValue.if_contains("sender_user")) {
        Result.SenderUser = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("sender_user"));
    }
    Result.SendDate = boost::json::value_to<long long>(ObjectValue.at("send_date"));
    if (ObjectValue.if_contains("text")) {
        Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    }
    if (ObjectValue.if_contains("entities")) {
        Result.Entities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("is_private")) {
        Result.IsPrivate = boost::json::value_to<bool>(ObjectValue.at("is_private"));
    }
    if (ObjectValue.if_contains("is_saved")) {
        Result.IsSaved = boost::json::value_to<bool>(ObjectValue.at("is_saved"));
    }
    if (ObjectValue.if_contains("can_be_upgraded")) {
        Result.CanBeUpgraded = boost::json::value_to<bool>(ObjectValue.at("can_be_upgraded"));
    }
    if (ObjectValue.if_contains("was_refunded")) {
        Result.WasRefunded = boost::json::value_to<bool>(ObjectValue.at("was_refunded"));
    }
    if (ObjectValue.if_contains("convert_star_count")) {
        Result.ConvertStarCount = boost::json::value_to<long long>(ObjectValue.at("convert_star_count"));
    }
    if (ObjectValue.if_contains("prepaid_upgrade_star_count")) {
        Result.PrepaidUpgradeStarCount = boost::json::value_to<long long>(ObjectValue.at("prepaid_upgrade_star_count"));
    }
    if (ObjectValue.if_contains("is_upgrade_separate")) {
        Result.IsUpgradeSeparate = boost::json::value_to<bool>(ObjectValue.at("is_upgrade_separate"));
    }
    if (ObjectValue.if_contains("unique_gift_number")) {
        Result.UniqueGiftNumber = boost::json::value_to<long long>(ObjectValue.at("unique_gift_number"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::OwnedGiftUnique Deserializer<::TelegramBotAPI::Type::OwnedGiftUnique>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::OwnedGiftUnique Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Gift = FromJson<::TelegramBotAPI::Type::UniqueGift>(ObjectValue.at("gift"));
    if (ObjectValue.if_contains("owned_gift_id")) {
        Result.OwnedGiftID = boost::json::value_to<std::string>(ObjectValue.at("owned_gift_id"));
    }
    if (ObjectValue.if_contains("sender_user")) {
        Result.SenderUser = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("sender_user"));
    }
    Result.SendDate = boost::json::value_to<long long>(ObjectValue.at("send_date"));
    if (ObjectValue.if_contains("is_saved")) {
        Result.IsSaved = boost::json::value_to<bool>(ObjectValue.at("is_saved"));
    }
    if (ObjectValue.if_contains("can_be_transferred")) {
        Result.CanBeTransferred = boost::json::value_to<bool>(ObjectValue.at("can_be_transferred"));
    }
    if (ObjectValue.if_contains("transfer_star_count")) {
        Result.TransferStarCount = boost::json::value_to<long long>(ObjectValue.at("transfer_star_count"));
    }
    if (ObjectValue.if_contains("next_transfer_date")) {
        Result.NextTransferDate = boost::json::value_to<long long>(ObjectValue.at("next_transfer_date"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::OwnedGifts Deserializer<::TelegramBotAPI::Type::OwnedGifts>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::OwnedGifts Result{};

    Result.TotalCount = boost::json::value_to<long long>(ObjectValue.at("total_count"));
    Result.Gifts = ([&]() { std::vector<std::variant<::TelegramBotAPI::Type::OwnedGiftRegular, ::TelegramBotAPI::Type::OwnedGiftUnique>> Result; for (const auto &Item : ObjectValue.at("gifts").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::OwnedGift>(Item)); } return Result; })();
    if (ObjectValue.if_contains("next_offset")) {
        Result.NextOffset = boost::json::value_to<std::string>(ObjectValue.at("next_offset"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::PaidMediaInfo Deserializer<::TelegramBotAPI::Type::PaidMediaInfo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PaidMediaInfo Result{};

    Result.StarCount = boost::json::value_to<long long>(ObjectValue.at("star_count"));
    Result.PaidMedia = ([&]() { std::vector<std::variant<::TelegramBotAPI::Type::PaidMediaLivePhoto, ::TelegramBotAPI::Type::PaidMediaPhoto, ::TelegramBotAPI::Type::PaidMediaPreview, ::TelegramBotAPI::Type::PaidMediaVideo>> Result; for (const auto &Item : ObjectValue.at("paid_media").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PaidMedia>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::PaidMediaLivePhoto Deserializer<::TelegramBotAPI::Type::PaidMediaLivePhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PaidMediaLivePhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.LivePhoto = FromJson<::TelegramBotAPI::Type::LivePhoto>(ObjectValue.at("live_photo"));

    return Result;
}

inline ::TelegramBotAPI::Type::PaidMediaPhoto Deserializer<::TelegramBotAPI::Type::PaidMediaPhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PaidMediaPhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Photo = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("photo").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::PaidMediaPreview Deserializer<::TelegramBotAPI::Type::PaidMediaPreview>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PaidMediaPreview Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    if (ObjectValue.if_contains("width")) {
        Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    }
    if (ObjectValue.if_contains("height")) {
        Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    }
    if (ObjectValue.if_contains("duration")) {
        Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::PaidMediaPurchased Deserializer<::TelegramBotAPI::Type::PaidMediaPurchased>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PaidMediaPurchased Result{};

    Result.From = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("from"));
    Result.PaidMediaPayload = boost::json::value_to<std::string>(ObjectValue.at("paid_media_payload"));

    return Result;
}

inline ::TelegramBotAPI::Type::PaidMediaVideo Deserializer<::TelegramBotAPI::Type::PaidMediaVideo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PaidMediaVideo Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Video = FromJson<::TelegramBotAPI::Type::Video>(ObjectValue.at("video"));

    return Result;
}

inline ::TelegramBotAPI::Type::PaidMessagePriceChanged Deserializer<::TelegramBotAPI::Type::PaidMessagePriceChanged>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PaidMessagePriceChanged Result{};

    Result.PaidMessageStarCount = boost::json::value_to<long long>(ObjectValue.at("paid_message_star_count"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportData Deserializer<::TelegramBotAPI::Type::PassportData>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportData Result{};

    Result.Data = ([&]() { std::vector<::TelegramBotAPI::Type::EncryptedPassportElement> Result; for (const auto &Item : ObjectValue.at("data").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::EncryptedPassportElement>(Item)); } return Result; })();
    Result.Credentials = FromJson<::TelegramBotAPI::Type::EncryptedCredentials>(ObjectValue.at("credentials"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportElementErrorDataField Deserializer<::TelegramBotAPI::Type::PassportElementErrorDataField>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportElementErrorDataField Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.FieldName = boost::json::value_to<std::string>(ObjectValue.at("field_name"));
    Result.DataHash = boost::json::value_to<std::string>(ObjectValue.at("data_hash"));
    Result.Message = boost::json::value_to<std::string>(ObjectValue.at("message"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportElementErrorFile Deserializer<::TelegramBotAPI::Type::PassportElementErrorFile>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportElementErrorFile Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.FileHash = boost::json::value_to<std::string>(ObjectValue.at("file_hash"));
    Result.Message = boost::json::value_to<std::string>(ObjectValue.at("message"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportElementErrorFiles Deserializer<::TelegramBotAPI::Type::PassportElementErrorFiles>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportElementErrorFiles Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.FileHashes = boost::json::value_to<std::vector<std::string>>(ObjectValue.at("file_hashes"));
    Result.Message = boost::json::value_to<std::string>(ObjectValue.at("message"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportElementErrorFrontSide Deserializer<::TelegramBotAPI::Type::PassportElementErrorFrontSide>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportElementErrorFrontSide Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.FileHash = boost::json::value_to<std::string>(ObjectValue.at("file_hash"));
    Result.Message = boost::json::value_to<std::string>(ObjectValue.at("message"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportElementErrorReverseSide Deserializer<::TelegramBotAPI::Type::PassportElementErrorReverseSide>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportElementErrorReverseSide Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.FileHash = boost::json::value_to<std::string>(ObjectValue.at("file_hash"));
    Result.Message = boost::json::value_to<std::string>(ObjectValue.at("message"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportElementErrorSelfie Deserializer<::TelegramBotAPI::Type::PassportElementErrorSelfie>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportElementErrorSelfie Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.FileHash = boost::json::value_to<std::string>(ObjectValue.at("file_hash"));
    Result.Message = boost::json::value_to<std::string>(ObjectValue.at("message"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportElementErrorTranslationFile Deserializer<::TelegramBotAPI::Type::PassportElementErrorTranslationFile>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportElementErrorTranslationFile Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.FileHash = boost::json::value_to<std::string>(ObjectValue.at("file_hash"));
    Result.Message = boost::json::value_to<std::string>(ObjectValue.at("message"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles Deserializer<::TelegramBotAPI::Type::PassportElementErrorTranslationFiles>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportElementErrorTranslationFiles Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.FileHashes = boost::json::value_to<std::vector<std::string>>(ObjectValue.at("file_hashes"));
    Result.Message = boost::json::value_to<std::string>(ObjectValue.at("message"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportElementErrorUnspecified Deserializer<::TelegramBotAPI::Type::PassportElementErrorUnspecified>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportElementErrorUnspecified Result{};

    Result.Source = boost::json::value_to<std::string>(ObjectValue.at("source"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ElementHash = boost::json::value_to<std::string>(ObjectValue.at("element_hash"));
    Result.Message = boost::json::value_to<std::string>(ObjectValue.at("message"));

    return Result;
}

inline ::TelegramBotAPI::Type::PassportFile Deserializer<::TelegramBotAPI::Type::PassportFile>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PassportFile Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    Result.FileDate = boost::json::value_to<long long>(ObjectValue.at("file_date"));

    return Result;
}

inline ::TelegramBotAPI::Type::PhotoSize Deserializer<::TelegramBotAPI::Type::PhotoSize>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PhotoSize Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Poll Deserializer<::TelegramBotAPI::Type::Poll>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Poll Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Question = boost::json::value_to<std::string>(ObjectValue.at("question"));
    if (ObjectValue.if_contains("question_entities")) {
        Result.QuestionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("question_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    Result.Options = ([&]() { std::vector<::TelegramBotAPI::Type::PollOption> Result; for (const auto &Item : ObjectValue.at("options").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PollOption>(Item)); } return Result; })();
    Result.TotalVoterCount = boost::json::value_to<long long>(ObjectValue.at("total_voter_count"));
    Result.IsClosed = boost::json::value_to<bool>(ObjectValue.at("is_closed"));
    Result.IsAnonymous = boost::json::value_to<bool>(ObjectValue.at("is_anonymous"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.AllowsMultipleAnswers = boost::json::value_to<bool>(ObjectValue.at("allows_multiple_answers"));
    Result.AllowsRevoting = boost::json::value_to<bool>(ObjectValue.at("allows_revoting"));
    Result.MembersOnly = boost::json::value_to<bool>(ObjectValue.at("members_only"));
    if (ObjectValue.if_contains("country_codes")) {
        Result.CountryCodes = boost::json::value_to<std::vector<std::string>>(ObjectValue.at("country_codes"));
    }
    if (ObjectValue.if_contains("correct_option_ids")) {
        Result.CorrectOptionIDs = boost::json::value_to<std::vector<long long>>(ObjectValue.at("correct_option_ids"));
    }
    if (ObjectValue.if_contains("explanation")) {
        Result.Explanation = boost::json::value_to<std::string>(ObjectValue.at("explanation"));
    }
    if (ObjectValue.if_contains("explanation_entities")) {
        Result.ExplanationEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("explanation_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("explanation_media")) {
        Result.ExplanationMedia = FromJson<::TelegramBotAPI::Type::PollMedia>(ObjectValue.at("explanation_media"));
    }
    if (ObjectValue.if_contains("open_period")) {
        Result.OpenPeriod = boost::json::value_to<long long>(ObjectValue.at("open_period"));
    }
    if (ObjectValue.if_contains("close_date")) {
        Result.CloseDate = boost::json::value_to<long long>(ObjectValue.at("close_date"));
    }
    if (ObjectValue.if_contains("description")) {
        Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    }
    if (ObjectValue.if_contains("description_entities")) {
        Result.DescriptionEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("description_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("media")) {
        Result.Media = FromJson<::TelegramBotAPI::Type::PollMedia>(ObjectValue.at("media"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::PollAnswer Deserializer<::TelegramBotAPI::Type::PollAnswer>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PollAnswer Result{};

    Result.PollID = boost::json::value_to<std::string>(ObjectValue.at("poll_id"));
    if (ObjectValue.if_contains("voter_chat")) {
        Result.VoterChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("voter_chat"));
    }
    if (ObjectValue.if_contains("user")) {
        Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    }
    Result.OptionIDs = boost::json::value_to<std::vector<long long>>(ObjectValue.at("option_ids"));
    Result.OptionPersistentIDs = boost::json::value_to<std::vector<std::string>>(ObjectValue.at("option_persistent_ids"));

    return Result;
}

inline ::TelegramBotAPI::Type::PollMedia Deserializer<::TelegramBotAPI::Type::PollMedia>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PollMedia Result{};

    if (ObjectValue.if_contains("animation")) {
        Result.Animation = FromJson<::TelegramBotAPI::Type::Animation>(ObjectValue.at("animation"));
    }
    if (ObjectValue.if_contains("audio")) {
        Result.Audio = FromJson<::TelegramBotAPI::Type::Audio>(ObjectValue.at("audio"));
    }
    if (ObjectValue.if_contains("document")) {
        Result.Document = FromJson<::TelegramBotAPI::Type::Document>(ObjectValue.at("document"));
    }
    if (ObjectValue.if_contains("link")) {
        Result.Link = FromJson<::TelegramBotAPI::Type::Link>(ObjectValue.at("link"));
    }
    if (ObjectValue.if_contains("live_photo")) {
        Result.LivePhoto = FromJson<::TelegramBotAPI::Type::LivePhoto>(ObjectValue.at("live_photo"));
    }
    if (ObjectValue.if_contains("location")) {
        Result.Location = FromJson<::TelegramBotAPI::Type::Location>(ObjectValue.at("location"));
    }
    if (ObjectValue.if_contains("photo")) {
        Result.Photo = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("photo").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("sticker")) {
        Result.Sticker = FromJson<::TelegramBotAPI::Type::Sticker>(ObjectValue.at("sticker"));
    }
    if (ObjectValue.if_contains("venue")) {
        Result.Venue = FromJson<::TelegramBotAPI::Type::Venue>(ObjectValue.at("venue"));
    }
    if (ObjectValue.if_contains("video")) {
        Result.Video = FromJson<::TelegramBotAPI::Type::Video>(ObjectValue.at("video"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::PollOption Deserializer<::TelegramBotAPI::Type::PollOption>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PollOption Result{};

    Result.PersistentID = boost::json::value_to<std::string>(ObjectValue.at("persistent_id"));
    Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("text_entities")) {
        Result.TextEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("text_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("media")) {
        Result.Media = FromJson<::TelegramBotAPI::Type::PollMedia>(ObjectValue.at("media"));
    }
    Result.VoterCount = boost::json::value_to<long long>(ObjectValue.at("voter_count"));
    if (ObjectValue.if_contains("added_by_user")) {
        Result.AddedByUser = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("added_by_user"));
    }
    if (ObjectValue.if_contains("added_by_chat")) {
        Result.AddedByChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("added_by_chat"));
    }
    if (ObjectValue.if_contains("addition_date")) {
        Result.AdditionDate = boost::json::value_to<long long>(ObjectValue.at("addition_date"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::PollOptionAdded Deserializer<::TelegramBotAPI::Type::PollOptionAdded>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PollOptionAdded Result{};

    if (ObjectValue.if_contains("poll_message")) {
        Result.PollMessage = FromJson<::TelegramBotAPI::Type::MaybeInaccessibleMessage>(ObjectValue.at("poll_message"));
    }
    Result.OptionPersistentID = boost::json::value_to<std::string>(ObjectValue.at("option_persistent_id"));
    Result.OptionText = boost::json::value_to<std::string>(ObjectValue.at("option_text"));
    if (ObjectValue.if_contains("option_text_entities")) {
        Result.OptionTextEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("option_text_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }

    return Result;
}

inline ::TelegramBotAPI::Type::PollOptionDeleted Deserializer<::TelegramBotAPI::Type::PollOptionDeleted>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PollOptionDeleted Result{};

    if (ObjectValue.if_contains("poll_message")) {
        Result.PollMessage = FromJson<::TelegramBotAPI::Type::MaybeInaccessibleMessage>(ObjectValue.at("poll_message"));
    }
    Result.OptionPersistentID = boost::json::value_to<std::string>(ObjectValue.at("option_persistent_id"));
    Result.OptionText = boost::json::value_to<std::string>(ObjectValue.at("option_text"));
    if (ObjectValue.if_contains("option_text_entities")) {
        Result.OptionTextEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("option_text_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }

    return Result;
}

inline ::TelegramBotAPI::Type::PreCheckoutQuery Deserializer<::TelegramBotAPI::Type::PreCheckoutQuery>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PreCheckoutQuery Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.From = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("from"));
    Result.Currency = boost::json::value_to<std::string>(ObjectValue.at("currency"));
    Result.TotalAmount = boost::json::value_to<long long>(ObjectValue.at("total_amount"));
    Result.InvoicePayload = boost::json::value_to<std::string>(ObjectValue.at("invoice_payload"));
    if (ObjectValue.if_contains("shipping_option_id")) {
        Result.ShippingOptionID = boost::json::value_to<std::string>(ObjectValue.at("shipping_option_id"));
    }
    if (ObjectValue.if_contains("order_info")) {
        Result.OrderInfo = FromJson<::TelegramBotAPI::Type::OrderInfo>(ObjectValue.at("order_info"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::PreparedInlineMessage Deserializer<::TelegramBotAPI::Type::PreparedInlineMessage>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PreparedInlineMessage Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.ExpirationDate = boost::json::value_to<long long>(ObjectValue.at("expiration_date"));

    return Result;
}

inline ::TelegramBotAPI::Type::PreparedKeyboardButton Deserializer<::TelegramBotAPI::Type::PreparedKeyboardButton>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::PreparedKeyboardButton Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));

    return Result;
}

inline ::TelegramBotAPI::Type::ProximityAlertTriggered Deserializer<::TelegramBotAPI::Type::ProximityAlertTriggered>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ProximityAlertTriggered Result{};

    Result.Traveler = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("traveler"));
    Result.Watcher = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("watcher"));
    Result.Distance = boost::json::value_to<long long>(ObjectValue.at("distance"));

    return Result;
}

inline ::TelegramBotAPI::Type::ReactionCount Deserializer<::TelegramBotAPI::Type::ReactionCount>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ReactionCount Result{};

    Result.Type = FromJson<::TelegramBotAPI::Type::ReactionType>(ObjectValue.at("type"));
    Result.TotalCount = boost::json::value_to<long long>(ObjectValue.at("total_count"));

    return Result;
}

inline ::TelegramBotAPI::Type::ReactionTypeCustomEmoji Deserializer<::TelegramBotAPI::Type::ReactionTypeCustomEmoji>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ReactionTypeCustomEmoji Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.CustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("custom_emoji_id"));

    return Result;
}

inline ::TelegramBotAPI::Type::ReactionTypeEmoji Deserializer<::TelegramBotAPI::Type::ReactionTypeEmoji>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ReactionTypeEmoji Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Emoji = boost::json::value_to<std::string>(ObjectValue.at("emoji"));

    return Result;
}

inline ::TelegramBotAPI::Type::ReactionTypePaid Deserializer<::TelegramBotAPI::Type::ReactionTypePaid>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ReactionTypePaid Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::RefundedPayment Deserializer<::TelegramBotAPI::Type::RefundedPayment>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RefundedPayment Result{};

    Result.Currency = boost::json::value_to<std::string>(ObjectValue.at("currency"));
    Result.TotalAmount = boost::json::value_to<long long>(ObjectValue.at("total_amount"));
    Result.InvoicePayload = boost::json::value_to<std::string>(ObjectValue.at("invoice_payload"));
    Result.TelegramPaymentChargeID = boost::json::value_to<std::string>(ObjectValue.at("telegram_payment_charge_id"));
    if (ObjectValue.if_contains("provider_payment_charge_id")) {
        Result.ProviderPaymentChargeID = boost::json::value_to<std::string>(ObjectValue.at("provider_payment_charge_id"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ReplyKeyboardMarkup Deserializer<::TelegramBotAPI::Type::ReplyKeyboardMarkup>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ReplyKeyboardMarkup Result{};

    Result.Keyboard = ([&]() { std::vector<std::vector<::TelegramBotAPI::Type::KeyboardButton>> Result; for (const auto &Item : ObjectValue.at("keyboard").as_array()) { Result.push_back(([&]() { std::vector<::TelegramBotAPI::Type::KeyboardButton> Result; for (const auto &Item : Item.as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::KeyboardButton>(Item)); } return Result; })()); } return Result; })();
    if (ObjectValue.if_contains("is_persistent")) {
        Result.IsPersistent = boost::json::value_to<bool>(ObjectValue.at("is_persistent"));
    }
    if (ObjectValue.if_contains("resize_keyboard")) {
        Result.ResizeKeyboard = boost::json::value_to<bool>(ObjectValue.at("resize_keyboard"));
    }
    if (ObjectValue.if_contains("one_time_keyboard")) {
        Result.OneTimeKeyboard = boost::json::value_to<bool>(ObjectValue.at("one_time_keyboard"));
    }
    if (ObjectValue.if_contains("input_field_placeholder")) {
        Result.InputFieldPlaceholder = boost::json::value_to<std::string>(ObjectValue.at("input_field_placeholder"));
    }
    if (ObjectValue.if_contains("selective")) {
        Result.Selective = boost::json::value_to<bool>(ObjectValue.at("selective"));
    }
    if (ObjectValue.if_contains("force_reply")) {
        Result.ForceReply = boost::json::value_to<bool>(ObjectValue.at("force_reply"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ReplyKeyboardRemove Deserializer<::TelegramBotAPI::Type::ReplyKeyboardRemove>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ReplyKeyboardRemove Result{};

    Result.RemoveKeyboard = boost::json::value_to<bool>(ObjectValue.at("remove_keyboard"));
    if (ObjectValue.if_contains("selective")) {
        Result.Selective = boost::json::value_to<bool>(ObjectValue.at("selective"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ReplyParameters Deserializer<::TelegramBotAPI::Type::ReplyParameters>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ReplyParameters Result{};

    if (ObjectValue.if_contains("message_id")) {
        Result.MessageID = boost::json::value_to<long long>(ObjectValue.at("message_id"));
    }
    if (ObjectValue.if_contains("chat_id")) {
        Result.ChatID = boost::json::value_to<long long>(ObjectValue.at("chat_id"));
    }
    if (ObjectValue.if_contains("ephemeral_message_id")) {
        Result.EphemeralMessageID = boost::json::value_to<long long>(ObjectValue.at("ephemeral_message_id"));
    }
    if (ObjectValue.if_contains("allow_sending_without_reply")) {
        Result.AllowSendingWithoutReply = boost::json::value_to<bool>(ObjectValue.at("allow_sending_without_reply"));
    }
    if (ObjectValue.if_contains("quote")) {
        Result.Quote = boost::json::value_to<std::string>(ObjectValue.at("quote"));
    }
    if (ObjectValue.if_contains("quote_parse_mode")) {
        Result.QuoteParseMode = boost::json::value_to<std::string>(ObjectValue.at("quote_parse_mode"));
    }
    if (ObjectValue.if_contains("quote_entities")) {
        Result.QuoteEntities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("quote_entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("quote_position")) {
        Result.QuotePosition = boost::json::value_to<long long>(ObjectValue.at("quote_position"));
    }
    if (ObjectValue.if_contains("checklist_task_id")) {
        Result.ChecklistTaskID = boost::json::value_to<long long>(ObjectValue.at("checklist_task_id"));
    }
    if (ObjectValue.if_contains("poll_option_id")) {
        Result.PollOptionID = boost::json::value_to<std::string>(ObjectValue.at("poll_option_id"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ResponseParameters Deserializer<::TelegramBotAPI::Type::ResponseParameters>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ResponseParameters Result{};

    if (ObjectValue.if_contains("migrate_to_chat_id")) {
        Result.MigrateToChatID = boost::json::value_to<long long>(ObjectValue.at("migrate_to_chat_id"));
    }
    if (ObjectValue.if_contains("retry_after")) {
        Result.RetryAfter = boost::json::value_to<long long>(ObjectValue.at("retry_after"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RevenueWithdrawalStateFailed Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStateFailed>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RevenueWithdrawalStateFailed Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::RevenueWithdrawalStatePending Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStatePending>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RevenueWithdrawalStatePending Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlock Deserializer<::TelegramBotAPI::Type::RichBlock>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlock Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockAnchor Deserializer<::TelegramBotAPI::Type::RichBlockAnchor>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockAnchor Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockAnimation Deserializer<::TelegramBotAPI::Type::RichBlockAnimation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockAnimation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Animation = FromJson<::TelegramBotAPI::Type::Animation>(ObjectValue.at("animation"));
    if (ObjectValue.if_contains("has_spoiler")) {
        Result.HasSpoiler = boost::json::value_to<bool>(ObjectValue.at("has_spoiler"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockAudio Deserializer<::TelegramBotAPI::Type::RichBlockAudio>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockAudio Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Audio = FromJson<::TelegramBotAPI::Type::Audio>(ObjectValue.at("audio"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockBlockQuotation Deserializer<::TelegramBotAPI::Type::RichBlockBlockQuotation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockBlockQuotation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::RichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("credit")) {
        Result.Credit = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("credit"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockButtons Deserializer<::TelegramBotAPI::Type::RichBlockButtons>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockButtons Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Buttons = ([&]() { std::vector<::TelegramBotAPI::Type::RichMessageButton> Result; for (const auto &Item : ObjectValue.at("buttons").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichMessageButton>(Item)); } return Result; })();
    if (ObjectValue.if_contains("align")) {
        Result.Align = boost::json::value_to<std::string>(ObjectValue.at("align"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockCaption Deserializer<::TelegramBotAPI::Type::RichBlockCaption>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockCaption Result{};

    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("credit")) {
        Result.Credit = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("credit"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockCollage Deserializer<::TelegramBotAPI::Type::RichBlockCollage>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockCollage Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::RichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockDetails Deserializer<::TelegramBotAPI::Type::RichBlockDetails>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockDetails Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Summary = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("summary"));
    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::RichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("is_open")) {
        Result.IsOpen = boost::json::value_to<bool>(ObjectValue.at("is_open"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockDivider Deserializer<::TelegramBotAPI::Type::RichBlockDivider>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockDivider Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockDocument Deserializer<::TelegramBotAPI::Type::RichBlockDocument>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockDocument Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Document = FromJson<::TelegramBotAPI::Type::Document>(ObjectValue.at("document"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockExpandableBlockQuotation Deserializer<::TelegramBotAPI::Type::RichBlockExpandableBlockQuotation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockExpandableBlockQuotation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("credit")) {
        Result.Credit = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("credit"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockFooter Deserializer<::TelegramBotAPI::Type::RichBlockFooter>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockFooter Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockList Deserializer<::TelegramBotAPI::Type::RichBlockList>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockList Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Items = ([&]() { std::vector<::TelegramBotAPI::Type::RichBlockListItem> Result; for (const auto &Item : ObjectValue.at("items").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichBlockListItem>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockListItem Deserializer<::TelegramBotAPI::Type::RichBlockListItem>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockListItem Result{};

    Result.Label = boost::json::value_to<std::string>(ObjectValue.at("label"));
    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::RichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("has_checkbox")) {
        Result.HasCheckbox = boost::json::value_to<bool>(ObjectValue.at("has_checkbox"));
    }
    if (ObjectValue.if_contains("is_checked")) {
        Result.IsChecked = boost::json::value_to<bool>(ObjectValue.at("is_checked"));
    }
    if (ObjectValue.if_contains("value")) {
        Result.Value = boost::json::value_to<long long>(ObjectValue.at("value"));
    }
    if (ObjectValue.if_contains("type")) {
        Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockMap Deserializer<::TelegramBotAPI::Type::RichBlockMap>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockMap Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Location = FromJson<::TelegramBotAPI::Type::Location>(ObjectValue.at("location"));
    Result.Zoom = boost::json::value_to<long long>(ObjectValue.at("zoom"));
    Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockMathematicalExpression Deserializer<::TelegramBotAPI::Type::RichBlockMathematicalExpression>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockMathematicalExpression Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Expression = boost::json::value_to<std::string>(ObjectValue.at("expression"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockParagraph Deserializer<::TelegramBotAPI::Type::RichBlockParagraph>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockParagraph Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockPhoto Deserializer<::TelegramBotAPI::Type::RichBlockPhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockPhoto Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Photo = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("photo").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();
    if (ObjectValue.if_contains("has_spoiler")) {
        Result.HasSpoiler = boost::json::value_to<bool>(ObjectValue.at("has_spoiler"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockPreformatted Deserializer<::TelegramBotAPI::Type::RichBlockPreformatted>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockPreformatted Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("language")) {
        Result.Language = boost::json::value_to<std::string>(ObjectValue.at("language"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockPullQuotation Deserializer<::TelegramBotAPI::Type::RichBlockPullQuotation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockPullQuotation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("credit")) {
        Result.Credit = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("credit"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockSectionHeading Deserializer<::TelegramBotAPI::Type::RichBlockSectionHeading>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockSectionHeading Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.Size = boost::json::value_to<long long>(ObjectValue.at("size"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockSlideshow Deserializer<::TelegramBotAPI::Type::RichBlockSlideshow>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockSlideshow Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::RichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockTable Deserializer<::TelegramBotAPI::Type::RichBlockTable>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockTable Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Cells = ([&]() { std::vector<std::vector<::TelegramBotAPI::Type::RichBlockTableCell>> Result; for (const auto &Item : ObjectValue.at("cells").as_array()) { Result.push_back(([&]() { std::vector<::TelegramBotAPI::Type::RichBlockTableCell> Result; for (const auto &Item : Item.as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichBlockTableCell>(Item)); } return Result; })()); } return Result; })();
    if (ObjectValue.if_contains("is_bordered")) {
        Result.IsBordered = boost::json::value_to<bool>(ObjectValue.at("is_bordered"));
    }
    if (ObjectValue.if_contains("is_striped")) {
        Result.IsStriped = boost::json::value_to<bool>(ObjectValue.at("is_striped"));
    }
    if (ObjectValue.if_contains("is_compact")) {
        Result.IsCompact = boost::json::value_to<bool>(ObjectValue.at("is_compact"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockTableCell Deserializer<::TelegramBotAPI::Type::RichBlockTableCell>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockTableCell Result{};

    if (ObjectValue.if_contains("text")) {
        Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    }
    if (ObjectValue.if_contains("is_header")) {
        Result.IsHeader = boost::json::value_to<bool>(ObjectValue.at("is_header"));
    }
    if (ObjectValue.if_contains("colspan")) {
        Result.Colspan = boost::json::value_to<long long>(ObjectValue.at("colspan"));
    }
    if (ObjectValue.if_contains("rowspan")) {
        Result.Rowspan = boost::json::value_to<long long>(ObjectValue.at("rowspan"));
    }
    Result.Align = boost::json::value_to<std::string>(ObjectValue.at("align"));
    Result.Valign = boost::json::value_to<std::string>(ObjectValue.at("valign"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockThinking Deserializer<::TelegramBotAPI::Type::RichBlockThinking>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockThinking Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockVideo Deserializer<::TelegramBotAPI::Type::RichBlockVideo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockVideo Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Video = FromJson<::TelegramBotAPI::Type::Video>(ObjectValue.at("video"));
    if (ObjectValue.if_contains("has_spoiler")) {
        Result.HasSpoiler = boost::json::value_to<bool>(ObjectValue.at("has_spoiler"));
    }
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichBlockVoiceNote Deserializer<::TelegramBotAPI::Type::RichBlockVoiceNote>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichBlockVoiceNote Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.VoiceNote = FromJson<::TelegramBotAPI::Type::Voice>(ObjectValue.at("voice_note"));
    if (ObjectValue.if_contains("caption")) {
        Result.Caption = FromJson<::TelegramBotAPI::Type::RichBlockCaption>(ObjectValue.at("caption"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichMessage Deserializer<::TelegramBotAPI::Type::RichMessage>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichMessage Result{};

    Result.Blocks = ([&]() { std::vector<::TelegramBotAPI::Type::RichBlock> Result; for (const auto &Item : ObjectValue.at("blocks").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::RichBlock>(Item)); } return Result; })();
    if (ObjectValue.if_contains("is_rtl")) {
        Result.IsRtl = boost::json::value_to<bool>(ObjectValue.at("is_rtl"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichMessageButton Deserializer<::TelegramBotAPI::Type::RichMessageButton>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichMessageButton Result{};

    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("style")) {
        Result.Style = boost::json::value_to<std::string>(ObjectValue.at("style"));
    }
    if (ObjectValue.if_contains("url")) {
        Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));
    }
    if (ObjectValue.if_contains("callback_data")) {
        Result.CallbackData = boost::json::value_to<std::string>(ObjectValue.at("callback_data"));
    }
    if (ObjectValue.if_contains("web_app")) {
        Result.WebApp = FromJson<::TelegramBotAPI::Type::WebAppInfo>(ObjectValue.at("web_app"));
    }
    if (ObjectValue.if_contains("login_url")) {
        Result.LoginURL = FromJson<::TelegramBotAPI::Type::LoginUrl>(ObjectValue.at("login_url"));
    }
    if (ObjectValue.if_contains("switch_inline_query")) {
        Result.SwitchInlineQuery = boost::json::value_to<std::string>(ObjectValue.at("switch_inline_query"));
    }
    if (ObjectValue.if_contains("switch_inline_query_current_chat")) {
        Result.SwitchInlineQueryCurrentChat = boost::json::value_to<std::string>(ObjectValue.at("switch_inline_query_current_chat"));
    }
    if (ObjectValue.if_contains("switch_inline_query_chosen_chat")) {
        Result.SwitchInlineQueryChosenChat = FromJson<::TelegramBotAPI::Type::SwitchInlineQueryChosenChat>(ObjectValue.at("switch_inline_query_chosen_chat"));
    }
    if (ObjectValue.if_contains("copy_text")) {
        Result.CopyText = FromJson<::TelegramBotAPI::Type::CopyTextButton>(ObjectValue.at("copy_text"));
    }
    if (ObjectValue.if_contains("disabled")) {
        Result.Disabled = FromJson<::TelegramBotAPI::Type::DisabledButton>(ObjectValue.at("disabled"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::RichText Deserializer<::TelegramBotAPI::Type::RichText>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichText Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::RichTextAnchor Deserializer<::TelegramBotAPI::Type::RichTextAnchor>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextAnchor Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextAnchorLink Deserializer<::TelegramBotAPI::Type::RichTextAnchorLink>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextAnchorLink Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.AnchorName = boost::json::value_to<std::string>(ObjectValue.at("anchor_name"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextBankCardNumber Deserializer<::TelegramBotAPI::Type::RichTextBankCardNumber>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextBankCardNumber Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.BankCardNumber = boost::json::value_to<std::string>(ObjectValue.at("bank_card_number"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextBold Deserializer<::TelegramBotAPI::Type::RichTextBold>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextBold Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextBotCommand Deserializer<::TelegramBotAPI::Type::RichTextBotCommand>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextBotCommand Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.BotCommand = boost::json::value_to<std::string>(ObjectValue.at("bot_command"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextButton Deserializer<::TelegramBotAPI::Type::RichTextButton>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextButton Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Button = FromJson<::TelegramBotAPI::Type::RichMessageButton>(ObjectValue.at("button"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextCashtag Deserializer<::TelegramBotAPI::Type::RichTextCashtag>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextCashtag Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.Cashtag = boost::json::value_to<std::string>(ObjectValue.at("cashtag"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextCode Deserializer<::TelegramBotAPI::Type::RichTextCode>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextCode Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextCustomEmoji Deserializer<::TelegramBotAPI::Type::RichTextCustomEmoji>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextCustomEmoji Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.CustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("custom_emoji_id"));
    Result.AlternativeText = boost::json::value_to<std::string>(ObjectValue.at("alternative_text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextDateTime Deserializer<::TelegramBotAPI::Type::RichTextDateTime>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextDateTime Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.UnixTime = boost::json::value_to<long long>(ObjectValue.at("unix_time"));
    Result.DateTimeFormat = boost::json::value_to<std::string>(ObjectValue.at("date_time_format"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextEmailAddress Deserializer<::TelegramBotAPI::Type::RichTextEmailAddress>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextEmailAddress Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.EmailAddress = boost::json::value_to<std::string>(ObjectValue.at("email_address"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextHashtag Deserializer<::TelegramBotAPI::Type::RichTextHashtag>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextHashtag Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.Hashtag = boost::json::value_to<std::string>(ObjectValue.at("hashtag"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextItalic Deserializer<::TelegramBotAPI::Type::RichTextItalic>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextItalic Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextMarked Deserializer<::TelegramBotAPI::Type::RichTextMarked>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextMarked Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextMathematicalExpression Deserializer<::TelegramBotAPI::Type::RichTextMathematicalExpression>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextMathematicalExpression Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Expression = boost::json::value_to<std::string>(ObjectValue.at("expression"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextMention Deserializer<::TelegramBotAPI::Type::RichTextMention>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextMention Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.UserName = boost::json::value_to<std::string>(ObjectValue.at("username"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextPhoneNumber Deserializer<::TelegramBotAPI::Type::RichTextPhoneNumber>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextPhoneNumber Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.PhoneNumber = boost::json::value_to<std::string>(ObjectValue.at("phone_number"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextReference Deserializer<::TelegramBotAPI::Type::RichTextReference>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextReference Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextReferenceLink Deserializer<::TelegramBotAPI::Type::RichTextReferenceLink>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextReferenceLink Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.ReferenceName = boost::json::value_to<std::string>(ObjectValue.at("reference_name"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextSpoiler Deserializer<::TelegramBotAPI::Type::RichTextSpoiler>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextSpoiler Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextStrikethrough Deserializer<::TelegramBotAPI::Type::RichTextStrikethrough>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextStrikethrough Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextSubscript Deserializer<::TelegramBotAPI::Type::RichTextSubscript>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextSubscript Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextSuperscript Deserializer<::TelegramBotAPI::Type::RichTextSuperscript>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextSuperscript Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextTextMention Deserializer<::TelegramBotAPI::Type::RichTextTextMention>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextTextMention Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextUnderline Deserializer<::TelegramBotAPI::Type::RichTextUnderline>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextUnderline Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));

    return Result;
}

inline ::TelegramBotAPI::Type::RichTextUrl Deserializer<::TelegramBotAPI::Type::RichTextUrl>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::RichTextUrl Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Text = FromJson<::TelegramBotAPI::Type::RichText>(ObjectValue.at("text"));
    Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));

    return Result;
}

inline ::TelegramBotAPI::Type::SentGuestMessage Deserializer<::TelegramBotAPI::Type::SentGuestMessage>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SentGuestMessage Result{};

    Result.InlineMessageID = boost::json::value_to<std::string>(ObjectValue.at("inline_message_id"));

    return Result;
}

inline ::TelegramBotAPI::Type::SentWebAppMessage Deserializer<::TelegramBotAPI::Type::SentWebAppMessage>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SentWebAppMessage Result{};

    if (ObjectValue.if_contains("inline_message_id")) {
        Result.InlineMessageID = boost::json::value_to<std::string>(ObjectValue.at("inline_message_id"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::SharedUser Deserializer<::TelegramBotAPI::Type::SharedUser>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SharedUser Result{};

    Result.UserID = boost::json::value_to<long long>(ObjectValue.at("user_id"));
    if (ObjectValue.if_contains("first_name")) {
        Result.FirstName = boost::json::value_to<std::string>(ObjectValue.at("first_name"));
    }
    if (ObjectValue.if_contains("last_name")) {
        Result.LastName = boost::json::value_to<std::string>(ObjectValue.at("last_name"));
    }
    if (ObjectValue.if_contains("username")) {
        Result.UserName = boost::json::value_to<std::string>(ObjectValue.at("username"));
    }
    if (ObjectValue.if_contains("photo")) {
        Result.Photo = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("photo").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();
    }

    return Result;
}

inline ::TelegramBotAPI::Type::ShippingAddress Deserializer<::TelegramBotAPI::Type::ShippingAddress>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ShippingAddress Result{};

    Result.CountryCode = boost::json::value_to<std::string>(ObjectValue.at("country_code"));
    Result.State = boost::json::value_to<std::string>(ObjectValue.at("state"));
    Result.City = boost::json::value_to<std::string>(ObjectValue.at("city"));
    Result.StreetLine1 = boost::json::value_to<std::string>(ObjectValue.at("street_line1"));
    Result.StreetLine2 = boost::json::value_to<std::string>(ObjectValue.at("street_line2"));
    Result.PostCode = boost::json::value_to<std::string>(ObjectValue.at("post_code"));

    return Result;
}

inline ::TelegramBotAPI::Type::ShippingOption Deserializer<::TelegramBotAPI::Type::ShippingOption>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ShippingOption Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.Prices = ([&]() { std::vector<::TelegramBotAPI::Type::LabeledPrice> Result; for (const auto &Item : ObjectValue.at("prices").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::LabeledPrice>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::ShippingQuery Deserializer<::TelegramBotAPI::Type::ShippingQuery>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ShippingQuery Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.From = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("from"));
    Result.InvoicePayload = boost::json::value_to<std::string>(ObjectValue.at("invoice_payload"));
    Result.ShippingAddress = FromJson<::TelegramBotAPI::Type::ShippingAddress>(ObjectValue.at("shipping_address"));

    return Result;
}

inline ::TelegramBotAPI::Type::StarAmount Deserializer<::TelegramBotAPI::Type::StarAmount>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StarAmount Result{};

    Result.Amount = boost::json::value_to<long long>(ObjectValue.at("amount"));
    if (ObjectValue.if_contains("nanostar_amount")) {
        Result.NanostarAmount = boost::json::value_to<long long>(ObjectValue.at("nanostar_amount"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::StarTransaction Deserializer<::TelegramBotAPI::Type::StarTransaction>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StarTransaction Result{};

    Result.ID = boost::json::value_to<std::string>(ObjectValue.at("id"));
    Result.Amount = boost::json::value_to<long long>(ObjectValue.at("amount"));
    if (ObjectValue.if_contains("nanostar_amount")) {
        Result.NanostarAmount = boost::json::value_to<long long>(ObjectValue.at("nanostar_amount"));
    }
    Result.Date = boost::json::value_to<long long>(ObjectValue.at("date"));
    if (ObjectValue.if_contains("source")) {
        Result.Source = FromJson<::TelegramBotAPI::Type::TransactionPartner>(ObjectValue.at("source"));
    }
    if (ObjectValue.if_contains("receiver")) {
        Result.Receiver = FromJson<::TelegramBotAPI::Type::TransactionPartner>(ObjectValue.at("receiver"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::StarTransactions Deserializer<::TelegramBotAPI::Type::StarTransactions>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StarTransactions Result{};

    Result.Transactions = ([&]() { std::vector<::TelegramBotAPI::Type::StarTransaction> Result; for (const auto &Item : ObjectValue.at("transactions").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::StarTransaction>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::Sticker Deserializer<::TelegramBotAPI::Type::Sticker>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Sticker Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    Result.IsAnimated = boost::json::value_to<bool>(ObjectValue.at("is_animated"));
    Result.IsVideo = boost::json::value_to<bool>(ObjectValue.at("is_video"));
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = FromJson<::TelegramBotAPI::Type::PhotoSize>(ObjectValue.at("thumbnail"));
    }
    if (ObjectValue.if_contains("emoji")) {
        Result.Emoji = boost::json::value_to<std::string>(ObjectValue.at("emoji"));
    }
    if (ObjectValue.if_contains("set_name")) {
        Result.SetName = boost::json::value_to<std::string>(ObjectValue.at("set_name"));
    }
    if (ObjectValue.if_contains("premium_animation")) {
        Result.PremiumAnimation = FromJson<::TelegramBotAPI::Type::File>(ObjectValue.at("premium_animation"));
    }
    if (ObjectValue.if_contains("mask_position")) {
        Result.MaskPosition = FromJson<::TelegramBotAPI::Type::MaskPosition>(ObjectValue.at("mask_position"));
    }
    if (ObjectValue.if_contains("custom_emoji_id")) {
        Result.CustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("custom_emoji_id"));
    }
    if (ObjectValue.if_contains("needs_repainting")) {
        Result.NeedsRepainting = boost::json::value_to<bool>(ObjectValue.at("needs_repainting"));
    }
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::StickerSet Deserializer<::TelegramBotAPI::Type::StickerSet>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StickerSet Result{};

    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.StickerType = boost::json::value_to<std::string>(ObjectValue.at("sticker_type"));
    Result.Stickers = ([&]() { std::vector<::TelegramBotAPI::Type::Sticker> Result; for (const auto &Item : ObjectValue.at("stickers").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::Sticker>(Item)); } return Result; })();
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = FromJson<::TelegramBotAPI::Type::PhotoSize>(ObjectValue.at("thumbnail"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Story Deserializer<::TelegramBotAPI::Type::Story>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Story Result{};

    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    Result.ID = boost::json::value_to<long long>(ObjectValue.at("id"));

    return Result;
}

inline ::TelegramBotAPI::Type::StoryArea Deserializer<::TelegramBotAPI::Type::StoryArea>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StoryArea Result{};

    Result.Position = FromJson<::TelegramBotAPI::Type::StoryAreaPosition>(ObjectValue.at("position"));
    Result.Type = FromJson<::TelegramBotAPI::Type::StoryAreaType>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::StoryAreaPosition Deserializer<::TelegramBotAPI::Type::StoryAreaPosition>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StoryAreaPosition Result{};

    Result.XPercentage = boost::json::value_to<double>(ObjectValue.at("x_percentage"));
    Result.YPercentage = boost::json::value_to<double>(ObjectValue.at("y_percentage"));
    Result.WidthPercentage = boost::json::value_to<double>(ObjectValue.at("width_percentage"));
    Result.HeightPercentage = boost::json::value_to<double>(ObjectValue.at("height_percentage"));
    Result.RotationAngle = boost::json::value_to<double>(ObjectValue.at("rotation_angle"));
    Result.CornerRadiusPercentage = boost::json::value_to<double>(ObjectValue.at("corner_radius_percentage"));

    return Result;
}

inline ::TelegramBotAPI::Type::StoryAreaTypeLink Deserializer<::TelegramBotAPI::Type::StoryAreaTypeLink>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StoryAreaTypeLink Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));

    return Result;
}

inline ::TelegramBotAPI::Type::StoryAreaTypeLocation Deserializer<::TelegramBotAPI::Type::StoryAreaTypeLocation>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StoryAreaTypeLocation Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Latitude = boost::json::value_to<double>(ObjectValue.at("latitude"));
    Result.Longitude = boost::json::value_to<double>(ObjectValue.at("longitude"));
    if (ObjectValue.if_contains("address")) {
        Result.Address = FromJson<::TelegramBotAPI::Type::LocationAddress>(ObjectValue.at("address"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction Deserializer<::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.ReactionType = FromJson<::TelegramBotAPI::Type::ReactionType>(ObjectValue.at("reaction_type"));
    if (ObjectValue.if_contains("is_dark")) {
        Result.IsDark = boost::json::value_to<bool>(ObjectValue.at("is_dark"));
    }
    if (ObjectValue.if_contains("is_flipped")) {
        Result.IsFlipped = boost::json::value_to<bool>(ObjectValue.at("is_flipped"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::StoryAreaTypeUniqueGift Deserializer<::TelegramBotAPI::Type::StoryAreaTypeUniqueGift>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StoryAreaTypeUniqueGift Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));

    return Result;
}

inline ::TelegramBotAPI::Type::StoryAreaTypeWeather Deserializer<::TelegramBotAPI::Type::StoryAreaTypeWeather>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::StoryAreaTypeWeather Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Temperature = boost::json::value_to<double>(ObjectValue.at("temperature"));
    Result.Emoji = boost::json::value_to<std::string>(ObjectValue.at("emoji"));
    Result.BackgroundColor = boost::json::value_to<long long>(ObjectValue.at("background_color"));

    return Result;
}

inline ::TelegramBotAPI::Type::SuccessfulPayment Deserializer<::TelegramBotAPI::Type::SuccessfulPayment>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SuccessfulPayment Result{};

    Result.Currency = boost::json::value_to<std::string>(ObjectValue.at("currency"));
    Result.TotalAmount = boost::json::value_to<long long>(ObjectValue.at("total_amount"));
    Result.InvoicePayload = boost::json::value_to<std::string>(ObjectValue.at("invoice_payload"));
    if (ObjectValue.if_contains("subscription_expiration_date")) {
        Result.SubscriptionExpirationDate = boost::json::value_to<long long>(ObjectValue.at("subscription_expiration_date"));
    }
    if (ObjectValue.if_contains("is_recurring")) {
        Result.IsRecurring = boost::json::value_to<bool>(ObjectValue.at("is_recurring"));
    }
    if (ObjectValue.if_contains("is_first_recurring")) {
        Result.IsFirstRecurring = boost::json::value_to<bool>(ObjectValue.at("is_first_recurring"));
    }
    if (ObjectValue.if_contains("shipping_option_id")) {
        Result.ShippingOptionID = boost::json::value_to<std::string>(ObjectValue.at("shipping_option_id"));
    }
    if (ObjectValue.if_contains("order_info")) {
        Result.OrderInfo = FromJson<::TelegramBotAPI::Type::OrderInfo>(ObjectValue.at("order_info"));
    }
    Result.TelegramPaymentChargeID = boost::json::value_to<std::string>(ObjectValue.at("telegram_payment_charge_id"));
    Result.ProviderPaymentChargeID = boost::json::value_to<std::string>(ObjectValue.at("provider_payment_charge_id"));

    return Result;
}

inline ::TelegramBotAPI::Type::SuggestedPostApprovalFailed Deserializer<::TelegramBotAPI::Type::SuggestedPostApprovalFailed>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SuggestedPostApprovalFailed Result{};

    if (ObjectValue.if_contains("suggested_post_message")) {
        Result.SuggestedPostMessage = FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(ObjectValue.at("suggested_post_message"));
    }
    Result.Price = FromJson<::TelegramBotAPI::Type::SuggestedPostPrice>(ObjectValue.at("price"));

    return Result;
}

inline ::TelegramBotAPI::Type::SuggestedPostApproved Deserializer<::TelegramBotAPI::Type::SuggestedPostApproved>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SuggestedPostApproved Result{};

    if (ObjectValue.if_contains("suggested_post_message")) {
        Result.SuggestedPostMessage = FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(ObjectValue.at("suggested_post_message"));
    }
    if (ObjectValue.if_contains("price")) {
        Result.Price = FromJson<::TelegramBotAPI::Type::SuggestedPostPrice>(ObjectValue.at("price"));
    }
    Result.SendDate = boost::json::value_to<long long>(ObjectValue.at("send_date"));

    return Result;
}

inline ::TelegramBotAPI::Type::SuggestedPostDeclined Deserializer<::TelegramBotAPI::Type::SuggestedPostDeclined>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SuggestedPostDeclined Result{};

    if (ObjectValue.if_contains("suggested_post_message")) {
        Result.SuggestedPostMessage = FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(ObjectValue.at("suggested_post_message"));
    }
    if (ObjectValue.if_contains("comment")) {
        Result.Comment = boost::json::value_to<std::string>(ObjectValue.at("comment"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::SuggestedPostInfo Deserializer<::TelegramBotAPI::Type::SuggestedPostInfo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SuggestedPostInfo Result{};

    Result.State = boost::json::value_to<std::string>(ObjectValue.at("state"));
    if (ObjectValue.if_contains("price")) {
        Result.Price = FromJson<::TelegramBotAPI::Type::SuggestedPostPrice>(ObjectValue.at("price"));
    }
    if (ObjectValue.if_contains("send_date")) {
        Result.SendDate = boost::json::value_to<long long>(ObjectValue.at("send_date"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::SuggestedPostPaid Deserializer<::TelegramBotAPI::Type::SuggestedPostPaid>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SuggestedPostPaid Result{};

    if (ObjectValue.if_contains("suggested_post_message")) {
        Result.SuggestedPostMessage = FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(ObjectValue.at("suggested_post_message"));
    }
    Result.Currency = boost::json::value_to<std::string>(ObjectValue.at("currency"));
    if (ObjectValue.if_contains("amount")) {
        Result.Amount = boost::json::value_to<long long>(ObjectValue.at("amount"));
    }
    if (ObjectValue.if_contains("star_amount")) {
        Result.StarAmount = FromJson<::TelegramBotAPI::Type::StarAmount>(ObjectValue.at("star_amount"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::SuggestedPostParameters Deserializer<::TelegramBotAPI::Type::SuggestedPostParameters>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SuggestedPostParameters Result{};

    if (ObjectValue.if_contains("price")) {
        Result.Price = FromJson<::TelegramBotAPI::Type::SuggestedPostPrice>(ObjectValue.at("price"));
    }
    if (ObjectValue.if_contains("send_date")) {
        Result.SendDate = boost::json::value_to<long long>(ObjectValue.at("send_date"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::SuggestedPostPrice Deserializer<::TelegramBotAPI::Type::SuggestedPostPrice>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SuggestedPostPrice Result{};

    Result.Currency = boost::json::value_to<std::string>(ObjectValue.at("currency"));
    Result.Amount = boost::json::value_to<long long>(ObjectValue.at("amount"));

    return Result;
}

inline ::TelegramBotAPI::Type::SuggestedPostRefunded Deserializer<::TelegramBotAPI::Type::SuggestedPostRefunded>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SuggestedPostRefunded Result{};

    if (ObjectValue.if_contains("suggested_post_message")) {
        Result.SuggestedPostMessage = FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(ObjectValue.at("suggested_post_message"));
    }
    Result.Reason = boost::json::value_to<std::string>(ObjectValue.at("reason"));

    return Result;
}

inline ::TelegramBotAPI::Type::SwitchInlineQueryChosenChat Deserializer<::TelegramBotAPI::Type::SwitchInlineQueryChosenChat>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::SwitchInlineQueryChosenChat Result{};

    if (ObjectValue.if_contains("query")) {
        Result.Query = boost::json::value_to<std::string>(ObjectValue.at("query"));
    }
    if (ObjectValue.if_contains("allow_user_chats")) {
        Result.AllowUserChats = boost::json::value_to<bool>(ObjectValue.at("allow_user_chats"));
    }
    if (ObjectValue.if_contains("allow_bot_chats")) {
        Result.AllowBotChats = boost::json::value_to<bool>(ObjectValue.at("allow_bot_chats"));
    }
    if (ObjectValue.if_contains("allow_group_chats")) {
        Result.AllowGroupChats = boost::json::value_to<bool>(ObjectValue.at("allow_group_chats"));
    }
    if (ObjectValue.if_contains("allow_channel_chats")) {
        Result.AllowChannelChats = boost::json::value_to<bool>(ObjectValue.at("allow_channel_chats"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::TextQuote Deserializer<::TelegramBotAPI::Type::TextQuote>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::TextQuote Result{};

    Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    if (ObjectValue.if_contains("entities")) {
        Result.Entities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    Result.Position = boost::json::value_to<long long>(ObjectValue.at("position"));
    if (ObjectValue.if_contains("is_manual")) {
        Result.IsManual = boost::json::value_to<bool>(ObjectValue.at("is_manual"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram Deserializer<::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    if (ObjectValue.if_contains("sponsor_user")) {
        Result.SponsorUser = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("sponsor_user"));
    }
    Result.CommissionPerMille = boost::json::value_to<long long>(ObjectValue.at("commission_per_mille"));

    return Result;
}

inline ::TelegramBotAPI::Type::TransactionPartnerChat Deserializer<::TelegramBotAPI::Type::TransactionPartnerChat>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::TransactionPartnerChat Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.Chat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("chat"));
    if (ObjectValue.if_contains("gift")) {
        Result.Gift = FromJson<::TelegramBotAPI::Type::Gift>(ObjectValue.at("gift"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::TransactionPartnerFragment Deserializer<::TelegramBotAPI::Type::TransactionPartnerFragment>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::TransactionPartnerFragment Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    if (ObjectValue.if_contains("withdrawal_state")) {
        Result.WithdrawalState = FromJson<::TelegramBotAPI::Type::RevenueWithdrawalState>(ObjectValue.at("withdrawal_state"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::TransactionPartnerOther Deserializer<::TelegramBotAPI::Type::TransactionPartnerOther>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::TransactionPartnerOther Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::TransactionPartnerTelegramAds Deserializer<::TelegramBotAPI::Type::TransactionPartnerTelegramAds>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::TransactionPartnerTelegramAds Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));

    return Result;
}

inline ::TelegramBotAPI::Type::TransactionPartnerTelegramApi Deserializer<::TelegramBotAPI::Type::TransactionPartnerTelegramApi>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::TransactionPartnerTelegramApi Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.RequestCount = boost::json::value_to<long long>(ObjectValue.at("request_count"));

    return Result;
}

inline ::TelegramBotAPI::Type::TransactionPartnerUser Deserializer<::TelegramBotAPI::Type::TransactionPartnerUser>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::TransactionPartnerUser Result{};

    Result.Type = boost::json::value_to<std::string>(ObjectValue.at("type"));
    Result.TransactionType = boost::json::value_to<std::string>(ObjectValue.at("transaction_type"));
    Result.User = FromJson<::TelegramBotAPI::Type::User>(ObjectValue.at("user"));
    if (ObjectValue.if_contains("affiliate")) {
        Result.Affiliate = FromJson<::TelegramBotAPI::Type::AffiliateInfo>(ObjectValue.at("affiliate"));
    }
    if (ObjectValue.if_contains("invoice_payload")) {
        Result.InvoicePayload = boost::json::value_to<std::string>(ObjectValue.at("invoice_payload"));
    }
    if (ObjectValue.if_contains("subscription_period")) {
        Result.SubscriptionPeriod = boost::json::value_to<long long>(ObjectValue.at("subscription_period"));
    }
    if (ObjectValue.if_contains("paid_media")) {
        Result.PaidMedia = ([&]() { std::vector<std::variant<::TelegramBotAPI::Type::PaidMediaLivePhoto, ::TelegramBotAPI::Type::PaidMediaPhoto, ::TelegramBotAPI::Type::PaidMediaPreview, ::TelegramBotAPI::Type::PaidMediaVideo>> Result; for (const auto &Item : ObjectValue.at("paid_media").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PaidMedia>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("paid_media_payload")) {
        Result.PaidMediaPayload = boost::json::value_to<std::string>(ObjectValue.at("paid_media_payload"));
    }
    if (ObjectValue.if_contains("gift")) {
        Result.Gift = FromJson<::TelegramBotAPI::Type::Gift>(ObjectValue.at("gift"));
    }
    if (ObjectValue.if_contains("premium_subscription_duration")) {
        Result.PremiumSubscriptionDuration = boost::json::value_to<long long>(ObjectValue.at("premium_subscription_duration"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::UniqueGift Deserializer<::TelegramBotAPI::Type::UniqueGift>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UniqueGift Result{};

    Result.GiftID = boost::json::value_to<std::string>(ObjectValue.at("gift_id"));
    Result.BaseName = boost::json::value_to<std::string>(ObjectValue.at("base_name"));
    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));
    Result.Number = boost::json::value_to<long long>(ObjectValue.at("number"));
    Result.Model = FromJson<::TelegramBotAPI::Type::UniqueGiftModel>(ObjectValue.at("model"));
    Result.Symbol = FromJson<::TelegramBotAPI::Type::UniqueGiftSymbol>(ObjectValue.at("symbol"));
    Result.Backdrop = FromJson<::TelegramBotAPI::Type::UniqueGiftBackdrop>(ObjectValue.at("backdrop"));
    if (ObjectValue.if_contains("is_premium")) {
        Result.IsPremium = boost::json::value_to<bool>(ObjectValue.at("is_premium"));
    }
    if (ObjectValue.if_contains("is_burned")) {
        Result.IsBurned = boost::json::value_to<bool>(ObjectValue.at("is_burned"));
    }
    if (ObjectValue.if_contains("is_from_blockchain")) {
        Result.IsFromBlockchain = boost::json::value_to<bool>(ObjectValue.at("is_from_blockchain"));
    }
    if (ObjectValue.if_contains("colors")) {
        Result.Colors = FromJson<::TelegramBotAPI::Type::UniqueGiftColors>(ObjectValue.at("colors"));
    }
    if (ObjectValue.if_contains("publisher_chat")) {
        Result.PublisherChat = FromJson<::TelegramBotAPI::Type::Chat>(ObjectValue.at("publisher_chat"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::UniqueGiftBackdrop Deserializer<::TelegramBotAPI::Type::UniqueGiftBackdrop>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UniqueGiftBackdrop Result{};

    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));
    Result.Colors = FromJson<::TelegramBotAPI::Type::UniqueGiftBackdropColors>(ObjectValue.at("colors"));
    Result.RarityPerMille = boost::json::value_to<long long>(ObjectValue.at("rarity_per_mille"));

    return Result;
}

inline ::TelegramBotAPI::Type::UniqueGiftBackdropColors Deserializer<::TelegramBotAPI::Type::UniqueGiftBackdropColors>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UniqueGiftBackdropColors Result{};

    Result.CenterColor = boost::json::value_to<long long>(ObjectValue.at("center_color"));
    Result.EdgeColor = boost::json::value_to<long long>(ObjectValue.at("edge_color"));
    Result.SymbolColor = boost::json::value_to<long long>(ObjectValue.at("symbol_color"));
    Result.TextColor = boost::json::value_to<long long>(ObjectValue.at("text_color"));

    return Result;
}

inline ::TelegramBotAPI::Type::UniqueGiftColors Deserializer<::TelegramBotAPI::Type::UniqueGiftColors>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UniqueGiftColors Result{};

    Result.ModelCustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("model_custom_emoji_id"));
    Result.SymbolCustomEmojiID = boost::json::value_to<std::string>(ObjectValue.at("symbol_custom_emoji_id"));
    Result.LightThemeMainColor = boost::json::value_to<long long>(ObjectValue.at("light_theme_main_color"));
    Result.LightThemeOtherColors = boost::json::value_to<std::vector<long long>>(ObjectValue.at("light_theme_other_colors"));
    Result.DarkThemeMainColor = boost::json::value_to<long long>(ObjectValue.at("dark_theme_main_color"));
    Result.DarkThemeOtherColors = boost::json::value_to<std::vector<long long>>(ObjectValue.at("dark_theme_other_colors"));

    return Result;
}

inline ::TelegramBotAPI::Type::UniqueGiftInfo Deserializer<::TelegramBotAPI::Type::UniqueGiftInfo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UniqueGiftInfo Result{};

    Result.Gift = FromJson<::TelegramBotAPI::Type::UniqueGift>(ObjectValue.at("gift"));
    Result.Origin = boost::json::value_to<std::string>(ObjectValue.at("origin"));
    if (ObjectValue.if_contains("text")) {
        Result.Text = boost::json::value_to<std::string>(ObjectValue.at("text"));
    }
    if (ObjectValue.if_contains("entities")) {
        Result.Entities = ([&]() { std::vector<::TelegramBotAPI::Type::MessageEntity> Result; for (const auto &Item : ObjectValue.at("entities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::MessageEntity>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("is_private")) {
        Result.IsPrivate = boost::json::value_to<bool>(ObjectValue.at("is_private"));
    }
    if (ObjectValue.if_contains("last_resale_currency")) {
        Result.LastResaleCurrency = boost::json::value_to<std::string>(ObjectValue.at("last_resale_currency"));
    }
    if (ObjectValue.if_contains("last_resale_amount")) {
        Result.LastResaleAmount = boost::json::value_to<long long>(ObjectValue.at("last_resale_amount"));
    }
    if (ObjectValue.if_contains("owned_gift_id")) {
        Result.OwnedGiftID = boost::json::value_to<std::string>(ObjectValue.at("owned_gift_id"));
    }
    if (ObjectValue.if_contains("transfer_star_count")) {
        Result.TransferStarCount = boost::json::value_to<long long>(ObjectValue.at("transfer_star_count"));
    }
    if (ObjectValue.if_contains("next_transfer_date")) {
        Result.NextTransferDate = boost::json::value_to<long long>(ObjectValue.at("next_transfer_date"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::UniqueGiftModel Deserializer<::TelegramBotAPI::Type::UniqueGiftModel>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UniqueGiftModel Result{};

    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));
    Result.Sticker = FromJson<::TelegramBotAPI::Type::Sticker>(ObjectValue.at("sticker"));
    Result.RarityPerMille = boost::json::value_to<long long>(ObjectValue.at("rarity_per_mille"));
    if (ObjectValue.if_contains("rarity")) {
        Result.Rarity = boost::json::value_to<std::string>(ObjectValue.at("rarity"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::UniqueGiftSymbol Deserializer<::TelegramBotAPI::Type::UniqueGiftSymbol>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UniqueGiftSymbol Result{};

    Result.Name = boost::json::value_to<std::string>(ObjectValue.at("name"));
    Result.Sticker = FromJson<::TelegramBotAPI::Type::Sticker>(ObjectValue.at("sticker"));
    Result.RarityPerMille = boost::json::value_to<long long>(ObjectValue.at("rarity_per_mille"));

    return Result;
}

inline ::TelegramBotAPI::Type::Update Deserializer<::TelegramBotAPI::Type::Update>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Update Result{};

    Result.UpdateID = boost::json::value_to<long long>(ObjectValue.at("update_id"));
    if (ObjectValue.if_contains("message")) {
        Result.Message = FromJson<::TelegramBotAPI::Type::Message>(ObjectValue.at("message"));
    }
    if (ObjectValue.if_contains("edited_message")) {
        Result.EditedMessage = FromJson<::TelegramBotAPI::Type::Message>(ObjectValue.at("edited_message"));
    }
    if (ObjectValue.if_contains("channel_post")) {
        Result.ChannelPost = FromJson<::TelegramBotAPI::Type::Message>(ObjectValue.at("channel_post"));
    }
    if (ObjectValue.if_contains("edited_channel_post")) {
        Result.EditedChannelPost = FromJson<::TelegramBotAPI::Type::Message>(ObjectValue.at("edited_channel_post"));
    }
    if (ObjectValue.if_contains("business_connection")) {
        Result.BusinessConnection = FromJson<::TelegramBotAPI::Type::BusinessConnection>(ObjectValue.at("business_connection"));
    }
    if (ObjectValue.if_contains("business_message")) {
        Result.BusinessMessage = FromJson<::TelegramBotAPI::Type::Message>(ObjectValue.at("business_message"));
    }
    if (ObjectValue.if_contains("edited_business_message")) {
        Result.EditedBusinessMessage = FromJson<::TelegramBotAPI::Type::Message>(ObjectValue.at("edited_business_message"));
    }
    if (ObjectValue.if_contains("deleted_business_messages")) {
        Result.DeletedBusinessMessages = FromJson<::TelegramBotAPI::Type::BusinessMessagesDeleted>(ObjectValue.at("deleted_business_messages"));
    }
    if (ObjectValue.if_contains("guest_message")) {
        Result.GuestMessage = FromJson<::TelegramBotAPI::Type::Message>(ObjectValue.at("guest_message"));
    }
    if (ObjectValue.if_contains("message_reaction")) {
        Result.MessageReaction = FromJson<::TelegramBotAPI::Type::MessageReactionUpdated>(ObjectValue.at("message_reaction"));
    }
    if (ObjectValue.if_contains("message_reaction_count")) {
        Result.MessageReactionCount = FromJson<::TelegramBotAPI::Type::MessageReactionCountUpdated>(ObjectValue.at("message_reaction_count"));
    }
    if (ObjectValue.if_contains("inline_query")) {
        Result.InlineQuery = FromJson<::TelegramBotAPI::Type::InlineQuery>(ObjectValue.at("inline_query"));
    }
    if (ObjectValue.if_contains("chosen_inline_result")) {
        Result.ChosenInlineResult = FromJson<::TelegramBotAPI::Type::ChosenInlineResult>(ObjectValue.at("chosen_inline_result"));
    }
    if (ObjectValue.if_contains("callback_query")) {
        Result.CallbackQuery = FromJson<::TelegramBotAPI::Type::CallbackQuery>(ObjectValue.at("callback_query"));
    }
    if (ObjectValue.if_contains("shipping_query")) {
        Result.ShippingQuery = FromJson<::TelegramBotAPI::Type::ShippingQuery>(ObjectValue.at("shipping_query"));
    }
    if (ObjectValue.if_contains("pre_checkout_query")) {
        Result.PreCheckoutQuery = FromJson<::TelegramBotAPI::Type::PreCheckoutQuery>(ObjectValue.at("pre_checkout_query"));
    }
    if (ObjectValue.if_contains("purchased_paid_media")) {
        Result.PurchasedPaidMedia = FromJson<::TelegramBotAPI::Type::PaidMediaPurchased>(ObjectValue.at("purchased_paid_media"));
    }
    if (ObjectValue.if_contains("poll")) {
        Result.Poll = FromJson<::TelegramBotAPI::Type::Poll>(ObjectValue.at("poll"));
    }
    if (ObjectValue.if_contains("poll_answer")) {
        Result.PollAnswer = FromJson<::TelegramBotAPI::Type::PollAnswer>(ObjectValue.at("poll_answer"));
    }
    if (ObjectValue.if_contains("my_chat_member")) {
        Result.MyChatMember = FromJson<::TelegramBotAPI::Type::ChatMemberUpdated>(ObjectValue.at("my_chat_member"));
    }
    if (ObjectValue.if_contains("chat_member")) {
        Result.ChatMember = FromJson<::TelegramBotAPI::Type::ChatMemberUpdated>(ObjectValue.at("chat_member"));
    }
    if (ObjectValue.if_contains("chat_join_request")) {
        Result.ChatJoinRequest = FromJson<::TelegramBotAPI::Type::ChatJoinRequest>(ObjectValue.at("chat_join_request"));
    }
    if (ObjectValue.if_contains("chat_boost")) {
        Result.ChatBoost = FromJson<::TelegramBotAPI::Type::ChatBoostUpdated>(ObjectValue.at("chat_boost"));
    }
    if (ObjectValue.if_contains("removed_chat_boost")) {
        Result.RemovedChatBoost = FromJson<::TelegramBotAPI::Type::ChatBoostRemoved>(ObjectValue.at("removed_chat_boost"));
    }
    if (ObjectValue.if_contains("managed_bot")) {
        Result.ManagedBot = FromJson<::TelegramBotAPI::Type::ManagedBotUpdated>(ObjectValue.at("managed_bot"));
    }
    if (ObjectValue.if_contains("subscription")) {
        Result.Subscription = FromJson<::TelegramBotAPI::Type::BotSubscriptionUpdated>(ObjectValue.at("subscription"));
    }
    if (ObjectValue.if_contains("stopped_message_generation")) {
        Result.StoppedMessageGeneration = FromJson<::TelegramBotAPI::Type::MessageGenerationStopped>(ObjectValue.at("stopped_message_generation"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::User Deserializer<::TelegramBotAPI::Type::User>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::User Result{};

    Result.ID = boost::json::value_to<long long>(ObjectValue.at("id"));
    Result.IsBot = boost::json::value_to<bool>(ObjectValue.at("is_bot"));
    Result.FirstName = boost::json::value_to<std::string>(ObjectValue.at("first_name"));
    if (ObjectValue.if_contains("last_name")) {
        Result.LastName = boost::json::value_to<std::string>(ObjectValue.at("last_name"));
    }
    if (ObjectValue.if_contains("username")) {
        Result.UserName = boost::json::value_to<std::string>(ObjectValue.at("username"));
    }
    if (ObjectValue.if_contains("language_code")) {
        Result.LanguageCode = boost::json::value_to<std::string>(ObjectValue.at("language_code"));
    }
    if (ObjectValue.if_contains("is_premium")) {
        Result.IsPremium = boost::json::value_to<bool>(ObjectValue.at("is_premium"));
    }
    if (ObjectValue.if_contains("added_to_attachment_menu")) {
        Result.AddedToAttachmentMenu = boost::json::value_to<bool>(ObjectValue.at("added_to_attachment_menu"));
    }
    if (ObjectValue.if_contains("can_join_groups")) {
        Result.CanJoinGroups = boost::json::value_to<bool>(ObjectValue.at("can_join_groups"));
    }
    if (ObjectValue.if_contains("can_read_all_group_messages")) {
        Result.CanReadAllGroupMessages = boost::json::value_to<bool>(ObjectValue.at("can_read_all_group_messages"));
    }
    if (ObjectValue.if_contains("supports_guest_queries")) {
        Result.SupportsGuestQueries = boost::json::value_to<bool>(ObjectValue.at("supports_guest_queries"));
    }
    if (ObjectValue.if_contains("supports_inline_queries")) {
        Result.SupportsInlineQueries = boost::json::value_to<bool>(ObjectValue.at("supports_inline_queries"));
    }
    if (ObjectValue.if_contains("can_connect_to_business")) {
        Result.CanConnectToBusiness = boost::json::value_to<bool>(ObjectValue.at("can_connect_to_business"));
    }
    if (ObjectValue.if_contains("has_main_web_app")) {
        Result.HasMainWebApp = boost::json::value_to<bool>(ObjectValue.at("has_main_web_app"));
    }
    if (ObjectValue.if_contains("has_topics_enabled")) {
        Result.HasTopicsEnabled = boost::json::value_to<bool>(ObjectValue.at("has_topics_enabled"));
    }
    if (ObjectValue.if_contains("allows_users_to_create_topics")) {
        Result.AllowsUsersToCreateTopics = boost::json::value_to<bool>(ObjectValue.at("allows_users_to_create_topics"));
    }
    if (ObjectValue.if_contains("can_manage_bots")) {
        Result.CanManageBots = boost::json::value_to<bool>(ObjectValue.at("can_manage_bots"));
    }
    if (ObjectValue.if_contains("supports_join_request_queries")) {
        Result.SupportsJoinRequestQueries = boost::json::value_to<bool>(ObjectValue.at("supports_join_request_queries"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::UserChatBoosts Deserializer<::TelegramBotAPI::Type::UserChatBoosts>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UserChatBoosts Result{};

    Result.Boosts = ([&]() { std::vector<::TelegramBotAPI::Type::ChatBoost> Result; for (const auto &Item : ObjectValue.at("boosts").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::ChatBoost>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::UserProfileAudios Deserializer<::TelegramBotAPI::Type::UserProfileAudios>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UserProfileAudios Result{};

    Result.TotalCount = boost::json::value_to<long long>(ObjectValue.at("total_count"));
    Result.Audios = ([&]() { std::vector<::TelegramBotAPI::Type::Audio> Result; for (const auto &Item : ObjectValue.at("audios").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::Audio>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::UserProfilePhotos Deserializer<::TelegramBotAPI::Type::UserProfilePhotos>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UserProfilePhotos Result{};

    Result.TotalCount = boost::json::value_to<long long>(ObjectValue.at("total_count"));
    Result.Photos = ([&]() { std::vector<std::vector<::TelegramBotAPI::Type::PhotoSize>> Result; for (const auto &Item : ObjectValue.at("photos").as_array()) { Result.push_back(([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : Item.as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })()); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::UserRating Deserializer<::TelegramBotAPI::Type::UserRating>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UserRating Result{};

    Result.Level = boost::json::value_to<long long>(ObjectValue.at("level"));
    Result.Rating = boost::json::value_to<long long>(ObjectValue.at("rating"));
    Result.CurrentLevelRating = boost::json::value_to<long long>(ObjectValue.at("current_level_rating"));
    if (ObjectValue.if_contains("next_level_rating")) {
        Result.NextLevelRating = boost::json::value_to<long long>(ObjectValue.at("next_level_rating"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::UsersShared Deserializer<::TelegramBotAPI::Type::UsersShared>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::UsersShared Result{};

    Result.RequestID = boost::json::value_to<long long>(ObjectValue.at("request_id"));
    Result.Users = ([&]() { std::vector<::TelegramBotAPI::Type::SharedUser> Result; for (const auto &Item : ObjectValue.at("users").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::SharedUser>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::Venue Deserializer<::TelegramBotAPI::Type::Venue>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Venue Result{};

    Result.Location = FromJson<::TelegramBotAPI::Type::Location>(ObjectValue.at("location"));
    Result.Title = boost::json::value_to<std::string>(ObjectValue.at("title"));
    Result.Address = boost::json::value_to<std::string>(ObjectValue.at("address"));
    if (ObjectValue.if_contains("foursquare_id")) {
        Result.FoursquareID = boost::json::value_to<std::string>(ObjectValue.at("foursquare_id"));
    }
    if (ObjectValue.if_contains("foursquare_type")) {
        Result.FoursquareType = boost::json::value_to<std::string>(ObjectValue.at("foursquare_type"));
    }
    if (ObjectValue.if_contains("google_place_id")) {
        Result.GooglePlaceID = boost::json::value_to<std::string>(ObjectValue.at("google_place_id"));
    }
    if (ObjectValue.if_contains("google_place_type")) {
        Result.GooglePlaceType = boost::json::value_to<std::string>(ObjectValue.at("google_place_type"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Video Deserializer<::TelegramBotAPI::Type::Video>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Video Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = FromJson<::TelegramBotAPI::Type::PhotoSize>(ObjectValue.at("thumbnail"));
    }
    if (ObjectValue.if_contains("cover")) {
        Result.Cover = ([&]() { std::vector<::TelegramBotAPI::Type::PhotoSize> Result; for (const auto &Item : ObjectValue.at("cover").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::PhotoSize>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("start_timestamp")) {
        Result.StartTimestamp = boost::json::value_to<long long>(ObjectValue.at("start_timestamp"));
    }
    if (ObjectValue.if_contains("qualities")) {
        Result.Qualities = ([&]() { std::vector<::TelegramBotAPI::Type::VideoQuality> Result; for (const auto &Item : ObjectValue.at("qualities").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::VideoQuality>(Item)); } return Result; })();
    }
    if (ObjectValue.if_contains("file_name")) {
        Result.FileName = boost::json::value_to<std::string>(ObjectValue.at("file_name"));
    }
    if (ObjectValue.if_contains("mime_type")) {
        Result.MimeType = boost::json::value_to<std::string>(ObjectValue.at("mime_type"));
    }
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::VideoChatEnded Deserializer<::TelegramBotAPI::Type::VideoChatEnded>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::VideoChatEnded Result{};

    Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));

    return Result;
}

inline ::TelegramBotAPI::Type::VideoChatParticipantsInvited Deserializer<::TelegramBotAPI::Type::VideoChatParticipantsInvited>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::VideoChatParticipantsInvited Result{};

    Result.Users = ([&]() { std::vector<::TelegramBotAPI::Type::User> Result; for (const auto &Item : ObjectValue.at("users").as_array()) { Result.push_back(FromJson<::TelegramBotAPI::Type::User>(Item)); } return Result; })();

    return Result;
}

inline ::TelegramBotAPI::Type::VideoChatScheduled Deserializer<::TelegramBotAPI::Type::VideoChatScheduled>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::VideoChatScheduled Result{};

    Result.StartDate = boost::json::value_to<long long>(ObjectValue.at("start_date"));

    return Result;
}

inline ::TelegramBotAPI::Type::VideoChatStarted Deserializer<::TelegramBotAPI::Type::VideoChatStarted>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::VideoChatStarted Result{};


    return Result;
}

inline ::TelegramBotAPI::Type::VideoNote Deserializer<::TelegramBotAPI::Type::VideoNote>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::VideoNote Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    Result.Length = boost::json::value_to<long long>(ObjectValue.at("length"));
    Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    if (ObjectValue.if_contains("thumbnail")) {
        Result.Thumbnail = FromJson<::TelegramBotAPI::Type::PhotoSize>(ObjectValue.at("thumbnail"));
    }
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::VideoQuality Deserializer<::TelegramBotAPI::Type::VideoQuality>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::VideoQuality Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    Result.Width = boost::json::value_to<long long>(ObjectValue.at("width"));
    Result.Height = boost::json::value_to<long long>(ObjectValue.at("height"));
    Result.Codec = boost::json::value_to<std::string>(ObjectValue.at("codec"));
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::Voice Deserializer<::TelegramBotAPI::Type::Voice>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::Voice Result{};

    Result.FileID = boost::json::value_to<std::string>(ObjectValue.at("file_id"));
    Result.FileUniqueID = boost::json::value_to<std::string>(ObjectValue.at("file_unique_id"));
    Result.Duration = boost::json::value_to<long long>(ObjectValue.at("duration"));
    if (ObjectValue.if_contains("mime_type")) {
        Result.MimeType = boost::json::value_to<std::string>(ObjectValue.at("mime_type"));
    }
    if (ObjectValue.if_contains("file_size")) {
        Result.FileSize = boost::json::value_to<long long>(ObjectValue.at("file_size"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::WebAppData Deserializer<::TelegramBotAPI::Type::WebAppData>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::WebAppData Result{};

    Result.Data = boost::json::value_to<std::string>(ObjectValue.at("data"));
    Result.ButtonText = boost::json::value_to<std::string>(ObjectValue.at("button_text"));

    return Result;
}

inline ::TelegramBotAPI::Type::WebAppInfo Deserializer<::TelegramBotAPI::Type::WebAppInfo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::WebAppInfo Result{};

    Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));

    return Result;
}

inline ::TelegramBotAPI::Type::WebhookInfo Deserializer<::TelegramBotAPI::Type::WebhookInfo>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::WebhookInfo Result{};

    Result.URL = boost::json::value_to<std::string>(ObjectValue.at("url"));
    Result.HasCustomCertificate = boost::json::value_to<bool>(ObjectValue.at("has_custom_certificate"));
    Result.PendingUpdateCount = boost::json::value_to<long long>(ObjectValue.at("pending_update_count"));
    if (ObjectValue.if_contains("ip_address")) {
        Result.IPAddress = boost::json::value_to<std::string>(ObjectValue.at("ip_address"));
    }
    if (ObjectValue.if_contains("last_error_date")) {
        Result.LastErrorDate = boost::json::value_to<long long>(ObjectValue.at("last_error_date"));
    }
    if (ObjectValue.if_contains("last_error_message")) {
        Result.LastErrorMessage = boost::json::value_to<std::string>(ObjectValue.at("last_error_message"));
    }
    if (ObjectValue.if_contains("last_synchronization_error_date")) {
        Result.LastSynchronizationErrorDate = boost::json::value_to<long long>(ObjectValue.at("last_synchronization_error_date"));
    }
    if (ObjectValue.if_contains("max_connections")) {
        Result.MaxConnections = boost::json::value_to<long long>(ObjectValue.at("max_connections"));
    }
    if (ObjectValue.if_contains("allowed_updates")) {
        Result.AllowedUpdates = boost::json::value_to<std::vector<std::string>>(ObjectValue.at("allowed_updates"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::WriteAccessAllowed Deserializer<::TelegramBotAPI::Type::WriteAccessAllowed>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::WriteAccessAllowed Result{};

    if (ObjectValue.if_contains("from_request")) {
        Result.FromRequest = boost::json::value_to<bool>(ObjectValue.at("from_request"));
    }
    if (ObjectValue.if_contains("web_app_name")) {
        Result.WebAppName = boost::json::value_to<std::string>(ObjectValue.at("web_app_name"));
    }
    if (ObjectValue.if_contains("from_attachment_menu")) {
        Result.FromAttachmentMenu = boost::json::value_to<bool>(ObjectValue.at("from_attachment_menu"));
    }

    return Result;
}

inline ::TelegramBotAPI::Type::OkResponse Deserializer<::TelegramBotAPI::Type::OkResponse>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::OkResponse Result{};

    Result.Ok = boost::json::value_to<bool>(ObjectValue.at("ok"));

    return Result;
}

inline ::TelegramBotAPI::Type::ErrorResponse Deserializer<::TelegramBotAPI::Type::ErrorResponse>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    ::TelegramBotAPI::Type::ErrorResponse Result{};

    Result.Ok = boost::json::value_to<bool>(ObjectValue.at("ok"));
    Result.ErrorCode = boost::json::value_to<long long>(ObjectValue.at("error_code"));
    Result.Description = boost::json::value_to<std::string>(ObjectValue.at("description"));
    if (ObjectValue.if_contains("parameters")) {
        Result.Parameters = FromJson<::TelegramBotAPI::Type::ResponseParameters>(ObjectValue.at("parameters"));
    }

    return Result;
}
/* Named union deserializers */

inline ::TelegramBotAPI::Type::BackgroundFill Deserializer<::TelegramBotAPI::Type::BackgroundFill>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "freeform_gradient") {
        return FromJson<::TelegramBotAPI::Type::BackgroundFillFreeformGradient>(Value);
    }
    else if (DiscriminatorValue == "gradient") {
        return FromJson<::TelegramBotAPI::Type::BackgroundFillGradient>(Value);
    }
    else if (DiscriminatorValue == "solid") {
        return FromJson<::TelegramBotAPI::Type::BackgroundFillSolid>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for BackgroundFill: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::BackgroundType Deserializer<::TelegramBotAPI::Type::BackgroundType>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "chat_theme") {
        return FromJson<::TelegramBotAPI::Type::BackgroundTypeChatTheme>(Value);
    }
    else if (DiscriminatorValue == "fill") {
        return FromJson<::TelegramBotAPI::Type::BackgroundTypeFill>(Value);
    }
    else if (DiscriminatorValue == "pattern") {
        return FromJson<::TelegramBotAPI::Type::BackgroundTypePattern>(Value);
    }
    else if (DiscriminatorValue == "wallpaper") {
        return FromJson<::TelegramBotAPI::Type::BackgroundTypeWallpaper>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for BackgroundType: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::BotCommandScope Deserializer<::TelegramBotAPI::Type::BotCommandScope>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "all_chat_administrators") {
        return FromJson<::TelegramBotAPI::Type::BotCommandScopeAllChatAdministrators>(Value);
    }
    else if (DiscriminatorValue == "all_group_chats") {
        return FromJson<::TelegramBotAPI::Type::BotCommandScopeAllGroupChats>(Value);
    }
    else if (DiscriminatorValue == "all_private_chats") {
        return FromJson<::TelegramBotAPI::Type::BotCommandScopeAllPrivateChats>(Value);
    }
    else if (DiscriminatorValue == "chat") {
        return FromJson<::TelegramBotAPI::Type::BotCommandScopeChat>(Value);
    }
    else if (DiscriminatorValue == "chat_administrators") {
        return FromJson<::TelegramBotAPI::Type::BotCommandScopeChatAdministrators>(Value);
    }
    else if (DiscriminatorValue == "chat_member") {
        return FromJson<::TelegramBotAPI::Type::BotCommandScopeChatMember>(Value);
    }
    else if (DiscriminatorValue == "default") {
        return FromJson<::TelegramBotAPI::Type::BotCommandScopeDefault>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for BotCommandScope: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::ChatBoostSource Deserializer<::TelegramBotAPI::Type::ChatBoostSource>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("source");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "gift_code") {
        return FromJson<::TelegramBotAPI::Type::ChatBoostSourceGiftCode>(Value);
    }
    else if (DiscriminatorValue == "giveaway") {
        return FromJson<::TelegramBotAPI::Type::ChatBoostSourceGiveaway>(Value);
    }
    else if (DiscriminatorValue == "premium") {
        return FromJson<::TelegramBotAPI::Type::ChatBoostSourcePremium>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for ChatBoostSource: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::ChatMember Deserializer<::TelegramBotAPI::Type::ChatMember>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("status");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "administrator") {
        return FromJson<::TelegramBotAPI::Type::ChatMemberAdministrator>(Value);
    }
    else if (DiscriminatorValue == "creator") {
        return FromJson<::TelegramBotAPI::Type::ChatMemberOwner>(Value);
    }
    else if (DiscriminatorValue == "kicked") {
        return FromJson<::TelegramBotAPI::Type::ChatMemberBanned>(Value);
    }
    else if (DiscriminatorValue == "left") {
        return FromJson<::TelegramBotAPI::Type::ChatMemberLeft>(Value);
    }
    else if (DiscriminatorValue == "member") {
        return FromJson<::TelegramBotAPI::Type::ChatMemberMember>(Value);
    }
    else if (DiscriminatorValue == "restricted") {
        return FromJson<::TelegramBotAPI::Type::ChatMemberRestricted>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for ChatMember: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::InlineQueryResult Deserializer<::TelegramBotAPI::Type::InlineQueryResult>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "article") {
        return FromJson<::TelegramBotAPI::Type::InlineQueryResultArticle>(Value);
    }
    else if (DiscriminatorValue == "contact") {
        return FromJson<::TelegramBotAPI::Type::InlineQueryResultContact>(Value);
    }
    else if (DiscriminatorValue == "game") {
        return FromJson<::TelegramBotAPI::Type::InlineQueryResultGame>(Value);
    }
    else if (DiscriminatorValue == "location") {
        return FromJson<::TelegramBotAPI::Type::InlineQueryResultLocation>(Value);
    }
    else if (DiscriminatorValue == "sticker") {
        return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedSticker>(Value);
    }
    else if (DiscriminatorValue == "venue") {
        return FromJson<::TelegramBotAPI::Type::InlineQueryResultVenue>(Value);
    }
    else if (DiscriminatorValue == "audio") {
        if (ObjectValue.if_contains("audio_file_id")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedAudio>(Value);
        }
        else if (ObjectValue.if_contains("audio_url")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultAudio>(Value);
        }

        throw std::invalid_argument(
            "Unable to resolve InlineQueryResult for discriminator value audio"
        );
    }
    else if (DiscriminatorValue == "document") {
        if (ObjectValue.if_contains("document_file_id")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedDocument>(Value);
        }
        else if (ObjectValue.if_contains("document_url")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultDocument>(Value);
        }

        throw std::invalid_argument(
            "Unable to resolve InlineQueryResult for discriminator value document"
        );
    }
    else if (DiscriminatorValue == "gif") {
        if (ObjectValue.if_contains("gif_file_id")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedGif>(Value);
        }
        else if (ObjectValue.if_contains("gif_url")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultGif>(Value);
        }

        throw std::invalid_argument(
            "Unable to resolve InlineQueryResult for discriminator value gif"
        );
    }
    else if (DiscriminatorValue == "mpeg4_gif") {
        if (ObjectValue.if_contains("mpeg4_file_id")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedMpeg4Gif>(Value);
        }
        else if (ObjectValue.if_contains("mpeg4_url")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultMpeg4Gif>(Value);
        }

        throw std::invalid_argument(
            "Unable to resolve InlineQueryResult for discriminator value mpeg4_gif"
        );
    }
    else if (DiscriminatorValue == "photo") {
        if (ObjectValue.if_contains("photo_file_id")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedPhoto>(Value);
        }
        else if (ObjectValue.if_contains("photo_url")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultPhoto>(Value);
        }

        throw std::invalid_argument(
            "Unable to resolve InlineQueryResult for discriminator value photo"
        );
    }
    else if (DiscriminatorValue == "video") {
        if (ObjectValue.if_contains("video_file_id")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedVideo>(Value);
        }
        else if (ObjectValue.if_contains("video_url")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultVideo>(Value);
        }

        throw std::invalid_argument(
            "Unable to resolve InlineQueryResult for discriminator value video"
        );
    }
    else if (DiscriminatorValue == "voice") {
        if (ObjectValue.if_contains("voice_file_id")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultCachedVoice>(Value);
        }
        else if (ObjectValue.if_contains("voice_url")) {
            return FromJson<::TelegramBotAPI::Type::InlineQueryResultVoice>(Value);
        }

        throw std::invalid_argument(
            "Unable to resolve InlineQueryResult for discriminator value voice"
        );
    }

    throw std::invalid_argument(
        "Unknown discriminator value for InlineQueryResult: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::InputMedia Deserializer<::TelegramBotAPI::Type::InputMedia>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "animation") {
        return FromJson<::TelegramBotAPI::Type::InputMediaAnimation>(Value);
    }
    else if (DiscriminatorValue == "audio") {
        return FromJson<::TelegramBotAPI::Type::InputMediaAudio>(Value);
    }
    else if (DiscriminatorValue == "document") {
        return FromJson<::TelegramBotAPI::Type::InputMediaDocument>(Value);
    }
    else if (DiscriminatorValue == "live_photo") {
        return FromJson<::TelegramBotAPI::Type::InputMediaLivePhoto>(Value);
    }
    else if (DiscriminatorValue == "photo") {
        return FromJson<::TelegramBotAPI::Type::InputMediaPhoto>(Value);
    }
    else if (DiscriminatorValue == "video") {
        return FromJson<::TelegramBotAPI::Type::InputMediaVideo>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for InputMedia: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::InputMessageContent Deserializer<::TelegramBotAPI::Type::InputMessageContent>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    if (ObjectValue.if_contains("currency") && ObjectValue.if_contains("description") && ObjectValue.if_contains("payload") && ObjectValue.if_contains("prices") && ObjectValue.if_contains("title")) {
        return FromJson<::TelegramBotAPI::Type::InputInvoiceMessageContent>(Value);
    }
    else if (ObjectValue.if_contains("address") && ObjectValue.if_contains("latitude") && ObjectValue.if_contains("longitude") && ObjectValue.if_contains("title")) {
        return FromJson<::TelegramBotAPI::Type::InputVenueMessageContent>(Value);
    }
    else if (ObjectValue.if_contains("first_name") && ObjectValue.if_contains("phone_number")) {
        return FromJson<::TelegramBotAPI::Type::InputContactMessageContent>(Value);
    }
    else if (ObjectValue.if_contains("latitude") && ObjectValue.if_contains("longitude")) {
        return FromJson<::TelegramBotAPI::Type::InputLocationMessageContent>(Value);
    }
    else if (ObjectValue.if_contains("rich_message")) {
        return FromJson<::TelegramBotAPI::Type::InputRichMessageContent>(Value);
    }
    else if (ObjectValue.if_contains("message_text")) {
        return FromJson<::TelegramBotAPI::Type::InputTextMessageContent>(Value);
    }

    throw std::invalid_argument(
        "Unable to resolve presence union InputMessageContent"
    );
}

inline ::TelegramBotAPI::Type::InputPaidMedia Deserializer<::TelegramBotAPI::Type::InputPaidMedia>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "live_photo") {
        return FromJson<::TelegramBotAPI::Type::InputPaidMediaLivePhoto>(Value);
    }
    else if (DiscriminatorValue == "photo") {
        return FromJson<::TelegramBotAPI::Type::InputPaidMediaPhoto>(Value);
    }
    else if (DiscriminatorValue == "video") {
        return FromJson<::TelegramBotAPI::Type::InputPaidMediaVideo>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for InputPaidMedia: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::InputPollMedia Deserializer<::TelegramBotAPI::Type::InputPollMedia>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "animation") {
        return FromJson<::TelegramBotAPI::Type::InputMediaAnimation>(Value);
    }
    else if (DiscriminatorValue == "audio") {
        return FromJson<::TelegramBotAPI::Type::InputMediaAudio>(Value);
    }
    else if (DiscriminatorValue == "document") {
        return FromJson<::TelegramBotAPI::Type::InputMediaDocument>(Value);
    }
    else if (DiscriminatorValue == "live_photo") {
        return FromJson<::TelegramBotAPI::Type::InputMediaLivePhoto>(Value);
    }
    else if (DiscriminatorValue == "location") {
        return FromJson<::TelegramBotAPI::Type::InputMediaLocation>(Value);
    }
    else if (DiscriminatorValue == "photo") {
        return FromJson<::TelegramBotAPI::Type::InputMediaPhoto>(Value);
    }
    else if (DiscriminatorValue == "venue") {
        return FromJson<::TelegramBotAPI::Type::InputMediaVenue>(Value);
    }
    else if (DiscriminatorValue == "video") {
        return FromJson<::TelegramBotAPI::Type::InputMediaVideo>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for InputPollMedia: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::InputPollOptionMedia Deserializer<::TelegramBotAPI::Type::InputPollOptionMedia>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "animation") {
        return FromJson<::TelegramBotAPI::Type::InputMediaAnimation>(Value);
    }
    else if (DiscriminatorValue == "link") {
        return FromJson<::TelegramBotAPI::Type::InputMediaLink>(Value);
    }
    else if (DiscriminatorValue == "live_photo") {
        return FromJson<::TelegramBotAPI::Type::InputMediaLivePhoto>(Value);
    }
    else if (DiscriminatorValue == "location") {
        return FromJson<::TelegramBotAPI::Type::InputMediaLocation>(Value);
    }
    else if (DiscriminatorValue == "photo") {
        return FromJson<::TelegramBotAPI::Type::InputMediaPhoto>(Value);
    }
    else if (DiscriminatorValue == "sticker") {
        return FromJson<::TelegramBotAPI::Type::InputMediaSticker>(Value);
    }
    else if (DiscriminatorValue == "venue") {
        return FromJson<::TelegramBotAPI::Type::InputMediaVenue>(Value);
    }
    else if (DiscriminatorValue == "video") {
        return FromJson<::TelegramBotAPI::Type::InputMediaVideo>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for InputPollOptionMedia: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::InputProfilePhoto Deserializer<::TelegramBotAPI::Type::InputProfilePhoto>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "animated") {
        return FromJson<::TelegramBotAPI::Type::InputProfilePhotoAnimated>(Value);
    }
    else if (DiscriminatorValue == "static") {
        return FromJson<::TelegramBotAPI::Type::InputProfilePhotoStatic>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for InputProfilePhoto: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::InputStoryContent Deserializer<::TelegramBotAPI::Type::InputStoryContent>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "photo") {
        return FromJson<::TelegramBotAPI::Type::InputStoryContentPhoto>(Value);
    }
    else if (DiscriminatorValue == "video") {
        return FromJson<::TelegramBotAPI::Type::InputStoryContentVideo>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for InputStoryContent: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::MaybeInaccessibleMessage Deserializer<::TelegramBotAPI::Type::MaybeInaccessibleMessage>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &ResolutionValue = ObjectValue.at("date");

    if (boost::json::value_to<long long>(ResolutionValue) == 0) {
        return FromJson<::TelegramBotAPI::Type::InaccessibleMessage>(Value);
    }
    if (boost::json::value_to<long long>(ResolutionValue) > 0) {
        return FromJson<std::shared_ptr<::TelegramBotAPI::Type::Message>>(Value);
    }

    throw std::invalid_argument(
        "Invalid field-value discriminator for MaybeInaccessibleMessage"
    );
}

inline ::TelegramBotAPI::Type::MenuButton Deserializer<::TelegramBotAPI::Type::MenuButton>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "commands") {
        return FromJson<::TelegramBotAPI::Type::MenuButtonCommands>(Value);
    }
    else if (DiscriminatorValue == "default") {
        return FromJson<::TelegramBotAPI::Type::MenuButtonDefault>(Value);
    }
    else if (DiscriminatorValue == "web_app") {
        return FromJson<::TelegramBotAPI::Type::MenuButtonWebApp>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for MenuButton: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::MessageOrigin Deserializer<::TelegramBotAPI::Type::MessageOrigin>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "channel") {
        return FromJson<::TelegramBotAPI::Type::MessageOriginChannel>(Value);
    }
    else if (DiscriminatorValue == "chat") {
        return FromJson<::TelegramBotAPI::Type::MessageOriginChat>(Value);
    }
    else if (DiscriminatorValue == "hidden_user") {
        return FromJson<::TelegramBotAPI::Type::MessageOriginHiddenUser>(Value);
    }
    else if (DiscriminatorValue == "user") {
        return FromJson<::TelegramBotAPI::Type::MessageOriginUser>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for MessageOrigin: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::OwnedGift Deserializer<::TelegramBotAPI::Type::OwnedGift>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "regular") {
        return FromJson<::TelegramBotAPI::Type::OwnedGiftRegular>(Value);
    }
    else if (DiscriminatorValue == "unique") {
        return FromJson<::TelegramBotAPI::Type::OwnedGiftUnique>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for OwnedGift: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::PaidMedia Deserializer<::TelegramBotAPI::Type::PaidMedia>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "live_photo") {
        return FromJson<::TelegramBotAPI::Type::PaidMediaLivePhoto>(Value);
    }
    else if (DiscriminatorValue == "photo") {
        return FromJson<::TelegramBotAPI::Type::PaidMediaPhoto>(Value);
    }
    else if (DiscriminatorValue == "preview") {
        return FromJson<::TelegramBotAPI::Type::PaidMediaPreview>(Value);
    }
    else if (DiscriminatorValue == "video") {
        return FromJson<::TelegramBotAPI::Type::PaidMediaVideo>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for PaidMedia: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::PassportElementError Deserializer<::TelegramBotAPI::Type::PassportElementError>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("source");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "data") {
        return FromJson<::TelegramBotAPI::Type::PassportElementErrorDataField>(Value);
    }
    else if (DiscriminatorValue == "file") {
        return FromJson<::TelegramBotAPI::Type::PassportElementErrorFile>(Value);
    }
    else if (DiscriminatorValue == "files") {
        return FromJson<::TelegramBotAPI::Type::PassportElementErrorFiles>(Value);
    }
    else if (DiscriminatorValue == "front_side") {
        return FromJson<::TelegramBotAPI::Type::PassportElementErrorFrontSide>(Value);
    }
    else if (DiscriminatorValue == "reverse_side") {
        return FromJson<::TelegramBotAPI::Type::PassportElementErrorReverseSide>(Value);
    }
    else if (DiscriminatorValue == "selfie") {
        return FromJson<::TelegramBotAPI::Type::PassportElementErrorSelfie>(Value);
    }
    else if (DiscriminatorValue == "translation_file") {
        return FromJson<::TelegramBotAPI::Type::PassportElementErrorTranslationFile>(Value);
    }
    else if (DiscriminatorValue == "translation_files") {
        return FromJson<::TelegramBotAPI::Type::PassportElementErrorTranslationFiles>(Value);
    }
    else if (DiscriminatorValue == "unspecified") {
        return FromJson<::TelegramBotAPI::Type::PassportElementErrorUnspecified>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for PassportElementError: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::ReactionType Deserializer<::TelegramBotAPI::Type::ReactionType>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "custom_emoji") {
        return FromJson<::TelegramBotAPI::Type::ReactionTypeCustomEmoji>(Value);
    }
    else if (DiscriminatorValue == "emoji") {
        return FromJson<::TelegramBotAPI::Type::ReactionTypeEmoji>(Value);
    }
    else if (DiscriminatorValue == "paid") {
        return FromJson<::TelegramBotAPI::Type::ReactionTypePaid>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for ReactionType: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::RevenueWithdrawalState Deserializer<::TelegramBotAPI::Type::RevenueWithdrawalState>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "failed") {
        return FromJson<::TelegramBotAPI::Type::RevenueWithdrawalStateFailed>(Value);
    }
    else if (DiscriminatorValue == "pending") {
        return FromJson<::TelegramBotAPI::Type::RevenueWithdrawalStatePending>(Value);
    }
    else if (DiscriminatorValue == "succeeded") {
        return FromJson<::TelegramBotAPI::Type::RevenueWithdrawalStateSucceeded>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for RevenueWithdrawalState: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::StoryAreaType Deserializer<::TelegramBotAPI::Type::StoryAreaType>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "link") {
        return FromJson<::TelegramBotAPI::Type::StoryAreaTypeLink>(Value);
    }
    else if (DiscriminatorValue == "location") {
        return FromJson<::TelegramBotAPI::Type::StoryAreaTypeLocation>(Value);
    }
    else if (DiscriminatorValue == "suggested_reaction") {
        return FromJson<::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction>(Value);
    }
    else if (DiscriminatorValue == "unique_gift") {
        return FromJson<::TelegramBotAPI::Type::StoryAreaTypeUniqueGift>(Value);
    }
    else if (DiscriminatorValue == "weather") {
        return FromJson<::TelegramBotAPI::Type::StoryAreaTypeWeather>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for StoryAreaType: " + DiscriminatorValue
    );
}

inline ::TelegramBotAPI::Type::TransactionPartner Deserializer<::TelegramBotAPI::Type::TransactionPartner>::Deserialize(
    const boost::json::value &Value
) {
    const auto &ObjectValue = Value.as_object();

    const auto &Discriminator = ObjectValue.at("type");
    const std::string DiscriminatorValue = boost::json::value_to<std::string>(Discriminator);

    if (DiscriminatorValue == "affiliate_program") {
        return FromJson<::TelegramBotAPI::Type::TransactionPartnerAffiliateProgram>(Value);
    }
    else if (DiscriminatorValue == "chat") {
        return FromJson<::TelegramBotAPI::Type::TransactionPartnerChat>(Value);
    }
    else if (DiscriminatorValue == "fragment") {
        return FromJson<::TelegramBotAPI::Type::TransactionPartnerFragment>(Value);
    }
    else if (DiscriminatorValue == "other") {
        return FromJson<::TelegramBotAPI::Type::TransactionPartnerOther>(Value);
    }
    else if (DiscriminatorValue == "telegram_ads") {
        return FromJson<::TelegramBotAPI::Type::TransactionPartnerTelegramAds>(Value);
    }
    else if (DiscriminatorValue == "telegram_api") {
        return FromJson<::TelegramBotAPI::Type::TransactionPartnerTelegramApi>(Value);
    }
    else if (DiscriminatorValue == "user") {
        return FromJson<::TelegramBotAPI::Type::TransactionPartnerUser>(Value);
    }

    throw std::invalid_argument(
        "Unknown discriminator value for TransactionPartner: " + DiscriminatorValue
    );
}
template <typename T>
T Deserialize(
    const boost::json::value &Value
) {
    return FromJson<T>(Value);
}

}

#endif // TELEGRAMBOTAPI_JSON_DESERIALIZER_HPP
