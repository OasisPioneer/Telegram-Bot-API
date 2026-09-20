#ifndef TELEGRAMBOTAPI_METHOD_GETCHATMEMBER_HPP
#define TELEGRAMBOTAPI_METHOD_GETCHATMEMBER_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatMemberAdministrator.HPP"
#include "TelegramBotAPI/Types/ChatMemberBanned.HPP"
#include "TelegramBotAPI/Types/ChatMemberLeft.HPP"
#include "TelegramBotAPI/Types/ChatMemberMember.HPP"
#include "TelegramBotAPI/Types/ChatMemberOwner.HPP"
#include "TelegramBotAPI/Types/ChatMemberRestricted.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to get information about a member of a chat. The method is only guaranteed to work for other users if the bot is an administrator in the chat. Returns a ChatMember object on success.

class getChatMember {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target supergroup or channel in the format @username
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

        explicit getChatMember(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned> GetChatMember(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>>("getChatMember",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>>("getChatMember",
                                      ParametersValue.ToJson());
        }

        std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned> GetChatMember(std::variant<long long, std::string> ChatID, long long UserID) {
            Parameters ParametersValue(
                ChatID,
                UserID
            );

            return GetChatMember(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETCHATMEMBER_HPP
