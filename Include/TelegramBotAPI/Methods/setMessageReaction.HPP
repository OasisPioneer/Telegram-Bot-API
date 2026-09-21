#ifndef TELEGRAMBOTAPI_METHOD_SETMESSAGEREACTION_HPP
#define TELEGRAMBOTAPI_METHOD_SETMESSAGEREACTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ReactionTypeCustomEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypeEmoji.HPP"
#include "TelegramBotAPI/Types/ReactionTypePaid.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>
#include <vector>

namespace TelegramBotAPI::Methods {

    // Use this method to change the chosen reactions on a message. Service messages of some types can't be reacted to. Automatically forwarded messages from a channel to its discussion group have the same available reactions as messages in the channel. Bots can't use paid reactions. Returns True on success.

struct setMessageReactionParameters {
    // Unique identifier for the target chat or username of the target bot, supergroup or channel in the format @username
    std::variant<long long, std::string> ChatID;

    // Pass True to set the reaction with a big animation
    std::optional<bool> IsBig{};

    // Identifier of the target message. If the message belongs to a media group, the reaction is set to the first non-deleted message in the group instead.
    long long MessageID;

    // A JSON-serialized list of reaction types to set on the message. Currently, as non-premium users, bots can set up to one reaction per message. A custom emoji reaction can be used if it is either already present on the message or explicitly allowed by chat administrators. Paid reactions can't be used by bots.
    std::optional<std::vector<std::variant<::TelegramBotAPI::Type::ReactionTypeEmoji, ::TelegramBotAPI::Type::ReactionTypeCustomEmoji, ::TelegramBotAPI::Type::ReactionTypePaid>>> Reaction{};

    setMessageReactionParameters(const std::variant<long long, std::string> &ChatIDValue, const long long &MessageIDValue)
        : ChatID(ChatIDValue), MessageID(MessageIDValue) {}

    JSON::Object ToJson() const {
        JSON::Object Object;

        Object["chat_id"] = JSON::ToJson(ChatID);

        if (IsBig.has_value()) {
            Object["is_big"] = JSON::ToJson(IsBig.value());
        }

        Object["message_id"] = JSON::ToJson(MessageID);

        if (Reaction.has_value()) {
            Object["reaction"] = JSON::ToJson(Reaction.value());
        }

        return Object;
    }

    bool RequiresMultipart() const {
        return JSON::RequiresMultipart(ChatID) || (IsBig.has_value() && JSON::RequiresMultipart(IsBig.value())) || JSON::RequiresMultipart(MessageID) || (Reaction.has_value() && JSON::RequiresMultipart(Reaction.value()));
    }

    ::TelegramBotAPI::Network::Multipart::MultipartForm
    ToMultipart() const {
        ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

        JSON::AddMultipartField(
            Form, "chat_id",
            ChatID);

        if (IsBig.has_value()) {
            JSON::AddMultipartField(
                Form, "is_big",
                IsBig.value());
        }

        JSON::AddMultipartField(
            Form, "message_id",
            MessageID);

        if (Reaction.has_value()) {
            JSON::AddMultipartField(
                Form, "reaction",
                Reaction.value());
        }

        return Form;
    }

};

class setMessageReaction {
public:
    using Parameters = setMessageReactionParameters;
    using ReturnType = bool;

    static constexpr const char *Name() noexcept {
        return "setMessageReaction";
    }

    explicit setMessageReaction(
        TelegramClient &ClientValue
    )
        : Client(ClientValue) {}

    bool SetMessageReaction(
        const Parameters &ParametersValue
    ) {
        if (ParametersValue.RequiresMultipart()) {
            return Client.CallMultipart<bool>(
                "setMessageReaction",
                ParametersValue.ToMultipart()
            );
        }

        return Client.Call<bool>(
            "setMessageReaction",
            ParametersValue.ToJson()
        );
    }

    bool SetMessageReaction(std::variant<long long, std::string> ChatID, long long MessageID) {
        Parameters ParametersValue(
        ChatID,
        MessageID
        );

        return SetMessageReaction(ParametersValue);
    }

private:
    TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETMESSAGEREACTION_HPP
