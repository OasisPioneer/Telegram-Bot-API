#ifndef TELEGRAMBOTAPI_METHOD_SETSTICKERKEYWORDS_HPP
#define TELEGRAMBOTAPI_METHOD_SETSTICKERKEYWORDS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to change search keywords assigned to a regular or custom emoji sticker. The sticker must belong to a sticker set created by the bot. Returns True on success.

class setStickerKeywords {
    public:
        struct Parameters {
            // A JSON-serialized list of 0-20 search keywords for the sticker with total length of up to 64 characters
            std::optional<std::vector<std::string>> Keywords{};

            // File identifier of the sticker
            std::string Sticker;

            Parameters(const std::string &StickerValue)
                : Sticker(StickerValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (Keywords.has_value()) {
                    Object["keywords"] = JSON::ToJson(Keywords.value());
                }

                Object["sticker"] = JSON::ToJson(Sticker);

                return Object;
            }

            bool RequiresMultipart() const {
                return (Keywords.has_value() && JSON::RequiresMultipart(Keywords.value())) || JSON::RequiresMultipart(Sticker);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (Keywords.has_value()) {
                    JSON::AddMultipartField(
                        Form, "keywords",
                        Keywords.value());
                }

                JSON::AddMultipartField(
                    Form, "sticker",
                    Sticker);

                return Form;
            }

        };

        explicit setStickerKeywords(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetStickerKeywords(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setStickerKeywords",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setStickerKeywords",
                                      ParametersValue.ToJson());
        }

        bool SetStickerKeywords(std::string Sticker) {
            Parameters ParametersValue(
                Sticker
            );

            return SetStickerKeywords(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETSTICKERKEYWORDS_HPP
