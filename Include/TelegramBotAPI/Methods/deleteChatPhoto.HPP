#ifndef TELEGRAMBOTAPI_METHOD_DELETECHATPHOTO_HPP
#define TELEGRAMBOTAPI_METHOD_DELETECHATPHOTO_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to delete a chat photo. Photos can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.

struct deleteChatPhotoParameters {
    // Unique identifier for the target chat or username of the target channel in the format @username
    std::variant<long long, std::string> ChatID;

    deleteChatPhotoParameters(const std::variant<long long, std::string> &ChatIDValue)
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

class deleteChatPhoto {
public:
    using Parameters = deleteChatPhotoParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "deleteChatPhoto";
    }

    explicit deleteChatPhoto(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool DeleteChatPhoto(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "deleteChatPhoto",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "deleteChatPhoto",
            ParametersValue.ToJson()
        );
    }

    bool DeleteChatPhoto(std::variant<long long, std::string> ChatID) {
        Parameters ParametersValue(
        ChatID
        );

        return DeleteChatPhoto(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETECHATPHOTO_HPP
