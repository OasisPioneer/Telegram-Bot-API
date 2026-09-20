#ifndef TELEGRAMBOTAPI_BUSINESSINTRO_HPP
#define TELEGRAMBOTAPI_BUSINESSINTRO_HPP

#include "TelegramBotAPI/Types/Sticker.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct BusinessIntro {
    std::optional<std::string> Title{};
    std::optional<std::string> Message{};
    std::optional<::TelegramBotAPI::Type::Sticker> Sticker{};
};

}

#endif // TELEGRAMBOTAPI_BUSINESSINTRO_HPP
