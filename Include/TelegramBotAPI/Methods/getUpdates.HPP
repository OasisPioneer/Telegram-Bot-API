#ifndef TELEGRAMBOTAPI_GETUPDATES_HPP
#define TELEGRAMBOTAPI_GETUPDATES_HPP

#include <optional>
#include <vector>

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

namespace TelegramBotAPI::Methods {
    class getUpdates {
        public:
            struct Parameters {
                    std::optional<long long> Offset;

                    std::optional<long long> Limit;

                    std::optional<long long> Timeout;

                    std::optional<std::vector<std::string>> AllowedUpdates;

                    JSON::Object ToJson() const {
                        JSON::Object ParametersObject;

                        if (Offset.has_value()) {
                            ParametersObject["offset"] = Offset.value();
                        }

                        if (Limit.has_value()) {
                            ParametersObject["limit"] = Limit.value();
                        }

                        if (Timeout.has_value()) {
                            ParametersObject["timeout"] = Timeout.value();
                        }

                        if (AllowedUpdates.has_value()) {
                            JSON::Array AllowedUpdatesArray;

                            for (const std::string &UpdateType :
                                 AllowedUpdates.value()) {
                                AllowedUpdatesArray.emplace_back(UpdateType);
                            }

                            ParametersObject["allowed_updates"] =
                                AllowedUpdatesArray;
                        }

                        return ParametersObject;
                    }
            };

            explicit getUpdates(TelegramClient &ClientValue)
                : Client(ClientValue) {}

            std::vector<Type::Update> Get(const Parameters &ParametersValue) {
                return Client.Call<std::vector<Type::Update>>(
                    "getUpdates", ParametersValue.ToJson());
            }

            std::vector<Type::Update>
            GetUpdates(std::optional<long long> Offset  = std::nullopt,
                       std::optional<long long> Limit   = std::nullopt,
                       std::optional<long long> Timeout = std::nullopt) {
                Parameters ParametersValue;

                ParametersValue.Offset = Offset;

                ParametersValue.Limit = Limit;

                ParametersValue.Timeout = Timeout;

                return Get(ParametersValue);
            }

        private:
            TelegramClient &Client;
    };

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_GETUPDATES_HPP