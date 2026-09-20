#ifndef TELEGRAMBOTAPI_METHOD_EDITSTORY_HPP
#define TELEGRAMBOTAPI_METHOD_EDITSTORY_HPP

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

        // Edits a story previously posted by the bot on behalf of a managed business account. Requires the can_manage_stories business bot right. Returns Story on success.

class editStory {
    public:
        struct Parameters {
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

            // Unique identifier of the story to edit
            long long StoryID;

            Parameters(const std::string &BusinessConnectionIDValue, const std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> &ContentValue, const long long &StoryIDValue)
                : BusinessConnectionID(BusinessConnectionIDValue), Content(ContentValue), StoryID(StoryIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

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

                Object["story_id"] = JSON::ToJson(StoryID);

                return Object;
            }

            bool RequiresMultipart() const {
                return (Areas.has_value() && JSON::RequiresMultipart(Areas.value())) || JSON::RequiresMultipart(BusinessConnectionID) || (Caption.has_value() && JSON::RequiresMultipart(Caption.value())) || (CaptionEntities.has_value() && JSON::RequiresMultipart(CaptionEntities.value())) || JSON::RequiresMultipart(Content) || (ParseMode.has_value() && JSON::RequiresMultipart(ParseMode.value())) || JSON::RequiresMultipart(StoryID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

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

                JSON::AddMultipartField(
                    Form, "story_id",
                    StoryID);

                return Form;
            }

        };

        explicit editStory(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::Story EditStory(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::Story>("editStory",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::Story>("editStory",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::Story EditStory(std::string BusinessConnectionID, std::variant<::TelegramBotAPI::Type::InputStoryContentPhoto, ::TelegramBotAPI::Type::InputStoryContentVideo> Content, long long StoryID) {
            Parameters ParametersValue(
                BusinessConnectionID,
                Content,
                StoryID
            );

            return EditStory(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITSTORY_HPP
