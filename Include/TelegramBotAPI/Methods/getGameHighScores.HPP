#ifndef TELEGRAMBOTAPI_METHOD_GETGAMEHIGHSCORES_HPP
#define TELEGRAMBOTAPI_METHOD_GETGAMEHIGHSCORES_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/GameHighScore.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to get data for high score tables. Will return the score of the specified user and several of their neighbors in a game. Returns an Array of GameHighScore objects.

class getGameHighScores {
    public:
        struct Parameters {
            // Required if inline_message_id is not specified. Unique identifier for the target chat.
            std::optional<long long> ChatID{};

            // Required if chat_id and message_id are not specified. Identifier of the inline message.
            std::optional<std::string> InlineMessageID{};

            // Required if inline_message_id is not specified. Identifier of the sent message.
            std::optional<long long> MessageID{};

            // Target user id
            long long UserID;

            Parameters(const long long &UserIDValue)
                : UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (ChatID.has_value()) {
                    Object["chat_id"] = JSON::ToJson(ChatID.value());
                }

                if (InlineMessageID.has_value()) {
                    Object["inline_message_id"] = JSON::ToJson(InlineMessageID.value());
                }

                if (MessageID.has_value()) {
                    Object["message_id"] = JSON::ToJson(MessageID.value());
                }

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return (ChatID.has_value() && JSON::RequiresMultipart(ChatID.value())) || (InlineMessageID.has_value() && JSON::RequiresMultipart(InlineMessageID.value())) || (MessageID.has_value() && JSON::RequiresMultipart(MessageID.value())) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

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

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit getGameHighScores(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        std::vector<::TelegramBotAPI::Type::GameHighScore> GetGameHighScores(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<std::vector<::TelegramBotAPI::Type::GameHighScore>>("getGameHighScores",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<std::vector<::TelegramBotAPI::Type::GameHighScore>>("getGameHighScores",
                                      ParametersValue.ToJson());
        }

        std::vector<::TelegramBotAPI::Type::GameHighScore> GetGameHighScores(long long UserID) {
            Parameters ParametersValue(
                UserID
            );

            return GetGameHighScores(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETGAMEHIGHSCORES_HPP
