#ifndef TELEGRAMBOTAPI_GETUPDATES_HPP
#define TELEGRAMBOTAPI_GETUPDATES_HPP

#include <optional>
#include <vector>

#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/Update.HPP"

namespace TelegramBotAPI::Methods {
    class getUpdates {
        public:
            explicit getUpdates(TelegramClient &ClientValue)
                : Client(ClientValue) {}
            std::vector<Type::Update>
            GetUpdates(std::optional<long long> Offset  = std::nullopt,
                       std::optional<long long> Limit   = std::nullopt,
                       std::optional<long long> Timeout = std::nullopt) {
                JSON::Object Parameters;

                if (Offset.has_value()) {
                    Parameters["offset"] = Offset.value();
                }

                if (Limit.has_value()) {
                    Parameters["limit"] = Limit.value();
                }

                if (Timeout.has_value()) {
                    Parameters["timeout"] = Timeout.value();
                }

                return Client.Call<std::vector<Type::Update>>("getUpdates",
                                                              Parameters);
            }

        private:
            TelegramClient &Client;
    };

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_GETUPDATES_HPP