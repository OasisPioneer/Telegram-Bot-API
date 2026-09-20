#ifndef TELEGRAMBOTAPI_METHOD_GETUSERPERSONALCHATMESSAGES_HPP
#define TELEGRAMBOTAPI_METHOD_GETUSERPERSONALCHATMESSAGES_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to get the last messages from the personal chat (i.e., the chat currently added to their profile) of a given user. On success, an Array of Message objects is returned.

class getUserPersonalChatMessages {
    public:
        struct Parameters {
            // The maximum number of messages to return; 1-20
            long long Limit;

            // Unique identifier for the target user
            long long UserID;

            Parameters(const long long &LimitValue, const long long &UserIDValue)
                : Limit(LimitValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["limit"] = JSON::ToJson(Limit);

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(Limit) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "limit",
                    Limit);

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit getUserPersonalChatMessages(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::vector<::TelegramBotAPI::Type::Message> GetUserPersonalChatMessages(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::vector<::TelegramBotAPI::Type::Message>>("getUserPersonalChatMessages",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::vector<::TelegramBotAPI::Type::Message>>("getUserPersonalChatMessages",
                                      ParametersValue.ToJson());
        }

        std::vector<::TelegramBotAPI::Type::Message> GetUserPersonalChatMessages(long long Limit, long long UserID) {
            Parameters ParametersValue(
                Limit,
                UserID
            );

            return GetUserPersonalChatMessages(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETUSERPERSONALCHATMESSAGES_HPP
