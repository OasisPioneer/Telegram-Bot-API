#ifndef TELEGRAMBOTAPI_METHOD_GETMYDEFAULTADMINISTRATORRIGHTS_HPP
#define TELEGRAMBOTAPI_METHOD_GETMYDEFAULTADMINISTRATORRIGHTS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/ChatAdministratorRights.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Use this method to get the current default administrator rights of the bot. Returns ChatAdministratorRights on success.

class getMyDefaultAdministratorRights {
    public:
        struct Parameters {
            // Pass True to get default administrator rights of the bot in channels. Otherwise, default administrator rights of the bot for groups and supergroups will be returned.
            std::optional<bool> ForChannels{};

            JSON::Object ToJson() const {
                JSON::Object Object;

                if (ForChannels.has_value()) {
                    Object["for_channels"] = JSON::ToJson(ForChannels.value());
                }

                return Object;
            }

            bool RequiresMultipart() const {
                return (ForChannels.has_value() && JSON::RequiresMultipart(ForChannels.value()));
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                if (ForChannels.has_value()) {
                    JSON::AddMultipartField(
                        Form, "for_channels",
                        ForChannels.value());
                }

                return Form;
            }

        };

        explicit getMyDefaultAdministratorRights(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        ::TelegramBotAPI::Type::ChatAdministratorRights GetMyDefaultAdministratorRights(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<::TelegramBotAPI::Type::ChatAdministratorRights>("getMyDefaultAdministratorRights",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<::TelegramBotAPI::Type::ChatAdministratorRights>("getMyDefaultAdministratorRights",
                                      ParametersValue.ToJson());
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_GETMYDEFAULTADMINISTRATORRIGHTS_HPP
