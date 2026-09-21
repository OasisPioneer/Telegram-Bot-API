#ifndef TELEGRAMBOTAPI_METHOD_SENDGAME_HPP
#define TELEGRAMBOTAPI_METHOD_SENDGAME_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/InlineKeyboardMarkup.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include "TelegramBotAPI/Types/ReplyParameters.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

    // Use this method to send a game. On success, the sent Message is returned.

struct sendGameParameters {
    // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance.
    std::optional<bool> AllowPaidBroadcast{};

    // Unique identifier of the business connection on behalf of which the message will be sent
    std::optional<std::string> BusinessConnectionID{};

    // Unique identifier for the target chat or username of the target bot in the format @username. Games can't be sent to channel direct messages chats and channel chats.
    std::variant<long long, std::string> ChatID;

    // Sends the message silently. Users will receive a notification with no sound.
    std::optional<bool> DisableNotification{};

    // Short name of the game, serves as the unique identifier for the game. Set up your games via @BotFather.
    std::string GameShortName;

    // Unique identifier of the message effect to be added to the message; for private chats only
    std::optional<std::string> MessageEffectID{};

    // Unique identifier for the target message thread (topic) of a forum; for forum supergroups and private chats of bots with forum topic mode enabled only
    std::optional<long long> MessageThreadID{};

    // Protects the contents of the sent message from forwarding and saving
    std::optional<bool> ProtectContent{};

    // A JSON-serialized object for an inline keyboard. If empty, one 'Play game_title' button will be shown. If not empty, the first button must launch the game.
    std::optional<::TelegramBotAPI::Type::InlineKeyboardMarkup> ReplyMarkup{};

    // Description of the message to reply to
    std::optional<::TelegramBotAPI::Type::ReplyParameters> ReplyParameters{};

    sendGameParameters(const std::variant<long long, std::string> &ChatIDValue, const std::string &GameShortNameValue)
        : ChatID(ChatIDValue), GameShortName(GameShortNameValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        if (AllowPaidBroadcast.has_value()) {
            Object["allow_paid_broadcast"] = JSON::ToJson(AllowPaidBroadcast.value());
        }

        if (BusinessConnectionID.has_value()) {
            Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID.value());
        }

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (DisableNotification.has_value()) {
            Object["disable_notification"] = JSON::ToJson(DisableNotification.value());
        }

        Object["game_short_name"] = JSON::ToJson(GameShortName);

        if (MessageEffectID.has_value()) {
            Object["message_effect_id"] = JSON::ToJson(MessageEffectID.value());
        }

        if (MessageThreadID.has_value()) {
            Object["message_thread_id"] = JSON::ToJson(MessageThreadID.value());
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
        return (AllowPaidBroadcast.has_value() && JSON::RequiresMultipart(AllowPaidBroadcast.value())) || (BusinessConnectionID.has_value() && JSON::RequiresMultipart(BusinessConnectionID.value())) || JSON::RequiresMultipart(ChatID) || (DisableNotification.has_value() && JSON::RequiresMultipart(DisableNotification.value())) || JSON::RequiresMultipart(GameShortName) || (MessageEffectID.has_value() && JSON::RequiresMultipart(MessageEffectID.value())) || (MessageThreadID.has_value() && JSON::RequiresMultipart(MessageThreadID.value())) || (ProtectContent.has_value() && JSON::RequiresMultipart(ProtectContent.value())) || (ReplyMarkup.has_value() && JSON::RequiresMultipart(ReplyMarkup.value())) || (ReplyParameters.has_value() && JSON::RequiresMultipart(ReplyParameters.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        if (AllowPaidBroadcast.has_value()) {
            JSON::AddMultipartField(
                Form, "allow_paid_broadcast",
                AllowPaidBroadcast.value());
        }

        if (BusinessConnectionID.has_value()) {
            JSON::AddMultipartField(
                Form, "business_connection_id",
                BusinessConnectionID.value());
        }

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (DisableNotification.has_value()) {
            JSON::AddMultipartField(
                Form, "disable_notification",
                DisableNotification.value());
        }

        JSON::AddMultipartField(
            Form, "game_short_name",
            GameShortName);

        if (MessageEffectID.has_value()) {
            JSON::AddMultipartField(
                Form, "message_effect_id",
                MessageEffectID.value());
        }

        if (MessageThreadID.has_value()) {
            JSON::AddMultipartField(
                Form, "message_thread_id",
                MessageThreadID.value());
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

class sendGame {
public:
    using Parameters = sendGameParameters;
    using ReturnType = ::TelegramBotAPI::Type::Message;

    static constexpr const char *Name() noexcept {
        return "sendGame";
    }

    explicit sendGame(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    ::TelegramBotAPI::Type::Message SendGame(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<::TelegramBotAPI::Type::Message>(
                "sendGame",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<::TelegramBotAPI::Type::Message>(
            "sendGame",
            ParametersValue.ToJson()
        );
    }

    ::TelegramBotAPI::Type::Message SendGame(std::variant<long long, std::string> ChatID, std::string GameShortName) {
        Parameters ParametersValue(
        ChatID,
        GameShortName
        );

        return SendGame(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SENDGAME_HPP
