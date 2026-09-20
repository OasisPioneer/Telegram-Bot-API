#ifndef TELEGRAMBOTAPI_METHOD_EDITUSERSTARSUBSCRIPTION_HPP
#define TELEGRAMBOTAPI_METHOD_EDITUSERSTARSUBSCRIPTION_HPP

#include "TelegramBotAPI/JSON/Request.HPP"
#include "TelegramBotAPI/JSON/Serializer.HPP"
#include "TelegramBotAPI/TelegramClient.HPP"
#include <boost/json.hpp>
#include <optional>
#include <string>

namespace TelegramBotAPI::Methods {

        // Allows the bot to cancel or re-enable extension of a subscription paid in Telegram Stars. Returns True on success.

class editUserStarSubscription {
    public:
        struct Parameters {
            // Pass True to cancel extension of the user subscription; the subscription must be active up to the end of the current subscription period. Pass False to allow the user to re-enable a subscription that was previously canceled by the bot.
            bool IsCanceled;

            // Telegram payment identifier for the subscription
            std::string TelegramPaymentChargeID;

            // Identifier of the user whose subscription will be edited
            long long UserID;

            Parameters(const bool &IsCanceledValue, const std::string &TelegramPaymentChargeIDValue, const long long &UserIDValue)
                : IsCanceled(IsCanceledValue), TelegramPaymentChargeID(TelegramPaymentChargeIDValue), UserID(UserIDValue) {}

            JSON::Object ToJson() const {
                JSON::Object Object;

                Object["is_canceled"] = JSON::ToJson(IsCanceled);

                Object["telegram_payment_charge_id"] = JSON::ToJson(TelegramPaymentChargeID);

                Object["user_id"] = JSON::ToJson(UserID);

                return Object;
            }

            bool RequiresMultipart() const {
                return JSON::RequiresMultipart(IsCanceled) || JSON::RequiresMultipart(TelegramPaymentChargeID) || JSON::RequiresMultipart(UserID);
            }

            ::TelegramBotAPI::Network::Multipart::MultipartForm
            ToMultipart() const {
                ::TelegramBotAPI::Network::Multipart::MultipartForm Form;

                JSON::AddMultipartField(
                    Form, "is_canceled",
                    IsCanceled);

                JSON::AddMultipartField(
                    Form, "telegram_payment_charge_id",
                    TelegramPaymentChargeID);

                JSON::AddMultipartField(
                    Form, "user_id",
                    UserID);

                return Form;
            }

        };

        explicit editUserStarSubscription(TelegramClient &ClientValue)
            : Client(ClientValue) {}

        bool EditUserStarSubscription(const Parameters &ParametersValue) {
            if (ParametersValue.RequiresMultipart()) {
                return Client.CallMultipart<bool>("editUserStarSubscription",
                                                   ParametersValue.ToMultipart());
            }

            return Client.Call<bool>("editUserStarSubscription",
                                      ParametersValue.ToJson());
        }

        bool EditUserStarSubscription(bool IsCanceled, std::string TelegramPaymentChargeID, long long UserID) {
            Parameters ParametersValue(
                IsCanceled,
                TelegramPaymentChargeID,
                UserID
            );

            return EditUserStarSubscription(ParametersValue);
        }

    private:
        TelegramClient &Client;
};

} // namespace TelegramBotAPI::Methods

#endif // TELEGRAMBOTAPI_METHOD_EDITUSERSTARSUBSCRIPTION_HPP
