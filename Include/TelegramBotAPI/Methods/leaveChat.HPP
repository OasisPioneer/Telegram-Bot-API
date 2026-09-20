#ifndef TELEGRAMBOTAPI_METHOD_LEAVECHAT_HPP
#define TELEGRAMBOTAPI_METHOD_LEAVECHAT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method for your bot to leave a group, supergroup or channel. Returns True on success.

class leaveChat {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target supergroup or channel in the format @username. Channel direct messages chats aren't supported; leave the corresponding channel instead.
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

        explicit leaveChat(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool LeaveChat(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("leaveChat",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("leaveChat",
                                      ParametersValue.ToJson());
        }

        bool LeaveChat(std::variant<long long, std::string> ChatID) {
            Parameters ParametersValue(
                ChatID
            );

            return LeaveChat(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_LEAVECHAT_HPP
