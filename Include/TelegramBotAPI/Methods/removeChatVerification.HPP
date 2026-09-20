#ifndef TELEGRAMBOTAPI_METHOD_REMOVECHATVERIFICATION_HPP
#define TELEGRAMBOTAPI_METHOD_REMOVECHATVERIFICATION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Removes verification from a chat that is currently verified on behalf of the organization represented by the bot. Returns True on success.

class removeChatVerification {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target bot or channel in the format @username
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

        explicit removeChatVerification(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool RemoveChatVerification(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("removeChatVerification",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("removeChatVerification",
                                      ParametersValue.ToJson());
        }

        bool RemoveChatVerification(std::variant<long long, std::string> ChatID) {
            Parameters ParametersValue(
                ChatID
            );

            return RemoveChatVerification(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_REMOVECHATVERIFICATION_HPP
