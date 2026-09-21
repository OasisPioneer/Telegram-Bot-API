#ifndef TELEGRAMBOTAPI_METHOD_DELETESTICKERFROMSET_HPP
#define TELEGRAMBOTAPI_METHOD_DELETESTICKERFROMSET_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to delete a sticker from a set created by the bot. Returns True on success.

struct deleteStickerFromSetParameters {
    // File identifier of the sticker
    std::string Sticker;

    deleteStickerFromSetParameters(const std::string &StickerValue)
        : Sticker(StickerValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["sticker"] = JSON::ToJson(Sticker);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Sticker);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "sticker",
            Sticker);

        return Form;
    }

};

class deleteStickerFromSet {
public:
    using Parameters = deleteStickerFromSetParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "deleteStickerFromSet";
    }

    explicit deleteStickerFromSet(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool DeleteStickerFromSet(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "deleteStickerFromSet",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "deleteStickerFromSet",
            ParametersValue.ToJson()
        );
    }

    bool DeleteStickerFromSet(std::string Sticker) {
        Parameters ParametersValue(
        Sticker
        );

        return DeleteStickerFromSet(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETESTICKERFROMSET_HPP
