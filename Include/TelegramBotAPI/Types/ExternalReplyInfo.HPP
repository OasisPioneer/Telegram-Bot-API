#ifndef TELEGRAMBOTAPI_EXTERNALREPLYINFO_HPP
#define TELEGRAMBOTAPI_EXTERNALREPLYINFO_HPP

#include "TelegramBotAPI/Types/Animation.HPP"
#include "TelegramBotAPI/Types/Audio.HPP"
#include "TelegramBotAPI/Types/Chat.HPP"
#include "TelegramBotAPI/Types/Checklist.HPP"
#include "TelegramBotAPI/Types/Contact.HPP"
#include "TelegramBotAPI/Types/Dice.HPP"
#include "TelegramBotAPI/Types/Document.HPP"
#include "TelegramBotAPI/Types/Game.HPP"
#include "TelegramBotAPI/Types/Giveaway.HPP"
#include "TelegramBotAPI/Types/GiveawayWinners.HPP"
#include "TelegramBotAPI/Types/Invoice.HPP"
#include "TelegramBotAPI/Types/LinkPreviewOptions.HPP"
#include "TelegramBotAPI/Types/LivePhoto.HPP"
#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/MessageOriginChannel.HPP"
#include "TelegramBotAPI/Types/MessageOriginChat.HPP"
#include "TelegramBotAPI/Types/MessageOriginHiddenUser.HPP"
#include "TelegramBotAPI/Types/MessageOriginUser.HPP"
#include "TelegramBotAPI/Types/PaidMediaInfo.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include "TelegramBotAPI/Types/Poll.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include "TelegramBotAPI/Types/Story.HPP"
#include "TelegramBotAPI/Types/Venue.HPP"
#include "TelegramBotAPI/Types/Video.HPP"
#include "TelegramBotAPI/Types/VideoNote.HPP"
#include "TelegramBotAPI/Types/Voice.HPP"
#include <optional>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Type {

struct ExternalReplyInfo {
    std::variant<::TelegramBotAPI::Type::MessageOriginUser, ::TelegramBotAPI::Type::MessageOriginHiddenUser, ::TelegramBotAPI::Type::MessageOriginChat, ::TelegramBotAPI::Type::MessageOriginChannel> Origin;
    std::optional<::TelegramBotAPI::Type::Chat> Chat{};
    std::optional<long long> MessageID{};
    std::optional<::TelegramBotAPI::Type::LinkPreviewOptions> LinkPreviewOptions{};
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
    std::optional<bool> HasMediaSpoiler{};
    std::optional<::TelegramBotAPI::Type::Checklist> Checklist{};
    std::optional<::TelegramBotAPI::Type::Contact> Contact{};
    std::optional<::TelegramBotAPI::Type::Dice> Dice{};
    std::optional<::TelegramBotAPI::Type::Game> Game{};
    std::optional<::TelegramBotAPI::Type::Giveaway> Giveaway{};
    std::optional<::TelegramBotAPI::Type::GiveawayWinners> GiveawayWinners{};
    std::optional<::TelegramBotAPI::Type::Invoice> Invoice{};
    std::optional<::TelegramBotAPI::Type::Location> Location{};
    std::optional<::TelegramBotAPI::Type::Poll> Poll{};
    std::optional<::TelegramBotAPI::Type::Venue> Venue{};
};

}

#endif // TELEGRAMBOTAPI_EXTERNALREPLYINFO_HPP
