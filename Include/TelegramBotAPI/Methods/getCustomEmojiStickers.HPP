#ifndef TELEGRAMBOTAPI_METHOD_GETCUSTOMEMOJISTICKERS_HPP
#define TELEGRAMBOTAPI_METHOD_GETCUSTOMEMOJISTICKERS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Sticker.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to get information about custom emoji stickers by their identifiers. Returns an Array of Sticker objects.

struct getCustomEmojiStickersParameters {
    // A JSON-serialized list of custom emoji identifiers. At most 200 custom emoji identifiers can be specified.
    std::vector<std::string> CustomEmojiIDs;

    getCustomEmojiStickersParameters(const std::vector<std::string> &CustomEmojiIDsValue)
        : CustomEmojiIDs(CustomEmojiIDsValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["custom_emoji_ids"] = JSON::ToJson(CustomEmojiIDs);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(CustomEmojiIDs);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "custom_emoji_ids",
            CustomEmojiIDs);

        return Form;
    }

};

class getCustomEmojiStickers {
public:
    using Parameters = getCustomEmojiStickersParameters;
    using ReturnType = std::vector<::TelegramBotAPI::Type::Sticker>;

    static constexpr const char *Name() noexcept {
        return "getCustomEmojiStickers";
    }

    explicit getCustomEmojiStickers(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::vector<::TelegramBotAPI::Type::Sticker> GetCustomEmojiStickers(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::vector<::TelegramBotAPI::Type::Sticker>>(
                "getCustomEmojiStickers",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::vector<::TelegramBotAPI::Type::Sticker>>(
            "getCustomEmojiStickers",
            ParametersValue.ToJson()
        );
    }

    std::vector<::TelegramBotAPI::Type::Sticker> GetCustomEmojiStickers(std::vector<std::string> CustomEmojiIDs) {
        Parameters ParametersValue(
        CustomEmojiIDs
        );

        return GetCustomEmojiStickers(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETCUSTOMEMOJISTICKERS_HPP
