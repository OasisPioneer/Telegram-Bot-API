#ifndef TELEGRAMBOTAPI_METHOD_STOPMESSAGELIVELOCATION_HPP
#define TELEGRAMBOTAPI_METHOD_STOPMESSAGELIVELOCATION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to stop updating a live location message before live_period expires. On success, if the message is not an inline message, the edited Message is returned, otherwise True is returned.

struct stopMessageLiveLocationParameters {
    // Unique identifier of the business connection on behalf of which the message to be edited was sent
    std::optional<std::string> BusinessConnectionID{};

    // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username.
    std::optional<std::variant<long long, std::string>> ChatID{};

    // Required if chat_id and message_id are not specified. Identifier of the inline message.
    std::optional<std::string> InlineMessageID{};

    // Required if inline_message_id is not specified. Identifier of the message with live location to stop.
    std::optional<long long> MessageID{};

    // A JSON-serialized object for a new inline keyboard
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (BusinessConnectionID.has_value()) {
            Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
        }

        if (ChatID.has_value()) {
            Object["chat_id"] = JSON::ToJson(ChatID.value());
        }

        if (InlineMessageID.has_value()) {
            Object["inline_message_id"] = JSON::ToJson(InlineMessageID.value());
        }

        if (MessageID.has_value()) {
            Object["message_id"] = JSON::ToJson(MessageID.value());
        }

        if (ReplyMarkup.has_value()) {
            Object["reply_markup"] = JSON::ToJson(ReplyMarkup.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || (ChatID.has_value() && JSON::RequiresMultipart(ChatID.value())) || (InlineMessageID.has_value() && JSON::RequiresMultipart(InlineMessageID.value())) || (MessageID.has_value() && JSON::RequiresMultipart(MessageID.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (BusinessConnectionID.has_value()) {
            JSON::AddMultipartField(
                Form, "business_connection_id",
                BusinessConnectionID.value());
        }

        if (ChatID.has_value()) {
            JSON::AddMultipartField(
                Form, "chat_id",
                ChatID.value());
        }

        if (InlineMessageID.has_value()) {
            JSON::AddMultipartField(
                Form, "inline_message_id",
                InlineMessageID.value());
        }

        if (MessageID.has_value()) {
            JSON::AddMultipartField(
                Form, "message_id",
                MessageID.value());
        }

        if (ReplyMarkup.has_value()) {
            JSON::AddMultipartField(
                Form, "reply_markup",
                ReplyMarkup.value());
        }

        return Form;
    }

};

class stopMessageLiveLocation {
public:
    using Parameters = stopMessageLiveLocationParameters;
    using ReturnType = std::variant<::TelegramBotAPI::Type::Message, bool>;

    static constexpr const char *Name() noexcept {
        return "stopMessageLiveLocation";
    }

    explicit stopMessageLiveLocation(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    std::variant<::TelegramBotAPI::Type::Message, bool> StopMessageLiveLocation(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<std::variant<::TelegramBotAPI::Type::Message, bool>>(
                "stopMessageLiveLocation",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<std::variant<::TelegramBotAPI::Type::Message, bool>>(
            "stopMessageLiveLocation",
            ParametersValue.ToJson()
        );
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_STOPMESSAGELIVELOCATION_HPP
