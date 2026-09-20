#ifndef TELEGRAMBOTAPI_METHOD_SETSTICKERMASKPOSITION_HPP
#define TELEGRAMBOTAPI_METHOD_SETSTICKERMASKPOSITION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/MaskPosition.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to change the mask position of a mask sticker. The sticker must belong to a sticker set that was created by the bot. Returns True on success.

class setStickerMaskPosition {
    public:
        struct Parameters {
            // A JSON-serialized object with the position where the mask should be placed on faces. Omit the parameter to remove the mask position.
            std::optional<::TelegramBotAPI::Type::MaskPosition> MaskPosition{};

            // File identifier of the sticker
            std::string Sticker;

            Parameters(const std::string &StickerValue)
                : Sticker(StickerValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (MaskPosition.has_value()) {
                    Object["mask_position"] = JSON::ToJson(MaskPosition.value());
                }

                Object["sticker"] = JSON::ToJson(Sticker);

                return Object;
            }

            bool RequiresMultipart() const {
                return (MaskPosition.has_value() && JSON::RequiresMultipart(MaskPosition.value())) || JSON::RequiresMultipart(Sticker);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (MaskPosition.has_value()) {
                    JSON::AddMultipartField(
                        Form, "mask_position",
                        MaskPosition.value());
                }

                JSON::AddMultipartField(
                    Form, "sticker",
                    Sticker);

                return Form;
            }

        };

        explicit setStickerMaskPosition(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetStickerMaskPosition(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setStickerMaskPosition",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setStickerMaskPosition",
                                      ParametersValue.ToJson());
        }

        bool SetStickerMaskPosition(std::string Sticker) {
            Parameters ParametersValue(
                Sticker
            );

            return SetStickerMaskPosition(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETSTICKERMASKPOSITION_HPP
