#ifndef TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTGIFTSETTINGS_HPP
#define TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTGIFTSETTINGS_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include "TelegramBotAPI/Types/AcceptedGiftTypes.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Changes the privacy settings pertaining to incoming gifts in a managed business account. Requires the can_change_gift_settings business bot right. Returns True on success.

class setBusinessAccountGiftSettings {
    public:
        struct Parameters {
            // Types of gifts accepted by the business account
            ::TelegramBotAPI::Type::AcceptedGiftTypes AcceptedGiftTypes;

            // Unique identifier of the business connection
            std::string BusinessConnectionID;

            // Pass True if a button for sending a gift to the user or by the business account must always be shown in the input field
            bool ShowGiftButton;

            Parameters(const ::TelegramBotAPI::Type::AcceptedGiftTypes &AcceptedGiftTypesValue, const std::string &BusinessConnectionIDValue, const bool &ShowGiftButtonValue)
                : AcceptedGiftTypes(AcceptedGiftTypesValue), BusinessConnectionID(BusinessConnectionIDValue), ShowGiftButton(ShowGiftButtonValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["accepted_gift_types"] = JSON::ToJson(AcceptedGiftTypes);

                Object["business_connection_id"] = JSON::ToJson(BusinessConnectionID);

                Object["show_gift_button"] = JSON::ToJson(ShowGiftButton);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(AcceptedGiftTypes) || JSON::RequiresMultipart(BusinessConnectionID) || JSON::RequiresMultipart(ShowGiftButton);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "accepted_gift_types",
                    AcceptedGiftTypes);

                JSON::AddMultipartField(
                    Form, "business_connection_id",
                    BusinessConnectionID);

                JSON::AddMultipartField(
                    Form, "show_gift_button",
                    ShowGiftButton);

                return Form;
            }

        };

        explicit setBusinessAccountGiftSettings(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool SetBusinessAccountGiftSettings(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("setBusinessAccountGiftSettings",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("setBusinessAccountGiftSettings",
                                      ParametersValue.ToJson());
        }

        bool SetBusinessAccountGiftSettings(::TelegramBotAPI::Type::AcceptedGiftTypes AcceptedGiftTypes, std::string BusinessConnectionID, bool ShowGiftButton) {
            Parameters ParametersValue(
                AcceptedGiftTypes,
                BusinessConnectionID,
                ShowGiftButton
            );

            return SetBusinessAccountGiftSettings(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_SETBUSINESSACCOUNTGIFTSETTINGS_HPP
