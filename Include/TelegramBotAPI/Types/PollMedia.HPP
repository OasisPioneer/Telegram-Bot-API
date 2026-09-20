#ifndef TELEGRAMBOTAPI_POLLMEDIA_HPP
#define TELEGRAMBOTAPI_POLLMEDIA_HPP

#include "TelegramBotAPI/Types/Animation.HPP"
#include "TelegramBotAPI/Types/Audio.HPP"
#include "TelegramBotAPI/Types/Document.HPP"
#include "TelegramBotAPI/Types/Link.HPP"
#include "TelegramBotAPI/Types/LivePhoto.HPP"
#include "TelegramBotAPI/Types/Location.HPP"
#include "TelegramBotAPI/Types/PhotoSize.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include "TelegramBotAPI/Types/Venue.HPP"
#include "TelegramBotAPI/Types/Video.HPP"
#include <optional>
#include <vector>

namespace TelegramBotAPI::Type {

struct PollMedia {
    std::optional<::TelegramBotAPI::Type::Animation> Animation{};
    std::optional<::TelegramBotAPI::Type::Audio> Audio{};
    std::optional<::TelegramBotAPI::Type::Document> Document{};
    std::optional<::TelegramBotAPI::Type::Link> Link{};
    std::optional<::TelegramBotAPI::Type::LivePhoto> LivePhoto{};
    std::optional<::TelegramBotAPI::Type::Location> Location{};
    std::optional<std::vector<::TelegramBotAPI::Type::PhotoSize>> Photo{};
    std::optional<::TelegramBotAPI::Type::Sticker> Sticker{};
    std::optional<::TelegramBotAPI::Type::Venue> Venue{};
    std::optional<::TelegramBotAPI::Type::Video> Video{};
};

}

#endif // TELEGRAMBOTAPI_POLLMEDIA_HPP
