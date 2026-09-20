#ifndef TELEGRAMBOTAPI_METHOD_UNBANCHATMEMBER_HPP
#define TELEGRAMBOTAPI_METHOD_UNBANCHATMEMBER_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to unban a previously banned user in a supergroup or channel. The user will not return to the group or channel automatically, but will be able to join via link, etc. The bot must be an administrator for this to work. By default, this method guarantees that after the call the user is not a member of the chat, but will be able to join it. So if the user is a member of the chat they will also be removed from the chat. If you don't want this, use the parameter only_if_banned. Returns True on success.

class unbanChatMember {
    public:
        struct Parameters {
            // Unique identifier for the target group or username of the target supergroup or channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Do nothing if the user is not banned
            std::optional<bool> OnlyIfBanned{};

            // Unique identifier of the target user
            long long UserID;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const long long &UserIDValue)
                : ChatID(ChatIDValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                if (OnlyIfBanned.has_value()) {
                    Object["only_if_banned"] = JSON::ToJson(OnlyIfBanned.value());
                }

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || (OnlyIfBanned.has_value() && JSON::RequiresMultipart(OnlyIfBanned.value())) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                if (OnlyIfBanned.has_value()) {
                    JSON::AddMultipartField(
                        Form, "only_if_banned",
                        OnlyIfBanned.value());
                }

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit unbanChatMember(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool UnbanChatMember(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("unbanChatMember",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("unbanChatMember",
                                      ParametersValue.ToJson());
        }

        bool UnbanChatMember(std::variant<long long, std::string> ChatID, long long UserID) {
            Parameters ParametersValue(
                ChatID,
                UserID
            );

            return UnbanChatMember(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_UNBANCHATMEMBER_HPP
