#ifndef TELEGRAMBOTAPI_METHOD_PROMOTECHATMEMBER_HPP
#define TELEGRAMBOTAPI_METHOD_PROMOTECHATMEMBER_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to promote or demote a user in a supergroup or a channel. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Pass False for all boolean parameters to demote a user. Returns True on success.

class promoteChatMember {
    public:
        struct Parameters {
            // Pass True if the administrator can change chat title, photo and other settings
            std::optional<bool> CanChangeInfo{};

            // Pass True if the administrator can delete messages of other users
            std::optional<bool> CanDeleteMessages{};

            // Pass True if the administrator can delete stories posted by other users
            std::optional<bool> CanDeleteStories{};

            // Pass True if the administrator can edit messages of other users and can pin messages; for channels only
            std::optional<bool> CanEditMessages{};

            // Pass True if the administrator can edit stories posted by other users, post stories to the chat page, pin chat stories, and access the chat's story archive
            std::optional<bool> CanEditStories{};

            // Pass True if the administrator can invite new users to the chat
            std::optional<bool> CanInviteUsers{};

            // Pass True if the administrator can access the chat event log, get boost list, see hidden supergroup and channel members, report spam messages, ignore slow mode, and send messages to the chat without paying Telegram Stars. Implied by any other administrator privilege.
            std::optional<bool> CanManageChat{};

            // Pass True if the administrator can manage direct messages within the channel and decline suggested posts; for channels only
            std::optional<bool> CanManageDirectMessages{};

            // Pass True if the administrator can edit the tags of regular members; for groups and supergroups only
            std::optional<bool> CanManageTags{};

            // Pass True if the user is allowed to create, rename, close, and reopen forum topics; for supergroups only
            std::optional<bool> CanManageTopics{};

            // Pass True if the administrator can manage video chats
            std::optional<bool> CanManageVideoChats{};

            // Pass True if the administrator can pin messages; for supergroups only
            std::optional<bool> CanPinMessages{};

            // Pass True if the administrator can post messages in the channel, approve suggested posts, or access channel statistics; for channels only
            std::optional<bool> CanPostMessages{};

            // Pass True if the administrator can post stories to the chat
            std::optional<bool> CanPostStories{};

            // Pass True if the administrator can add new administrators with a subset of their own privileges or demote administrators that they have promoted, directly or indirectly (promoted by administrators that were appointed by him)
            std::optional<bool> CanPromoteMembers{};

            // Pass True if the administrator can restrict, ban or unban chat members, or access supergroup statistics. For backward compatibility, defaults to True for promotions of channel administrators.
            std::optional<bool> CanRestrictMembers{};

            // Pass True if the administrator can manage chat welcome messages or directly send them in the case of bots
            std::optional<bool> CanSendWelcomeMessages{};

            // Unique identifier for the target chat or username of the target channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Pass True if the administrator's presence in the chat is hidden
            std::optional<bool> IsAnonymous{};

            // Unique identifier of the target user
            long long UserID;

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const long long &UserIDValue)
                : ChatID(ChatIDValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (CanChangeInfo.has_value()) {
                    Object["can_change_info"] = JSON::ToJson(CanChangeInfo.value());
                }

                if (CanDeleteMessages.has_value()) {
                    Object["can_delete_messages"] = JSON::ToJson(CanDeleteMessages.value());
                }

                if (CanDeleteStories.has_value()) {
                    Object["can_delete_stories"] = JSON::ToJson(CanDeleteStories.value());
                }

                if (CanEditMessages.has_value()) {
                    Object["can_edit_messages"] = JSON::ToJson(CanEditMessages.value());
                }

                if (CanEditStories.has_value()) {
                    Object["can_edit_stories"] = JSON::ToJson(CanEditStories.value());
                }

                if (CanInviteUsers.has_value()) {
                    Object["can_invite_users"] = JSON::ToJson(CanInviteUsers.value());
                }

                if (CanManageChat.has_value()) {
                    Object["can_manage_chat"] = JSON::ToJson(CanManageChat.value());
                }

                if (CanManageDirectMessages.has_value()) {
                    Object["can_manage_direct_messages"] = JSON::ToJson(CanManageDirectMessages.value());
                }

                if (CanManageTags.has_value()) {
                    Object["can_manage_tags"] = JSON::ToJson(CanManageTags.value());
                }

                if (CanManageTopics.has_value()) {
                    Object["can_manage_topics"] = JSON::ToJson(CanManageTopics.value());
                }

                if (CanManageVideoChats.has_value()) {
                    Object["can_manage_video_chats"] = JSON::ToJson(CanManageVideoChats.value());
                }

                if (CanPinMessages.has_value()) {
                    Object["can_pin_messages"] = JSON::ToJson(CanPinMessages.value());
                }

                if (CanPostMessages.has_value()) {
                    Object["can_post_messages"] = JSON::ToJson(CanPostMessages.value());
                }

                if (CanPostStories.has_value()) {
                    Object["can_post_stories"] = JSON::ToJson(CanPostStories.value());
                }

                if (CanPromoteMembers.has_value()) {
                    Object["can_promote_members"] = JSON::ToJson(CanPromoteMembers.value());
                }

                if (CanRestrictMembers.has_value()) {
                    Object["can_restrict_members"] = JSON::ToJson(CanRestrictMembers.value());
                }

                if (CanSendWelcomeMessages.has_value()) {
                    Object["can_send_welcome_messages"] = JSON::ToJson(CanSendWelcomeMessages.value());
                }

                Object["chat_id"] = JSON::ToJson(ChatID);

                if (IsAnonymous.has_value()) {
                    Object["is_anonymous"] = JSON::ToJson(IsAnonymous.value());
                }

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return (CanChangeInfo.has_value() && JSON::RequiresMultipart(CanChangeInfo.value())) || (CanDeleteMessages.has_value() && JSON::RequiresMultipart(CanDeleteMessages.value())) || (CanDeleteStories.has_value() && JSON::RequiresMultipart(CanDeleteStories.value())) || (CanEditMessages.has_value() && JSON::RequiresMultipart(CanEditMessages.value())) || (CanEditStories.has_value() && JSON::RequiresMultipart(CanEditStories.value())) || (CanInviteUsers.has_value() && JSON::RequiresMultipart(CanInviteUsers.value())) || (CanManageChat.has_value() && JSON::RequiresMultipart(CanManageChat.value())) || (CanManageDirectMessages.has_value() && JSON::RequiresMultipart(CanManageDirectMessages.value())) || (CanManageTags.has_value() && JSON::RequiresMultipart(CanManageTags.value())) || (CanManageTopics.has_value() && JSON::RequiresMultipart(CanManageTopics.value())) || (CanManageVideoChats.has_value() && JSON::RequiresMultipart(CanManageVideoChats.value())) || (CanPinMessages.has_value() && JSON::RequiresMultipart(CanPinMessages.value())) || (CanPostMessages.has_value() && JSON::RequiresMultipart(CanPostMessages.value())) || (CanPostStories.has_value() && JSON::RequiresMultipart(CanPostStories.value())) || (CanPromoteMembers.has_value() && JSON::RequiresMultipart(CanPromoteMembers.value())) || (CanRestrictMembers.has_value() && JSON::RequiresMultipart(CanRestrictMembers.value())) || (CanSendWelcomeMessages.has_value() && JSON::RequiresMultipart(CanSendWelcomeMessages.value())) || JSON::RequiresMultipart(ChatID) || (IsAnonymous.has_value() && JSON::RequiresMultipart(IsAnonymous.value())) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (CanChangeInfo.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_change_info",
                        CanChangeInfo.value());
                }

                if (CanDeleteMessages.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_delete_messages",
                        CanDeleteMessages.value());
                }

                if (CanDeleteStories.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_delete_stories",
                        CanDeleteStories.value());
                }

                if (CanEditMessages.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_edit_messages",
                        CanEditMessages.value());
                }

                if (CanEditStories.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_edit_stories",
                        CanEditStories.value());
                }

                if (CanInviteUsers.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_invite_users",
                        CanInviteUsers.value());
                }

                if (CanManageChat.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_manage_chat",
                        CanManageChat.value());
                }

                if (CanManageDirectMessages.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_manage_direct_messages",
                        CanManageDirectMessages.value());
                }

                if (CanManageTags.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_manage_tags",
                        CanManageTags.value());
                }

                if (CanManageTopics.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_manage_topics",
                        CanManageTopics.value());
                }

                if (CanManageVideoChats.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_manage_video_chats",
                        CanManageVideoChats.value());
                }

                if (CanPinMessages.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_pin_messages",
                        CanPinMessages.value());
                }

                if (CanPostMessages.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_post_messages",
                        CanPostMessages.value());
                }

                if (CanPostStories.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_post_stories",
                        CanPostStories.value());
                }

                if (CanPromoteMembers.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_promote_members",
                        CanPromoteMembers.value());
                }

                if (CanRestrictMembers.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_restrict_members",
                        CanRestrictMembers.value());
                }

                if (CanSendWelcomeMessages.has_value()) {
                    JSON::AddMultipartField(
                        Form, "can_send_welcome_messages",
                        CanSendWelcomeMessages.value());
                }

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                if (IsAnonymous.has_value()) {
                    JSON::AddMultipartField(
                        Form, "is_anonymous",
                        IsAnonymous.value());
                }

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit promoteChatMember(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool PromoteChatMember(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("promoteChatMember",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("promoteChatMember",
                                      ParametersValue.ToJson());
        }

        bool PromoteChatMember(std::variant<long long, std::string> ChatID, long long UserID) {
            Parameters ParametersValue(
                ChatID,
                UserID
            );

            return PromoteChatMember(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_PROMOTECHATMEMBER_HPP
