#ifndef TELEGRAMBOTAPI_METHOD_SETMYDESCRIPTION_HPP
#define TELEGRAMBOTAPI_METHOD_SETMYDESCRIPTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to change the bot's description, which is shown in the chat with the bot if the chat is empty. Returns True on success.

struct setMyDescriptionParameters {
    // New bot description; 0-512 characters. Pass an empty string to remove the dedicated description for the given language.
    std::optional<std::string> Description{};

    // A two-letter ISO 639-1 language code. If empty, the description will be applied to all users for whose language there is no dedicated description.
    std::optional<std::string> LanguageCode{};

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (Description.has_value()) {
            Object["description"] = JSON::ToJson(Description.value());
        }

        if (LanguageCode.has_value()) {
            Object["language_code"] = JSON::ToJson(LanguageCode.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (Description.has_value() && JSON::RequiresMultipart(Description.value())) || (LanguageCode.has_value() && JSON::RequiresMultipart(LanguageCode.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (Description.has_value()) {
            JSON::AddMultipartField(
                Form, "description",
                Description.value());
        }

        if (LanguageCode.has_value()) {
            JSON::AddMultipartField(
                Form, "language_code",
                LanguageCode.value());
        }

        return Form;
    }

};

class setMyDescription {
public:
    using Parameters = setMyDescriptionParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setMyDescription";
    }

    explicit setMyDescription(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetMyDescription(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setMyDescription",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setMyDescription",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETMYDESCRIPTION_HPP
