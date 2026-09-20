#ifndef TELEGRAMBOTAPI_METHOD_SETCHATSTICKERSET_HPP
#define TELEGRAMBOTAPI_METHOD_SETCHATSTICKERSET_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to set a new group sticker set for a supergroup. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Use the field can_set_sticker_set optionally returned in getChat requests to check if the bot can use this method. Returns True on success.

class setChatStickerSet {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target supergroup in the format @username
            std::variant<long long, std::string> ChatID;

            // Name of the sticker set to be set as the group sticker set
            std::string StickerSetName;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &StickerSetNameValue)
                : ChatID(ChatIDValue), StickerSetName(StickerSetNameValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["sticker_set_name"] = JSON::ToJson(StickerSetName);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(StickerSetName);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                JSON::AddMultipartField(
                    Form, "sticker_set_name",
                    StickerSetName);

                return Form;
            }

        };

        explicit setChatStickerSet(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetChatStickerSet(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setChatStickerSet",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setChatStickerSet",
                                      ParametersValue.ToJson());
        }

        bool SetChatStickerSet(std::variant<long long, std::string> ChatID, std::string StickerSetName) {
            Parameters ParametersValue(
                ChatID,
                StickerSetName
            );

            return SetChatStickerSet(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETCHATSTICKERSET_HPP
