#ifndef TELEGRAMBOTAPI_METHOD_DELETESTICKERSET_HPP
#define TELEGRAMBOTAPI_METHOD_DELETESTICKERSET_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to delete a sticker set that was created by the bot. Returns True on success.
        // The following methods and objects allow your bot to handle and send rich messages.

class deleteStickerSet {
    public:
        struct Parameters {
            // Sticker set name
            std::string Name;

            Parameters(const std::string &NameValue)
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

        explicit deleteStickerSet(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool DeleteStickerSet(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("deleteStickerSet",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("deleteStickerSet",
                                      ParametersValue.ToJson());
        }

        bool DeleteStickerSet(std::string Name) {
            Parameters ParametersValue(
                Name
            );

            return DeleteStickerSet(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETESTICKERSET_HPP
