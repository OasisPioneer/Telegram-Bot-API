#ifndef TELEGRAMBOTAPI_METHOD_DELETEWEBHOOK_HPP
#define TELEGRAMBOTAPI_METHOD_DELETEWEBHOOK_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to remove webhook integration if you decide to switch back to getUpdates. Returns True on success.

class deleteWebhook {
    public:
        struct Parameters {
            // Pass True to drop all pending updates
            std::optional<bool> DropPendingUpdates{};

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (DropPendingUpdates.has_value()) {
                    Object["drop_pending_updates"] = JSON::ToJson(DropPendingUpdates.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (DropPendingUpdates.has_value() && JSON::RequiresMultipart(DropPendingUpdates.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (DropPendingUpdates.has_value()) {
                    JSON::AddMultipartField(
                        Form, "drop_pending_updates",
                        DropPendingUpdates.value());
                }

                return Form;
            }

        };

        explicit deleteWebhook(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool DeleteWebhook(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("deleteWebhook",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("deleteWebhook",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_DELETEWEBHOOK_HPP
