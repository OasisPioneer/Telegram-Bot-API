#ifndef TELEGRAMBOTAPI_METHOD_STOPPOLL_HPP
#define TELEGRAMBOTAPI_METHOD_STOPPOLL_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/Poll.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to stop a poll which was sent by the bot. On success, the stopped Poll is returned.

class stopPoll {
    public:
        struct Parameters {
            // Unique identifier of the business connection on behalf of which the message to be edited was sent
            std::optional<std::string> BusinessConnectionID{};

            // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
            std::variant<long long, std::string> ChatID;

            // Identifier of the original message with the poll
            long long MessageID;

            // A JSON-serialized object for a new message inline keyboard
            std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

            Parameters(const std::variant<long long, std::string> &ChatIDValue, const long long &MessageIDValue)
                : ChatID(ChatIDValue), MessageID(MessageIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (BusinessConnectionID.has_value()) {
                    Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
                }

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["message_id"] = JSON::ToJson(MessageID);

                if (ReplyMarkup.has_value()) {
                    Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(MessageID) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (BusinessConnectionID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "business_connection_id",
                        BusinessConnectionID.value());
                }

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                JSON::AddMultipartField(
                    Form, "message_id",
                    MessageID);

                if (ReplyMarkup.has_value()) {
                    JSON::AddMultipartField(
                        Form, "reply_markup",
                        ReplyMarkup.value());
                }

                return Form;
            }

        };

        explicit stopPoll(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::Poll StopPoll(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::Poll>("stopPoll",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::Poll>("stopPoll",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::Poll StopPoll(std::variant<long long, std::string> ChatID, long long MessageID) {
            Parameters ParametersValue(
                ChatID,
                MessageID
            );

            return StopPoll(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_STOPPOLL_HPP
