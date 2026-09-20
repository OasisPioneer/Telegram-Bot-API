#ifndef TELEGRAMBOTAPI_STORYAREA_HPP
#define TELEGRAMBOTAPI_STORYAREA_HPP

#include "TelegramBotAPI/Types/StoryAreaPosition.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeLink.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeLocation.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeSuggestedReaction.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeUniqueGift.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeWeather.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

struct StoryArea {
    ::TelegramBotAPI::Type::StoryAreaPosition Position;
    std::variant<::TelegramBotAPI::Type::StoryAreaTypeLocation, ::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction, ::TelegramBotAPI::Type::StoryAreaTypeLink, ::TelegramBotAPI::Type::StoryAreaTypeWeather, ::TelegramBotAPI::Type::StoryAreaTypeUniqueGift> Type;
};

}

#endif // TELEGRAMBOTAPI_STORYAREA_HPP
