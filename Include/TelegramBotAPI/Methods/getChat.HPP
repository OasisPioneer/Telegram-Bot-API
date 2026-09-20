#ifndef TELEGRAMBOTAPI_METHOD_GETCHAT_HPP
#define TELEGRAMBOTAPI_METHOD_GETCHAT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatFullInfo.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to get up-to-date information about the chat. Returns a ChatFullInfo object on success.

class getChat {
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

        explicit getChat(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::ChatFullInfo GetChat(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::ChatFullInfo>("getChat",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::ChatFullInfo>("getChat",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::ChatFullInfo GetChat(std::variant<long long, std::string> ChatID) {
            Parameters ParametersValue(
                ChatID
            );

            return GetChat(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETCHAT_HPP
