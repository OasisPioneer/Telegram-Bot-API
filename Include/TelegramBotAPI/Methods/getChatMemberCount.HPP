#ifndef TELEGRAMBOTAPI_METHOD_GETCHATMEMBERCOUNT_HPP
#define TELEGRAMBOTAPI_METHOD_GETCHATMEMBERCOUNT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to get the number of members in a chat. Returns Integer on success.

class getChatMemberCount {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target supergroup or channel in the format @username
            std::variant<long long, std::string> ChatID;

            Parameters(const std::variant<long long, std::string> &ChatIDValue)
                : ChatID(ChatIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                return Form;
            }

        };

        explicit getChatMemberCount(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        long long GetChatMemberCount(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<long long>("getChatMemberCount",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<long long>("getChatMemberCount",
                                      ParametersValue.ToJson());
        }

        long long GetChatMemberCount(std::variant<long long, std::string> ChatID) {
            Parameters ParametersValue(
                ChatID
            );

            return GetChatMemberCount(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETCHATMEMBERCOUNT_HPP
