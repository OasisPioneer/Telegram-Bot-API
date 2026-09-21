#ifndef TELEGRAMBOTAPI_METHOD_SETSTICKERSETTITLE_HPP
#define TELEGRAMBOTAPI_METHOD_SETSTICKERSETTITLE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to set the title of a created sticker set. Returns True on success.

struct setStickerSetTitleParameters {
    // Sticker set name
    std::string Name;

    // Sticker set title, 1-64 characters
    std::string Title;

    setStickerSetTitleParameters(const std::string &NameValue, const std::string &TitleValue)
        : Name(NameValue), Title(TitleValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["name"] = JSON::ToJson(Name);

        Object["title"] = JSON::ToJson(Title);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Name) || JSON::RequiresMultipart(Title);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "name",
            Name);

        JSON::AddMultipartField(
            Form, "title",
            Title);

        return Form;
    }

};

class setStickerSetTitle {
public:
    using Parameters = setStickerSetTitleParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setStickerSetTitle";
    }

    explicit setStickerSetTitle(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetStickerSetTitle(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setStickerSetTitle",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setStickerSetTitle",
            ParametersValue.ToJson()
        );
    }

    bool SetStickerSetTitle(std::string Name, std::string Title) {
        Parameters ParametersValue(
        Name,
        Title
        );

        return SetStickerSetTitle(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETSTICKERSETTITLE_HPP
