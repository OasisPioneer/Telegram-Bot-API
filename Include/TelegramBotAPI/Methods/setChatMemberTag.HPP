#ifndef TELEGRAMBOTAPI_METHOD_SETCHATMEMBERTAG_HPP
#define TELEGRAMBOTAPI_METHOD_SETCHATMEMBERTAG_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to set a tag for a regular member in a group or a supergroup. The bot must be an administrator in the chat for this to work and must have the can_manage_tags administrator right. Returns True on success.

class setChatMemberTag {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target supergroup in the format @username
            std::variant<long long, std::string> ChatID;

            // New tag for the member; 0-16 characters, emoji are not allowed
            std::optional<std::string> Tag{};

            // Unique identifier of the target user
            long long UserID;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const long long &UserIDValue)
                : ChatID(ChatIDValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                if (Tag.has_value()) {
                    Object["tag"] = JSON::ToJson(Tag.value());
                }

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || (Tag.has_value() && JSON::RequiresMultipart(Tag.value())) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                if (Tag.has_value()) {
                    JSON::AddMultipartField(
                        Form, "tag",
                        Tag.value());
                }

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit setChatMemberTag(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetChatMemberTag(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setChatMemberTag",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setChatMemberTag",
                                      ParametersValue.ToJson());
        }

        bool SetChatMemberTag(std::variant<long long, std::string> ChatID, long long UserID) {
            Parameters ParametersValue(
                ChatID,
                UserID
            );

            return SetChatMemberTag(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETCHATMEMBERTAG_HPP
