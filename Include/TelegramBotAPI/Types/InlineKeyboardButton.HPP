#ifndef TELEGRAMBOTAPI_INLINEKEYBOARDBUTTON_HPP
#define TELEGRAMBOTAPI_INLINEKEYBOARDBUTTON_HPP

#include "TelegramBotAPI/Types/CallbackGame.HPP"
#include "TelegramBotAPI/Types/CopyTextButton.HPP"
#include "TelegramBotAPI/Types/DisabledButton.HPP"
#include "TelegramBotAPI/Types/LoginUrl.HPP"
#include "TelegramBotAPI/Types/SwitchInlineQueryChosenChat.HPP"
#include "TelegramBotAPI/Types/WebAppInfo.HPP"
#include <optional>
#include <string>

namespace TelegramBotAPI::Type {

struct InlineKeyboardButton {
    std::string Text;
    std::optional<std::string> IconCustomEmojiID{};
    std::optional<std::string> Style{};
    std::optional<std::string> URL{};
    std::optional<std::string> CallbackData{};
    std::optional<::TelegramBotAPI::Type::WebAppInfo> WebApp{};
    std::optional<::TelegramBotAPI::Type::LoginUrl> LoginURL{};
    std::optional<std::string> SwitchInlineQuery{};
    std::optional<std::string> SwitchInlineQueryCurrentChat{};
    std::optional<::TelegramBotAPI::Type::SwitchInlineQueryChosenChat> SwitchInlineQueryChosenChat{};
    std::optional<::TelegramBotAPI::Type::CopyTextButton> CopyText{};
    std::optional<::TelegramBotAPI::Type::CallbackGame> CallbackGame{};
    std::optional<bool> Pay{};
    std::optional<::TelegramBotAPI::Type::DisabledButton> Disabled{};
};

}

#endif // TELEGRAMBOTAPI_INLINEKEYBOARDBUTTON_HPP
