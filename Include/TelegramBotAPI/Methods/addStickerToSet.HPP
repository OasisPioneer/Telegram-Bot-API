#ifndef TELEGRAMBOTAPI_METHOD_ADDSTICKERTOSET_HPP
#define TELEGRAMBOTAPI_METHOD_ADDSTICKERTOSET_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InputSticker.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to add a new sticker to a set created by the bot. Emoji sticker sets can have up to 200 stickers. Other sticker sets can have up to 120 stickers. Returns True on success.

struct addStickerToSetParameters {
    // Sticker set name
    std::string Name;

    // A JSON-serialized object with information about the added sticker. If exactly the same sticker had already been added to the set, then the set isn't changed.
    ::TelegramBotAPI::Type::InputSticker Sticker;

    // User identifier of sticker set owner
    long long UserID;

    addStickerToSetParameters(const std::string &NameValue, const ::TelegramBotAPI::Type::InputSticker &StickerValue, const long long &UserIDValue)
        : Name(NameValue), Sticker(StickerValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["name"] = JSON::ToJson(Name);

        Object["sticker"] = JSON::ToJson(Sticker);

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Name) || JSON::RequiresMultipart(Sticker) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "name",
            Name);

        JSON::AddMultipartField(
            Form, "sticker",
            Sticker);

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class addStickerToSet {
public:
    using Parameters = addStickerToSetParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "addStickerToSet";
    }

    explicit addStickerToSet(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool AddStickerToSet(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "addStickerToSet",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "addStickerToSet",
            ParametersValue.ToJson()
        );
    }

    bool AddStickerToSet(std::string Name, ::TelegramBotAPI::Type::InputSticker Sticker, long long UserID) {
        Parameters ParametersValue(
        Name,
        Sticker,
        UserID
        );

        return AddStickerToSet(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_ADDSTICKERTOSET_HPP
