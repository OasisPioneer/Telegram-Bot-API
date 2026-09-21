#ifndef TELEGRAMBOTAPI_METHOD_SETSTICKERPOSITIONINSET_HPP
#define TELEGRAMBOTAPI_METHOD_SETSTICKERPOSITIONINSET_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

    // Use this method to move a sticker in a set created by the bot to a specific position. Returns True on success.

struct setStickerPositionInSetParameters {
    // New sticker position in the set, zero-based
    long long Position;

    // File identifier of the sticker
    std::string Sticker;

    setStickerPositionInSetParameters(const long long &PositionValue, const std::string &StickerValue)
        : Position(PositionValue), Sticker(StickerValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["position"] = JSON::ToJson(Position);

        Object["sticker"] = JSON::ToJson(Sticker);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(Position) || JSON::RequiresMultipart(Sticker);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "position",
            Position);

        JSON::AddMultipartField(
            Form, "sticker",
            Sticker);

        return Form;
    }

};

class setStickerPositionInSet {
public:
    using Parameters = setStickerPositionInSetParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setStickerPositionInSet";
    }

    explicit setStickerPositionInSet(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetStickerPositionInSet(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setStickerPositionInSet",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setStickerPositionInSet",
            ParametersValue.ToJson()
        );
    }

    bool SetStickerPositionInSet(long long Position, std::string Sticker) {
        Parameters ParametersValue(
        Position,
        Sticker
        );

        return SetStickerPositionInSet(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETSTICKERPOSITIONINSET_HPP
