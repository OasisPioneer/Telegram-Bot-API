#ifndef TELEGRAMBOTAPI_METHOD_DECLINECHATJOINREQUEST_HPP
#define TELEGRAMBOTAPI_METHOD_DECLINECHATJOINREQUEST_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to decline a chat join request. The bot must be an administrator in the chat for this to work and must have the can_invite_users administrator right. Returns True on success.

class declineChatJoinRequest {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Unique identifier of the target user
            long long UserID;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const long long &UserIDValue)
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

        explicit declineChatJoinRequest(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool DeclineChatJoinRequest(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("declineChatJoinRequest",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("declineChatJoinRequest",
                                      ParametersValue.ToJson());
        }

        bool DeclineChatJoinRequest(std::variant<long long, std::string> ChatID, long long UserID) {
            Parameters ParametersValue(
                ChatID,
                UserID
            );

            return DeclineChatJoinRequest(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DECLINECHATJOINREQUEST_HPP
