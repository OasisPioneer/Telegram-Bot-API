#ifndef TELEGRAMBOTAPI_METHOD_SENDCHECKLIST_HPP
#define TELEGRAMBOTAPI_METHOD_SENDCHECKLIST_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InputChecklist.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to send a checklist on behalf of a connected business account. On success, the sent Message is returned.

class sendChecklist {
    public:
        struct Parameters {
            // Unique identifier of the business connection on behalf of which the message will be sent
            std::string BusinessConnectionID;

            // Unique identifier for the target chat or username of the target bot in the format @username
            std::variant<long long, std::string> ChatID;

            // A JSON-serialized object for the checklist to send
            ::TelegramBotAPI::Type::InputChecklist Checklist;

            // Sends the message silently. Users will receive a notification with no sound.
            std::optional<bool> DisableNotification{};

            // Unique identifier of the message effect to be added to the message
            std::optional<std::string> MessageEffectID{};

            // Protects the contents of the sent message from forwarding and saving
            std::optional<bool> ProtectContent{};

            // A JSON-serialized object for an inline keyboard
            std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

            // A JSON-serialized object for description of the message to reply to
            std::optional<::TelegramBotAPI::Type::ReplyParameters> ReplyParameters{};

            Parameters(const std::string &BusinessConnectionIDValue, const std::variant<long long, std::string> &ChatIDValue, const ::TelegramBotAPI::Type::InputChecklist &ChecklistValue)
                : BusinessConnectionID(BusinessConnectionIDValue), ChatID(ChatIDValue), Checklist(ChecklistValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

                Object["chat_id"] = JSON::ToJson(ChatID);

                Object["checklist"] = JSON::ToJson(Checklist);

                if (DisableNotification.has_value()) {
                    Object["disable_notification"] = JSON::ToJson(DisableNotification.value());
                }

                if (MessageEffectID.has_value()) {
                    Object["message_effect_id"] = JSON::ToJson(MessageEffectID.value());
                }

                if (ProtectContent.has_value()) {
                    Object["protect_content"] = JSON::ToJson(ProtectContent.value());
                }

                if (ReplyMarkup.has_value()) {
                    Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
                }

                if (ReplyParameters.has_value()) {
                    Object["reply_parameters"] = JSON::ToJson(ReplyParameters.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(Checklist) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || (MessageEffectID.has_value() && JSON::RequiresMultipart(MessageEffectID.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (ReplyParameters.has_value() && JSON::RequiresMultipart(ReplyParameters.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "business_connection_id",
                    BusinessConnectionID);

                JSON::AddMultipartField(
                    Form, "chat_id",
                    ChatID);

                JSON::AddMultipartField(
                    Form, "checklist",
                    Checklist);

                if (DisableNotification.has_value()) {
                    JSON::AddMultipartField(
                        Form, "disable_notification",
                        DisableNotification.value());
                }

                if (MessageEffectID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "message_effect_id",
                        MessageEffectID.value());
                }

                if (ProtectContent.has_value()) {
                    JSON::AddMultipartField(
                        Form, "protect_content",
                        ProtectContent.value());
                }

                if (ReplyMarkup.has_value()) {
                    JSON::AddMultipartField(
                        Form, "reply_markup",
                        ReplyMarkup.value());
                }

                if (ReplyParameters.has_value()) {
                    JSON::AddMultipartField(
                        Form, "reply_parameters",
                        ReplyParameters.value());
                }

                return Form;
            }

        };

        explicit sendChecklist(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::Message SendChecklist(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::Message>("sendChecklist",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::Message>("sendChecklist",
                                      ParametersValue.ToJson());
        }

        ::TelegramBotAPI::Type::Message SendChecklist(std::string BusinessConnectionID, std::variant<long long, std::string> ChatID, ::TelegramBotAPI::Type::InputChecklist Checklist) {
            Parameters ParametersValue(
                BusinessConnectionID,
                ChatID,
                Checklist
            );

            return SendChecklist(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDCHECKLIST_HPP
