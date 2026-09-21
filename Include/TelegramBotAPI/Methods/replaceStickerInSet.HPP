#ifndef TELEGRAMBOTAPI_METHOD_REPLACESTICKERINSET_HPP
#define TELEGRAMBOTAPI_METHOD_REPLACESTICKERINSET_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InputSticker.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to replace an existing sticker in a sticker set with a new one. The method is equivalent to calling deleteStickerFromSet, then addStickerToSet, then setStickerPositionInSet. Returns True on success.

struct replaceStickerInSetParameters {
    // Sticker set name
    std::string Name;

    // File identifier of the replaced sticker
    std::string OldSticker;

    // A JSON-serialized object with information about the added sticker. If exactly the same sticker had already been added to the set, then the set remains unchanged.
    ::TelegramBotAPI::Type::InputSticker Sticker;

    // User identifier of the sticker set owner
    long long UserID;

    replaceStickerInSetParameters(const std::string &NameValue, const std::string &OldStickerValue, const ::TelegramBotAPI::Type::InputSticker &StickerValue, const long long &UserIDValue)
        : Name(NameValue), OldSticker(OldStickerValue), Sticker(StickerValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["name"] = JSON::ToJson(Name);

        Object["old_sticker"] = JSON::ToJson(OldSticker);

        Object["sticker"] = JSON::ToJson(Sticker);

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Name) || JSON::RequiresMultipart(OldSticker) || JSON::RequiresMultipart(Sticker) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "name",
            Name);

        JSON::AddMultipartField(
            Form, "old_sticker",
            OldSticker);

        JSON::AddMultipartField(
            Form, "sticker",
            Sticker);

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class replaceStickerInSet {
public:
    using Parameters = replaceStickerInSetParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "replaceStickerInSet";
    }

    explicit replaceStickerInSet(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool ReplaceStickerInSet(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "replaceStickerInSet",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "replaceStickerInSet",
            ParametersValue.ToJson()
        );
    }

    bool ReplaceStickerInSet(std::string Name, std::string OldSticker, ::TelegramBotAPI::Type::InputSticker Sticker, long long UserID) {
        Parameters ParametersValue(
        Name,
        OldSticker,
        Sticker,
        UserID
        );

        return ReplaceStickerInSet(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_REPLACESTICKERINSET_HPP
