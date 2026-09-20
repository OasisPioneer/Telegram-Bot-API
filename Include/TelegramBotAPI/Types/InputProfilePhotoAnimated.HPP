#ifndef TELEGRAMBOTAPI_INPUTPROFILEPHOTOANIMATED_HPP
#define TELEGRAMBOTAPI_INPUTPROFILEPHOTOANIMATED_HPP

#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InputProfilePhotoAnimated {
    std::string Type;
    std::string Animation;
    std::optional<double> MainFrameTimestamp{};
};

}

#endif // TELEGRAMBOTAPI_INPUTPROFILEPHOTOANIMATED_HPP
