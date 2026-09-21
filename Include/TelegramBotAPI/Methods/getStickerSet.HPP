#ifndef TELEGRAMBOTAPI_METHOD_GETSTICKERSET_HPP
#define TELEGRAMBOTAPI_METHOD_GETSTICKERSET_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/StickerSet.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to get a sticker set. On success, a StickerSet object is returned.

struct getStickerSetParameters {
    // Name of the sticker set
    std::string Name;

    getStickerSetParameters(const std::string &NameValue)
        : Name(NameValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["name"] = JSON::ToJson(Name);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Name);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "name",
            Name);

        return Form;
    }

};

class getStickerSet {
public:
    using Parameters = getStickerSetParameters;
    using ReturnType = ::TelegramBotAPI::Type::StickerSet;

    static constexpr const char *Name() noexcept {
        return "getStickerSet";
    }

    explicit getStickerSet(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::StickerSet GetStickerSet(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::StickerSet>(
                "getStickerSet",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::StickerSet>(
            "getStickerSet",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::StickerSet GetStickerSet(std::string Name) {
        Parameters ParametersValue(
        Name
        );

        return GetStickerSet(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETSTICKERSET_HPP
