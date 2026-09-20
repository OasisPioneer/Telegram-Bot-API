#ifndef TELEGRAMBOTAPI_METHOD_BANCHATMEMBER_HPP
#define TELEGRAMBOTAPI_METHOD_BANCHATMEMBER_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to ban a user in a group, a supergroup or a channel. In the case of supergroups and channels, the user will not be able to return to the chat on their own using invite links, etc., unless unbanned first. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.

class banChatMember {
    public:
        struct Parameters {
            // Unique identifier for the target group or username of the target supergroup or channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Pass True to delete all messages from the chat for the user that is being removed. If False, the user will be able to see messages in the group that were sent before the user was removed. Always True for supergroups and channels.
            std::optional<bool> RevokeMessages{};

            // Date when the user will be unbanned; Unix time. If user is banned for more than 366 days or less than 30 seconds from the current time they are considered to be banned forever. Applied for supergroups and channels only.
            std::optional<long long> UntilDate{};

            // Unique identifier of the target user
            long long UserID;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const long long &UserIDValue)
                : ChatID(ChatIDValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                if (RevokeMessages.has_value()) {
                    Object["revoke_messages"] = JSON::ToJson(RevokeMessages.value());
                }

                if (UntilDate.has_value()) {
                    Object["until_date"] = JSON::ToJson(UntilDate.value());
                }

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || (RevokeMessages.has_value() && JSON::RequiresMultipart(RevokeMessages.value())) || (UntilDate.has_value() && JSON::RequiresMultipart(UntilDate.value())) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                if (RevokeMessages.has_value()) {
                    JSON::AddMultipartField(
                        Form, "revoke_messages",
                        RevokeMessages.value());
                }

                if (UntilDate.has_value()) {
                    JSON::AddMultipartField(
                        Form, "until_date",
                        UntilDate.value());
                }

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit banChatMember(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool BanChatMember(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("banChatMember",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("banChatMember",
                                      ParametersValue.ToJson());
        }

        bool BanChatMember(std::variant<long long, std::string> ChatID, long long UserID) {
            Parameters ParametersValue(
                ChatID,
                UserID
            );

            return BanChatMember(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_BANCHATMEMBER_HPP
