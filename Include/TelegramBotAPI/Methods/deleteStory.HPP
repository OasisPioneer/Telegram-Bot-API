#ifndef TELEGRAMBOTAPI_METHOD_DELETESTORY_HPP
#define TELEGRAMBOTAPI_METHOD_DELETESTORY_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Deletes a story previously posted by the bot on behalf of a managed business account. Requires the can_manage_stories business bot right. Returns True on success.

class deleteStory {
    public:
        struct Parameters {
            // Unique identifier of the business connection
            std::string BusinessConnectionID;

            // Unique identifier of the story to delete
            long long StoryID;

            Parameters(const std::string &BusinessConnectionIDValue, const long long &StoryIDValue)
                : BusinessConnectionID(BusinessConnectionIDValue), StoryID(StoryIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

                Object["story_id"] = JSON::ToJson(StoryID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(StoryID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "business_connection_id",
                    BusinessConnectionID);

                JSON::AddMultipartField(
                    Form, "story_id",
                    StoryID);

                return Form;
            }

        };

        explicit deleteStory(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool DeleteStory(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("deleteStory",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("deleteStory",
                                      ParametersValue.ToJson());
        }

        bool DeleteStory(std::string BusinessConnectionID, long long StoryID) {
            Parameters ParametersValue(
                BusinessConnectionID,
                StoryID
            );

            return DeleteStory(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETESTORY_HPP
