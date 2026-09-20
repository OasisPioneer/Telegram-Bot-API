#ifndef TELEGRAMBOTAPI_METHOD_SETWEBHOOK_HPP
#define TELEGRAMBOTAPI_METHOD_SETWEBHOOK_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>
#include <vector>

namespace TelegramBotAPI::Methods {

        // Use this method to specify a URL and receive incoming updates via an outgoing webhook. Whenever there is an update for the bot, we will send an HTTPS POST request to the specified URL, containing a JSON-serialized Update. In case of an unsuccessful request (a request with response HTTP status code different from 2XY), we will repeat the request and give up after a reasonable amount of attempts. Returns True on success.
        // If you'd like to make sure that the webhook was set by you, you can specify secret data in the parameter secret_token. If specified, the request will contain a header “X-Telegram-Bot-Api-Secret-Token” with the secret token as content.

class setWebhook {
    public:
        struct Parameters {
            // A JSON-serialized list of the update types you want your bot to receive. For example, specify ["message", "edited_channel_post", "callback_query"] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member, message_reaction, and message_reaction_count (default). If not specified, the previous setting will be used.Please note that this parameter doesn't affect updates created before the call to the setWebhook, so unwanted updates may be received for a short period of time.
            std::optional<std::vector<std::string>> AllowedUpdates{};

            // Pass True to drop all pending updates
            std::optional<bool> DropPendingUpdates{};

            // The fixed IP address which will be used to send webhook requests instead of the IP address resolved through DNS
            std::optional<std::string> IPAddress{};

            // The maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery, 1-100. Defaults to 40. Use lower values to limit the load on your bot's server, and higher values to increase your bot's throughput.
            std::optional<long long> MaxConnections{};

            // A secret token to be sent in a header “X-Telegram-Bot-Api-Secret-Token” in every webhook request, 1-256 characters. Only characters A-Z, a-z, 0-9, _ and - are allowed. The header is useful to ensure that the request comes from a webhook set by you.
            std::optional<std::string> SecretToken{};

            // HTTPS URL to send updates to. Use an empty string to remove webhook integration.
            std::string URL;

            Parameters(const std::string &URLValue)
                : URL(URLValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (AllowedUpdates.has_value()) {
                    Object["allowed_updates"] = JSON::ToJson(AllowedUpdates.value());
                }

                if (DropPendingUpdates.has_value()) {
                    Object["drop_pending_updates"] = JSON::ToJson(DropPendingUpdates.value());
                }

                if (IPAddress.has_value()) {
                    Object["ip_address"] = JSON::ToJson(IPAddress.value());
                }

                if (MaxConnections.has_value()) {
                    Object["max_connections"] = JSON::ToJson(MaxConnections.value());
                }

                if (SecretToken.has_value()) {
                    Object["secret_token"] = JSON::ToJson(SecretToken.value());
                }

                Object["url"] = JSON::ToJson(URL);

                return Object;
            }

            bool RequiresMultipart() const {
                return (AllowedUpdates.has_value() && JSON::RequiresMultipart(AllowedUpdates.value())) || (DropPendingUpdates.has_value() && JSON::RequiresMultipart(DropPendingUpdates.value())) || (IPAddress.has_value() && JSON::RequiresMultipart(IPAddress.value())) || (MaxConnections.has_value() && JSON::RequiresMultipart(MaxConnections.value())) || (SecretToken.has_value() && JSON::RequiresMultipart(SecretToken.value())) || JSON::RequiresMultipart(URL);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (AllowedUpdates.has_value()) {
                    JSON::AddMultipartField(
                        Form, "allowed_updates",
                        AllowedUpdates.value());
                }

                if (DropPendingUpdates.has_value()) {
                    JSON::AddMultipartField(
                        Form, "drop_pending_updates",
                        DropPendingUpdates.value());
                }

                if (IPAddress.has_value()) {
                    JSON::AddMultipartField(
                        Form, "ip_address",
                        IPAddress.value());
                }

                if (MaxConnections.has_value()) {
                    JSON::AddMultipartField(
                        Form, "max_connections",
                        MaxConnections.value());
                }

                if (SecretToken.has_value()) {
                    JSON::AddMultipartField(
                        Form, "secret_token",
                        SecretToken.value());
                }

                JSON::AddMultipartField(
                    Form, "url",
                    URL);

                return Form;
            }

        };

        explicit setWebhook(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetWebhook(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setWebhook",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setWebhook",
                                      ParametersValue.ToJson());
        }

        bool SetWebhook(std::string URL) {
            Parameters ParametersValue(
                URL
            );

            return SetWebhook(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETWEBHOOK_HPP
