#ifndef TELEGRAMBOTAPI_METHOD_GETMYDESCRIPTION_HPP
#define TELEGRAMBOTAPI_METHOD_GETMYDESCRIPTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/BotDescription.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to get the current bot description for the given user language. Returns BotDescription on success.

struct getMyDescriptionParameters {
    // A two-letter ISO 639-1 language code or an empty string
    std::optional<std::string> LanguageCode{};

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (LanguageCode.has_value()) {
            Object["language_code"] = JSON::ToJson(LanguageCode.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (LanguageCode.has_value() && JSON::RequiresMultipart(LanguageCode.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (LanguageCode.has_value()) {
            JSON::AddMultipartField(
                Form, "language_code",
                LanguageCode.value());
        }

        return Form;
    }

};

class getMyDescription {
public:
    using Parameters = getMyDescriptionParameters;
    using ReturnType = ::TelegramBotAPI::Type::BotDescription;

    static constexpr const char *Name() noexcept {
        return "getMyDescription";
    }

    explicit getMyDescription(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::BotDescription GetMyDescription(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::BotDescription>(
                "getMyDescription",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::BotDescription>(
            "getMyDescription",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETMYDESCRIPTION_HPP
