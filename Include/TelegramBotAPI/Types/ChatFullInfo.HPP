#ifndef TELEGRAMBOTAPI_CHATFULLINFO_HPP
#define TELEGRAMBOTAPI_CHATFULLINFO_HPP

#include "TelegramBotAPI/Types/AcceptedGiftTypes.HPP"
#include "TelegramBotAPI/Types/Audio.HPP"
#include "TelegramBotAPI/Types/Birthdate.HPP"
#include "TelegramBotAPI/Types/BusinessIntro.HPP"
#include "TelegramBotAPI/Types/BusinessLocation.HPP"
#include "TelegramBotAPI/Types/BusinessOpeningHours.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/ChatLocation.HPP"
#include "TelegramBotAPI/Types/ChatPermissions.HPP"
#include "TelegramBotAPI/Types/ChatPhoto.HPP"
#include "TelegramBotAPI/Types/Community.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/ReactionTypeCustomEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypeEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypePaid.HPP"
#include "TelegramBotAPI/Types/UniqueGiftColors.HPP"
#include "TelegramBotAPI/Types/User.HPP"
#include "TelegramBotAPI/Types/UserRating.HPP"
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Type {

struct ChatFullInfo {
    long long ID;
    std::string Type;
    std::optional<std::string> Title{};
    std::optional<std::string> UserName{};
    std::optional<std::string> FirstName{};
    std::optional<std::string> LastName{};
    std::optional<bool> IsForum{};
    std::optional<bool> IsDirectMessages{};
    long long AccentColorID;
    long long MaxReactionCount;
    std::optional<::TelegramBotAPI::Type::ChatPhoto> Photo{};
    std::optional<std::vector<std::string>> ActiveUsernames{};
    std::optional<::TelegramBotAPI::Type::Birthdate> Birthdate{};
    std::optional<::TelegramBotAPI::Type::BusinessIntro> BusinessIntro{};
    std::optional<::TelegramBotAPI::Type::BusinessLocation> BusinessLocation{};
    std::optional<::TelegramBotAPI::Type::BusinessOpeningHours> BusinessOpeningHours{};
    std::optional<::TelegramBotAPI::Type::Chat> PersonalChat{};
    std::optional<::TelegramBotAPI::Type::Chat> ParentChat{};
    std::optional<std::vector<std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>>> AvailableReactions{};
    std::optional<std::string> BackgroundCustomEmojiID{};
    std::optional<long long> ProfileAccentColorID{};
    std::optional<std::string> ProfileBackgroundCustomEmojiID{};
    std::optional<std::string> EmojiStatusCustomEmojiID{};
    std::optional<long long> EmojiStatusExpirationDate{};
    std::optional<std::string> Bio{};
    std::optional<bool> HasPrivateForwards{};
    std::optional<bool> HasRestrictedVoiceAndVideoMessages{};
    std::optional<bool> JoinToSendMessages{};
    std::optional<bool> JoinByRequest{};
    std::optional<std::string> Description{};
    std::optional<std::string> InviteLink{};
    std::optional<::TelegramBotAPI::Type::Message> PinnedMessage{};
    std::optional<::TelegramBotAPI::Type::ChatPermissions> Permissions{};
    ::TelegramBotAPI::Type::AcceptedGiftTypes AcceptedGiftTypes;
    std::optional<bool> CanSendPaidMedia{};
    std::optional<long long> SlowModeDelay{};
    std::optional<long long> UnrestrictBoostCount{};
    std::optional<long long> MessageAutoDeleteTime{};
    std::optional<bool> HasAggressiveAntiSpamEnabled{};
    std::optional<bool> HasHiddenMembers{};
    std::optional<bool> HasProtectedContent{};
    std::optional<bool> HasVisibleHistory{};
    std::optional<std::string> StickerSetName{};
    std::optional<bool> CanSetStickerSet{};
    std::optional<std::string> CustomEmojiStickerSetName{};
    std::optional<long long> LinkedChatID{};
    std::optional<::TelegramBotAPI::Type::ChatLocation> Location{};
    std::optional<::TelegramBotAPI::Type::UserRating> Rating{};
    std::optional<::TelegramBotAPI::Type::Audio> FirstProfileAudio{};
    std::optional<::TelegramBotAPI::Type::UniqueGiftColors> UniqueGiftColors{};
    std::optional<long long> PaidMessageStarCount{};
    std::optional<::TelegramBotAPI::Type::User> GuardBot{};
    std::optional<::TelegramBotAPI::Type::Community> Community{};
};

}

#endif // TELEGRAMBOTAPI_CHATFULLINFO_HPP
