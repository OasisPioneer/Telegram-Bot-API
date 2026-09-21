#ifndef TELEGRAMBOTAPI_METHOD_SETCHATDESCRIPTION_HPP
#define TELEGRAMBOTAPI_METHOD_SETCHATDESCRIPTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to change the description of a group, a supergroup or a channel. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.

struct setChatDescriptionParameters {
    // Unique identifier for the target chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    // New chat description, 0-255 characters
    std::optional<std::string> Description{};

    setChatDescriptionParameters(const std::variant<long long, std::string> &ChatIDValue)
        : ChatID(ChatIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (Description.has_value()) {
            Object["description"] = JSON::ToJson(Description.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || (Description.has_value() && JSON::RequiresMultipart(Description.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (Description.has_value()) {
            JSON::AddMultipartField(
                Form, "description",
                Description.value());
        }

        return Form;
    }

};

class setChatDescription {
public:
    using Parameters = setChatDescriptionParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setChatDescription";
    }

    explicit setChatDescription(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetChatDescription(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setChatDescription",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setChatDescription",
            ParametersValue.ToJson()
        );
    }

    bool SetChatDescription(std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        ChatID
        );

        return SetChatDescription(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETCHATDESCRIPTION_HPP
