#ifndef TELEGRAMBOTAPI_POLLMEDIA_HPP
#define TELEGRAMBOTAPI_POLLMEDIA_HPP

#include <optional>
#include <vector>

#include "Animation.HPP"
#include "Audio.HPP"
#include "Document.HPP"
#include "Link.HPP"
#include "LivePhoto.HPP"
#include "Location.HPP"
#include "PhotoSize.HPP"
#include "Sticker.HPP"
#include "Venue.HPP"
#include "Video.HPP"

namespace TelegramBotAPI::Type {
    struct PollMedia {
            std::optional<TelegramBotAPI::Type::Animation> Animation{};
            std::optional<TelegramBotAPI::Type::Audio>     Audio{};
            std::optional<TelegramBotAPI::Type::Document>  Document{};
            std::optional<TelegramBotAPI::Type::Link>      Link{};
            std::optional<TelegramBotAPI::Type::LivePhoto> LivePhoto{};
            std::optional<TelegramBotAPI::Type::Location>  Location{};
            std::optional<std::vector<PhotoSize>>          Photo{};
            std::optional<TelegramBotAPI::Type::Sticker>   Sticker{};
            std::optional<TelegramBotAPI::Type::Venue>     Venue{};
            std::optional<TelegramBotAPI::Type::Video>     Video{};
    };
} // namespace TelegramBotAPI::Type

#endif // TELEGRAMBOTAPI_POLLMEDIA_HPP