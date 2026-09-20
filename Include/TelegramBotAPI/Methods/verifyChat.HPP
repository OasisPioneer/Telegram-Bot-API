#ifndef TELEGRAMBOTAPI_METHOD_VERIFYCHAT_HPP
#define TELEGRAMBOTAPI_METHOD_VERIFYCHAT_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Verifies a chat on behalf of the organization which is represented by the bot. Returns True on success.

class verifyChat {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username. Channel direct messages chats can't be verified.
            std::variant<long long, std::string> ChatID;

            // Custom description for the verification; 0-70 characters. Must be empty if the organization isn't allowed to provide a custom verification description.
            std::optional<std::string> CustomDescription{};

            Parameters(const std::variant<long long, std::string> &ChatIDValue)
                : ChatID(ChatIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                if (CustomDescription.has_value()) {
                    Object["custom_description"] = JSON::ToJson(CustomDescription.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || (CustomDescription.has_value() && JSON::RequiresMultipart(CustomDescription.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                if (CustomDescription.has_value()) {
                    JSON::AddMultipartField(
                        Form, "custom_description",
                        CustomDescription.value());
                }

                return Form;
            }

        };

        explicit verifyChat(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool VerifyChat(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("verifyChat",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("verifyChat",
                                      ParametersValue.ToJson());
        }

        bool VerifyChat(std::variant<long long, std::string> ChatID) {
            Parameters ParametersValue(
                ChatID
            );

            return VerifyChat(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_VERIFYCHAT_HPP
