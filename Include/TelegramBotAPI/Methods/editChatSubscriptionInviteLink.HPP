#ifndef TELEGRAMBOTAPI_METHOD_EDITCHATSUBSCRIPTIONINVITELINK_HPP
#define TELEGRAMBOTAPI_METHOD_EDITCHATSUBSCRIPTIONINVITELINK_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatInviteLink.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to edit a subscription invite link created by the bot. The bot must have the can_invite_users administrator rights. Returns the edited invite link as a ChatInviteLink object.

class editChatSubscriptionInviteLink {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target channel in the format @username
            std::variant<long long, std::string> ChatID;

            // The invite link to edit
            std::string InviteLink;

            // Invite link name; 0-32 characters
            std::optional<std::string> Name{};

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &InviteLinkValue)
                : ChatID(ChatIDValue), InviteLink(InviteLinkValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["invite_link"] = JSON::ToJson(InviteLink);

                if (Name.has_value()) {
                    Object["name"] = JSON::ToJson(Name.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(InviteLink) || (Name.has_value() && JSON::RequiresMultipart(Name.value()));
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

                if (Name.has_value()) {
                    JSON::AddMultipartField(
                        Form, "name",
                        Name.value());
                }

                return Form;
            }

        };

        explicit editChatSubscriptionInviteLink(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::ChatInviteLink EditChatSubscriptionInviteLink(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::ChatInviteLink>("editChatSubscriptionInviteLink",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::ChatInviteLink>("editChatSubscriptionInviteLink",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::ChatInviteLink EditChatSubscriptionInviteLink(std::variant<long long, std::string> ChatID, std::string InviteLink) {
            Parameters ParametersValue(
                ChatID,
                InviteLink
            );

            return EditChatSubscriptionInviteLink(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITCHATSUBSCRIPTIONINVITELINK_HPP
