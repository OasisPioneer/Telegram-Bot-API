#ifndef TELEGRAMBOTAPI_METHOD_SETGAMESCORE_HPP
#define TELEGRAMBOTAPI_METHOD_SETGAMESCORE_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Message.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <variant>

namespace TelegramBotAPI::Methods {

        // Use this method to set the score of the specified user in a game message. On success, if the message is not an inline message, the Message is returned, otherwise True is returned. Returns an error, if the new score is not greater than the user's current score in the chat and force is False.

class setGameScore {
    public:
        struct Parameters {
            // Required if inline_message_id is not specified. Unique identifier for the target chat.
            std::optional<long long> ChatID{};

            // Pass True if the game message should not be automatically edited to include the current scoreboard
            std::optional<bool> DisableEditMessage{};

            // Pass True if the high score is allowed to decrease. This can be useful when fixing mistakes or banning cheaters.
            std::optional<bool> Force{};

            // Required if chat_id and message_id are not specified. Identifier of the inline message.
            std::optional<std::string> InlineMessageID{};

            // Required if inline_message_id is not specified. Identifier of the sent message.
            std::optional<long long> MessageID{};

            // New score, must be non-negative
            long long Score;

            // User identifier
            long long UserID;

            Parameters(const long long &ScoreValue, const long long &UserIDValue)
                : Score(ScoreValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (ChatID.has_value()) {
                    Object["chat_id"] = JSON::ToJson(ChatID.value());
                }

                if (DisableEditMessage.has_value()) {
                    Object["disable_edit_message"] = JSON::ToJson(DisableEditMessage.value());
                }

                if (Force.has_value()) {
                    Object["force"] = JSON::ToJson(Force.value());
                }

                if (InlineMessageID.has_value()) {
                    Object["inline_message_id"] = JSON::ToJson(InlineMessageID.value());
                }

                if (MessageID.has_value()) {
                    Object["message_id"] = JSON::ToJson(MessageID.value());
                }

                Object["score"] = JSON::ToJson(Score);

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return (ChatID.has_value() && JSON::RequiresMultipart(ChatID.value())) || (DisableEditMessage.has_value() && JSON::RequiresMultipart(DisableEditMessage.value())) || (Force.has_value() && JSON::RequiresMultipart(Force.value())) || (InlineMessageID.has_value() && JSON::RequiresMultipart(InlineMessageID.value())) || (MessageID.has_value() && JSON::RequiresMultipart(MessageID.value())) || JSON::RequiresMultipart(Score) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (ChatID.has_value()) {
                    JSON::AddMultipartField(
                        Form, "chat_id",
                        ChatID.value());
                }

                if (DisableEditMessage.has_value()) {
                    JSON::AddMultipartField(
                        Form, "disable_edit_message",
                        DisableEditMessage.value());
                }

                if (Force.has_value()) {
                    JSON::AddMultipartField(
                        Form, "force",
                        Force.value());
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

                JSON::AddMultipartField(
                    Form, "score",
                    Score);

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit setGameScore(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::variant<::TelegramBotAPI::Type::Message, bool> SetGameScore(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::variant<::TelegramBotAPI::Type::Message, bool>>("setGameScore",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::variant<::TelegramBotAPI::Type::Message, bool>>("setGameScore",
                                      ParametersValue.ToJson());
        }

        std::variant<::TelegramBotAPI::Type::Message, bool> SetGameScore(long long Score, long long UserID) {
            Parameters ParametersValue(
                Score,
                UserID
            );

            return SetGameScore(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETGAMESCORE_HPP
