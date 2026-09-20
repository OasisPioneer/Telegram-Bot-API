#ifndef TELEGRAMBOTAPI_METHOD_SETSTICKEREMOJILIST_HPP
#define TELEGRAMBOTAPI_METHOD_SETSTICKEREMOJILIST_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to change the list of emoji assigned to a regular or custom emoji sticker. The sticker must belong to a sticker set created by the bot. Returns True on success.

class setStickerEmojiList {
    public:
        struct Parameters {
            // A JSON-serialized list of 1-20 emoji associated with the sticker
            std::vector<std::string> EmojiList;

            // File identifier of the sticker
            std::string Sticker;

            Parameters(const std::vector<std::string> &EmojiListValue, const std::string &StickerValue)
                : EmojiList(EmojiListValue), Sticker(StickerValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["emoji_list"] = JSON::ToJson(EmojiList);

                Object["sticker"] = JSON::ToJson(Sticker);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(EmojiList) || JSON::RequiresMultipart(Sticker);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "emoji_list",
                    EmojiList);

                JSON::AddMultipartField(
                    Form, "sticker",
                    Sticker);

                return Form;
            }

        };

        explicit setStickerEmojiList(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetStickerEmojiList(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setStickerEmojiList",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setStickerEmojiList",
                                      ParametersValue.ToJson());
        }

        bool SetStickerEmojiList(std::vector<std::string> EmojiList, std::string Sticker) {
            Parameters ParametersValue(
                EmojiList,
                Sticker
            );

            return SetStickerEmojiList(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETSTICKEREMOJILIST_HPP
