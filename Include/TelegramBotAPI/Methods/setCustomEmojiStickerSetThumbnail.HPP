#ifndef TELEGRAMBOTAPI_METHOD_SETCUSTOMEMOJISTICKERSETTHUMBNAIL_HPP
#define TELEGRAMBOTAPI_METHOD_SETCUSTOMEMOJISTICKERSETTHUMBNAIL_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to set the thumbnail of a custom emoji sticker set. Returns True on success.

struct setCustomEmojiStickerSetThumbnailParameters {
    // Custom emoji identifier of a sticker from the sticker set; pass an empty string to drop the thumbnail and use the first sticker as the thumbnail
    std::optional<std::string> CustomEmojiID{};

    // Sticker set name
    std::string Name;

    setCustomEmojiStickerSetThumbnailParameters(const std::string &NameValue)
        : Name(NameValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (CustomEmojiID.has_value()) {
            Object["custom_emoji_id"] = JSON::ToJson(CustomEmojiID.value());
        }

        Object["name"] = JSON::ToJson(Name);

        return Object;
    }

    bool RequiresMultipart() const {
        return (CustomEmojiID.has_value() && JSON::RequiresMultipart(CustomEmojiID.value())) || JSON::RequiresMultipart(Name);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (CustomEmojiID.has_value()) {
            JSON::AddMultipartField(
                Form, "custom_emoji_id",
                CustomEmojiID.value());
        }

        JSON::AddMultipartField(
            Form, "name",
            Name);

        return Form;
    }

};

class setCustomEmojiStickerSetThumbnail {
public:
    using Parameters = setCustomEmojiStickerSetThumbnailParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setCustomEmojiStickerSetThumbnail";
    }

    explicit setCustomEmojiStickerSetThumbnail(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetCustomEmojiStickerSetThumbnail(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setCustomEmojiStickerSetThumbnail",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setCustomEmojiStickerSetThumbnail",
            ParametersValue.ToJson()
        );
    }

    bool SetCustomEmojiStickerSetThumbnail(std::string Name) {
        Parameters ParametersValue(
        Name
        );

        return SetCustomEmojiStickerSetThumbnail(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETCUSTOMEMOJISTICKERSETTHUMBNAIL_HPP
