#ifndef TELEGRAMBOTAPI_METHOD_POSTSTORY_HPP
#define TELEGRAMBOTAPI_METHOD_POSTSTORY_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InputStoryContentPhoto.HPP"
#include "TelegramBotAPI/Types/InputStoryContentVideo.HPP"
#include "TelegramBotAPI/Types/MessageEntity.HPP"
#include "TelegramBotAPI/Types/Story.HPP"
#include "TelegramBotAPI/Types/StoryArea.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Posts a story on behalf of a managed business account. Requires the can_manage_stories business bot right. Returns Story on success.

class postStory {
    public:
        struct Parameters {
            // Period after which the story is moved to the archive, in seconds; must be one of 6 * 3600, 12 * 3600, 86400, or 2 * 86400
            long long ActivePeriod;

            // A JSON-serialized list of clickable areas to be shown on the story
            std::optional<std::vector<::TelegramBotAPI::Type::StoryArea>> Areas{};

            // Unique identifier of the business connection
            std::string BusinessConnectionID;

            // Caption of the story, 0-2048 characters after entities parsing
            std::optional<std::string> Caption{};

            // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
            std::optional<std::vector<::TelegramBotAPI::Type::MessageEntity>> CaptionEntities{};

            // Content of the story
            std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> Content;

            // Mode for parsing entities in the story caption. See formatting options for more details.
            std::optional<std::string> ParseMode{};

            // Pass True to keep the story accessible after it expires
            std::optional<bool> PostToChatPage{};

            // Pass True if the content of the story must be protected from forwarding and screenshotting
            std::optional<bool> ProtectContent{};

            Parameters(const long long &ActivePeriodValue, const std::string &BusinessConnectionIDValue, const std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> &ContentValue)
                : ActivePeriod(ActivePeriodValue), BusinessConnectionID(BusinessConnectionIDValue), Content(ContentValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["active_period"] = JSON::ToJson(ActivePeriod);

                if (Areas.has_value()) {
                    Object["areas"] = JSON::ToJson(Areas.value());
                }

                Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

                if (Caption.has_value()) {
                    Object["caption"] = JSON::ToJson(Caption.value());
                }

                if (CaptionEntities.has_value()) {
                    Object["caption_entities"] = JSON::ToJson(CaptionEntities.value());
                }

                Object["content"] = JSON::ToJson(Content);

                if (ParseMode.has_value()) {
                    Object["parse_mode"] = JSON::ToJson(ParseMode.value());
                }

                if (PostToChatPage.has_value()) {
                    Object["post_to_chat_page"] = JSON::ToJson(PostToChatPage.value());
                }

                if (ProtectContent.has_value()) {
                    Object["protect_content"] = JSON::ToJson(ProtectContent.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ActivePeriod) || (Areas.has_value() && JSON::RequiresMultipart(Areas.value())) || JSON::RequiresMultipart(BusinessConnectionID) || (Caption.has_value() && JSON::RequiresMultipart(Caption.value())) || (CaptionEntities.has_value() && JSON::RequiresMultipart(CaptionEntities.value())) || JSON::RequiresMultipart(Content) || (ParseMode.has_value() && JSON::RequiresMultipart(ParseMode.value())) || (PostToChatPage.has_value() && JSON::RequiresMultipart(PostToChatPage.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "active_period",
                    ActivePeriod);

                if (Areas.has_value()) {
                    JSON::AddMultipartField(
                        Form, "areas",
                        Areas.value());
                }

                JSON::AddMultipartField(
                    Form, "business_connection_id",
                    BusinessConnectionID);

                if (Caption.has_value()) {
                    JSON::AddMultipartField(
                        Form, "caption",
                        Caption.value());
                }

                if (CaptionEntities.has_value()) {
                    JSON::AddMultipartField(
                        Form, "caption_entities",
                        CaptionEntities.value());
                }

                JSON::AddMultipartField(
                    Form, "content",
                    Content);

                if (ParseMode.has_value()) {
                    JSON::AddMultipartField(
                        Form, "parse_mode",
                        ParseMode.value());
                }

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

        explicit postStory(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::Story PostStory(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::Story>("postStory",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::Story>("postStory",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::Story PostStory(long long ActivePeriod, std::string BusinessConnectionID, std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> Content) {
            Parameters ParametersValue(
                ActivePeriod,
                BusinessConnectionID,
                Content
            );

            return PostStory(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_POSTSTORY_HPP
