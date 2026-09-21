#ifndef TELEGRAMBOTAPI_METHOD_SETCHATMENUBUTTON_HPP
#define TELEGRAMBOTAPI_METHOD_SETCHATMENUBUTTON_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/MenuButtonCommands.HPP"
#include "TelegramBotAPI/Types/MenuButtonDefault.HPP"
#include "TelegramBotAPI/Types/MenuButtonWebApp.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to change the bot's menu button in a private chat, or the default menu button. Returns True on success.

struct setChatMenuButtonParameters {
    // Unique identifier for the target private chat. If not specified, the bot's default menu button will be changed.
    std::optional<long long> ChatID{};

    // A JSON-serialized object for the bot's new menu button. Defaults to MenuButtonDefault.
    std::optional<std::variant<::TelegramBotAPI::Type::MenuButtonCommands, ::TelegramBotAPI::Type::MenuButtonWebApp, ::TelegramBotAPI::Type::MenuButtonDefault>> MenuButton{};

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (ChatID.has_value()) {
            Object["chat_id"] = JSON::ToJson(ChatID.value());
        }

        if (MenuButton.has_value()) {
            Object["menu_button"] = JSON::ToJson(MenuButton.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (ChatID.has_value() && JSON::RequiresMultipart(ChatID.value())) || (MenuButton.has_value() && JSON::RequiresMultipart(MenuButton.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (ChatID.has_value()) {
            JSON::AddMultipartField(
                Form, "chat_id",
                ChatID.value());
        }

        if (MenuButton.has_value()) {
            JSON::AddMultipartField(
                Form, "menu_button",
                MenuButton.value());
        }

        return Form;
    }

};

class setChatMenuButton {
public:
    using Parameters = setChatMenuButtonParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setChatMenuButton";
    }

    explicit setChatMenuButton(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetChatMenuButton(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setChatMenuButton",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setChatMenuButton",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETCHATMENUBUTTON_HPP
