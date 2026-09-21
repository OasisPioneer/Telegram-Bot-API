#ifndef TELEGRAMBOTAPI_METHOD_GETUSERCHATBOOSTS_HPP
#define TELEGRAMBOTAPI_METHOD_GETUSERCHATBOOSTS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/UserChatBoosts.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to get the list of boosts added to a chat by a user. Requires administrator rights in the chat. Returns a UserChatBoosts object.

struct getUserChatBoostsParameters {
    // Unique identifier for the chat or username of the channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Unique identifier of the target user
    long long UserID;

    getUserChatBoostsParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &UserIDValue)
        : ChatID(ChatIDValue), UserID(UserIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["user_id"] = JSON::ToJson(UserID);

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(UserID);
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        JSON::AddMultipartField(
            Form, "user_id",
            UserID);

        return Form;
    }

};

class getUserChatBoosts {
public:
    using Parameters = getUserChatBoostsParameters;
    using ReturnType = ::TelegramBotAPI::Type::UserChatBoosts;

    static constexpr const char *Name() noexcept {
        return "getUserChatBoosts";
    }

    explicit getUserChatBoosts(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::UserChatBoosts GetUserChatBoosts(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::UserChatBoosts>(
                "getUserChatBoosts",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::UserChatBoosts>(
            "getUserChatBoosts",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::UserChatBoosts GetUserChatBoosts(std::variant<long long, std::string> ChatID, long long UserID) {
        Parameters ParametersValue(
        ChatID,
        UserID
        );

        return GetUserChatBoosts(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETUSERCHATBOOSTS_HPP
