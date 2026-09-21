#ifndef TELEGRAMBOTAPI_METHOD_DELETECHATSTICKERSET_HPP
#define TELEGRAMBOTAPI_METHOD_DELETECHATSTICKERSET_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to delete a group sticker set from a supergroup. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Use the field can_set_sticker_set optionally returned in getChat requests to check if the bot can use this method. Returns True on success.

struct deleteChatStickerSetParameters {
    // Unique identifier for the target chat or username of the target supergroup in the format @username
    std::variant<long long, std::string> ChatID;

    deleteChatStickerSetParameters(const std::variant<long long, std::string> &ChatIDValue)
        : ChatID(ChatIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        return Form;
    }

};

class deleteChatStickerSet {
public:
    using Parameters = deleteChatStickerSetParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "deleteChatStickerSet";
    }

    explicit deleteChatStickerSet(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool DeleteChatStickerSet(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "deleteChatStickerSet",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "deleteChatStickerSet",
            ParametersValue.ToJson()
        );
    }

    bool DeleteChatStickerSet(std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        ChatID
        );

        return DeleteChatStickerSet(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETECHATSTICKERSET_HPP
