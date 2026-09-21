#ifndef TELEGRAMBOTAPI_METHOD_SETCHATTITLE_HPP
#define TELEGRAMBOTAPI_METHOD_SETCHATTITLE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to change the title of a chat. Titles can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.

struct setChatTitleParameters {
    // Unique identifier for the target chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    // New chat title, 1-128 characters
    std::string Title;

    setChatTitleParameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &TitleValue)
        : ChatID(ChatIDValue), Title(TitleValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["title"] = JSON::ToJson(Title);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(Title);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        JSON::AddMultipartField(
            Form, "title",
            Title);

        return Form;
    }

};

class setChatTitle {
public:
    using Parameters = setChatTitleParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setChatTitle";
    }

    explicit setChatTitle(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetChatTitle(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setChatTitle",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setChatTitle",
            ParametersValue.ToJson()
        );
    }

    bool SetChatTitle(std::variant<long long, std::string> ChatID, std::string Title) {
        Parameters ParametersValue(
        ChatID,
        Title
        );

        return SetChatTitle(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETCHATTITLE_HPP
