#ifndef TELEGRAMBOTAPI_METHOD_GETCHATADMINISTRATORS_HPP
#define TELEGRAMBOTAPI_METHOD_GETCHATADMINISTRATORS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatMemberAdministrator.HPP"
#include "TelegramBotAPI/Types/ChatMemberBanned.HPP"
#include "TelegramBotAPI/Types/ChatMemberLeft.HPP"
#include "TelegramBotAPI/Types/ChatMemberMember.HPP"
#include "TelegramBotAPI/Types/ChatMemberOwner.HPP"
#include "TelegramBotAPI/Types/ChatMemberRestricted.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to get a list of administrators in a chat. Returns an Array of ChatMember objects.

class getChatAdministrators {
    public:
        struct Parameters {
            // Unique identifier for the target chat or username of the target supergroup or channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Pass True to additionally receive all bots that are administrators of the chat. By default, bots other than the current bot are omitted.
            std::optional<bool> ReturnBots{};

            Parameters(const std::variant<long long, std::string> &ChatIDValue)
                : ChatID(ChatIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["chat_id"] = JSON::ToJson(ChatID);

                if (ReturnBots.has_value()) {
                    Object["return_bots"] = JSON::ToJson(ReturnBots.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(ChatID) || (ReturnBots.has_value() && JSON::RequiresMultipart(ReturnBots.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                if (ReturnBots.has_value()) {
                    JSON::AddMultipartField(
                        Form, "return_bots",
                        ReturnBots.value());
                }

                return Form;
            }

        };

        explicit getChatAdministrators(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::vector<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>> GetChatAdministrators(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::vector<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>>>("getChatAdministrators",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::vector<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>>>("getChatAdministrators",
                                      ParametersValue.ToJson());
        }

        std::vector<std::variant<::TelegramBotAPI::Type::ChatMemberOwner, ::TelegramBotAPI::Type::ChatMemberAdministrator, ::TelegramBotAPI::Type::ChatMemberMember, ::TelegramBotAPI::Type::ChatMemberRestricted, ::TelegramBotAPI::Type::ChatMemberLeft, ::TelegramBotAPI::Type::ChatMemberBanned>> GetChatAdministrators(std::variant<long long, std::string> ChatID) {
            Parameters ParametersValue(
                ChatID
            );

            return GetChatAdministrators(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETCHATADMINISTRATORS_HPP
