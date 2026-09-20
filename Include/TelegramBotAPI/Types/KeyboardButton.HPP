#ifndef TELEGRAMBOTAPI_KEYBOARDBUTTON_HPP
#define TELEGRAMBOTAPI_KEYBOARDBUTTON_HPP

#include "TelegramBotAPI/Types/KeyboardButtonPollType.HPP"
#include "TelegramBotAPI/Types/KeyboardButtonRequestChat.HPP"
#include "TelegramBotAPI/Types/KeyboardButtonRequestManagedBot.HPP"
#include "TelegramBotAPI/Types/KeyboardButtonRequestUsers.HPP"
#include "TelegramBotAPI/Types/WebAppInfo.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct KeyboardButton {
    std::string Text;
    std::optional<std::string> IconCustomEmojiID{};
    std::optional<std::string> Style{};
    std::optional<::TelegramBotAPI::Type::KeyboardButtonRequestUsers> RequestUsers{};
    std::optional<::TelegramBotAPI::Type::KeyboardButtonRequestChat> RequestChat{};
    std::optional<::TelegramBotAPI::Type::KeyboardButtonRequestManagedBot> RequestManagedBot{};
    std::optional<bool> RequestContact{};
    std::optional<bool> RequestLocation{};
    std::optional<::TelegramBotAPI::Type::KeyboardButtonPollType> RequestPoll{};
    std::optional<::TelegramBotAPI::Type::WebAppInfo> WebApp{};
};

}

#endif // TELEGRAMBOTAPI_KEYBOARDBUTTON_HPP
