#ifndef TELEGRAMBOTAPI_METHOD_SETCHATADMINISTRATORCUSTOMTITLE_HPP
#define TELEGRAMBOTAPI_METHOD_SETCHATADMINISTRATORCUSTOMTITLE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to set a custom title for an administrator in a supergroup promoted by the bot. Returns True on success.

class setChatAdministratorCustomTitle {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target supergroup in the format @username
            std::variant<long long, std::string> ChatID;

            // New custom title for the administrator; 0-16 characters, emoji are not allowed
            std::string CustomTitle;

            // Unique identifier of the target user
            long long UserID;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &CustomTitleValue, const long long &UserIDValue)
                : ChatID(ChatIDValue), CustomTitle(CustomTitleValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["custom_title"] = JSON::ToJson(CustomTitle);

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(CustomTitle) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                JSON::AddMultipartField(
                    Form, "custom_title",
                    CustomTitle);

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit setChatAdministratorCustomTitle(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetChatAdministratorCustomTitle(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setChatAdministratorCustomTitle",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setChatAdministratorCustomTitle",
                                      ParametersValue.ToJson());
        }

        bool SetChatAdministratorCustomTitle(std::variant<long long, std::string> ChatID, std::string CustomTitle, long long UserID) {
            Parameters ParametersValue(
                ChatID,
                CustomTitle,
                UserID
            );

            return SetChatAdministratorCustomTitle(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETCHATADMINISTRATORCUSTOMTITLE_HPP
