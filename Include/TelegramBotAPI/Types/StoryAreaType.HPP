#ifndef TELEGRAMBOTAPI_STORYAREATYPE_HPP
#define TELEGRAMBOTAPI_STORYAREATYPE_HPP

#include "TelegramBotAPI/Types/StoryAreaTypeLink.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeLocation.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeSuggestedReaction.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeUniqueGift.HPP"
#include "TelegramBotAPI/Types/StoryAreaTypeWeather.HPP"
#include <variant>

namespace TelegramBotAPI::Type {

using StoryAreaType = std::variant<::TelegramBotAPI::Type::StoryAreaTypeLocation, ::TelegramBotAPI::Type::StoryAreaTypeSuggestedReaction, ::TelegramBotAPI::Type::StoryAreaTypeLink, ::TelegramBotAPI::Type::StoryAreaTypeWeather, ::TelegramBotAPI::Type::StoryAreaTypeUniqueGift>;

}

#endif // TELEGRAMBOTAPI_STORYAREATYPE_HPP
