#ifndef TELEGRAMBOTAPI_SENDMESSAGE_HPP
#define TELEGRAMBOTAPI_SENDMESSAGE_HPP

#include <optional>
#include <string>

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Message.HPP"

namespace TelegramBotAPI::Methods {
    class sendMessage {
        public:
            struct Parameters {
                    long long ChatID = 0;

                    std::string Text;

                    std::optional<std::string> BusinessConnectionID;

                    std::optional<long long> MessageThreadID;

                    std::optional<long long> DirectMessagesTopicID;

                    std::optional<bool> DisableNotification;

                    std::optional<bool> ProtectContent;

                    JSON::Object ToJson() const {
                        JSON::Object ParametersObject;

                        ParametersObject["chat_id"] = ChatID;

                        ParametersObject["text"] = Text;

                        if (BusinessConnectionID.has_value()) {
                            ParametersObject["business_connection_id"] =
                                BusinessConnectionID.value();
                        }

                        if (MessageThreadID.has_value()) {
                            ParametersObject["message_thread_id"] =
                                MessageThreadID.value();
                        }

                        if (DirectMessagesTopicID.has_value()) {
                            ParametersObject["direct_messages_topic_id"] =
                                DirectMessagesTopicID.value();
                        }

                        if (DisableNotification.has_value()) {
                            ParametersObject["disable_notification"] =
                                DisableNotification.value();
                        }

                        if (ProtectContent.has_value()) {
                            ParametersObject["protect_content"] =
                                ProtectContent.value();
                        }

                        return ParametersObject;
                    }
            };

            explicit sendMessage(TelegramClient &ClientValue)
                : Client(ClientValue) {}

            Type::Message Send(const Parameters &ParametersValue) {
                return Client.Call<Type::Message>("sendMessage",
                                                  ParametersValue.ToJson());
            }

            Type::Message SendMessage(long long          ChatID,
                                      const std::string &Text) {
                Parameters ParametersValue;

                ParametersValue.ChatID = ChatID;
                ParametersValue.Text   = Text;

                return Send(ParametersValue);
            }

        private:
            TelegramClient &Client;
    };
} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_SENDMESSAGE_HPP