#ifndef TELEGRAMBOTAPI_METHOD_REVOKECHATINVITELINK_HPP
#define TELEGRAMBOTAPI_METHOD_REVOKECHATINVITELINK_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatInviteLink.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to revoke an invite link created by the bot. If the primary link is revoked, a new link is automatically generated. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns the revoked invite link as ChatInviteLink object.

class revokeChatInviteLink {
    public:
        struct Parameters {
            // Unique identifier of the target chat or username of the target channel in the format @username
            std::variant<long long, std::string> ChatID;

            // The invite link to revoke
            std::string InviteLink;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &InviteLinkValue)
                : ChatID(ChatIDValue), InviteLink(InviteLinkValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["invite_link"] = JSON::ToJson(InviteLink);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(InviteLink);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                JSON::AddMultipartField(
                    Form, "invite_link",
                    InviteLink);

                return Form;
            }

        };

        explicit revokeChatInviteLink(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::ChatInviteLink RevokeChatInviteLink(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::ChatInviteLink>("revokeChatInviteLink",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::ChatInviteLink>("revokeChatInviteLink",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::ChatInviteLink RevokeChatInviteLink(std::variant<long long, std::string> ChatID, std::string InviteLink) {
            Parameters ParametersValue(
                ChatID,
                InviteLink
            );

            return RevokeChatInviteLink(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_REVOKECHATINVITELINK_HPP
