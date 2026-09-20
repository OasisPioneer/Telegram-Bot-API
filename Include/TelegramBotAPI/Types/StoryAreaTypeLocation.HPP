#ifndef TELEGRAMBOTAPI_STORYAREATYPELOCATION_HPP
#define TELEGRAMBOTAPI_STORYAREATYPELOCATION_HPP

#include "TelegramBotAPI/Types/LocationAddress.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct StoryAreaTypeLocation {
    std::string Type;
    double Latitude;
    double Longitude;
    std::optional<::TelegramBotAPI::Type::LocationAddress> Address{};
};

}

#endif // TELEGRAMBOTAPI_STORYAREATYPELOCATION_HPP
