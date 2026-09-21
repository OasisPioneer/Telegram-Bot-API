#ifndef TELEGRAMBOTAPI_METHOD_EDITMESSAGECHECKLIST_HPP
#define TELEGRAMBOTAPI_METHOD_EDITMESSAGECHECKLIST_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/InputChecklist.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to edit a checklist on behalf of a connected business account. On success, the edited Message is returned.

struct editMessageChecklistParameters {
    // Unique identifier of the business connection on behalf of which the message will be sent
    std::string BusinessConnectionID;

    // Unique identifier for the target chat or username of the target bot in the format @username
    std::variant<long long, std::string> ChatID;

    // A JSON-serialized object for the new checklist
    ::TelegramBotAPI::Type::InputChecklist Checklist;

    // Unique identifier for the target message
    long long MessageID;

    // A JSON-serialized object for the new inline keyboard for the message
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

    editMessageChecklistParameters(const std::string &BusinessConnectionIDValue, const std::variant<long long, std::string> &ChatIDValue, const ::TelegramBotAPI::Type::InputChecklist &ChecklistValue, const long long &MessageIDValue)
        : BusinessConnectionID(BusinessConnectionIDValue), ChatID(ChatIDValue), Checklist(ChecklistValue), MessageID(MessageIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

        Object["chat_id"] = JSON::ToJson(ChatID);

        Object["checklist"] = JSON::ToJson(Checklist);

        Object["message_id"] = JSON::ToJson(MessageID);

        if (ReplyMarkup.has_value()) {
            Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(ChatID) || JSON::RequiresMultipart(Checklist) || JSON::RequiresMultipart(MessageID) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value()));
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

class editMessageChecklist {
public:
    using Parameters = editMessageChecklistParameters;
    using ReturnType = ::TelegramBotAPI::Type::Message;

    static constexpr const char *Name() noexcept {
        return "editMessageChecklist";
    }

    explicit editMessageChecklist(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::Message EditMessageChecklist(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::Message>(
                "editMessageChecklist",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::Message>(
            "editMessageChecklist",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::Message EditMessageChecklist(std::string BusinessConnectionID, std::variant<long long, std::string> ChatID, ::TelegramBotAPI::Type::InputChecklist Checklist, long long MessageID) {
        Parameters ParametersValue(
        BusinessConnectionID,
        ChatID,
        Checklist,
        MessageID
        );

        return EditMessageChecklist(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITMESSAGECHECKLIST_HPP
