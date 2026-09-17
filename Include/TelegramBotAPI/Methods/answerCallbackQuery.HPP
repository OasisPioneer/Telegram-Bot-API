#ifndef TELEGRAMBOTAPI_ANSWERCALLBACKQUERY_HPP
#define TELEGRAMBOTAPI_ANSWERCALLBACKQUERY_HPP

#include <optional>
#include <string>

#include "TelegramBotAPI/TelegramClient.HPP"

namespace TelegramBotAPI::Methods {
    class answerCallbackQuery {
        public:
            struct Parameters {
                    std::string                CallbackQueryID;
                    std::optional<std::string> Text;
                    std::optional<bool>        ShowAlert;
                    std::optional<std::string> URL;
                    std::optional<long long>   CacheTime;

                    JSON::Object ToJson() const {
                        JSON::Object ParametersObject;

                        ParametersObject["callback_query_id"] = CallbackQueryID;

                        if (Text.has_value()) {
                            ParametersObject["text"] = Text.value();
                        }

                        if (ShowAlert.has_value()) {
                            ParametersObject["show_alert"] = ShowAlert.value();
                        }

                        if (URL.has_value()) {
                            ParametersObject["url"] = URL.value();
                        }

                        if (CacheTime.has_value()) {
                            ParametersObject["cache_time"] = CacheTime.value();
                        }

                        return ParametersObject;
                    }
            };

            explicit answerCallbackQuery(TelegramClient &ClientValue)
                : Client(ClientValue) {}

            bool Answer(const Parameters &ParametersValue) {
                return Client.Call<bool>("answerCallbackQuery",
                                         ParametersValue.ToJson());
            }

            bool AnswerCallbackQuery(const std::string &CallbackQueryID) {
                Parameters ParametersValue;

                ParametersValue.CallbackQueryID = CallbackQueryID;

                return Answer(ParametersValue);
            }

        private:
            TelegramClient &Client;
    };
} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_ANSWERCALLBACKQUERY_HPP