#ifndef TELEGRAMBOTAPI_STORYAREATYPEWEATHER_HPP
#define TELEGRAMBOTAPI_STORYAREATYPEWEATHER_HPP

#include <string>

namespace TelegramBotAPI::Type {

struct StoryAreaTypeWeather {
    std::string Type;
    double Temperature;
    std::string Emoji;
    long long BackgroundColor;
};

}

#endif // TELEGRAMBOTAPI_STORYAREATYPEWEATHER_HPP
