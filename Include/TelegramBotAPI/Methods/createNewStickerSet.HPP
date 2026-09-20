#ifndef TELEGRAMBOTAPI_METHOD_CREATENEWSTICKERSET_HPP
#define TELEGRAMBOTAPI_METHOD_CREATENEWSTICKERSET_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InputSticker.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to create a new sticker set owned by a user. The bot will be able to edit the sticker set thus created. Returns True on success.

class createNewStickerSet {
    public:
        struct Parameters {
            // Short name of sticker set, to be used in t.me/addstickers/ URLs (e.g., animals). Can contain only English letters, digits and underscores. Must begin with a letter, can't contain consecutive underscores and must end in "_by_<bot_username>". <bot_username> is case insensitive. 1-64 characters.
            std::string Name;

            // Pass True if stickers in the sticker set must be repainted to the color of text when used in messages, the accent color if used as emoji status, white on chat photos, or another appropriate color based on context; for custom emoji sticker sets only
            std::optional<bool> NeedsRepainting{};

            // Type of stickers in the set, pass “regular”, “mask”, or “custom_emoji”. By default, a regular sticker set is created.
            std::optional<std::string> StickerType{};

            // A JSON-serialized list of 1-50 initial stickers to be added to the sticker set
            std::vector<::TelegramBotAPI::Type::InputSticker> Stickers;

            // Sticker set title, 1-64 characters
            std::string Title;

            // User identifier of created sticker set owner
            long long UserID;

            Parameters(const std::string &NameValue, const std::vector<::TelegramBotAPI::Type::InputSticker> &StickersValue, const std::string &TitleValue, const long long &UserIDValue)
                : Name(NameValue), Stickers(StickersValue), Title(TitleValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["name"] = JSON::ToJson(Name);

                if (NeedsRepainting.has_value()) {
                    Object["needs_repainting"] = JSON::ToJson(NeedsRepainting.value());
                }

                if (StickerType.has_value()) {
                    Object["sticker_type"] = JSON::ToJson(StickerType.value());
                }

                Object["stickers"] = JSON::ToJson(Stickers);

                Object["title"] = JSON::ToJson(Title);

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(Name) || (NeedsRepainting.has_value() && JSON::RequiresMultipart(NeedsRepainting.value())) || (StickerType.has_value() && JSON::RequiresMultipart(StickerType.value())) || JSON::RequiresMultipart(Stickers) || JSON::RequiresMultipart(Title) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "name",
                    Name);

                if (NeedsRepainting.has_value()) {
                    JSON::AddMultipartField(
                        Form, "needs_repainting",
                        NeedsRepainting.value());
                }

                if (StickerType.has_value()) {
                    JSON::AddMultipartField(
                        Form, "sticker_type",
                        StickerType.value());
                }

                JSON::AddMultipartField(
                    Form, "stickers",
                    Stickers);

                JSON::AddMultipartField(
                    Form, "title",
                    Title);

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit createNewStickerSet(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool CreateNewStickerSet(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("createNewStickerSet",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("createNewStickerSet",
                                      ParametersValue.ToJson());
        }

        bool CreateNewStickerSet(std::string Name, std::vector<::TelegramBotAPI::Type::InputSticker> Stickers, std::string Title, long long UserID) {
            Parameters ParametersValue(
                Name,
                Stickers,
                Title,
                UserID
            );

            return CreateNewStickerSet(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_CREATENEWSTICKERSET_HPP
