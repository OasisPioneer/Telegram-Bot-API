#ifndef TELEGRAMBOTAPI_METHOD_REPOSTSTORY_HPP
#define TELEGRAMBOTAPI_METHOD_REPOSTSTORY_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Story.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Reposts a story on behalf of a business account from another business account. Both business accounts must be managed by the same bot, and the story on the source account must have been posted (or reposted) by the bot. Requires the can_manage_stories business bot right for both business accounts. Returns Story on success.

class repostStory {
    public:
        struct Parameters {
            // Period after which the story is moved to the archive, in seconds; must be one of 6 * 3600, 12 * 3600, 86400, or 2 * 86400
            long long ActivePeriod;

            // Unique identifier of the business connection
            std::string BusinessConnectionID;

            // Unique identifier of the chat which posted the story that should be reposted
            long long FromChatID;

            // Unique identifier of the story that should be reposted
            long long FromStoryID;

            // Pass True to keep the story accessible after it expires
            std::optional<bool> PostToChatPage{};

            // Pass True if the content of the story must be protected from forwarding and screenshotting
            std::optional<bool> ProtectContent{};

            Parameters(const long long &ActivePeriodValue, const std::string &BusinessConnectionIDValue, const long long &FromChatIDValue, const long long &FromStoryIDValue)
                : ActivePeriod(ActivePeriodValue), BusinessConnectionID(BusinessConnectionIDValue), FromChatID(FromChatIDValue), FromStoryID(FromStoryIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["active_period"] = JSON::ToJson(ActivePeriod);

                Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

                Object["from_chat_id"] = JSON::ToJson(FromChatID);

                Object["from_story_id"] = JSON::ToJson(FromStoryID);

                if (PostToChatPage.has_value()) {
                    Object["post_to_chat_page"] = JSON::ToJson(PostToChatPage.value());
                }

                if (ProtectContent.has_value()) {
                    Object["protect_content"] = JSON::ToJson(ProtectContent.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ActivePeriod) || JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(FromChatID) || JSON::RequiresMultipart(FromStoryID) || (PostToChatPage.has_value() && JSON::RequiresMultipart(PostToChatPage.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "active_period",
                    ActivePeriod);

                JSON::AddMultipartField(
                    Form, "business_connection_id",
                    BusinessConnectionID);

                JSON::AddMultipartField(
                    Form, "from_chat_id",
                    FromChatID);

                JSON::AddMultipartField(
                    Form, "from_story_id",
                    FromStoryID);

                if (PostToChatPage.has_value()) {
                    JSON::AddMultipartField(
                        Form, "post_to_chat_page",
                        PostToChatPage.value());
                }

                if (ProtectContent.has_value()) {
                    JSON::AddMultipartField(
                        Form, "protect_content",
                        ProtectContent.value());
                }

                return Form;
            }

        };

        explicit repostStory(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::Story RepostStory(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::Story>("repostStory",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::Story>("repostStory",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::Story RepostStory(long long ActivePeriod, std::string BusinessConnectionID, long long FromChatID, long long FromStoryID) {
            Parameters ParametersValue(
                ActivePeriod,
                BusinessConnectionID,
                FromChatID,
                FromStoryID
            );

            return RepostStory(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_REPOSTSTORY_HPP
